/*
 * XREFs of HvlQueryConnection @ 0x14017D060
 * Callers:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x1400A0410 (RtlpLookupFunctionEntryForStackWalks.c)
 *     HvlPhase0Initialize @ 0x1407259C8 (HvlPhase0Initialize.c)
 *     EtwpSysModuleRunDown @ 0x140726A38 (EtwpSysModuleRunDown.c)
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
