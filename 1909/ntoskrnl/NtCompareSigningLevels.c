/*
 * XREFs of NtCompareSigningLevels @ 0x1406EC040
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

NTSTATUS __cdecl NtCompareSigningLevels(SE_SIGNING_LEVEL FirstSigningLevel, SE_SIGNING_LEVEL SecondSigningLevel)
{
  int v2; // eax

  v2 = 0;
  if ( qword_140436440 )
    v2 = qword_140436440(FirstSigningLevel, SecondSigningLevel);
  return v2 == 0 ? 0xC0000428 : 0;
}
