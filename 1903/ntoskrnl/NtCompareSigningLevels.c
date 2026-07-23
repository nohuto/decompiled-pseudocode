/*
 * XREFs of NtCompareSigningLevels @ 0x1406EAD80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

NTSTATUS __cdecl NtCompareSigningLevels(SE_SIGNING_LEVEL FirstSigningLevel, SE_SIGNING_LEVEL SecondSigningLevel)
{
  int v2; // eax

  v2 = 0;
  if ( qword_1404364C0 )
    v2 = qword_1404364C0(FirstSigningLevel, SecondSigningLevel);
  return v2 == 0 ? 0xC0000428 : 0;
}
