/*
 * XREFs of PsGetProcessSectionBaseAddress @ 0x1400EA070
 * Callers:
 *     EtwpQueryProcessOtherInfo @ 0x1406846BC (EtwpQueryProcessOtherInfo.c)
 *     PopEtGetProcessImageInfo @ 0x1406871D8 (PopEtGetProcessImageInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessSectionBaseAddress(__int64 a1)
{
  return *(_QWORD *)(a1 + 968);
}
