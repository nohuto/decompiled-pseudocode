/*
 * XREFs of KiIsTsaMitigationSupported @ 0x1401B489C
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x14018EF30 (KeOptimizeSpecCtrlSettings.c)
 *     KiIsKvaShadowNeededForTsa @ 0x1401B46BC (KiIsKvaShadowNeededForTsa.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x140176CB0 (HviIsAnyHypervisorPresent.c)
 *     KiIsHyperVCr3RspErrataPresent @ 0x1401B4DE8 (KiIsHyperVCr3RspErrataPresent.c)
 */

_BOOL8 __fastcall KiIsTsaMitigationSupported(__int64 a1)
{
  int v2; // ebx
  _QWORD *i; // rcx

  v2 = 0;
  if ( (unsigned int)KiIsHyperVCr3RspErrataPresent() )
    return 0LL;
  if ( (KeFeatureBits2 & 0x100000000000LL) != 0 )
    return 1LL;
  if ( HviIsAnyHypervisorPresent() )
    return 0LL;
  for ( i = &KiVerwClearErrataVersions; *(_DWORD *)i != *(_DWORD *)(a1 + 1736); i += 2 )
  {
    if ( (unsigned int)++v2 >= 0xF )
      return 1LL;
  }
  return *(_QWORD *)(a1 + 25256) >= i[1];
}
