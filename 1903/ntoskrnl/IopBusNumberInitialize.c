/*
 * XREFs of IopBusNumberInitialize @ 0x14076111C
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409F8558 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x1407626EC (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopBusNumberInitialize(__int64 a1, int a2)
{
  qword_140460038 = (__int64)IopBusNumberUnpackRequirement;
  qword_140460040 = (__int64)IopBusNumberPackResource;
  qword_140460048 = (__int64)IopBusNumberUnpackResource;
  qword_140460050 = (__int64)IopBusNumberScoreRequirement;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootBusNumberArbiter, a2, 6, (unsigned int)L"RootBusNumber");
}
