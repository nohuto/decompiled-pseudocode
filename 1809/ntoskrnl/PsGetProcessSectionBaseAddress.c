/*
 * XREFs of PsGetProcessSectionBaseAddress @ 0x1400EEE00
 * Callers:
 *     EtwpQueryProcessOtherInfo @ 0x14066DBAC (EtwpQueryProcessOtherInfo.c)
 *     PopEtGetProcessImageInfo @ 0x1406A086C (PopEtGetProcessImageInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessSectionBaseAddress(__int64 a1)
{
  return *(_QWORD *)(a1 + 960);
}
