/*
 * XREFs of BiIsLinkedToFirmwareVariable @ 0x140713CD8
 * Callers:
 *     BiDeleteElement @ 0x14071259C (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x140713370 (BcdSetElementDataWithFlags.c)
 *     BcdCreateObject @ 0x1408F07E8 (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x1408F0880 (BcdDeleteObject.c)
 * Callees:
 *     BiGetFirmwareType @ 0x140713D0C (BiGetFirmwareType.c)
 *     BiIsLinkedToEfiVariable @ 0x1408F4178 (BiIsLinkedToEfiVariable.c)
 */

char __fastcall BiIsLinkedToFirmwareVariable(__int64 a1, __int64 a2)
{
  if ( (unsigned int)BiGetFirmwareType() == 2 )
    return BiIsLinkedToEfiVariable(a1, a2);
  else
    return 0;
}
