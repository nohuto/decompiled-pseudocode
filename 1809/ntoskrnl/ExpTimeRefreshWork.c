/*
 * XREFs of ExpTimeRefreshWork @ 0x14056F0E0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryTimeIncrement @ 0x1400077E0 (KeQueryTimeIncrement.c)
 *     ExpLicUpdateChecksum @ 0x1400077F0 (ExpLicUpdateChecksum.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSetTimer2 @ 0x1400FC1F0 (KeSetTimer2.c)
 *     ExUpdateSystemTimeFromCmos @ 0x140567B6C (ExUpdateSystemTimeFromCmos.c)
 *     ExpSetKernelDataProtection @ 0x1405A25F4 (ExpSetKernelDataProtection.c)
 *     ExpGetKernelDataProtection @ 0x1405A2B24 (ExpGetKernelDataProtection.c)
 *     sub_1405A33DC @ 0x1405A33DC (sub_1405A33DC.c)
 *     ExpPutLicenseDataIntoRegistry @ 0x1405A3404 (ExpPutLicenseDataIntoRegistry.c)
 *     ExAcquireTimeRefreshLock @ 0x1406669FC (ExAcquireTimeRefreshLock.c)
 *     ExReleaseTimeRefreshLock @ 0x1406BFE98 (ExReleaseTimeRefreshLock.c)
 *     sub_1408D02C4 @ 0x1408D02C4 (sub_1408D02C4.c)
 *     sub_1408D0314 @ 0x1408D0314 (sub_1408D0314.c)
 *     sub_1408D0684 @ 0x1408D0684 (sub_1408D0684.c)
 */

_BOOL8 __fastcall ExpTimeRefreshWork(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  bool v2; // bl
  char v3; // al
  __int64 v4; // rdx
  unsigned __int64 v5; // rax
  unsigned int updated; // ecx
  int v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rbx
  ULONG TimeIncrement; // eax
  __int128 *v11; // rcx
  __int64 v12; // rdx
  char v13; // bl
  struct _KTHREAD *v15; // rax
  __int64 v16; // rdi
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rbx
  struct _KTHREAD *v19; // rax
  int v20; // eax
  int KernelDataProtection; // eax
  unsigned int v22; // edx
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  unsigned int v25; // ecx
  int v26; // eax
  bool v27; // bl
  _DWORD *v28; // rcx
  __int128 v29; // [rsp+28h] [rbp-E0h] BYREF
  __m256i v30; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v31; // [rsp+58h] [rbp-B0h] BYREF
  __m256i v32; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v33[2]; // [rsp+88h] [rbp-80h] BYREF
  __int128 v34; // [rsp+98h] [rbp-70h] BYREF
  __m256i v35; // [rsp+A8h] [rbp-60h]
  __int128 v36; // [rsp+C8h] [rbp-40h] BYREF
  __m256i v37; // [rsp+D8h] [rbp-30h]
  char v38; // [rsp+F8h] [rbp-10h] BYREF
  int v39; // [rsp+100h] [rbp-8h]
  __int64 v40[6]; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v41[48]; // [rsp+158h] [rbp+50h] BYREF
  char v42[24]; // [rsp+188h] [rbp+80h] BYREF
  __int64 v43; // [rsp+1A0h] [rbp+98h]
  char v44[24]; // [rsp+1B8h] [rbp+B0h] BYREF
  unsigned __int64 v45; // [rsp+1D0h] [rbp+C8h]
  char v46[32]; // [rsp+1E8h] [rbp+E0h] BYREF
  unsigned __int64 v47; // [rsp+208h] [rbp+100h]
  char v48[8]; // [rsp+218h] [rbp+110h] BYREF
  int v49; // [rsp+220h] [rbp+118h]
  _BYTE v50[48]; // [rsp+248h] [rbp+140h] BYREF

  do
  {
    LOBYTE(a1) = 1;
    ExAcquireTimeRefreshLock(a1);
    if ( KeTimeSynchronization )
      ExUpdateSystemTimeFromCmos(0, 0);
    ExReleaseTimeRefreshLock();
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&qword_14096F4E0, 0LL);
    if ( off_14096E030 )
    {
LABEL_33:
      v13 = 0;
      goto LABEL_23;
    }
    if ( Data )
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14096F5A0, 0LL);
      v2 = qword_14096F620 == 0;
      v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14096F5A0, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v3 & 2) != 0 && (v3 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_14096F5A0);
      KeAbPostRelease((ULONG_PTR)&qword_14096F5A0);
      if ( v2 )
      {
        v11 = (__int128 *)&v38;
        dword_14096E0B8 = 5;
        v39 = 5;
        v12 = 2LL;
LABEL_19:
        ExpSetKernelDataProtection(v11, v12, 0LL);
        goto LABEL_20;
      }
      if ( Data )
      {
        *(_QWORD *)&v29 = 0LL;
        memset(&v30, 0, 24);
        DWORD2(v29) = 4;
        v30.m256i_i8[24] = 1;
        if ( (unsigned int)ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)NumOfElements, &v29) )
          goto LABEL_31;
        if ( (_DWORD)v4 )
        {
          v5 = 16LL * (unsigned int)v4;
          updated = v5 > 0xFFFFFFFF ? 0xC0000095 : 0;
          if ( v5 <= 0xFFFFFFFF )
            updated = ExpLicUpdateChecksum((__int64)&unk_140970D00, v4, &v29);
          if ( updated )
          {
LABEL_31:
            *(_QWORD *)&v29 = 0LL;
            DWORD2(v29) = 4;
          }
        }
        v7 = 0;
        v34 = v29;
        v35 = v30;
      }
      else
      {
        v7 = -1073741811;
      }
      if ( !v7 && (int)ExpGetKernelDataProtection(v40) >= 0 )
      {
        v8 = 4;
        if ( v40[0] != (_QWORD)v34 )
        {
          DWORD2(v34) = 4;
          v8 = 6;
        }
        v9 = MEMORY[0xFFFFF78000000320];
        TimeIncrement = KeQueryTimeIncrement();
        v11 = &v34;
        v35.m256i_i64[0] = v9 * TimeIncrement / 10000;
        v12 = v8;
        goto LABEL_19;
      }
    }
