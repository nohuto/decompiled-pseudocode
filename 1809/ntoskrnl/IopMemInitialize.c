/*
 * XREFs of IopMemInitialize @ 0x140738BA8
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409C8608 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbAddMmConfigRangeAsBootReserved @ 0x140738DD0 (ArbAddMmConfigRangeAsBootReserved.c)
 *     RtlAddRange @ 0x1407398E0 (RtlAddRange.c)
 *     ArbAddInaccessibleAllocationRange @ 0x14073A130 (ArbAddInaccessibleAllocationRange.c)
 *     ArbInitializeArbiterInstance @ 0x14073A30C (ArbInitializeArbiterInstance.c)
 */

int __fastcall IopMemInitialize(__int64 a1, int a2)
{
  int result; // eax

  qword_140435978 = (__int64)&IopGenericUnpackRequirement;
  qword_140435980 = (__int64)IopGenericPackResource;
  qword_140435988 = (__int64)IopGenericUnpackResource;
  qword_140435990 = (__int64)IopGenericScoreRequirement;
  qword_1404359F8 = (__int64)IopMemFindSuitableRange;
  qword_1404359C8 = (__int64)IopMemQueryConflict;
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
