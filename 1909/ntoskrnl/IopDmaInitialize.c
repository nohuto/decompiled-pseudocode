/*
 * XREFs of IopDmaInitialize @ 0x140765A48
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409F8468 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x1407670FC (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopDmaInitialize(__int64 a1, int a2)
{
  qword_14045FFD8 = (__int64)IopIrqUnpackRequirement;
  qword_14045FFE0 = (__int64)IopDmaPackResource;
  qword_14045FFE8 = (__int64)IopDmaUnpackResource;
  qword_14045FFF0 = (__int64)IopDmaScoreRequirement;
  qword_140460070 = (__int64)IopDmaOverrideConflict;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootDmaArbiter, a2, 4, (unsigned int)L"RootDMA");
}
