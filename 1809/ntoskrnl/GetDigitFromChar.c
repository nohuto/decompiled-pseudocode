/*
 * XREFs of GetDigitFromChar @ 0x1408A8910
 * Callers:
 *     GetOperandValue @ 0x1408A8A98 (GetOperandValue.c)
 *     LocalGetRelativeAttributeForString @ 0x1408AA564 (LocalGetRelativeAttributeForString.c)
 * Callees:
 *     <none>
 */

char __fastcall GetDigitFromChar(__int16 a1, _BYTE *a2)
{
  char v2; // cl

  if ( (unsigned __int16)(a1 - 48) <= 9u )
  {
    v2 = a1 - 48;
LABEL_3:
    *a2 = v2;
    return 1;
  }
  if ( (unsigned __int16)(a1 - 65) <= 5u )
  {
    v2 = a1 - 55;
    goto LABEL_3;
  }
  if ( (unsigned __int16)(a1 - 97) <= 5u )
  {
    v2 = a1 - 87;
    goto LABEL_3;
  }
  if ( a1 == 35 )
  {
    *a2 = 0;
    return 1;
  }
  return 0;
}
