/*
 * XREFs of ExpLoadAndSortLicensingCacheDescriptors @ 0x1406A2320
 * Callers:
 *     sub_1406A1AF0 @ 0x1406A1AF0 (sub_1406A1AF0.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     qsort @ 0x1401A11F0 (qsort.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExpSetKernelDataProtection @ 0x1406A315C (ExpSetKernelDataProtection.c)
 *     sub_1406A3938 @ 0x1406A3938 (sub_1406A3938.c)
 *     sub_140762494 @ 0x140762494 (sub_140762494.c)
 *     sub_14090C104 @ 0x14090C104 (sub_14090C104.c)
 */

__int64 ExpLoadAndSortLicensingCacheDescriptors()
{
  unsigned int v0; // ebx
  __int64 v2; // rdx
  _DWORD *v3; // rbx
  int v4; // edi
  char v5; // al
  int v6; // [rsp+30h] [rbp-68h]
  struct _KTHREAD *v7; // [rsp+40h] [rbp-58h]
  _DWORD v8[18]; // [rsp+50h] [rbp-48h] BYREF
  char v9; // [rsp+A0h] [rbp+8h]
  char v10; // [rsp+A8h] [rbp+10h]
  struct _KTHREAD *CurrentThread; // [rsp+B8h] [rbp+20h]

  v6 = 0;
  v10 = 0;
  v9 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_1409AE5D8, 0LL);
  if ( byte_1409AE5C0 )
  {
    v6 = -1073741762;
  }
  else if ( byte_1409AE5C3 )
  {
    if ( !(_DWORD)NumOfElements )
      v6 = -1073741772;
  }
  else
  {
    v10 = 1;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1409AE5D8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_1409AE5D8);
  KeAbPostRelease((ULONG_PTR)&qword_1409AE5D8);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v0 = v6;
  if ( v6 >= 0 && v10 == 1 )
  {
    v7 = KeGetCurrentThread();
    --v7->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1409AE5D8, 0LL);
    if ( byte_1409AE5C3 == 1 )
      goto LABEL_29;
    v3 = off_1409AD038;
    if ( off_1409AD038 )
    {
      v4 = sub_140762494();
      v6 = v4;
      if ( v4 < 0 )
        goto LABEL_29;
    }
    else
    {
      v3 = Data;
      if ( !Data )
        goto LABEL_27;
      v4 = v6;
    }
    if ( (v3[3] & 1) != 0 )
    {
      memset(v8, 0, 0x30uLL);
      dword_1409AD0F8 = 2;
      v8[2] = 2;
      ExpSetKernelDataProtection(v8, 2LL, 0LL);
    }
    if ( !(_DWORD)NumOfElements )
    {
      LOBYTE(v2) = 1;
      v4 = sub_1406A3938(v3, v2, &unk_1409AFF80, 2339LL, &NumOfElements);
      v6 = v4;
    }
    if ( v4 >= 0 )
    {
      if ( (_DWORD)NumOfElements )
      {
        qsort(&unk_1409AFF80, (unsigned int)NumOfElements, 0x10uLL, ExpLicensingDescriptorCompare);
        byte_1409AE5C3 = 1;
      }
      else
      {
        byte_1409AE5C3 = 1;
        v6 = -1073741772;
      }
      goto LABEL_29;
    }
    if ( v4 != -1073741789 )
    {
LABEL_29:
      v5 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1409AE5D8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v5 & 2) != 0 && (v5 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_1409AE5D8);
      KeAbPostRelease((ULONG_PTR)&qword_1409AE5D8);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v0 = v6;
      goto LABEL_11;
    }
LABEL_27:
    v6 = -1073741762;
    byte_1409AE5C0 = 1;
    v9 = 1;
    goto LABEL_29;
  }
LABEL_11:
  if ( v9 )
    sub_14090C104(&KernelLicensingCacheCorrupt);
  return v0;
}
