/*
 * XREFs of ExpGenuinePolicyCacheProvider @ 0x1406AC990
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeQueryTimeIncrement @ 0x14007D0E0 (KeQueryTimeIncrement.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140082998 (KiQueryUnbiasedInterruptTime.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     ExpLicUpdateChecksum @ 0x1400FA64C (ExpLicUpdateChecksum.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExpSetKernelDataProtection @ 0x1406AC7AC (ExpSetKernelDataProtection.c)
 *     ExpGetKernelDataProtection @ 0x1406ACCC0 (ExpGetKernelDataProtection.c)
 *     sub_14072B4E0 @ 0x14072B4E0 (sub_14072B4E0.c)
 */

__int64 __fastcall ExpGenuinePolicyCacheProvider(int a1, int a2, int a3, int a4, _BYTE *a5)
{
  int v7; // edi
  int v8; // r15d
  bool v9; // si
  __int64 v10; // r14
  __int64 v11; // rbx
  int KernelDataProtection; // eax
  unsigned int v13; // ecx
  bool v15; // bl
  int v16; // eax
  char v17; // si
  __int64 v18; // rbx
  ULONG TimeIncrement; // eax
  _DWORD *v20; // rcx
  char v21; // dl
  int updated; // eax
  __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // rdx
  __int128 v26; // [rsp+40h] [rbp-C8h] BYREF
  __m256i v27; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v28; // [rsp+70h] [rbp-98h] BYREF
  __int128 v29; // [rsp+80h] [rbp-88h]
  __int128 v30; // [rsp+90h] [rbp-78h]
  _OWORD v31[3]; // [rsp+A0h] [rbp-68h] BYREF
  _OWORD v32[3]; // [rsp+D0h] [rbp-38h] BYREF
  _QWORD v33[6]; // [rsp+100h] [rbp-8h] BYREF
  _DWORD v34[12]; // [rsp+130h] [rbp+28h] BYREF
  _QWORD v35[6]; // [rsp+160h] [rbp+58h] BYREF
  _DWORD v36[12]; // [rsp+190h] [rbp+88h] BYREF
  _BYTE v37[104]; // [rsp+1C0h] [rbp+B8h] BYREF

  memset(v33, 0, sizeof(v33));
  v7 = 4;
  v8 = -1073741811;
  if ( off_1409AD038 )
    goto LABEL_41;
  if ( !Data )
    goto LABEL_13;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_1409AE688, 0LL);
  v9 = qword_1409AE6E8 == 0;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1409AE688, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_1409AE688);
  KeAbPostRelease((ULONG_PTR)&qword_1409AE688);
  if ( !v9 )
  {
    if ( (int)ExpGetKernelDataProtection(v33) < 0 || !v33[2] || v33[2] + 900000LL <= v33[2] )
      goto LABEL_19;
    v11 = MEMORY[0xFFFFF78000000320];
    v10 = v33[2] + 900000LL;
    if ( v10 <= v11 * KeQueryTimeIncrement() / 10000 )
      v9 = 1;
  }
  if ( !v9 )
    goto LABEL_12;
