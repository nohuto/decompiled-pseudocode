/*
 * XREFs of ?DrvCreatePathModalityFromAllPaths@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@I0@Z @ 0x1C0101914
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C004C710 (DrvSetDisplayConfig.c)
 * Callees:
 *     GetPathsModality @ 0x1C004D384 (GetPathsModality.c)
 *     ?AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z @ 0x1C004D448 (-AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z.c)
 */

__int64 __fastcall DrvCreatePathModalityFromAllPaths(
        struct D3DKMT_GETPATHSMODALITY **a1,
        __int64 a2,
        struct D3DKMT_GETPATHSMODALITY **a3)
{
  int v4; // ebx
  unsigned int i; // ebp
  __int64 v7; // r14
  int PathsModality; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // ebx
  __int64 v21; // rax
  int v22; // edx
  struct D3DKMT_GETPATHSMODALITY *v23; // rax
  __int64 v24; // rax
  struct D3DKMT_GETPATHSMODALITY *v25; // rax
  struct D3DKMT_GETPATHSMODALITY *v26; // rcx
  _OWORD *v27; // rax
  _OWORD *v28; // r8
  __int128 v29; // xmm1

  v4 = a2;
  i = 0;
  v7 = 2LL;
  if ( (unsigned int)a2 < 2 )
  {
    PathsModality = GetPathsModality((__int64)a1, a3, (_DWORD)a2 != 0 ? 8 : 1, 0);
    v12 = PathsModality;
    if ( PathsModality < 0 )
    {
      v13 = WdLogNewEntry5_WdError(v10, v9, v11);
      *(_QWORD *)(v13 + 24) = v12;
      *(_QWORD *)(v13 + 32) = 24681LL;
      WdLogEvent5_WdError(v13);
    }
    return (unsigned int)v12;
  }
  if ( !*a1 )
  {
    if ( (_DWORD)a2 != 2 )
    {
      v15 = WdLogNewEntry5_WdAssertion(a1, a2, a3);
      WdLogEvent5_WdAssertion(v15);
    }
    v16 = GetPathsModality((__int64)a1, a1, 16LL, 0);
    v17 = v16;
    if ( v16 < 0 )
    {
      v18 = WdLogNewEntry5_WdError(a1, a2, a3);
      *(_QWORD *)(v18 + 24) = v17;
      *(_QWORD *)(v18 + 32) = 24701LL;
      WdLogEvent5_WdError(v18);
      return (unsigned int)v17;
    }
    if ( !*a1 )
    {
      v19 = WdLogNewEntry5_WdAssertion(a1, a2, a3);
      WdLogEvent5_WdAssertion(v19);
    }
  }
  v20 = v4 - 1;
  if ( !v20 )
  {
    v21 = WdLogNewEntry5_WdAssertion(a1, a2, a3);
    WdLogEvent5_WdAssertion(v21);
  }
  v22 = 0;
  while ( v20 )
  {
    for ( i = 0; i < *((unsigned __int16 *)*a1 + 10); ++i )
    {
      if ( (*((_QWORD *)*a1 + 34 * i + 6) & 0x100000000000000LL) != 0 && v22 != 1 && !--v20 )
        break;
    }
    if ( (unsigned int)++v22 >= 2 )
    {
      if ( v20 )
        return 2147483674LL;
      break;
    }
  }
  v23 = AllocPathsModality(1u);
  *a3 = v23;
  if ( !v23 )
  {
    v24 = WdLogNewEntry5_WdLowResource();
    LODWORD(v12) = -1073741670;
    *(_QWORD *)(v24 + 24) = -1073741670LL;
    WdLogEvent5_WdLowResource(v24);
    return (unsigned int)v12;
  }
  *((_WORD *)v23 + 10) = 1;
  *((_DWORD *)*a3 + 8) = 8;
  v25 = *a1;
  v26 = *a3;
  *(_OWORD *)v26 = *(_OWORD *)*a1;
  *((_DWORD *)v26 + 4) = *((_DWORD *)v25 + 4);
  v27 = (_OWORD *)((char *)*a3 + 48);
  v28 = (_OWORD *)((char *)*a1 + 272 * i + 48);
  do
  {
    *v27 = *v28;
    v27[1] = v28[1];
    v27[2] = v28[2];
    v27[3] = v28[3];
    v27[4] = v28[4];
    v27[5] = v28[5];
    v27[6] = v28[6];
    v27 += 8;
    v29 = v28[7];
    v28 += 8;
    *(v27 - 1) = v29;
    --v7;
  }
  while ( v7 );
  *v27 = *v28;
  *((_QWORD *)*a3 + 34) = 0LL;
  return 0LL;
}
