/*
 * XREFs of RtlSectionTableFromVirtualAddress @ 0x1400F3430
 * Callers:
 *     RtlAddressInSectionTable @ 0x1400F33DC (RtlAddressInSectionTable.c)
 *     KeQueryKvaShadowRegion @ 0x14012B12C (KeQueryKvaShadowRegion.c)
 *     KiShadowProcessorAllocation @ 0x140572D84 (KiShadowProcessorAllocation.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x14067ACB8 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     KeSetTracepoint @ 0x140844E20 (KeSetTracepoint.c)
 *     KiVerifyXcpt15 @ 0x14098E2F0 (KiVerifyXcpt15.c)
 *     CcInitializeBcbProfiler @ 0x14098E324 (CcInitializeBcbProfiler.c)
 *     sub_14098FE9C @ 0x14098FE9C (sub_14098FE9C.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlSectionTableFromVirtualAddress(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // r9
  unsigned int v4; // r10d
  int v5; // edx
  unsigned int v6; // ecx
  unsigned __int64 v8; // rax

  v3 = *(unsigned __int16 *)(a1 + 20) + a1 + 24;
  v4 = *(unsigned __int16 *)(a1 + 6);
  if ( a1 <= 0x7FFFFFFEFFFFLL )
  {
    if ( v3 > 0x7FFFFFFEFFFFLL )
      return 0LL;
    v8 = v3 + 40LL * *(unsigned __int16 *)(a1 + 6);
    if ( v8 < v3 || v8 >= 0x7FFFFFFEFFFFLL )
      return 0LL;
  }
  v5 = 0;
  if ( !*(_WORD *)(a1 + 6) )
    return 0LL;
  while ( 1 )
  {
    v6 = *(_DWORD *)(v3 + 12);
    if ( a3 >= v6 && a3 < *(_DWORD *)(v3 + 16) + v6 )
      break;
    v3 += 40LL;
    if ( ++v5 >= v4 )
      return 0LL;
  }
  return v3;
}
