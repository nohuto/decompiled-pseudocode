/*
 * XREFs of IopDmaInitialize @ 0x140761040
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409F8558 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x1407626EC (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopDmaInitialize(__int64 a1, int a2)
{
  qword_1404602F8 = (__int64)IopIrqUnpackRequirement;
  qword_140460300 = (__int64)IopDmaPackResource;
  qword_140460308 = (__int64)IopDmaUnpackResource;
  qword_140460310 = (__int64)IopDmaScoreRequirement;
  qword_140460390 = (__int64)IopDmaOverrideConflict;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootDmaArbiter, a2, 4, (unsigned int)L"RootDMA");
}
