/*
 * XREFs of IopPortInitialize @ 0x140737920
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409C7608 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x14073911C (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopPortInitialize(__int64 a1, int a2)
{
  qword_1404347F8 = (__int64)&IopPortFindSuitableRange;
  qword_140434800 = (__int64)IopPortAddAllocation;
  qword_140434808 = (__int64)IopPortBacktrackAllocation;
  qword_140434778 = (__int64)&IopGenericUnpackRequirement;
  qword_140434780 = (__int64)IopGenericPackResource;
  qword_140434788 = (__int64)IopGenericUnpackResource;
  qword_140434790 = (__int64)IopGenericScoreRequirement;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootPortArbiter, a2, 1, (unsigned int)L"RootPort");
}
