/*
 * XREFs of PnprGetStackLimits @ 0x1402A04C4
 * Callers:
 *     PnprRecopyMirrorPages @ 0x1402A0844 (PnprRecopyMirrorPages.c)
 *     PnprQuiesceProcessorDpc @ 0x1405AA170 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     KeQueryCurrentStackInformation @ 0x14001BBD0 (KeQueryCurrentStackInformation.c)
 *     KeGetCurrentStackPointer @ 0x1401C4D80 (KeGetCurrentStackPointer.c)
 */

__int64 __fastcall PnprGetStackLimits(char **a1, __int64 a2)
{
  char v4; // [rsp+30h] [rbp+8h] BYREF
  char v5; // [rsp+40h] [rbp+18h] BYREF

  *a1 = KeGetCurrentStackPointer();
  return KeQueryCurrentStackInformation((__int64)&v4, (__int64)&v5, a2);
}