LABEL_19:
  memset(v35, 0, sizeof(v35));
  memset(v31, 0, sizeof(v31));
  if ( !off_1409AD038 )
  {
    if ( !Data )
      goto LABEL_13;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1409AE688, 0LL);
    v15 = qword_1409AE6E8 == 0;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1409AE688, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1409AE688);
    KeAbPostRelease((ULONG_PTR)&qword_1409AE688);
    if ( v15 )
    {
      memset(v34, 0, sizeof(v34));
      v20 = v34;
      dword_1409AD0F8 = 5;
      v34[2] = 5;
      v21 = 2;
      goto LABEL_31;
    }
    HIDWORD(v26) = 0;
    *(__int32 *)((char *)&v27.m256i_i32[6] + 1) = 0;
    *(__int16 *)((char *)&v27.m256i_i16[14] + 1) = 0;
    v27.m256i_i8[31] = 0;
    if ( !Data )
    {
      v16 = -1073741811;
      goto LABEL_26;
    }
    *(_QWORD *)&v26 = 0LL;
    memset(&v27, 0, 24);
    DWORD2(v26) = 4;
    v27.m256i_i8[24] = 1;
    updated = ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)NumOfElements, &v26);
    if ( updated )
      goto LABEL_33;
    if ( (_DWORD)v23 )
    {
      if ( (unsigned __int64)(16 * v23) > 0xFFFFFFFF )
      {
LABEL_33:
        *(_QWORD *)&v26 = 0LL;
        DWORD2(v26) = 4;
LABEL_35:
        v16 = 0;
        v31[0] = v26;
        *(__m256i *)&v31[1] = v27;
LABEL_26:
        if ( v16 || (int)ExpGetKernelDataProtection(v35) < 0 )
        {
LABEL_12:
          if ( !off_1409AD038 )
            goto LABEL_13;
          goto LABEL_41;
        }
        v17 = 4;
        if ( v35[0] != *(_QWORD *)&v31[0] )
        {
          DWORD2(v31[0]) = 4;
          v17 = 6;
        }
        v18 = MEMORY[0xFFFFF78000000320];
        TimeIncrement = KeQueryTimeIncrement();
        v20 = v31;
        *(_QWORD *)&v31[1] = v18 * TimeIncrement / 10000;
        v21 = v17;
LABEL_31:
        ExpSetKernelDataProtection((__int64)v20, v21, 0);
        goto LABEL_12;
      }
      updated = ExpLicUpdateChecksum((__int64)qword_1409AFF80, v23, &v26);
    }
    if ( !updated )
      goto LABEL_35;
    goto LABEL_33;
  }
LABEL_41:
  if ( KiQueryUnbiasedInterruptTime() / 0x989680uLL > 0x2A30 )
  {
    memset(v36, 0, sizeof(v36));
    dword_1409AD0F8 = 2;
    v36[2] = 2;
    ExpSetKernelDataProtection((__int64)v36, 2, 0);
    memset(v37, 0, 0x30uLL);
    ExpSetKernelDataProtection((__int64)v37, 32, 0);
  }
LABEL_13:
  memset(v32, 0, sizeof(v32));
  if ( !Data )
  {
    v7 = dword_1409AD0F8;
    goto LABEL_16;
  }
  KernelDataProtection = ExpGetKernelDataProtection(v32);
  if ( KernelDataProtection >= 0 )
  {
    v7 = DWORD2(v32[0]);
    goto LABEL_16;
  }
  if ( KernelDataProtection == -1073741275 )
  {
    HIDWORD(v28) = 0;
    *(_DWORD *)((char *)&v30 + 9) = 0;
    *(_WORD *)((char *)&v30 + 13) = 0;
    HIBYTE(v30) = 0;
    if ( !Data )
      goto LABEL_53;
    *(_QWORD *)&v28 = 0LL;
    v29 = 0uLL;
    DWORD2(v28) = 4;
    *(_QWORD *)&v30 = 0LL;
    BYTE8(v30) = 1;
    v24 = ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)NumOfElements, &v28);
    if ( v24 )
      goto LABEL_51;
    if ( (_DWORD)v25 )
    {
      if ( 16 * (unsigned __int64)(unsigned int)v25 > 0xFFFFFFFF )
        goto LABEL_51;
      v24 = ExpLicUpdateChecksum((__int64)qword_1409AFF80, v25, &v28);
    }
    if ( !v24 )
    {
LABEL_52:
      v8 = 0;
      v32[0] = v28;
      v32[1] = v29;
      v32[2] = v30;
LABEL_53:
      if ( v8 >= 0 )
      {
        DWORD2(v32[0]) = 4;
        ExpSetKernelDataProtection((__int64)v32, -1, 0);
      }
      goto LABEL_16;
    }
LABEL_51:
    *(_QWORD *)&v28 = 0LL;
    DWORD2(v28) = 4;
    goto LABEL_52;
  }
LABEL_16:
  if ( v7 )
  {
    *a5 = 1;
    return (unsigned int)sub_14072B4E0(a1, a2, a3, a4, 0);
  }
  else
  {
    v13 = -1073741772;
    *a5 = 0;
  }
  return v13;
}
