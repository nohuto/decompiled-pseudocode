/*
 * XREFs of BiIsLinkedToFirmwareVariable @ 0x14073FFBC
 * Callers:
 *     BiDeleteElement @ 0x14073E7D8 (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x14073F60C (BcdSetElementDataWithFlags.c)
 *     BcdCreateObject @ 0x14092DEEC (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x14092DF84 (BcdDeleteObject.c)
 * Callees:
 *     BiGetFirmwareType @ 0x14073FFF0 (BiGetFirmwareType.c)
 *     BiIsLinkedToEfiVariable @ 0x1409318BC (BiIsLinkedToEfiVariable.c)
 */

char __fastcall BiIsLinkedToFirmwareVariable(__int64 a1, __int64 a2)
{
  if ( (unsigned int)BiGetFirmwareType() == 2 )
    return BiIsLinkedToEfiVariable(a1, a2);
  else
    return 0;
}
