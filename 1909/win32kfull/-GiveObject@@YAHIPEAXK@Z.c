/*
 * XREFs of ?GiveObject@@YAHIPEAXK@Z @ 0x1C02096A8
 * Callers:
 *     ?AddPublicObject@@YAHIPEAXK@Z @ 0x1C02093A4 (-AddPublicObject@@YAHIPEAXK@Z.c)
 *     ?RemovePublicObject@@YAHIPEAX@Z @ 0x1C02098D4 (-RemovePublicObject@@YAHIPEAX@Z.c)
 *     ?xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C0209E2C (-xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z @ 0x1C020A374 (-xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z.c)
 *     ?xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020AB50 (-xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020AE50 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GiveObject(int a1, void *a2, unsigned int a3)
{
  int v3; // ecx
  int v4; // ecx

  v3 = a1 - 2;
  if ( !v3 )
  {
LABEL_6:
    GreSetBitmapOwner(a2, a3);
    return 1LL;
  }
  v4 = v3 - 7;
  if ( v4 )
  {
    if ( v4 != 121 )
      return 0LL;
    goto LABEL_6;
  }
  GreSetPaletteOwner(a2, a3);
  return 1LL;
}
