/*
 * XREFs of RtlpAddKnownAce @ 0x180014974
 * Callers:
 *     RtlDefaultNpAcl @ 0x180001E70 (RtlDefaultNpAcl.c)
 *     RtlCheckTokenCapability @ 0x18000E960 (RtlCheckTokenCapability.c)
 *     RtlAddAccessAllowedAce @ 0x1800127B0 (RtlAddAccessAllowedAce.c)
 *     RtlCheckTokenMembershipEx @ 0x180013340 (RtlCheckTokenMembershipEx.c)
 *     RtlAddAccessAllowedAceEx @ 0x18007A490 (RtlAddAccessAllowedAceEx.c)
 *     RtlAddAccessDeniedAceEx @ 0x1800852C0 (RtlAddAccessDeniedAceEx.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x180086F48 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlAddAccessDeniedObjectAce @ 0x180088720 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessObjectAce @ 0x180088770 (RtlAddAuditAccessObjectAce.c)
 *     RtlAddAccessAllowedObjectAce @ 0x1800887D0 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAuditAccessAceEx @ 0x18008A110 (RtlAddAuditAccessAceEx.c)
 *     RtlAddAuditAccessAce @ 0x18008B760 (RtlAddAuditAccessAce.c)
 *     RtlAddAccessDeniedAce @ 0x18008BF90 (RtlAddAccessDeniedAce.c)
 * Callees:
 *     RtlCopySid @ 0x180014AC0 (RtlCopySid.c)
 *     RtlFirstFreeAce @ 0x180014B00 (RtlFirstFreeAce.c)
 *     RtlValidSid @ 0x180014E00 (RtlValidSid.c)
 *     RtlValidAcl @ 0x180014E40 (RtlValidAcl.c)
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
