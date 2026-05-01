/*
 * XREFs of ?HampSystemEdpQueryDplEnforcedPolicyOwnerIds@@YAJPEAT_RM_SID@@PEAPEAG@Z @ 0x180072DD8
 * Callers:
 *     ?HampHostShouldDplPolicyApply@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180077BDC (-HampHostShouldDplPolicyApply@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     memset_0 @ 0x1800492AA (memset_0.c)
 */

__int64 __fastcall HampSystemEdpQueryDplEnforcedPolicyOwnerIds(PSID Sid, unsigned __int16 **a2)
{
  __int64 result; // rax
  int v5; // [rsp+20h] [rbp-1B8h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+28h] [rbp-1B0h] BYREF
  _BYTE v7[384]; // [rsp+40h] [rbp-198h] BYREF

  memset_0(v7, 0, 0x176uLL);
  *(_QWORD *)&UnicodeString.Length = 24510464LL;
  UnicodeString.Buffer = (PWSTR)v7;
  RtlConvertSidToUnicodeString(&UnicodeString, Sid, 0);
  result = EdpDplPolicyEnabledForUser(UnicodeString.Buffer, &v5);
  if ( (int)result >= 0 && v5 )
  {
    result = EdpQueryDplEnforcedPolicyOwnerIds(UnicodeString.Buffer, a2);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
