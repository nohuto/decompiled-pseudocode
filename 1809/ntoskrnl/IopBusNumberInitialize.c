/*
 * XREFs of IopBusNumberInitialize @ 0x140738D68
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409C8608 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x14073A30C (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopBusNumberInitialize(__int64 a1, int a2)
{
  qword_1404353F8 = (__int64)IopBusNumberUnpackRequirement;
  qword_140435400 = (__int64)IopBusNumberPackResource;
  qword_140435408 = (__int64)IopBusNumberUnpackResource;
  qword_140435410 = (__int64)IopBusNumberScoreRequirement;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootBusNumberArbiter, a2, 6, (unsigned int)L"RootBusNumber");
}
