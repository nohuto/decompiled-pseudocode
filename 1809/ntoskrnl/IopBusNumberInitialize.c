/*
 * XREFs of IopBusNumberInitialize @ 0x140737B98
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409C7608 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x14073913C (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopBusNumberInitialize(__int64 a1, int a2)
{
  qword_140434358 = (__int64)IopBusNumberUnpackRequirement;
  qword_140434360 = (__int64)IopBusNumberPackResource;
  qword_140434368 = (__int64)IopBusNumberUnpackResource;
  qword_140434370 = (__int64)IopBusNumberScoreRequirement;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootBusNumberArbiter, a2, 6, (unsigned int)L"RootBusNumber");
}
