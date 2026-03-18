/*
 * XREFs of SePrivilegedServiceAuditAlarm @ 0x1405CF3DC
 * Callers:
 *     ObpAdjustCreatorAccessState @ 0x1405C5C18 (ObpAdjustCreatorAccessState.c)
 *     PsOpenProcess @ 0x1405CFD00 (PsOpenProcess.c)
 *     RtlpNewSecurityObject @ 0x1405D9CE0 (RtlpNewSecurityObject.c)
 *     ObpCreateHandle @ 0x1405F3220 (ObpCreateHandle.c)
 *     SeCheckAuditPrivilege @ 0x140621B98 (SeCheckAuditPrivilege.c)
 *     SeSinglePrivilegeCheckEx @ 0x140672D8C (SeSinglePrivilegeCheckEx.c)
 *     PspSetQuotaLimits @ 0x1406D8200 (PspSetQuotaLimits.c)
 * Callees:
 *     RtlEqualSid @ 0x1400053E0 (RtlEqualSid.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140621840 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepFilterPrivilegeAudits @ 0x1406D1C3C (SepFilterPrivilegeAudits.c)
 */

BOOLEAN __fastcall SePrivilegedServiceAuditAlarm(int a1, __int64 *a2, __int64 a3, char a4)
{
  __int64 v4; // rdi
  __int64 v9; // rax
  void *v10; // rsi
  BOOLEAN result; // al
  PSE_EXPORTS v12; // rbp

  v4 = *a2;
  v9 = *a2;
  if ( !*a2 )
    v9 = a2[2];
  v10 = **(void ***)(v9 + 152);
  result = RtlEqualSid(SeLocalSystemSid, v10);
  if ( !result )
  {
    v12 = SeExports;
    if ( !RtlEqualSid(SeExports->SeNetworkServiceSid, v10) && !RtlEqualSid(v12->SeLocalServiceSid, v10) )
      return SepAdtPrivilegedServiceAuditAlarm((_DWORD)a2, (unsigned int)&SeSubsystemName, a1, v4, a2[2], a3, a4);
    result = SepFilterPrivilegeAudits(1LL, a3);
    if ( result )
      return SepAdtPrivilegedServiceAuditAlarm((_DWORD)a2, (unsigned int)&SeSubsystemName, a1, v4, a2[2], a3, a4);
  }
  return result;
}
