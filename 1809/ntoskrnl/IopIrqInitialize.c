/*
 * XREFs of IopIrqInitialize @ 0x140737B10
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409C7608 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x14073911C (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopIrqInitialize(__int64 a1, int a2)
{
  qword_1404344B8 = (__int64)IopIrqUnpackRequirement;
  qword_1404344C0 = (__int64)IopIrqPackResource;
  qword_1404344C8 = (__int64)IopIrqUnpackResource;
  qword_1404344D0 = (__int64)IopIrqScoreRequirement;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootIrqArbiter, a2, 2, (unsigned int)L"RootIRQ");
}
