/*
 * XREFs of PspCaptureUserProcessParameters @ 0x140607D50
 * Callers:
 *     PspCaptureProcessParameters @ 0x14060A028 (PspCaptureProcessParameters.c)
 *     PsCaptureUserProcessParameters @ 0x1406D0090 (PsCaptureUserProcessParameters.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x1400922CC (PsGetServerSiloGlobals.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400B75B0 (ExAllocatePoolWithQuotaTag.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PspCopyUnicodeString @ 0x1406082B8 (PspCopyUnicodeString.c)
 *     PspCaptureAndValidateUnicodeString @ 0x140608328 (PspCaptureAndValidateUnicodeString.c)
 *     PspValidateEnvironmentBlock @ 0x1406083A0 (PspValidateEnvironmentBlock.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PspCaptureUserProcessParameters(_QWORD *a1, __int64 a2, char a3, __int64 a4)
{
  _OWORD *v4; // rsi
  unsigned int v5; // r12d
  char *v6; // r13
  size_t v7; // rax
  __int64 result; // rax
  unsigned __int64 v9; // r15
  SIZE_T v10; // rdx
  signed int v11; // r14d
  _OWORD *PoolWithQuotaTag; // rax
  _DWORD *v13; // rdi
  __int64 v14; // rcx
  const void *v15; // rdx
  char *v16; // rsi
  unsigned __int16 *ServerSiloGlobals; // rax
  char v18; // r8
  char *v19; // r8
  size_t v20; // r15
  void *v21; // [rsp+20h] [rbp-F8h] BYREF
  void *Src[2]; // [rsp+28h] [rbp-F0h]
  unsigned int v23; // [rsp+38h] [rbp-E0h]
  size_t Size; // [rsp+40h] [rbp-D8h] BYREF
  char *v25; // [rsp+48h] [rbp-D0h]
  _OWORD *v26; // [rsp+50h] [rbp-C8h]
  unsigned __int64 v27; // [rsp+58h] [rbp-C0h]
  __int128 v28; // [rsp+60h] [rbp-B8h] BYREF
  _BYTE v29[2]; // [rsp+70h] [rbp-A8h] BYREF
  unsigned __int16 v30; // [rsp+72h] [rbp-A6h]
  _BYTE v31[2]; // [rsp+80h] [rbp-98h] BYREF
  unsigned __int16 v32; // [rsp+82h] [rbp-96h]
  _BYTE v33[2]; // [rsp+90h] [rbp-88h] BYREF
  unsigned __int16 v34; // [rsp+92h] [rbp-86h]
  _BYTE v35[2]; // [rsp+A0h] [rbp-78h] BYREF
  unsigned __int16 v36; // [rsp+A2h] [rbp-76h]
  _BYTE v37[2]; // [rsp+B0h] [rbp-68h] BYREF
  unsigned __int16 v38; // [rsp+B2h] [rbp-66h]
  _BYTE v39[2]; // [rsp+C0h] [rbp-58h] BYREF
  unsigned __int16 v40; // [rsp+C2h] [rbp-56h]
  _BYTE v41[2]; // [rsp+D0h] [rbp-48h] BYREF
  unsigned __int16 v42; // [rsp+D2h] [rbp-46h]

  v4 = (_OWORD *)a2;
  if ( (a2 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v5 = *(_DWORD *)(a2 + 8) & 0xFFFFBFFF;
  v23 = v5;
  if ( ((v5 ^ 1) & 0xFF010E11) != 0 )
    return 3221225485LL;
  if ( ((unsigned __int8)v5 & (unsigned __int8)((v5 & 0xE0) - 1) & 0x60) != 0 )
    return 3221225485LL;
  v6 = *(char **)(a2 + 128);
  v25 = v6;
  v7 = *(_QWORD *)(a2 + 1008);
  Size = v7;
  if ( !v7 || (v7 & 1) != 0 )
    return 3221225485LL;
  if ( (unsigned __int64)&v6[v7] > 0x7FFFFFFF0000LL || &v6[v7] < v6 )
    MEMORY[0x7FFFFFFF0000] = 0;
  if ( (a3 & 1) != 0 )
  {
    ServerSiloGlobals = (unsigned __int16 *)PsGetServerSiloGlobals(a4);
    v28 = *((_OWORD *)ServerSiloGlobals + 62);
    *(_OWORD *)Src = PspProtectedRuntimeData;
    if ( (v18 & 2) == 0 )
    {
      v6 = (char *)*((_QWORD *)ServerSiloGlobals + 127);
      v25 = v6;
      Size = ServerSiloGlobals[505];
    }
  }
  else
  {
    result = PspCaptureAndValidateUnicodeString(a2 + 56, &v28);
    if ( (int)result < 0 )
      return result;
    if ( (unsigned __int16)v28 >= 0x208u )
      return 3221225485LL;
    WORD1(v28) = 520;
    *(_OWORD *)Src = v4[14];
    if ( Src[1] )
    {
      WORD1(Src[0]) = Src[0];
      if ( LOWORD(Src[0]) )
      {
        v19 = (char *)Src[1] + LOWORD(Src[0]);
        if ( (unsigned __int64)v19 > 0x7FFFFFFF0000LL || v19 < Src[1] )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    else
    {
      if ( LOWORD(Src[0]) )
        return 3221225485LL;
      LODWORD(Src[0]) = 0;
    }
  }
  result = PspCaptureAndValidateUnicodeString(v4 + 5, v29);
  if ( (int)result < 0 )
    return result;
  result = PspCaptureAndValidateUnicodeString(v4 + 6, v31);
  if ( (int)result < 0 )
    return result;
  result = PspCaptureAndValidateUnicodeString(v4 + 7, v33);
  if ( (int)result < 0 )
    return result;
  result = PspCaptureAndValidateUnicodeString(v4 + 11, v35);
  if ( (int)result < 0 )
    return result;
  result = PspCaptureAndValidateUnicodeString(v4 + 12, v37);
  if ( (int)result < 0 )
    return result;
  result = PspCaptureAndValidateUnicodeString(v4 + 13, v39);
  if ( (int)result < 0 )
    return result;
  result = PspCaptureAndValidateUnicodeString(v4 + 65, v41);
  if ( (int)result < 0 )
    return result;
  v9 = (WORD1(Src[0]) + v30 + v32 + v34 + v36 + v38 + v40 + (unsigned __int64)v42 + WORD1(v28) + 1057LL) & 0xFFFFFFFFFFFFFFFEuLL;
  v27 = v9;
  v10 = -1LL;
  if ( v9 + Size >= v9 )
    v10 = v9 + Size;
  v11 = v9 + Size < v9 ? 0xC0000095 : 0;
  if ( v9 + Size < v9 )
    return 3221225485LL;
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v10, 0x62507350u);
  v13 = PoolWithQuotaTag;
  v26 = PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
    return 3221225626LL;
  v14 = 8LL;
  do
  {
    *PoolWithQuotaTag = *v4;
    PoolWithQuotaTag[1] = v4[1];
    PoolWithQuotaTag[2] = v4[2];
    PoolWithQuotaTag[3] = v4[3];
    PoolWithQuotaTag[4] = v4[4];
    PoolWithQuotaTag[5] = v4[5];
    PoolWithQuotaTag[6] = v4[6];
    PoolWithQuotaTag += 8;
    *(PoolWithQuotaTag - 1) = v4[7];
    v4 += 8;
    --v14;
  }
  while ( v14 );
  *PoolWithQuotaTag = *v4;
  PoolWithQuotaTag[1] = v4[1];
  if ( v11 < 0 )
    goto LABEL_63;
  v13[2] = v5;
  v13[1] = v9;
  *v13 = v9;
  v21 = v13 + 264;
  v11 = PspCopyUnicodeString(&v28, v13 + 14, &v21);
  if ( v11 < 0 )
    goto LABEL_63;
  v11 = PspCopyUnicodeString(v29, v13 + 20, &v21);
  if ( v11 < 0 )
    goto LABEL_63;
  v11 = PspCopyUnicodeString(v31, v13 + 24, &v21);
  if ( v11 < 0 )
    goto LABEL_63;
  v11 = PspCopyUnicodeString(v33, v13 + 28, &v21);
  if ( v11 < 0 )
    goto LABEL_63;
  v11 = PspCopyUnicodeString(v35, v13 + 44, &v21);
  if ( v11 < 0 )
    goto LABEL_63;
  v11 = PspCopyUnicodeString(v37, v13 + 48, &v21);
  if ( v11 < 0 )
    goto LABEL_63;
  v11 = PspCopyUnicodeString(v39, v13 + 52, &v21);
  if ( v11 < 0 )
    goto LABEL_63;
  v11 = PspCopyUnicodeString(v41, v13 + 260, &v21);
  if ( v11 < 0 )
    goto LABEL_63;
  *((_OWORD *)v13 + 14) = *(_OWORD *)Src;
  v15 = Src[1];
  v16 = (char *)v21;
  if ( Src[1] )
  {
    *((_QWORD *)v13 + 29) = v21;
    memmove(v16, v15, LOWORD(Src[0]));
    if ( v16 )
    {
      v16 += LOWORD(Src[0]);
      v21 = v16;
    }
    v20 = (char *)v13 - v16 + v9;
    if ( v20 )
    {
      memset(v16, 0, v20);
      if ( v16 )
      {
        v16 += v20;
        v21 = v16;
      }
    }
  }
  memmove(v16, v6, Size);
  if ( (a3 & 3) == 1 || (v11 = PspValidateEnvironmentBlock(v16, &Size), v11 >= 0) )
  {
    if ( (a3 & 1) != 0 )
    {
      *((_QWORD *)v13 + 2) = 0LL;
      *((_QWORD *)v13 + 4) = 0LL;
      *((_QWORD *)v13 + 5) = 0LL;
      *((_QWORD *)v13 + 6) = 0LL;
    }
    *((_QWORD *)v13 + 16) = v16;
    *((_QWORD *)v13 + 126) = Size;
    *((_QWORD *)v13 + 127) = 0LL;
    *a1 = v13;
    return 0LL;
  }
  else
  {
LABEL_63:
    ExFreePoolWithTag(v13, 0);
    return (unsigned int)v11;
  }
}
