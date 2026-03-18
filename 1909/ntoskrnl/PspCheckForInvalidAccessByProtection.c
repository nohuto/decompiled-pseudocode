/*
 * XREFs of PspCheckForInvalidAccessByProtection @ 0x1406B8AB0
 * Callers:
 *     NtCreateUserProcess @ 0x140617920 (NtCreateUserProcess.c)
 *     PsTestProtectedProcessIncompatibility @ 0x1406B8A5C (PsTestProtectedProcessIncompatibility.c)
 * Callees:
 *     RtlTestProtectedAccess @ 0x1406B8AE0 (RtlTestProtectedAccess.c)
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
