/*
 * XREFs of BmlAreRawModesEnabled @ 0x1C00DB678
 * Callers:
 *     BmlDoesTargetModeObeyConstraint @ 0x1C00DB530 (BmlDoesTargetModeObeyConstraint.c)
 *     BmlGetRecommendedContentSizeForPath @ 0x1C02C1A78 (BmlGetRecommendedContentSizeForPath.c)
 *     _BmlGetPathModeListForPath @ 0x1C02C24D8 (_BmlGetPathModeListForPath.c)
 * Callees:
 *     <none>
 */

bool __fastcall BmlAreRawModesEnabled(__int64 a1, unsigned int a2)
{
  return (*(_DWORD *)(a1 + 4) & 0x20000) != 0
      || (*(_DWORD *)(a1 + 8) & 4) != 0
      || (**(_QWORD **)(104LL * a2 + a1 + 16) & 0x80000000000000LL) != 0;
}
