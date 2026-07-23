/*
 * XREFs of RtlLookupElementGenericTable @ 0x180064880
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800648C8 @ 0x1800648C8 (sub_1800648C8.c)
 *     RtlSplay @ 0x180064960 (RtlSplay.c)
 */

PVOID __cdecl RtlLookupElementGenericTable(PRTL_GENERIC_TABLE Table, PVOID Buffer)
{
  PRTL_SPLAY_LINKS v3; // rbx
  PRTL_SPLAY_LINKS Links; // [rsp+40h] [rbp+18h] BYREF

  if ( (unsigned int)sub_1800648C8(Table, Buffer, &Links) != 1 )
    return 0LL;
  v3 = Links;
  Table->TableRoot = RtlSplay(Links);
  return &v3[1].RightChild;
}
