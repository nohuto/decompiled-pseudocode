/*
 * XREFs of RtlSetGroupSecurityDescriptor @ 0x180044F70
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x180041770 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x180046140 (RtlCheckTokenCapability.c)
 *     RtlCheckSandboxedToken @ 0x180071FC0 (RtlCheckSandboxedToken.c)
 *     RtlCreateAndSetSD @ 0x180072450 (RtlCreateAndSetSD.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSetGroupSecurityDescriptor(__int64 a1, __int64 a2, char a3)
{
  __int16 v4; // cx
  __int64 v5; // rax
  __int16 v6; // cx

  if ( *(_BYTE *)a1 != 1 )
    return 3221225560LL;
  v4 = *(_WORD *)(a1 + 2);
  if ( v4 < 0 )
    return 3221225593LL;
  v5 = 0LL;
  if ( a2 )
    v5 = a2;
  *(_QWORD *)(a1 + 16) = v5;
  v6 = v4 & 0xFFFD;
  *(_WORD *)(a1 + 2) = v6;
  if ( a3 )
    *(_WORD *)(a1 + 2) = v6 | 2;
  return 0LL;
}
