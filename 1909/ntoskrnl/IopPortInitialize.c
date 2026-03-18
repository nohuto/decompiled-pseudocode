/*
 * XREFs of IopPortInitialize @ 0x1407658CC
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409F8468 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x1407670FC (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopPortInitialize(__int64 a1, int a2)
{
  qword_1404601B8 = (__int64)IopPortFindSuitableRange;
  qword_1404601C0 = (__int64)IopPortAddAllocation;
  qword_1404601C8 = (__int64)IopPortBacktrackAllocation;
  qword_140460138 = (__int64)&IopGenericUnpackRequirement;
  qword_140460140 = (__int64)IopGenericPackResource;
  qword_140460148 = (__int64)IopGenericUnpackResource;
  qword_140460150 = (__int64)IopGenericScoreRequirement;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootPortArbiter, a2, 1, (unsigned int)L"RootPort");
}
