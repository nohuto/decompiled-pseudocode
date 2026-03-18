/*
 * XREFs of IopMemInitialize @ 0x140760F5C
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409F8558 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbAddMmConfigRangeAsBootReserved @ 0x140761184 (ArbAddMmConfigRangeAsBootReserved.c)
 *     RtlAddRange @ 0x140761CB0 (RtlAddRange.c)
 *     ArbAddInaccessibleAllocationRange @ 0x140762500 (ArbAddInaccessibleAllocationRange.c)
 *     ArbInitializeArbiterInstance @ 0x1407626EC (ArbInitializeArbiterInstance.c)
 */

int __fastcall IopMemInitialize(__int64 a1, int a2)
{
  int result; // eax

  qword_140460458 = (__int64)&IopGenericUnpackRequirement;
  qword_140460460 = (__int64)IopGenericPackResource;
  qword_140460468 = (__int64)IopGenericUnpackResource;
  qword_140460470 = (__int64)IopGenericScoreRequirement;
  qword_1404604D8 = (__int64)IopMemFindSuitableRange;
  qword_1404604A8 = (__int64)IopMemQueryConflict;
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
