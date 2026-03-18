/*
 * XREFs of ?IsObjectPublic@@YAPEAUtagPUBOBJ@@PEAX@Z @ 0x1C02096F8
 * Callers:
 *     ?AddPublicObject@@YAHIPEAXK@Z @ 0x1C02093A4 (-AddPublicObject@@YAHIPEAXK@Z.c)
 *     ?xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C0209E2C (-xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020AB50 (-xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020AE50 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     <none>
 */

void **__fastcall IsObjectPublic(void *a1)
{
  void **result; // rax

  for ( result = (void **)gpPublicObjectList; result && result[1] != a1; result = (void **)*result )
    ;
  return result;
}
