/*
 * XREFs of ExInitLicenseData @ 0x1409C43A0
 * Callers:
 *     Phase1InitializationIoReady @ 0x1409C4788 (Phase1InitializationIoReady.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400915C0 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     ExUpdateLicenseDataInternal @ 0x1405A0AD0 (ExUpdateLicenseDataInternal.c)
 *     ExpSetKernelDataProtection @ 0x1405A15F4 (ExpSetKernelDataProtection.c)
 *     ExpCheckPortableOperatingSystem @ 0x1406C75CC (ExpCheckPortableOperatingSystem.c)
 *     ExGetExpirationDate @ 0x14073541C (ExGetExpirationDate.c)
 *     sub_140735AE4 @ 0x140735AE4 (sub_140735AE4.c)
 *     sub_14073BE10 @ 0x14073BE10 (sub_14073BE10.c)
 *     sub_1408CF074 @ 0x1408CF074 (sub_1408CF074.c)
 *     sub_1409C46A8 @ 0x1409C46A8 (sub_1409C46A8.c)
 */

__int64 ExInitLicenseData()
{
  char v0; // r14
  struct _KTHREAD *CurrentThread; // rax
  char v2; // al
  __int64 result; // rax
  struct _KTHREAD *v4; // rax
  int v5; // esi
  char v6; // di
  char v7; // cl
  __int128 *v8; // rcx
  __int64 v9; // r8
  unsigned __int64 v10; // rax
  struct _KTHREAD *v11; // rax
  char v12; // al
  struct _KTHREAD *v13; // rax
  char v14; // bl
  int ExpirationDate; // ecx
  struct _KTHREAD *v16; // rax
  int v17; // [rsp+20h] [rbp-60h] BYREF
  LARGE_INTEGER Time; // [rsp+28h] [rbp-58h] BYREF
  __int64 v19; // [rsp+30h] [rbp-50h] BYREF
  int v20; // [rsp+38h] [rbp-48h]
  __int64 v21; // [rsp+40h] [rbp-40h]
  __int64 v22; // [rsp+48h] [rbp-38h]
  __int64 v23; // [rsp+50h] [rbp-30h]
  char v24; // [rsp+58h] [rbp-28h]
  __int128 v25; // [rsp+60h] [rbp-20h] BYREF

  v0 = byte_14096E4C1;
  qword_14096D328 = (__int64)ExIsWindowsToGo;
  qword_14096D330 = (__int64)sub_140585FE0;
  qword_14096D438 = (__int64)ExUpdateLicenseDataInternal;
  qword_14096D440 = (__int64)ExQueryLicenseValueInternal;
  qword_14096D448 = (__int64)ExUpdateOsPfnInRegistry;
  qword_14096D450 = (__int64)SeExports;
  ClipSpInitialize(0LL, &g_kernelCallbacks);
  sub_14073BE10();
  sub_1409C46A8();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14096E4E0, 0LL);
  v23 = 10800LL;
  v19 = 0LL;
  v21 = 0LL;
  v20 = 0;
  v22 = 0LL;
  v24 = 1;
  if ( InitSafeBootMode || InitIsWinPEMode )
    v24 = 0;
  ExpSetKernelDataProtection((__int64)&v19, -1, 1);
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14096E4E0, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14096E4E0);
  KeAbPostRelease((ULONG_PTR)&qword_14096E4E0);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  result = ExpCheckPortableOperatingSystem(&v17);
  if ( (int)result >= 0 )
  {
    v16 = KeGetCurrentThread();
    --v16->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14096E4E0, 0LL);
    dword_14096D190 = v17;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14096E4E0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_14096E4E0);
    KeAbPostRelease((ULONG_PTR)&qword_14096E4E0);
    result = (__int64)KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( off_14096D030 )
  {
    v4 = KeGetCurrentThread();
    --v4->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14096E4E0, 0LL);
    v5 = sub_140735AE4();
    if ( v5 == -1073741762 )
      byte_14096E4C1 = 1;
    v6 = byte_14096E4C1;
    v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14096E4E0, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v7 & 2) != 0 && (v7 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_14096E4E0);
    KeAbPostRelease((ULONG_PTR)&qword_14096E4E0);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( !v0 && v6 )
      sub_1408CF074(&KernelLicensingCacheCorrupt);
    if ( v5 >= 0 && !v6 )
      ExUpdateLicenseDataInternal(dword_140A0A158, (unsigned int *)off_14096D030);
    v8 = &v25;
    v9 = 16LL;
    do
    {
      v10 = __rdtsc();
      *(_BYTE *)v8 = v10;
      v8 = (__int128 *)((char *)v8 + 1);
      --v9;
    }
    while ( v9 );
    v11 = KeGetCurrentThread();
    --v11->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14096E4E0, 0LL);
    xmmword_14096EDD0 = v25;
    v12 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14096E4E0, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v12 & 2) != 0 && (v12 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_14096E4E0);
    KeAbPostRelease((ULONG_PTR)&qword_14096E4E0);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v13 = KeGetCurrentThread();
    --v13->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14096E4E0, 0LL);
    off_14096D030 = 0LL;
    if ( !Data && (_DWORD)NumOfElements )
    {
      memset(qword_14096FD00, 0, 16LL * (unsigned int)NumOfElements);
      LODWORD(NumOfElements) = 0;
    }
    v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14096E4E0, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v14 & 2) != 0 && (v14 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_14096E4E0);
    KeAbPostRelease((ULONG_PTR)&qword_14096E4E0);
    result = (__int64)KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( !ExpSystemSetupInProgress )
  {
    ExpirationDate = ExGetExpirationDate(&Time);
    result = Time.QuadPart;
    if ( ExpirationDate < 0 )
      result = 0LL;
    MEMORY[0xFFFFF780000002C8] = result;
  }
  return result;
}
