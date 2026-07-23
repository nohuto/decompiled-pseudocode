/*
 * XREFs of BiIsLinkedToEfiVariable @ 0x1408F5438
 * Callers:
 *     BiIsLinkedToFirmwareVariable @ 0x140714F78 (BiIsLinkedToFirmwareVariable.c)
 * Callees:
 *     BiGetObjectDescription @ 0x1407124B4 (BiGetObjectDescription.c)
 */

bool __fastcall BiIsLinkedToEfiVariable(__int64 a1, int *a2)
{
  int v3; // eax
  bool result; // al
  int v5; // [rsp+40h] [rbp+18h] BYREF
  int v6; // [rsp+44h] [rbp+1Ch]

  result = 0;
  if ( (int)BiGetObjectDescription(a1, &v5) >= 0 && (v6 & 0xF0000000) == 0x10000000 && (v6 & 0xF00000) == 0x100000 )
  {
    if ( (v6 & 0xFFFFF) != 2 )
      return 1;
    if ( !a2 )
      return 1;
    v3 = *a2;
    if ( *a2 == 285212673 || v3 == 301989890 || v3 == 301989892 || v3 == 369098882 )
      return 1;
  }
  return result;
}
