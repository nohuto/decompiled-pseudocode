/*
 * XREFs of ?SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C0103CBC
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C004C710 (DrvSetDisplayConfig.c)
 * Callees:
 *     GetPathsModality @ 0x1C004D384 (GetPathsModality.c)
 *     ??8@YA_NAEBU_LUID@@0@Z @ 0x1C0061CB0 (--8@YA_NAEBU_LUID@@0@Z.c)
 *     ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N1PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x1C01007CC (-ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@.c)
 *     ?ConvertDisplayConfigScalingToPathModalityForPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEA_N@Z @ 0x1C0100C80 (-ConvertDisplayConfigScalingToPathModalityForPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAU.c)
 */

__int64 __fastcall SetDisplayConfigHandleOnlyProvidedPath(
        const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a1,
        struct D3DKMT_GETPATHSMODALITY **a2,
        bool *a3,
        enum _DXGK_DIAG_SDC_STAGE *a4)
{
  __int64 result; // rax
  struct D3DKMT_GETPATHSMODALITY *v9; // rdx
  unsigned int v10; // ebp
  unsigned int i; // esi
  char *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // r12d
  __int64 v19; // [rsp+40h] [rbp-38h]

  result = GetPathsModality((__int64)a1, a2, 64LL, 0);
  if ( (int)result < 0 )
  {
    *(_DWORD *)a4 = 32;
    return result;
  }
  v9 = *a2;
  v10 = 0;
  for ( i = *((unsigned __int16 *)*a2 + 10); v10 < *((unsigned __int16 *)*a2 + 10); ++v10 )
  {
    v12 = (char *)v9 + 272 * v10;
    if ( operator==((_DWORD *)v12 + 16, (_DWORD *)a1 + 4)
      && *((_DWORD *)v12 + 18) == *((_DWORD *)a1 + 6)
      && *((_DWORD *)v12 + 19) == *((_DWORD *)a1 + 7) )
    {
      v15 = *((_QWORD *)v12 + 6);
      if ( (v15 & 0x800) == 0 )
      {
        v16 = WdLogNewEntry5_WdAssertion(v15, v13, v14);
        WdLogEvent5_WdAssertion(v16);
        v15 = *((_QWORD *)v12 + 6);
      }
      v19 = *((_QWORD *)v12 + 24);
      if ( (v15 & 0x4000000000000LL) == 0 )
      {
        v17 = WdLogNewEntry5_WdAssertion(v15, v13, v14);
        WdLogEvent5_WdAssertion(v17);
      }
      v18 = *((_DWORD *)v12 + 58);
      i = v10;
      result = ConvertDisplayConfigPathIntoExistingPathModalityAtIdx(
                 (unsigned __int64)a1,
                 v10,
                 0xFFFFFFFFLL,
                 0,
                 0,
                 *a2,
                 a3);
      if ( (int)result < 0 )
      {
        *(_DWORD *)a4 = 34;
        return result;
      }
      *((_DWORD *)v12 + 58) = v18;
      *((_QWORD *)v12 + 6) |= 0x4000000000000uLL;
    }
    else
    {
      result = ConvertDisplayConfigScalingToPathModalityForPath(
                 a1,
                 (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v12 + 48),
                 a3);
      if ( (int)result < 0 )
      {
        *(_DWORD *)a4 = 35;
        return result;
      }
    }
    v9 = *a2;
  }
  if ( i < *((unsigned __int16 *)v9 + 10) && v19 == *((_QWORD *)v9 + 34 * i + 24) )
    return 0LL;
  *(_DWORD *)a4 = 33;
  return 3221225485LL;
}
