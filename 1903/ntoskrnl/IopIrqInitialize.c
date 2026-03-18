/*
 * XREFs of IopIrqInitialize @ 0x1407610B4
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409F8558 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x1407626EC (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopIrqInitialize(__int64 a1, int a2)
{
  qword_140460198 = (__int64)IopIrqUnpackRequirement;
  qword_1404601A0 = (__int64)IopIrqPackResource;
  qword_1404601A8 = (__int64)IopIrqUnpackResource;
  qword_1404601B0 = (__int64)IopIrqScoreRequirement;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootIrqArbiter, a2, 2, (unsigned int)L"RootIRQ");
}
