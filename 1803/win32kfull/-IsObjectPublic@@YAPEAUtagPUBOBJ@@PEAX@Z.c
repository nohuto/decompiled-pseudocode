/*
 * XREFs of ?IsObjectPublic@@YAPEAUtagPUBOBJ@@PEAX@Z @ 0x1C01CF040
 * Callers:
 *     ?AddPublicObject@@YAHIPEAXK@Z @ 0x1C01CED34 (-AddPublicObject@@YAHIPEAXK@Z.c)
 *     ?xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01CF4F4 (-xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01CFD08 (-xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01CFF40 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
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
