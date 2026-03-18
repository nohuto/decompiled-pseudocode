/*
 * XREFs of IopPortInitialize @ 0x140760EC4
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409F8558 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x1407626EC (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopPortInitialize(__int64 a1, int a2)
{
  qword_140460638 = (__int64)IopPortFindSuitableRange;
  qword_140460640 = (__int64)IopPortAddAllocation;
  qword_140460648 = (__int64)IopPortBacktrackAllocation;
  qword_1404605B8 = (__int64)&IopGenericUnpackRequirement;
  qword_1404605C0 = (__int64)IopGenericPackResource;
  qword_1404605C8 = (__int64)IopGenericUnpackResource;
  qword_1404605D0 = (__int64)IopGenericScoreRequirement;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootPortArbiter, a2, 1, (unsigned int)L"RootPort");
}
