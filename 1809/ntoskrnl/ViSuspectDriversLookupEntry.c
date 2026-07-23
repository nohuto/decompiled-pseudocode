/*
 * XREFs of ViSuspectDriversLookupEntry @ 0x140938D80
 * Callers:
 *     VfIsDriverSuspect @ 0x140921ED4 (VfIsDriverSuspect.c)
 *     VfDriverEnableVerifier @ 0x140928E78 (VfDriverEnableVerifier.c)
 *     VfSuspectDriversRemove @ 0x140938B30 (VfSuspectDriversRemove.c)
 *     VfSuspectDriversIsLoaded @ 0x1409F991C (VfSuspectDriversIsLoaded.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x140626D60 (RtlEqualUnicodeString.c)
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
