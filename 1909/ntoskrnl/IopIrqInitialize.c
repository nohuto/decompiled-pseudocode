/*
 * XREFs of IopIrqInitialize @ 0x140765ABC
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409F8468 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x1407670FC (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopIrqInitialize(__int64 a1, int a2)
{
  qword_14045FE78 = (__int64)IopIrqUnpackRequirement;
  qword_14045FE80 = (__int64)IopIrqPackResource;
  qword_14045FE88 = (__int64)IopIrqUnpackResource;
  qword_14045FE90 = (__int64)IopIrqScoreRequirement;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootIrqArbiter, a2, 2, (unsigned int)L"RootIRQ");
}
