/*
 * XREFs of IopIrqInitialize @ 0x140738D00
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409C8608 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x14073A30C (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopIrqInitialize(__int64 a1, int a2)
{
  qword_140435558 = (__int64)IopIrqUnpackRequirement;
  qword_140435560 = (__int64)IopIrqPackResource;
  qword_140435568 = (__int64)IopIrqUnpackResource;
  qword_140435570 = (__int64)IopIrqScoreRequirement;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootIrqArbiter, a2, 2, (unsigned int)L"RootIRQ");
}
