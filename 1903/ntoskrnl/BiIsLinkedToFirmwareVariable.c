/*
 * XREFs of BiIsLinkedToFirmwareVariable @ 0x14073E0BC
 * Callers:
 *     BiDeleteElement @ 0x14073C8D8 (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x14073D70C (BcdSetElementDataWithFlags.c)
 *     BcdCreateObject @ 0x14092E478 (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x14092E510 (BcdDeleteObject.c)
 * Callees:
 *     BiGetFirmwareType @ 0x14073E0F0 (BiGetFirmwareType.c)
 *     BiIsLinkedToEfiVariable @ 0x140931E48 (BiIsLinkedToEfiVariable.c)
 */

char __fastcall BiIsLinkedToFirmwareVariable(__int64 a1, __int64 a2)
{
  if ( (unsigned int)BiGetFirmwareType() == 2 )
    return BiIsLinkedToEfiVariable(a1, a2);
  else
    return 0;
}
