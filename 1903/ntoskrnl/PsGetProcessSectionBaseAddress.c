/*
 * XREFs of PsGetProcessSectionBaseAddress @ 0x1400E50D0
 * Callers:
 *     EtwpQueryProcessOtherInfo @ 0x14069114C (EtwpQueryProcessOtherInfo.c)
 *     PopEtGetProcessImageInfo @ 0x140693C68 (PopEtGetProcessImageInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessSectionBaseAddress(__int64 a1)
{
  return *(_QWORD *)(a1 + 968);
}
