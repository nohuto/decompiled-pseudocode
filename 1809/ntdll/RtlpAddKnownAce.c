/*
 * XREFs of RtlpAddKnownAce @ 0x180040C44
 * Callers:
 *     RtlDefaultNpAcl @ 0x180002040 (RtlDefaultNpAcl.c)
 *     RtlCheckTokenMembershipEx @ 0x180041770 (RtlCheckTokenMembershipEx.c)
 *     RtlAddAccessAllowedAce @ 0x180042830 (RtlAddAccessAllowedAce.c)
 *     RtlCheckTokenCapability @ 0x180046140 (RtlCheckTokenCapability.c)
 *     RtlAddAccessAllowedAceEx @ 0x18007E8F0 (RtlAddAccessAllowedAceEx.c)
 *     RtlAddAuditAccessAceEx @ 0x180086550 (RtlAddAuditAccessAceEx.c)
 *     RtlAddAccessDeniedAceEx @ 0x180088EF0 (RtlAddAccessDeniedAceEx.c)
 *     RtlAddAccessDeniedObjectAce @ 0x18008B0E0 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessObjectAce @ 0x18008B130 (RtlAddAuditAccessObjectAce.c)
 *     RtlAddAccessAllowedObjectAce @ 0x18008B190 (RtlAddAccessAllowedObjectAce.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x18008CFA8 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlAddAuditAccessAce @ 0x18008E6E0 (RtlAddAuditAccessAce.c)
 *     RtlAddAccessDeniedAce @ 0x18008F380 (RtlAddAccessDeniedAce.c)
 * Callees:
 *     RtlCopySid @ 0x180040D90 (RtlCopySid.c)
 *     RtlFirstFreeAce @ 0x180040DD0 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x180040E30 (RtlValidAcl.c)
 *     RtlValidSid @ 0x1800411A0 (RtlValidSid.c)
 */

__int64 __fastcall RtlpAddKnownAce(char *a1, unsigned int a2, int a3, int a4, __int64 a5, char a6)
{
  unsigned __int8 v10; // bp
  unsigned int v11; // eax
  __int64 v12; // rdx
  unsigned __int16 v13; // r9
  __int64 result; // rax
  _QWORD v15[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !(unsigned __int8)RtlValidSid(a5) )
    return 3221225592LL;
  if ( (unsigned __int8)*a1 > 4u || a2 > 4 )
    return 3221225561LL;
  v10 = *a1;
  if ( (unsigned __int8)*a1 <= (unsigned __int8)a2 )
    v10 = a2;
  v11 = a3 & 0xFFFFFFE0;
  if ( (a3 & 0xFFFFFFE0) != 0 )
  {
    if ( a6 == 2 )
    {
      v11 = a3 & 0xFFFFFF20;
    }
    else if ( !a6 )
    {
      v11 = a3 & 0xFFFFFFC0;
    }
    if ( v11 )
      return 3221225485LL;
  }
  if ( !(unsigned __int8)RtlValidAcl(a1) || !(unsigned __int8)RtlFirstFreeAce(a1, v15) )
    return 3221225591LL;
  v12 = v15[0];
  v13 = 4 * (*(unsigned __int8 *)(a5 + 1) + 4);
  if ( !v15[0] || v15[0] + (unsigned __int64)v13 > (unsigned __int64)&a1[*((unsigned __int16 *)a1 + 1)] )
    return 3221225625LL;
  *(_BYTE *)(v15[0] + 1LL) = a3;
  *(_BYTE *)v12 = a6;
  *(_WORD *)(v12 + 2) = v13;
  *(_DWORD *)(v12 + 4) = a4;
  RtlCopySid(4 * (unsigned int)*(unsigned __int8 *)(a5 + 1) + 8, v12 + 8, a5);
  ++*((_WORD *)a1 + 2);
  result = 0LL;
  *a1 = v10;
  return result;
}
