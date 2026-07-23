/*
 * XREFs of ExpGenuinePolicyCacheProvider @ 0x1405A2820
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryTimeIncrement @ 0x1400077E0 (KeQueryTimeIncrement.c)
 *     ExpLicUpdateChecksum @ 0x1400077F0 (ExpLicUpdateChecksum.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008CE50 (KiQueryUnbiasedInterruptTime.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     ExpSetKernelDataProtection @ 0x1405A25F4 (ExpSetKernelDataProtection.c)
 *     ExpGetKernelDataProtection @ 0x1405A2B24 (ExpGetKernelDataProtection.c)
 *     sub_140705868 @ 0x140705868 (sub_140705868.c)
 */

__int64 __fastcall ExpGenuinePolicyCacheProvider(int a1, int a2, int a3, int a4, _BYTE *a5)
{
  int v7; // r15d
  int v8; // edi
  bool v9; // si
  __int64 v10; // r14
  __int64 v11; // rbx
  int KernelDataProtection; // eax
  unsigned int v13; // ecx
  bool v15; // bl
  char v16; // al
  unsigned int v17; // edx
  unsigned int updated; // ecx
  unsigned __int64 v19; // rax
  int v20; // eax
  char v21; // si
  __int64 v22; // rbx
  unsigned int v23; // edx
  unsigned int v24; // ecx
  unsigned __int64 v25; // rax
  __int128 v26; // [rsp+38h] [rbp-D0h] BYREF
  __m256i v27; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v28; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v29; // [rsp+78h] [rbp-90h]
  __int128 v30; // [rsp+88h] [rbp-80h]
  __int128 v31; // [rsp+98h] [rbp-70h] BYREF
  __m256i v32; // [rsp+A8h] [rbp-60h]
  _OWORD v33[3]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v34[16]; // [rsp+100h] [rbp-8h] BYREF
  __int64 v35; // [rsp+110h] [rbp+8h]
  _BYTE v36[8]; // [rsp+130h] [rbp+28h] BYREF
  int v37; // [rsp+138h] [rbp+30h]
  _QWORD v38[6]; // [rsp+160h] [rbp+58h] BYREF
  _BYTE v39[8]; // [rsp+190h] [rbp+88h] BYREF
  int v40; // [rsp+198h] [rbp+90h]
  _BYTE v41[104]; // [rsp+1C0h] [rbp+B8h] BYREF

  v7 = -1073741811;
  v8 = 4;
  if ( off_14096E030 )
    goto LABEL_41;
  if ( !Data )
  {
LABEL_43:
    v8 = dword_14096E0B8;
    goto LABEL_16;
  }
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_14096F5A0, 0LL);
  v9 = qword_14096F620 == 0;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14096F5A0, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_14096F5A0);
  KeAbPostRelease((ULONG_PTR)&qword_14096F5A0);
  if ( !v9 )
  {
    if ( (int)ExpGetKernelDataProtection(v34) < 0 || !v35 || v35 + 900000 <= v35 )
      goto LABEL_19;
    v11 = MEMORY[0xFFFFF78000000320];
    v10 = v35 + 900000;
    if ( v10 <= v11 * KeQueryTimeIncrement() / 10000 )
      v9 = 1;
  }
  if ( !v9 )
    goto LABEL_12;
LABEL_19:
  if ( !off_14096E030 )
  {
    if ( !Data )
      goto LABEL_43;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14096F5A0, 0LL);
    v15 = qword_14096F620 == 0;
    v16 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14096F5A0, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v16 & 2) != 0 && (v16 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_14096F5A0);
    KeAbPostRelease((ULONG_PTR)&qword_14096F5A0);
    if ( v15 )
    {
      dword_14096E0B8 = 5;
      v37 = 5;
      ExpSetKernelDataProtection((__int64)v36, 2, 0);
    }
    else
    {
      if ( Data )
      {
        *(_QWORD *)&v26 = 0LL;
        memset(&v27, 0, 24);
        DWORD2(v26) = 4;
        v27.m256i_i8[24] = 1;
        updated = ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)NumOfElements, &v26);
        if ( !updated )
        {
          if ( v17 )
          {
            v19 = 16LL * v17;
            updated = v19 > 0xFFFFFFFF ? 0xC0000095 : 0;
            if ( v19 <= 0xFFFFFFFF )
              updated = ExpLicUpdateChecksum((__int64)qword_140970D00, 0xFFFFFFFFLL, &v26);
          }
        }
        if ( updated )
        {
          *(_QWORD *)&v26 = 0LL;
          DWORD2(v26) = 4;
        }
        v20 = 0;
        v31 = v26;
        v32 = v27;
      }
      else
      {
        v20 = -1073741811;
      }
      if ( !v20 && (int)ExpGetKernelDataProtection(v38) >= 0 )
      {
        v21 = 4;
        if ( v38[0] != (_QWORD)v31 )
        {
          DWORD2(v31) = 4;
          v21 = 6;
        }
        v22 = MEMORY[0xFFFFF78000000320];
        v32.m256i_i64[0] = v22 * KeQueryTimeIncrement() / 10000;
        ExpSetKernelDataProtection((__int64)&v31, v21, 0);
      }
    }
LABEL_12:
    if ( !off_14096E030 )
      goto LABEL_13;
  }
LABEL_41:
  if ( KiQueryUnbiasedInterruptTime() / 0x989680uLL > 0x2A30 )
  {
    dword_14096E0B8 = 2;
    v40 = 2;
    ExpSetKernelDataProtection((__int64)v39, 2, 0);
    v41[40] = 0;
    ExpSetKernelDataProtection((__int64)v41, 32, 0);
  }
LABEL_13:
  if ( !Data )
    goto LABEL_43;
  KernelDataProtection = ExpGetKernelDataProtection(v33);
  if ( KernelDataProtection < 0 )
  {
    if ( KernelDataProtection == -1073741275 )
    {
      if ( Data )
      {
        *(_QWORD *)&v28 = 0LL;
        v29 = 0uLL;
        DWORD2(v28) = 4;
        *(_QWORD *)&v30 = 0LL;
        BYTE8(v30) = 1;
        v24 = ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)NumOfElements, &v28);
        if ( !v24 )
        {
          if ( v23 )
          {
            v25 = 16LL * v23;
            v24 = v25 > 0xFFFFFFFF ? 0xC0000095 : 0;
            if ( v25 <= 0xFFFFFFFF )
              v24 = ExpLicUpdateChecksum((__int64)qword_140970D00, 0xFFFFFFFFLL, &v28);
          }
        }
        if ( v24 )
        {
          *(_QWORD *)&v28 = 0LL;
          DWORD2(v28) = 4;
        }
        v7 = 0;
        v33[0] = v28;
        v33[1] = v29;
        v33[2] = v30;
      }
      if ( v7 >= 0 )
      {
        DWORD2(v33[0]) = 4;
        ExpSetKernelDataProtection((__int64)v33, -1, 0);
      }
    }
  }
  else
  {
    v8 = DWORD2(v33[0]);
  }
LABEL_16:
  if ( v8 )
  {
    *a5 = 1;
    return (unsigned int)sub_140705868(a1, a2, a3, a4, 0);
  }
  else
  {
    v13 = -1073741772;
    *a5 = 0;
  }
  return v13;
}
