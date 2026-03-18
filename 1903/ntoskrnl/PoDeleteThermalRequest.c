/*
 * XREFs of PoDeleteThermalRequest @ 0x1408A3930
 * Callers:
 *     <none>
 * Callees:
 *     PoDestroyReasonContext @ 0x1400ECD28 (PoDestroyReasonContext.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PopDeactiveThermalRequest @ 0x1408A3BB8 (PopDeactiveThermalRequest.c)
 */

void __fastcall PoDeleteThermalRequest(_QWORD **P)
{
  PopDeactiveThermalRequest();
  PoDestroyReasonContext(P[3]);
  ExFreePoolWithTag(P, 0x6C6F4350u);
}
