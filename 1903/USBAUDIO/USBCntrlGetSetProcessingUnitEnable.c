/*
 * XREFs of USBCntrlGetSetProcessingUnitEnable @ 0x1C002EDF0
 * Callers:
 *     TopologyProcessProcessUnit @ 0x1C0024C20 (TopologyProcessProcessUnit.c)
 *     TopologyProcessExtensionUnit @ 0x1C0024D20 (TopologyProcessExtensionUnit.c)
 * Callees:
 *     USBCntrlGetSetProcessingUnitValue @ 0x1C002ED70 (USBCntrlGetSetProcessingUnitValue.c)
 */

__int64 __fastcall USBCntrlGetSetProcessingUnitEnable(__int64 a1, __int64 a2, UCHAR a3, void *a4)
{
  return USBCntrlGetSetProcessingUnitValue(a1, a2, a3, 1, a4, 1u);
}
