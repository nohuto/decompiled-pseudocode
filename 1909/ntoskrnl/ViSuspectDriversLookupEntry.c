/*
 * XREFs of ViSuspectDriversLookupEntry @ 0x1409603F8
 * Callers:
 *     VfIsDriverSuspect @ 0x1409603A8 (VfIsDriverSuspect.c)
 *     VfDriverEnableVerifier @ 0x140966398 (VfDriverEnableVerifier.c)
 *     VfSuspectDriversRemove @ 0x140977414 (VfSuspectDriversRemove.c)
 *     VfSuspectDriversIsLoaded @ 0x140A3E228 (VfSuspectDriversIsLoaded.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x140666E20 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall ViSuspectDriversLookupEntry(PCUNICODE_STRING String2)
{
  __int64 i; // rbx

  for ( i = VfSuspectDriversList; ; i = *(_QWORD *)i )
  {
    if ( (__int64 *)i == &VfSuspectDriversList )
      return 0LL;
    if ( RtlEqualUnicodeString((PCUNICODE_STRING)(i + 24), String2, 1u) )
      break;
  }
  return i;
}
