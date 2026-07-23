/*
 * XREFs of HvpApplyIncrementalLogFile @ 0x140807974
 * Callers:
 *     HvApplyLogFile @ 0x140807880 (HvApplyLogFile.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     SymCryptMarvin32 @ 0x1401AF184 (SymCryptMarvin32.c)
 *     CmpTraceHiveMountLogEntryApplied @ 0x1407ED198 (CmpTraceHiveMountLogEntryApplied.c)
 *     HvpApplyLogEntryDataToFileBackedHive @ 0x1407F89F4 (HvpApplyLogEntryDataToFileBackedHive.c)
 *     HvpRecoverDataReadRoutine @ 0x1407F9380 (HvpRecoverDataReadRoutine.c)
 *     HvpIsLogEntryHeaderCoherent @ 0x140807E8C (HvpIsLogEntryHeaderCoherent.c)
 *     HvpIsMetadataArrayCoherent @ 0x140807F08 (HvpIsMetadataArrayCoherent.c)
 *     HvpReadLogEntryHeader @ 0x14080834C (HvpReadLogEntryHeader.c)
 *     HvpUpdateRecoveryVector @ 0x1408083A0 (HvpUpdateRecoveryVector.c)
 */

__int64 __fastcall HvpApplyIncrementalLogFile(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int *a5,
        __int64 a6,
        ULONG_PTR a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        _DWORD *a11,
        _DWORD *a12,
        unsigned int *a13)
{
  int v13; // r15d
  unsigned int *v14; // r12
  unsigned int v17; // ebx
  char v18; // r14
  __int64 result; // rax
  __int64 v20; // r12
  __int64 v21; // r12
  bool v22; // zf
  int v24[3]; // [rsp+3Ch] [rbp-65h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-59h]
  __int64 v26; // [rsp+50h] [rbp-51h]
  __int64 v27; // [rsp+58h] [rbp-49h]
  _DWORD *v28; // [rsp+60h] [rbp-41h]
  _DWORD *v29; // [rsp+68h] [rbp-39h]
  _BYTE v30[4]; // [rsp+70h] [rbp-31h] BYREF
  unsigned int v31; // [rsp+74h] [rbp-2Dh]
  char v32; // [rsp+78h] [rbp-29h]
  int v33; // [rsp+7Ch] [rbp-25h]
  int v34; // [rsp+80h] [rbp-21h]
  unsigned int v35; // [rsp+84h] [rbp-1Dh]
  __int64 v36; // [rsp+88h] [rbp-19h]
  __int64 v37; // [rsp+98h] [rbp-9h] BYREF

  v13 = 0;
  v14 = a5;
  BugCheckParameter2 = a7;
  v17 = 512;
  v18 = 0;
  v26 = a10;
  v28 = a11;
  v29 = a12;
  v27 = (__int64)a5;
  while ( 1 )
  {
    result = HvpReadLogEntryHeader(v17, HvpRecoverDataReadRoutine, v14, v30);
    if ( (int)result < 0 )
      break;
    if ( !(unsigned __int8)HvpIsLogEntryHeaderCoherent(v30, v17, a3) || v33 != a2 )
      goto LABEL_17;
    result = HvpRecoverDataReadRoutine(v14, v17, v31, &v24[1]);
    if ( (int)result < 0 )
      break;
    v20 = *(_QWORD *)&v24[1];
    if ( !(unsigned __int8)HvpIsMetadataArrayCoherent(v30, *(_QWORD *)&v24[1] + 40LL, v35) )
      goto LABEL_17;
    SymCryptMarvin32(HvSymcryptSeed, (unsigned __int16 *)(v20 + 40), v31 - 40, &v37);
    if ( v36 != v37 )
      goto LABEL_17;
    v21 = *(_QWORD *)&v24[1] + 40LL;
    HvpApplyLogEntryDataToFileBackedHive(
      BugCheckParameter2,
      (__int64)v30,
      *(_QWORD *)&v24[1] + 40LL,
      *(_QWORD *)&v24[1] + 40LL + 8LL * v35,
      v31 - (8 * v35 + 40),
      v24);
    v22 = (v32 & 1) == 0;
    *(_DWORD *)(a1 + 40) = v34;
    if ( !v22 )
      *(_DWORD *)(a1 + 144) |= 1u;
    v18 = 1;
    ++v13;
    CmpTraceHiveMountLogEntryApplied(v31, v24[0]);
    if ( v26 )
      HvpUpdateRecoveryVector(v21, v35, v26);
    v14 = (unsigned int *)v27;
    ++a2;
    v17 += v31;
    if ( !v17 )
    {
      result = 2147483674LL;
      break;
    }
  }
  if ( (_DWORD)result == -1073741801 || (_DWORD)result == -1073741670 || (_DWORD)result == -1073741492 )
    return result;
LABEL_17:
  result = v18 != 0 ? 0x40000009 : 0;
  if ( v28 )
    *v28 = a2;
  if ( v29 )
    *v29 = v13;
  if ( a13 )
  {
    if ( v18 )
      *a13 = v17;
    else
      *a13 = 0;
  }
  return result;
}
