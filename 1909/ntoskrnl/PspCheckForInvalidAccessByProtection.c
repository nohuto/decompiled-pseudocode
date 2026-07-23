/*
 * XREFs of PspCheckForInvalidAccessByProtection @ 0x1406B8AB0
 * Callers:
 *     NtCreateUserProcess @ 0x140617920 (NtCreateUserProcess.c)
 *     PsTestProtectedProcessIncompatibility @ 0x1406B8A5C (PsTestProtectedProcessIncompatibility.c)
 * Callees:
 *     RtlTestProtectedAccess @ 0x1406B8AE0 (RtlTestProtectedAccess.c)
 */

char __fastcall PspCheckForInvalidAccessByProtection(char a1, PS_PROTECTION a2, PS_PROTECTION a3)
{
  char v3; // r9
  BOOLEAN v4; // al

  v3 = 0;
  if ( a1 )
  {
    v4 = RtlTestProtectedAccess(a2, a3);
    if ( v4 == v3 )
      return 1;
  }
  return v3;
}
