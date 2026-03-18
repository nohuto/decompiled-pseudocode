/*
 * XREFs of IopBusNumberInitialize @ 0x140765B24
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409F8468 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x1407670FC (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopBusNumberInitialize(__int64 a1, int a2)
{
  qword_14045FD18 = (__int64)IopBusNumberUnpackRequirement;
  qword_14045FD20 = (__int64)IopBusNumberPackResource;
  qword_14045FD28 = (__int64)IopBusNumberUnpackResource;
  qword_14045FD30 = (__int64)IopBusNumberScoreRequirement;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootBusNumberArbiter, a2, 6, (unsigned int)L"RootBusNumber");
}
