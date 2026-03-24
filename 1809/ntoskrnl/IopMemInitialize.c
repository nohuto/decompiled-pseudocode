/*
 * XREFs of IopMemInitialize @ 0x1407379B8
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409C7608 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbAddMmConfigRangeAsBootReserved @ 0x140737BE0 (ArbAddMmConfigRangeAsBootReserved.c)
 *     RtlAddRange @ 0x1407386F0 (RtlAddRange.c)
 *     ArbAddInaccessibleAllocationRange @ 0x140738F40 (ArbAddInaccessibleAllocationRange.c)
 *     ArbInitializeArbiterInstance @ 0x14073911C (ArbInitializeArbiterInstance.c)
 */

int __fastcall IopMemInitialize(__int64 a1, int a2)
{
  int result; // eax

  qword_1404348D8 = (__int64)&IopGenericUnpackRequirement;
  qword_1404348E0 = (__int64)IopGenericPackResource;
  qword_1404348E8 = (__int64)IopGenericUnpackResource;
  qword_1404348F0 = (__int64)IopGenericScoreRequirement;
  qword_140434958 = (__int64)IopMemFindSuitableRange;
  qword_140434928 = (__int64)IopMemQueryConflict;
  result = ArbInitializeArbiterInstance((unsigned int)&IopRootMemArbiter, a2, 3, (unsigned int)L"RootMemory");
  if ( result >= 0 )
  {
    result = RtlAddRange(RangeList, 0LL, 0xFFFuLL, 0, 0, 0LL, 0LL);
    if ( result >= 0 )
    {
      result = ArbAddInaccessibleAllocationRange(&IopRootMemArbiter, RangeList);
      if ( result >= 0 )
        return ArbAddMmConfigRangeAsBootReserved(&IopRootMemArbiter, RangeList);
    }
  }
  return result;
}
