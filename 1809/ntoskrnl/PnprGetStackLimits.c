/*
 * XREFs of PnprGetStackLimits @ 0x14028A3E8
 * Callers:
 *     PnprRecopyMirrorPages @ 0x14028A758 (PnprRecopyMirrorPages.c)
 *     PnprQuiesceProcessorDpc @ 0x14057A350 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     KeQueryCurrentStackInformation @ 0x1400CAB50 (KeQueryCurrentStackInformation.c)
 *     KeGetCurrentStackPointer @ 0x1401BC2A0 (KeGetCurrentStackPointer.c)
 */

bool __fastcall PnprGetStackLimits(char **a1, unsigned __int64 *a2)
{
  int v4; // [rsp+30h] [rbp+8h] BYREF
  char *v5; // [rsp+40h] [rbp+18h] BYREF

  *a1 = KeGetCurrentStackPointer();
  return KeQueryCurrentStackInformation(&v4, &v5, a2);
}
