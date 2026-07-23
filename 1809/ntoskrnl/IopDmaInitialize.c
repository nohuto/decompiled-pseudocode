/*
 * XREFs of IopDmaInitialize @ 0x140738C8C
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409C8608 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x14073A30C (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopDmaInitialize(__int64 a1, int a2)
{
  qword_1404356B8 = (__int64)IopIrqUnpackRequirement;
  qword_1404356C0 = (__int64)IopDmaPackResource;
  qword_1404356C8 = (__int64)IopDmaUnpackResource;
  qword_1404356D0 = (__int64)IopDmaScoreRequirement;
  qword_140435750 = (__int64)IopDmaOverrideConflict;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootDmaArbiter, a2, 4, (unsigned int)L"RootDMA");
}
