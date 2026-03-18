/*
 * XREFs of PnprGetStackLimits @ 0x1402A0764
 * Callers:
 *     PnprRecopyMirrorPages @ 0x1402A0AE4 (PnprRecopyMirrorPages.c)
 *     PnprQuiesceProcessorDpc @ 0x1405AA190 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     KeQueryCurrentStackInformation @ 0x14001B7E0 (KeQueryCurrentStackInformation.c)
 *     KeGetCurrentStackPointer @ 0x1401C4200 (KeGetCurrentStackPointer.c)
 */

__int64 __fastcall PnprGetStackLimits(char **a1, __int64 a2)
{
  char v4; // [rsp+30h] [rbp+8h] BYREF
  char v5; // [rsp+40h] [rbp+18h] BYREF

  *a1 = KeGetCurrentStackPointer();
  return KeQueryCurrentStackInformation((__int64)&v4, (__int64)&v5, a2);
}