LABEL_20:
    if ( off_14096E030 )
      goto LABEL_33;
    v13 = 1;
    if ( (int)ExpGetKernelDataProtection(v41) >= 0 )
      v13 = v41[40];
LABEL_23:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14096F4E0, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_14096F4E0);
    KeAbPostRelease((ULONG_PTR)&qword_14096F4E0);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( v13 == 1 )
    {
      v15 = KeGetCurrentThread();
      --v15->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&qword_14096F4E0, 0LL);
      v16 = 0LL;
      if ( (int)ExpGetKernelDataProtection(v42) >= 0 )
        v16 = v43;
      v17 = v16 + 3600;
      v45 = v17;
      ExpSetKernelDataProtection(v44, 8LL, 0LL);
      if ( off_14096E030 )
      {
        v18 = 10800LL;
      }
      else
      {
        v18 = 0LL;
        if ( (int)ExpGetKernelDataProtection(v46) >= 0 )
          v18 = v47;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14096F4E0, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&qword_14096F4E0);
      KeAbPostRelease((ULONG_PTR)&qword_14096F4E0);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      sub_1408D02C4();
      if ( v18 <= v17 )
      {
        v19 = KeGetCurrentThread();
        --v19->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14096F4E0, 0LL);
        if ( !Data )
        {
          v20 = dword_14096E0B8;
          goto LABEL_63;
        }
        KernelDataProtection = ExpGetKernelDataProtection(&v36);
        if ( KernelDataProtection >= 0 )
        {
          v20 = DWORD2(v36);
          goto LABEL_63;
        }
        if ( KernelDataProtection != -1073741275 )
          goto LABEL_62;
        if ( !Data )
        {
          v26 = -1073741811;
          v24 = 0xFFFFFFFFLL;
          goto LABEL_60;
        }
        *(_QWORD *)&v31 = 0LL;
        memset(&v32, 0, 24);
        DWORD2(v31) = 4;
        v32.m256i_i8[24] = 1;
        if ( (unsigned int)ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)NumOfElements, &v31) )
        {
          v24 = 0xFFFFFFFFLL;
        }
        else
        {
          if ( !v22 )
          {
            v24 = 0xFFFFFFFFLL;
            goto LABEL_58;
          }
          v23 = v22;
          v24 = 0xFFFFFFFFLL;
          v23 *= 16LL;
          v25 = v23 > 0xFFFFFFFF ? 0xC0000095 : 0;
          if ( v23 <= 0xFFFFFFFF )
            v25 = ExpLicUpdateChecksum((__int64)&unk_140970D00, 0xFFFFFFFFLL, &v31);
          if ( !v25 )
          {
LABEL_58:
            v26 = 0;
            v36 = v31;
            v37 = v32;
LABEL_60:
            if ( v26 >= 0 )
            {
              DWORD2(v36) = 4;
              ExpSetKernelDataProtection(&v36, v24, 0LL);
            }
LABEL_62:
            v20 = 4;
LABEL_63:
            dword_14096E0B8 = 2;
            v49 = 2;
            v27 = v20 == 0;
            ExpSetKernelDataProtection(v48, 2LL, 0LL);
            v28 = Data;
            if ( off_14096E030 )
              v28 = off_14096E030;
            if ( v28 )
              v28[3] |= 1u;
            v50[40] = 0;
            ExpSetKernelDataProtection(v50, 32LL, 0LL);
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14096F4E0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)&qword_14096F4E0);
            KeAbPostRelease((ULONG_PTR)&qword_14096F4E0);
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
            ExpPutLicenseDataIntoRegistry();
            sub_1408D0314(&KernelLicensingCacheExpired);
            sub_1408D0684();
LABEL_71:
            if ( v27 )
              sub_1405A33DC();
            continue;
          }
        }
        *(_QWORD *)&v31 = 0LL;
        DWORD2(v31) = 4;
        goto LABEL_58;
      }
      v27 = 0;
      goto LABEL_71;
    }
  }
  while ( _InterlockedExchangeAdd(&ExpOkToTimeRefresh, 0xFFFFFFFF) != 1 );
  v33[1] = -1LL;
  v33[0] = 0LL;
  return KeSetTimer2((__int64)&ExpTimeRefreshTimer, ExpTimeRefreshInterval, 0LL, (__int64)v33);
}
