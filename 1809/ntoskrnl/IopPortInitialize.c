/*
 * XREFs of IopPortInitialize @ 0x140738B10
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409C8608 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x14073A30C (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopPortInitialize(__int64 a1, int a2)
{
  qword_140435898 = (__int64)&IopPortFindSuitableRange;
  qword_1404358A0 = (__int64)IopPortAddAllocation;
  qword_1404358A8 = (__int64)IopPortBacktrackAllocation;
  qword_140435818 = (__int64)&IopGenericUnpackRequirement;
  qword_140435820 = (__int64)IopGenericPackResource;
  qword_140435828 = (__int64)IopGenericUnpackResource;
  qword_140435830 = (__int64)IopGenericScoreRequirement;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootPortArbiter, a2, 1, (unsigned int)L"RootPort");
}
