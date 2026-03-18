/*
 * XREFs of PspCaptureUserProcessParameters @ 0x1406B2990
 * Callers:
 *     PsCaptureUserProcessParameters @ 0x1406B28E0 (PsCaptureUserProcessParameters.c)
 *     PspCaptureProcessParameters @ 0x1406B2920 (PspCaptureProcessParameters.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14009EE00 (ExAllocatePoolWithQuotaTag.c)
 *     PsGetServerSiloGlobals @ 0x1400C9B10 (PsGetServerSiloGlobals.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PspCopyUnicodeString @ 0x1406B2FF8 (PspCopyUnicodeString.c)
 *     PspCaptureAndValidateUnicodeString @ 0x1406B3068 (PspCaptureAndValidateUnicodeString.c)
 *     PspValidateEnvironmentBlock @ 0x1406B30E0 (PspValidateEnvironmentBlock.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PspCaptureUserProcessParameters(_QWORD *a1, __int64 a2, __int128 *a3, char a4, __int64 a5)
{
  _OWORD *v6; // rsi
  unsigned int v7; // r13d
  char *v8; // rdi
  size_t v9; // rax
  __int64 result; // rax
  unsigned __int16 v11; // eax^2
  unsigned __int64 v12; // r12
  SIZE_T v13; // rdx
  signed int v14; // r14d
  _OWORD *PoolWithQuotaTag; // rax
  _DWORD *v16; // rdi
  __int64 v17; // rcx
  const void *v18; // rdx
  char *v19; // rsi
  size_t v20; // r12
  unsigned __int16 *ServerSiloGlobals; // rax
  char v22; // r9
  char *v23; // r8
  unsigned __int64 v24; // rcx
  void *v25; // [rsp+20h] [rbp-118h] BYREF
  void *v26[2]; // [rsp+28h] [rbp-110h]
  unsigned int v27; // [rsp+38h] [rbp-100h]
  void *Src; // [rsp+40h] [rbp-F8h]
  size_t Size; // [rsp+48h] [rbp-F0h] BYREF
  void *v30; // [rsp+50h] [rbp-E8h]
  unsigned __int64 v31; // [rsp+58h] [rbp-E0h]
  _OWORD *v32; // [rsp+60h] [rbp-D8h]
  __int128 v33; // [rsp+68h] [rbp-D0h] BYREF
  __int128 v34; // [rsp+78h] [rbp-C0h] BYREF
  _QWORD v35[2]; // [rsp+88h] [rbp-B0h] BYREF
  _QWORD v36[2]; // [rsp+98h] [rbp-A0h] BYREF
  _QWORD v37[2]; // [rsp+A8h] [rbp-90h] BYREF
  _QWORD v38[2]; // [rsp+B8h] [rbp-80h] BYREF
  _QWORD v39[2]; // [rsp+C8h] [rbp-70h] BYREF
  _QWORD v40[2]; // [rsp+D8h] [rbp-60h] BYREF
  __int128 v41; // [rsp+E8h] [rbp-50h] BYREF

  v6 = (_OWORD *)a2;
  v37[0] = 0LL;
  v37[1] = 0LL;
  v33 = 0uLL;
  v39[0] = 0LL;
  v39[1] = 0LL;
  v35[0] = 0LL;
  v35[1] = 0LL;
  v36[0] = 0LL;
  v36[1] = 0LL;
  v34 = 0uLL;
  v26[0] = 0LL;
  v26[1] = 0LL;
  v40[0] = 0LL;
  v40[1] = 0LL;
  v38[0] = 0LL;
  v38[1] = 0LL;
  if ( (a2 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v7 = *(_DWORD *)(a2 + 8) & 0xFFFFBFFF;
  v27 = v7;
  if ( ((v7 ^ 1) & 0xF7010E11) != 0 )
    return 3221225485LL;
  if ( ((unsigned __int8)v7 & (unsigned __int8)((v7 & 0xE0) - 1) & 0x60) != 0 )
    return 3221225485LL;
  v8 = *(char **)(a2 + 128);
  Src = v8;
  v30 = v8;
  v9 = *(_QWORD *)(a2 + 1008);
  Size = v9;
  if ( !v9 || (v9 & 1) != 0 )
    return 3221225485LL;
  if ( (unsigned __int64)&v8[v9] > 0x7FFFFFFF0000LL || &v8[v9] < v8 )
    MEMORY[0x7FFFFFFF0000] = 0;
  if ( (a4 & 1) != 0 )
  {
    ServerSiloGlobals = (unsigned __int16 *)PsGetServerSiloGlobals(a5);
    v33 = *((_OWORD *)ServerSiloGlobals + 62);
    *(_OWORD *)v26 = PspProtectedRuntimeData;
    if ( (v22 & 2) == 0 )
    {
      Src = (void *)*((_QWORD *)ServerSiloGlobals + 127);
      v30 = Src;
      Size = ServerSiloGlobals[505];
    }
  }
  else
  {
    result = PspCaptureAndValidateUnicodeString(a2 + 56, &v33);
    if ( (int)result < 0 )
      return result;
    if ( (unsigned __int16)v33 >= 0x208u )
      return 3221225485LL;
    WORD1(v33) = 520;
    *(_OWORD *)v26 = v6[14];
    if ( v26[1] )
    {
      WORD1(v26[0]) = v26[0];
      if ( LOWORD(v26[0]) )
      {
        v23 = (char *)v26[1] + LOWORD(v26[0]);
        if ( (unsigned __int64)v23 > 0x7FFFFFFF0000LL || v23 < v26[1] )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    else
    {
      if ( LOWORD(v26[0]) )
        return 3221225485LL;
      LODWORD(v26[0]) = 0;
    }
  }
  result = PspCaptureAndValidateUnicodeString(v6 + 5, v35);
  if ( (int)result < 0 )
    return result;
  result = PspCaptureAndValidateUnicodeString(v6 + 6, v36);
  if ( (int)result < 0 )
    return result;
  result = PspCaptureAndValidateUnicodeString(v6 + 7, v37);
  if ( (int)result < 0 )
    return result;
  result = PspCaptureAndValidateUnicodeString(v6 + 11, v38);
  if ( (int)result < 0 )
    return result;
  result = PspCaptureAndValidateUnicodeString(v6 + 12, v39);
  if ( (int)result < 0 )
    return result;
  result = PspCaptureAndValidateUnicodeString(v6 + 13, v40);
  if ( (int)result < 0 )
    return result;
  if ( a3 && (*((_DWORD *)a3 + 11) & 2) != 0 )
  {
    v34 = *a3;
  }
  else
  {
    result = PspCaptureAndValidateUnicodeString(v6 + 65, &v34);
    if ( (int)result < 0 )
      return result;
  }
  if ( a3 && (*((_DWORD *)a3 + 11) & 4) != 0 )
  {
    v41 = a3[1];
    v11 = WORD1(v41);
  }
  else
  {
    v11 = 0;
    v41 = 0uLL;
  }
  v12 = (WORD1(v26[0])
       + WORD1(v35[0])
       + WORD1(v36[0])
       + WORD1(v37[0])
       + WORD1(v38[0])
       + WORD1(v39[0])
       + WORD1(v40[0])
       + WORD1(v34)
       + (unsigned __int64)v11
       + WORD1(v33)
       + 1089LL) & 0xFFFFFFFFFFFFFFFEuLL;
  v31 = v12;
  if ( a3 && (*((_DWORD *)a3 + 11) & 1) != 0 )
  {
    v24 = (v12 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
    v12 = v24 + 8LL * *((unsigned int *)a3 + 10);
    if ( v12 >= v24 )
    {
      v31 = v24 + 8LL * *((unsigned int *)a3 + 10);
      goto LABEL_31;
    }
    return 3221225485LL;
  }
LABEL_31:
  v13 = -1LL;
  if ( v12 + Size >= v12 )
    v13 = v12 + Size;
  v14 = v12 + Size < v12 ? 0xC0000095 : 0;
  if ( v12 + Size < v12 )
    return 3221225485LL;
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v13, 0x62507350u);
  v16 = PoolWithQuotaTag;
  v32 = PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
    return 3221225626LL;
  v17 = 8LL;
  do
  {
    *PoolWithQuotaTag = *v6;
    PoolWithQuotaTag[1] = v6[1];
    PoolWithQuotaTag[2] = v6[2];
    PoolWithQuotaTag[3] = v6[3];
    PoolWithQuotaTag[4] = v6[4];
    PoolWithQuotaTag[5] = v6[5];
    PoolWithQuotaTag[6] = v6[6];
    PoolWithQuotaTag += 8;
    *(PoolWithQuotaTag - 1) = v6[7];
    v6 += 8;
    --v17;
  }
  while ( v17 );
  *PoolWithQuotaTag = *v6;
  PoolWithQuotaTag[1] = v6[1];
  PoolWithQuotaTag[2] = v6[2];
  PoolWithQuotaTag[3] = v6[3];
  if ( v14 < 0 )
    goto LABEL_83;
  v16[2] = v7;
  v16[1] = v12;
  *v16 = v12;
  v25 = v16 + 272;
  v14 = PspCopyUnicodeString(&v33, v16 + 14, &v25);
  if ( v14 < 0 )
    goto LABEL_83;
  v14 = PspCopyUnicodeString(v35, v16 + 20, &v25);
  if ( v14 < 0 )
    goto LABEL_83;
  v14 = PspCopyUnicodeString(v36, v16 + 24, &v25);
  if ( v14 < 0 )
    goto LABEL_83;
  v14 = PspCopyUnicodeString(v37, v16 + 28, &v25);
  if ( v14 < 0 )
    goto LABEL_83;
  v14 = PspCopyUnicodeString(v38, v16 + 44, &v25);
  if ( v14 < 0 )
    goto LABEL_83;
  v14 = PspCopyUnicodeString(v39, v16 + 48, &v25);
  if ( v14 < 0 )
    goto LABEL_83;
  v14 = PspCopyUnicodeString(v40, v16 + 52, &v25);
  if ( v14 < 0 )
    goto LABEL_83;
  PspCopyUnicodeString(&v34, v16 + 260, &v25);
  if ( a3 && (*((_DWORD *)a3 + 11) & 4) != 0 )
  {
    PspCopyUnicodeString(&v41, v16 + 264, &v25);
  }
  else
  {
    *((_QWORD *)v16 + 132) = 0LL;
    *((_QWORD *)v16 + 133) = 0LL;
  }
  *((_OWORD *)v16 + 14) = *(_OWORD *)v26;
  v18 = v26[1];
  v19 = (char *)v25;
  if ( v26[1] )
  {
    *((_QWORD *)v16 + 29) = v25;
    memmove(v19, v18, LOWORD(v26[0]));
    if ( v19 )
    {
      v19 += LOWORD(v26[0]);
      v25 = v19;
    }
  }
  *((_QWORD *)v16 + 134) = 0LL;
  v16[270] = 0;
  if ( a3 )
  {
    if ( (*((_DWORD *)a3 + 11) & 1) != 0 )
    {
      v19 = (char *)((unsigned __int64)(v19 + 3) & 0xFFFFFFFFFFFFFFFCuLL);
      v25 = v19;
      *((_QWORD *)v16 + 134) = v19;
      v16[270] = *((_DWORD *)a3 + 10);
      memmove(v19, *((const void **)a3 + 4), 8LL * *((unsigned int *)a3 + 10));
      if ( v19 )
      {
        v19 += 8 * *((unsigned int *)a3 + 10);
        v25 = v19;
      }
    }
  }
  v20 = (char *)v16 - v19 + v12;
  if ( v20 )
  {
    memset(v19, 0, v20);
    if ( v19 )
    {
      v19 += v20;
      v25 = v19;
    }
  }
  memmove(v19, Src, Size);
  if ( (a4 & 3) == 1 || (v14 = PspValidateEnvironmentBlock(v19, &Size), v14 >= 0) )
  {
    if ( (a4 & 1) != 0 )
    {
      *((_QWORD *)v16 + 2) = 0LL;
      *((_QWORD *)v16 + 4) = 0LL;
      *((_QWORD *)v16 + 5) = 0LL;
      *((_QWORD *)v16 + 6) = 0LL;
    }
    *((_QWORD *)v16 + 16) = v19;
    *((_QWORD *)v16 + 126) = Size;
    *((_QWORD *)v16 + 127) = 0LL;
    *a1 = v16;
    return 0LL;
  }
  else
  {
LABEL_83:
    ExFreePoolWithTag(v16, 0);
    return (unsigned int)v14;
  }
}
