/*
 * XREFs of SePrivilegedServiceAuditAlarm @ 0x14062CE68
 * Callers:
 *     SeCheckAuditPrivilege @ 0x1405BBB28 (SeCheckAuditPrivilege.c)
 *     ObpAdjustCreatorAccessState @ 0x1405C84C8 (ObpAdjustCreatorAccessState.c)
 *     ObpCreateHandle @ 0x1405E12B0 (ObpCreateHandle.c)
 *     SeSinglePrivilegeCheckEx @ 0x1406121AC (SeSinglePrivilegeCheckEx.c)
 *     RtlpNewSecurityObject @ 0x14062D630 (RtlpNewSecurityObject.c)
 *     PsOpenProcess @ 0x1406467E0 (PsOpenProcess.c)
 *     PspSetQuotaLimits @ 0x1406D1118 (PspSetQuotaLimits.c)
 * Callees:
 *     RtlEqualSid @ 0x1400A7DD0 (RtlEqualSid.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x1405BB82C (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepFilterPrivilegeAudits @ 0x1406AE560 (SepFilterPrivilegeAudits.c)
 */

void __fastcall SePrivilegedServiceAuditAlarm(unsigned __int16 *a1, __int64 *a2, int *a3, char a4)
{
  __int64 v4; // rdi
  __int64 v9; // rax
  void *v10; // rsi
  PSE_EXPORTS v11; // rbp

  v4 = *a2;
  v9 = *a2;
  if ( !*a2 )
    v9 = a2[2];
  v10 = **(void ***)(v9 + 152);
  if ( !RtlEqualSid(SeLocalSystemSid, v10) )
  {
    if ( (v11 = SeExports, !RtlEqualSid(SeExports->SeNetworkServiceSid, v10))
      && !RtlEqualSid(v11->SeLocalServiceSid, v10)
      || (unsigned __int8)SepFilterPrivilegeAudits(1LL, a3) )
    {
      SepAdtPrivilegedServiceAuditAlarm((int)a2, &SeSubsystemName, a1, v4, a2[2], a3, a4);
    }
  }
}
