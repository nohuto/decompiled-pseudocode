/*
 * XREFs of IopDmaInitialize @ 0x140737ABC
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409C7608 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x14073913C (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopDmaInitialize(__int64 a1, int a2)
{
  qword_140434618 = (__int64)IopIrqUnpackRequirement;
  qword_140434620 = (__int64)IopDmaPackResource;
  qword_140434628 = (__int64)IopDmaUnpackResource;
  qword_140434630 = (__int64)IopDmaScoreRequirement;
  qword_1404346B0 = (__int64)IopDmaOverrideConflict;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootDmaArbiter, a2, 4, (unsigned int)L"RootDMA");
}
