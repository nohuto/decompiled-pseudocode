/*
 * XREFs of HvlQueryConnection @ 0x1401478C0
 * Callers:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x14001A8A0 (RtlpLookupFunctionEntryForStackWalks.c)
 *     EtwpSysModuleRunDown @ 0x140708308 (EtwpSysModuleRunDown.c)
 *     HvlPhase0Initialize @ 0x1407882AC (HvlPhase0Initialize.c)
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
