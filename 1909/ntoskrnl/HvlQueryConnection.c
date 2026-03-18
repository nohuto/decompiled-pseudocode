/*
 * XREFs of HvlQueryConnection @ 0x140147F60
 * Callers:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x14001AC90 (RtlpLookupFunctionEntryForStackWalks.c)
 *     EtwpSysModuleRunDown @ 0x14070A0E8 (EtwpSysModuleRunDown.c)
 *     HvlPhase0Initialize @ 0x14078A70C (HvlPhase0Initialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlQueryConnection(_QWORD *a1)
{
  if ( !HvlpHypercallCodeVa )
    return 3221225473LL;
  if ( a1 )
    *a1 = HvlpHypercallCodeVa;
  return 0LL;
}
