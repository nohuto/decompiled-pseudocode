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

NTSTATUS __fastcall sub_18005BB70(__int64 a1, const WCHAR *a2, __int64 a3, __int64 a4)
{
  NTSTATUS result; // eax
  PWCH Buffer; // rbx
  _UNICODE_STRING Destination; // [rsp+40h] [rbp-C0h] BYREF
  char v11; // [rsp+50h] [rbp-B0h] BYREF

  if ( (unsigned __int8)sub_18005BCFC() )
    return -1073740959;
  if ( !a1 || !a2 || !a3 )
    return -1073741811;
  *(_DWORD *)&Destination.Length = 46006272;
  Destination.Buffer = (PWCH)&v11;
  result = RtlAppendUnicodeToString(&Destination, a2);
  if ( result >= 0 )
  {
    Buffer = Destination.Buffer;
    result = sub_18005BC5C(Destination.Buffer);
    if ( result >= 0 )
      return sub_18005BE34(a1, Buffer, 0LL, a3, a4);
  }
  return result;
}
