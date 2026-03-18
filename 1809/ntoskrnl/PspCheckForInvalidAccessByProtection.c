/*
 * XREFs of PspCheckForInvalidAccessByProtection @ 0x140609270
 * Callers:
 *     PsTestProtectedProcessIncompatibility @ 0x14060921C (PsTestProtectedProcessIncompatibility.c)
 *     NtCreateUserProcess @ 0x14060A950 (NtCreateUserProcess.c)
 * Callees:
 *     RtlTestProtectedAccess @ 0x1406092A0 (RtlTestProtectedAccess.c)
 */

char __fastcall PspCheckForInvalidAccessByProtection(__int64 a1, __int64 a2, char a3)
{
  char v3; // r9
  char v4; // al
  char v5; // al

  v3 = 0;
  v4 = a2;
  if ( (_BYTE)a1 )
  {
    LOBYTE(a2) = a3;
    LOBYTE(a1) = v4;
    v5 = RtlTestProtectedAccess(a1, a2);
    if ( v5 == v3 )
      return 1;
  }
  return v3;
}
