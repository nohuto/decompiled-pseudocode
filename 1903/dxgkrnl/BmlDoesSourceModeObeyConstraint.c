/*
 * XREFs of BmlDoesSourceModeObeyConstraint @ 0x1C00DB9EC
 * Callers:
 *     BmlGetNextBestSourceMode @ 0x1C00DB424 (BmlGetNextBestSourceMode.c)
 *     BmlCompareSourceModesWithConstraint @ 0x1C00DB920 (BmlCompareSourceModesWithConstraint.c)
 *     _BmlGetPathModeListForPath @ 0x1C02C2418 (_BmlGetPathModeListForPath.c)
 * Callees:
 *     ?BmlCompareModeExtents@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1C00DB7C4 (-BmlCompareModeExtents@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 *     BmlIsSupportedSourceMode @ 0x1C00DBAD4 (BmlIsSupportedSourceMode.c)
 */

bool __fastcall BmlDoesSourceModeObeyConstraint(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v4; // rbp
  __int64 *v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r10
  bool result; // al
  int v10; // eax

  v4 = 104LL * (unsigned __int16)a2;
  v6 = *(__int64 **)(a1 + v4 + 16);
  LOBYTE(a2) = (*v6 & 0x18000000100LL) == 0 && (*(_DWORD *)(a1 + 4) & 0x40000) == 0;
  if ( (*v6 & 0x10000000100LL) != 0 )
    v7 = (unsigned int)(*((_BYTE *)v6 + 128) != 0) + 1;
  else
    v7 = (*(_DWORD *)(a1 + 4) & 0x40000 | 0x20000u) >> 17;
  result = 0;
  if ( (unsigned __int8)BmlIsSupportedSourceMode(a3, a2, v7, 0x40000LL) )
  {
    v8 = *v6;
    if ( ((*v6 & 0x4000000000LL) == 0 || !(unsigned int)BmlCompareModeExtents((int *)(v4 + a1 + 52), a3 + 19))
      && ((v8 & 0x8000000100LL) == 0 || (v10 = *((_DWORD *)v6 + 29)) == 0 || a3[24] == v10)
      && ((v6[1] & 0x100) == 0
       || a3[19] == *((_DWORD *)v6 + 24) && a3[20] == *((_DWORD *)v6 + 25) && a3[24] == *((_DWORD *)v6 + 29)) )
    {
      return 1;
    }
  }
  return result;
}
