/*
 * XREFs of BmlCompareSingleWireFormatType @ 0x1C02C163C
 * Callers:
 *     BmlCompareWireFormat @ 0x1C02C1718 (BmlCompareWireFormat.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BmlCompareSingleWireFormatType(char a1, char a2)
{
  int v2; // edx

  v2 = a2 & 0xC;
  if ( v2 == 0 && (a1 & 0xC) != 0 )
    return 1LL;
  else
    return (unsigned int)-((a1 & 0xC) == 0 && v2 != 0);
}
