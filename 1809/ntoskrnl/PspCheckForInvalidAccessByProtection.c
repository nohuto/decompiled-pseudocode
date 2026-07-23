/*
 * XREFs of PspCheckForInvalidAccessByProtection @ 0x14060A270
 * Callers:
 *     PsTestProtectedProcessIncompatibility @ 0x14060A21C (PsTestProtectedProcessIncompatibility.c)
 *     NtCreateUserProcess @ 0x14060B950 (NtCreateUserProcess.c)
 * Callees:
 *     RtlTestProtectedAccess @ 0x14060A2A0 (RtlTestProtectedAccess.c)
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
