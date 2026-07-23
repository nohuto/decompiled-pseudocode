/*
 * XREFs of PoDeleteThermalRequest @ 0x140868680
 * Callers:
 *     <none>
 * Callees:
 *     PoDestroyReasonContext @ 0x140003730 (PoDestroyReasonContext.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PopDeactiveThermalRequest @ 0x14086890C (PopDeactiveThermalRequest.c)
 */

void __fastcall PoDeleteThermalRequest(_QWORD **P)
{
  PopDeactiveThermalRequest();
  PoDestroyReasonContext(P[3]);
  ExFreePoolWithTag(P, 0x6C6F4350u);
}
