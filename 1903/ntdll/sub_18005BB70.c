/*
 * XREFs of sub_18005BB70 @ 0x18005BB70
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180017900 (LdrLoadAlternateResourceModuleEx.c)
 *     sub_18005A298 @ 0x18005A298 (sub_18005A298.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x180015120 (RtlAppendUnicodeToString.c)
 *     sub_18005BC5C @ 0x18005BC5C (sub_18005BC5C.c)
 *     sub_18005BCFC @ 0x18005BCFC (sub_18005BCFC.c)
 *     sub_18005BE34 @ 0x18005BE34 (sub_18005BE34.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18005BB70(__int64 a1, _WORD *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  wchar_t *v9; // rbx
  int v10; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t *String1; // [rsp+48h] [rbp-B8h]
  char v12; // [rsp+50h] [rbp-B0h] BYREF

  if ( (unsigned __int8)sub_18005BCFC() )
    return 3221226337LL;
  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  v10 = 46006272;
  String1 = (wchar_t *)&v12;
  result = RtlAppendUnicodeToString((unsigned __int16 *)&v10, a2);
  if ( (int)result >= 0 )
  {
    v9 = String1;
    result = sub_18005BC5C(String1);
    if ( (int)result >= 0 )
      return sub_18005BE34(a1, v9, 0LL, a3, a4);
  }
  return result;
}
