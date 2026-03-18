/*
 * XREFs of ?SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C012C7B8
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C00504D0 (DrvSetDisplayConfig.c)
 * Callees:
 *     GetPathsModality @ 0x1C0051164 (GetPathsModality.c)
 *     ??8@YA_NAEBU_LUID@@0@Z @ 0x1C00A6D5C (--8@YA_NAEBU_LUID@@0@Z.c)
 *     ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N1PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x1C012909C (-ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@.c)
 *     ?ConvertDisplayConfigScalingToPathModalityForPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEA_N@Z @ 0x1C0129570 (-ConvertDisplayConfigScalingToPathModalityForPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAU.c)
 */

__int64 __fastcall SetDisplayConfigHandleOnlyProvidedPath(
        const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a1,
        struct D3DKMT_GETPATHSMODALITY **a2,
        bool *a3,
        enum _DXGK_DIAG_SDC_STAGE *a4)
{
  bool *v5; // r13
  __int64 result; // rax
  struct D3DKMT_GETPATHSMODALITY *v9; // rdx
  __int64 v10; // rbx
  unsigned int v11; // r14d
  unsigned int i; // ebp
  char *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // r13d
  __int64 v21; // rcx
  int v22; // [rsp+44h] [rbp-34h]

  v5 = a3;
  result = GetPathsModality((__int64)a1, a2, 64LL, 0);
  if ( (int)result < 0 )
  {
    *(_DWORD *)a4 = 32;
    return result;
  }
  v9 = *a2;
  LODWORD(v10) = 0;
  v11 = 0;
  v22 = 0;
  for ( i = *((unsigned __int16 *)*a2 + 10); v11 < *((unsigned __int16 *)*a2 + 10); ++v11 )
  {
    v13 = (char *)v9 + 272 * v11;
    if ( operator==((_DWORD *)v13 + 16, (_DWORD *)a1 + 4)
      && *((_DWORD *)v13 + 18) == *((_DWORD *)a1 + 6)
      && *((_DWORD *)v13 + 19) == *((_DWORD *)a1 + 7) )
    {
      v17 = *((_QWORD *)v13 + 6);
      if ( (v17 & 0x800) == 0 )
      {
        v18 = WdLogNewEntry5_WdAssertion(v15, v14, v16);
        WdLogEvent5_WdAssertion(v18);
        v17 = *((_QWORD *)v13 + 6);
      }
      v10 = *((_QWORD *)v13 + 24);
      v22 = HIDWORD(v10);
      if ( (v17 & 0x4000000000000LL) == 0 )
      {
        v19 = WdLogNewEntry5_WdAssertion(0x4000000000000LL, v14, v16);
        WdLogEvent5_WdAssertion(v19);
      }
      v20 = *((_DWORD *)v13 + 58);
      i = v11;
      result = ConvertDisplayConfigPathIntoExistingPathModalityAtIdx(a1, v11, 0xFFFFFFFFLL, 0, 0, *a2, a3);
      if ( (int)result < 0 )
      {
        *(_DWORD *)a4 = 34;
        return result;
      }
      *((_DWORD *)v13 + 58) = v20;
      *((_QWORD *)v13 + 6) |= 0x4000000000000uLL;
      v5 = a3;
    }
    else
    {
      result = ConvertDisplayConfigScalingToPathModalityForPath(
                 a1,
                 (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v13 + 48),
                 v5);
      if ( (int)result < 0 )
      {
        *(_DWORD *)a4 = 35;
        return result;
      }
    }
    v9 = *a2;
  }
  if ( i < *((unsigned __int16 *)v9 + 10) )
  {
    v21 = 272LL * i;
    if ( (_DWORD)v10 == *(_DWORD *)((char *)v9 + v21 + 192) && v22 == *(_DWORD *)((char *)v9 + v21 + 196) )
      return 0LL;
  }
  *(_DWORD *)a4 = 33;
  return 3221225485LL;
}
