/*
 * XREFs of BiIsLinkedToFirmwareVariable @ 0x140713CF8
 * Callers:
 *     BiDeleteElement @ 0x1407125BC (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x140713390 (BcdSetElementDataWithFlags.c)
 *     BcdCreateObject @ 0x1408F0808 (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x1408F08A0 (BcdDeleteObject.c)
 * Callees:
 *     BiGetFirmwareType @ 0x140713D2C (BiGetFirmwareType.c)
 *     BiIsLinkedToEfiVariable @ 0x1408F4198 (BiIsLinkedToEfiVariable.c)
 */

char __fastcall BiIsLinkedToFirmwareVariable(__int64 a1, __int64 a2)
{
  if ( (unsigned int)BiGetFirmwareType() == 2 )
    return BiIsLinkedToEfiVariable(a1, a2);
  else
    return 0;
}
