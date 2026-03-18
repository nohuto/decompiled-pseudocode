/*
 * XREFs of PspGetProcessProtectionRequirementsFromImage @ 0x140608F94
 * Callers:
 *     NtCreateUserProcess @ 0x14060A950 (NtCreateUserProcess.c)
 *     PspCreateProcess @ 0x14075DE30 (PspCreateProcess.c)
 * Callees:
 *     MiSectionControlArea @ 0x140075E70 (MiSectionControlArea.c)
 *     RtlTestProtectedAccess @ 0x1406092A0 (RtlTestProtectedAccess.c)
 */

__int64 __fastcall PspGetProcessProtectionRequirementsFromImage(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rdx
  char v3; // r9
  char *v4; // r11
  __int64 v5; // rcx
  char v7; // r10
  char v8; // r9

  v1 = MiSectionControlArea(a1);
  v5 = *(_QWORD *)v1;
  if ( (*(_BYTE *)(*(_QWORD *)v1 + 15LL) & 0xF0) == 0x50 )
  {
    v7 = -127;
    if ( v3 )
    {
      if ( v3 != -127 )
      {
        LOBYTE(v2) = -127;
        LOBYTE(v5) = v3;
        if ( (unsigned __int8)RtlTestProtectedAccess(v5, v2) )
          v7 = v8;
      }
    }
    v3 = v7;
  }
  *v4 = v3;
  return 0LL;
}
