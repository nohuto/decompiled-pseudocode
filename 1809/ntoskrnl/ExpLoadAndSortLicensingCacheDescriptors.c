/*
 * XREFs of ExpLoadAndSortLicensingCacheDescriptors @ 0x1405A1888
 * Callers:
 *     ExQueryLicenseValueInternal @ 0x1405A1260 (ExQueryLicenseValueInternal.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     qsort @ 0x140196420 (qsort.c)
 *     ExpSetKernelDataProtection @ 0x1405A25F4 (ExpSetKernelDataProtection.c)
 *     sub_1405A2F10 @ 0x1405A2F10 (sub_1405A2F10.c)
 *     sub_140736CB4 @ 0x140736CB4 (sub_140736CB4.c)
 *     sub_1408D0314 @ 0x1408D0314 (sub_1408D0314.c)
 */

__int64 ExpLoadAndSortLicensingCacheDescriptors()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // ecx
  unsigned int v2; // ebx
  struct _KTHREAD *v4; // rax
  __int64 v5; // rdx
  _DWORD *v6; // rbx
  int v7; // edi
  char v8; // si
  int v9; // [rsp+30h] [rbp-78h]
  _BYTE v10[8]; // [rsp+38h] [rbp-70h] BYREF
  int v11; // [rsp+40h] [rbp-68h]
  char v12; // [rsp+B0h] [rbp+8h]
  char v13; // [rsp+B8h] [rbp+10h]

  v9 = 0;
  v13 = 0;
  v12 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_14096F4E0, 0LL);
  if ( byte_14096F4C1 )
  {
    v9 = -1073741762;
  }
  else if ( byte_14096F4DB )
  {
    v1 = 0;
    if ( !(_DWORD)NumOfElements )
      v1 = -1073741772;
    v9 = v1;
  }
  else
  {
    v13 = 1;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14096F4E0, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_14096F4E0);
  KeAbPostRelease((ULONG_PTR)&qword_14096F4E0);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v2 = v9;
  if ( v9 >= 0 && v13 == 1 )
  {
    v4 = KeGetCurrentThread();
    --v4->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14096F4E0, 0LL);
    if ( byte_14096F4DB == 1 )
      goto LABEL_30;
    v6 = off_14096E030;
    if ( off_14096E030 )
    {
      v7 = sub_140736CB4();
      v9 = v7;
      if ( v7 < 0 )
        goto LABEL_30;
    }
    else
    {
      v6 = Data;
      if ( !Data )
        goto LABEL_28;
      v7 = v9;
    }
    if ( (v6[3] & 1) != 0 )
    {
      dword_14096E0B8 = 2;
      v11 = 2;
      ExpSetKernelDataProtection(v10, 2LL, 0LL);
    }
    if ( !(_DWORD)NumOfElements )
    {
      LOBYTE(v5) = 1;
      v7 = sub_1405A2F10(v6, v5, &unk_140970D00, 2339LL, &NumOfElements);
      v9 = v7;
    }
    if ( v7 >= 0 )
    {
      if ( (_DWORD)NumOfElements )
      {
        qsort(&unk_140970D00, (unsigned int)NumOfElements, 0x10uLL, sub_1405A2530);
        byte_14096F4DB = 1;
      }
      else
      {
        byte_14096F4DB = 1;
        v9 = -1073741772;
      }
      goto LABEL_30;
    }
    if ( v7 != -1073741789 )
    {
LABEL_30:
      v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14096F4E0, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v8 & 2) != 0 && (v8 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_14096F4E0);
      KeAbPostRelease((ULONG_PTR)&qword_14096F4E0);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v2 = v9;
      goto LABEL_12;
    }
LABEL_28:
    v9 = -1073741762;
    byte_14096F4C1 = 1;
    v12 = 1;
    goto LABEL_30;
  }
LABEL_12:
  if ( v12 )
    sub_1408D0314(&KernelLicensingCacheCorrupt);
  return v2;
}
