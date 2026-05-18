/*
 * XREFs of sub_1800D57C0 @ 0x1800D57C0
 * Callers:
 *     sub_180067A00 @ 0x180067A00 (sub_180067A00.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1800D57C0(__int64 a1)
{
  char result; // al

  result = *(_BYTE *)(a1 + 184);
  if ( result )
    return sub_1800D572C(a1, *(_QWORD *)(a1 + 192));
  return result;
}
