/*
 * XREFs of SepInitQuerySigningPolicyExt @ 0x14078C4D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1401C1310 (ZwQuerySystemInformation.c)
 *     RtlCheckRegistryKey @ 0x1406E95B0 (RtlCheckRegistryKey.c)
 */

__int64 __fastcall SepInitQuerySigningPolicyExt(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  unsigned int v3; // ebx
  NTSTATUS SystemInformation; // eax
  __int64 v6; // rax
  _QWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  v3 = 0;
  v7[0] = 0LL;
  v7[1] = 0LL;
  v8 = 0LL;
  SeQuerySigningPolicyExtAllowed = 0;
  SeFailIfExtensionNotSupported = 0;
  SystemInformation = ZwQuerySystemInformation(SystemSecureBootPolicyInformation, v7, 0x18u, 0LL);
  if ( SystemInformation >= 0 )
  {
    SeQuerySigningPolicyExtAllowed = (v8 & 0x4000000000LL) != 0;
    if ( (v8 & 0x4000000000LL) != 0 )
    {
      SeFailIfExtensionNotSupported = 1;
      return 1;
    }
    if ( !qword_140509B40 )
      return 1;
    v6 = *(_QWORD *)((char *)qword_140509B40 + 4) - 0x4754D8390CDAD82ELL;
    if ( *(_QWORD *)((char *)qword_140509B40 + 4) == 0x4754D8390CDAD82ELL )
      v6 = *(_QWORD *)((char *)qword_140509B40 + 12) - 0x2B3182B24A84A189LL;
    if ( v6 || RtlCheckRegistryKey(2u, (PWSTR)L"SecureBoot\\AllowSigningPolicyExtension") < 0 )
      return 1;
LABEL_3:
    SeQuerySigningPolicyExtAllowed = 1;
    return 1;
  }
  if ( SystemInformation == -2143092730 )
    goto LABEL_3;
  return v3;
}
