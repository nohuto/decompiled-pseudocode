/*
 * XREFs of PsGetProcessSectionBaseAddress @ 0x1400EED60
 * Callers:
 *     EtwpQueryProcessOtherInfo @ 0x14066CA0C (EtwpQueryProcessOtherInfo.c)
 *     PopEtGetProcessImageInfo @ 0x14069F5CC (PopEtGetProcessImageInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessSectionBaseAddress(__int64 a1)
{
  return *(_QWORD *)(a1 + 960);
}
