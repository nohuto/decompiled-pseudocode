/*
 * XREFs of BiIsLinkedToFirmwareVariable @ 0x140714F78
 * Callers:
 *     BiDeleteElement @ 0x14071383C (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x140714610 (BcdSetElementDataWithFlags.c)
 *     BcdCreateObject @ 0x1408F1AA8 (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x1408F1B40 (BcdDeleteObject.c)
 * Callees:
 *     BiGetFirmwareType @ 0x140714FAC (BiGetFirmwareType.c)
 *     BiIsLinkedToEfiVariable @ 0x1408F5438 (BiIsLinkedToEfiVariable.c)
 */

char __fastcall BiIsLinkedToFirmwareVariable(__int64 a1, __int64 a2)
{
  if ( (unsigned int)BiGetFirmwareType() == 2 )
    return BiIsLinkedToEfiVariable(a1, a2);
  else
    return 0;
}
