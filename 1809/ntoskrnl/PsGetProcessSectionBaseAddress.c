/*
 * XREFs of PsGetProcessSectionBaseAddress @ 0x1400EED80
 * Callers:
 *     EtwpQueryProcessOtherInfo @ 0x14066C9EC (EtwpQueryProcessOtherInfo.c)
 *     PopEtGetProcessImageInfo @ 0x14069F5AC (PopEtGetProcessImageInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessSectionBaseAddress(__int64 a1)
{
  return *(_QWORD *)(a1 + 960);
}
