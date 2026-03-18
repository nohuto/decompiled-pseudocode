/*
 * XREFs of PsInitializeVsmEnclave @ 0x1408CC888
 * Callers:
 *     MiInitializeVsmEnclave @ 0x140894294 (MiInitializeVsmEnclave.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400BEF80 (ExAllocatePoolWithQuotaTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     VslInitializeEnclave @ 0x140852720 (VslInitializeEnclave.c)
 */

__int64 __fastcall PsInitializeVsmEnclave(__int64 a1, _DWORD *a2, ULONG a3, __int64 a4, __int64 a5)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *PoolWithQuotaTag; // rsi
  volatile signed __int64 *v11; // r15
  int v12; // ecx
  int v13; // ebp
  __int64 v14; // r14
  _QWORD *v16; // rcx
  _QWORD *v17; // rdx
  __int64 v18; // r8
  _QWORD *v19; // rcx

  CurrentThread = KeGetCurrentThread();
  PoolWithQuotaTag = 0LL;
  --CurrentThread->KernelApcDisable;
  v11 = (volatile signed __int64 *)(a1 + 48);
  ExAcquirePushLockExclusiveEx(a1 + 48, 0LL);
  v12 = *(_DWORD *)(a1 + 44);
  if ( v12 )
  {
    if ( v12 == 1 )
      v13 = -1073740528;
    else
      v13 = -1073740526;
    goto LABEL_19;
  }
  if ( *(_BYTE *)(a1 + 76) )
  {
    LODWORD(v14) = 0;
LABEL_12:
    v13 = VslInitializeEnclave(*(_QWORD *)(a1 + 24), a1 + 80, (__int64)a2, a3, a4, a5, (_DWORD *)(a1 + 40));
    if ( v13 >= 0 )
    {
      if ( !*(_BYTE *)(a1 + 76) )
      {
        *(_DWORD *)(a1 + 72) = v14;
        *PoolWithQuotaTag = 0LL;
        if ( (unsigned int)v14 > 1 )
        {
          v16 = PoolWithQuotaTag + 5;
          v17 = PoolWithQuotaTag;
          v18 = (unsigned int)(v14 - 1);
          do
          {
            *v16 = v17;
            v17 += 5;
            v16 += 5;
            --v18;
          }
          while ( v18 );
        }
        *(_QWORD *)(a1 + 120) = PoolWithQuotaTag;
        v19 = &PoolWithQuotaTag[5 * (unsigned int)(v14 - 1)];
        PoolWithQuotaTag = 0LL;
        *(_QWORD *)(a1 + 128) = v19;
      }
      v13 = 0;
      *(_QWORD *)(a1 + 64) = a1 + 56;
      *(_QWORD *)(a1 + 56) = a1 + 56;
      *(_DWORD *)(a1 + 44) = 1;
    }
    goto LABEL_19;
  }
  if ( a3 != 8 || *a2 != 8 )
    return 3221225476LL;
  v14 = (unsigned int)a2[1];
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 40 * v14, 0x74457350u);
  if ( PoolWithQuotaTag )
    goto LABEL_12;
  v13 = -1073741670;
LABEL_19:
  if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v11);
  KeAbPostRelease((ULONG_PTR)v11);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( PoolWithQuotaTag )
    ExFreePoolWithTag(PoolWithQuotaTag, 0);
  return (unsigned int)v13;
}
