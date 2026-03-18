/*
 * XREFs of wcsnlen @ 0x140197870
 * Callers:
 *     _wcslwr_s @ 0x1401959D0 (_wcslwr_s.c)
 *     NtSetInformationJobObject @ 0x140600B10 (NtSetInformationJobObject.c)
 *     RtlpQueryTimeZoneKeyNameRoutine @ 0x140761370 (RtlpQueryTimeZoneKeyNameRoutine.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x14089592C (RtlpSetTimeZoneInformationWorker.c)
 *     EtwSetPerformanceTraceInformation @ 0x1408B9A6C (EtwSetPerformanceTraceInformation.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x1408BB920 (EtwpLoadMicroarchitecturalProfileSource.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x1408F3E04 (BiGetObjectReferenceFromEfiEntry.c)
 *     SiIsValidWindowsBootEntry @ 0x1408F5AA8 (SiIsValidWindowsBootEntry.c)
 * Callees:
 *     <none>
 */

size_t __cdecl wcsnlen(const wchar_t *Src, size_t MaxCount)
{
  size_t result; // rax

  for ( result = 0LL; result < MaxCount; ++Src )
  {
    if ( !*Src )
      break;
    ++result;
  }
  return result;
}
