/*
 * XREFs of PopPdcCsDeviceNotification @ 0x140870270
 * Callers:
 *     NtPowerInformation @ 0x14058D170 (NtPowerInformation.c)
 *     PoInitSystem @ 0x1409B3C10 (PoInitSystem.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PopReleasePolicyLock @ 0x140566370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140566690 (PopAcquirePolicyLock.c)
 *     PopNetUpdateCsConsumptionFlags @ 0x14075EE74 (PopNetUpdateCsConsumptionFlags.c)
 *     PopPdcUpdateDeviceCompliance @ 0x1408705EC (PopPdcUpdateDeviceCompliance.c)
 *     PopNetCompliantNicUpdate @ 0x140877EC4 (PopNetCompliantNicUpdate.c)
 *     PopNetNonCompliantDeviceUpdate @ 0x1408780B8 (PopNetNonCompliantDeviceUpdate.c)
 */

__int64 __fastcall PopPdcCsDeviceNotification(__int64 a1)
{
  unsigned int v1; // edi
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *v4; // rcx
  _DWORD *v5; // r8
  char v6; // al
  _QWORD *PoolWithTag; // rax
  _QWORD *v8; // r14
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  void **v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  int *v14; // rcx

  v1 = 0;
  if ( !PopPlatformAoAc )
    return v1;
  if ( *(_DWORD *)(a1 + 8) > 4u )
    return (unsigned int)-1073741811;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopPdcDeviceListLock, 0LL);
  v4 = PopPdcDeviceList;
  v5 = 0LL;
  v6 = 0;
  if ( PopPdcDeviceList != (_UNKNOWN *)&PopPdcDeviceList )
  {
    while ( 1 )
    {
      v5 = v4;
      if ( *((_QWORD *)v4 + 2) == *(_QWORD *)a1 )
        break;
      v4 = *(_DWORD **)v4;
      if ( v4 == (_DWORD *)&PopPdcDeviceList )
        goto LABEL_8;
    }
    v6 = 1;
  }
LABEL_8:
  if ( *(_BYTE *)(a1 + 12) )
  {
    if ( v6 )
    {
      ++v5[7];
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x6F435343u);
      v8 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 0x28uLL);
        v8[2] = *(_QWORD *)a1;
        *((_DWORD *)v8 + 6) = *(_DWORD *)(a1 + 8);
        *((_BYTE *)v8 + 32) = *(_BYTE *)(a1 + 13);
        *((_DWORD *)v8 + 7) = 1;
        v9 = off_1404028C0;
        if ( *(_UNKNOWN ***)off_1404028C0 == &PopPdcDeviceList )
        {
          *v8 = &PopPdcDeviceList;
          v8[1] = v9;
          *v9 = v8;
          off_1404028C0 = v8;
          goto LABEL_20;
        }
        goto LABEL_28;
      }
      v1 = -1073741801;
    }
  }
  else if ( v6 )
  {
    if ( (int)--v5[7] <= 0 )
    {
      v10 = *(_QWORD **)v4;
      if ( *(_DWORD **)(*(_QWORD *)v4 + 8LL) == v4 )
      {
        v11 = (void **)*((_QWORD *)v4 + 1);
        if ( *v11 == v4 )
        {
          *v11 = v10;
          v10[1] = v11;
          ExFreePoolWithTag(v5, 0x6F435343u);
LABEL_20:
          PopPdcUpdateDeviceCompliance();
          PopAcquirePolicyLock();
          v13 = *(int *)(a1 + 8);
          if ( (((_DWORD)v13 - 1) & 0xFFFFFFFC) != 0 || (_DWORD)v13 == 3 )
          {
            v14 = PopCsDeviceCompliance;
            if ( PopCsDeviceCompliance[v13] == -1 )
            {
              LOBYTE(v14) = *(_BYTE *)(a1 + 12);
              PopNetNonCompliantDeviceUpdate(v14);
            }
          }
          else
          {
            if ( *(_BYTE *)(a1 + 13) )
            {
              LOBYTE(v12) = *(_BYTE *)(a1 + 12);
              PopNetCompliantNicUpdate(v12);
            }
            PopNetUpdateCsConsumptionFlags();
          }
          PopReleasePolicyLock();
          goto LABEL_30;
        }
      }
LABEL_28:
      __fastfail(3u);
    }
  }
  else
  {
    v1 = -1073741811;
  }
LABEL_30:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPdcDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopPdcDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopPdcDeviceListLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v1;
}
