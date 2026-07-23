/*
 * XREFs of LdrpInitializePolicy @ 0x18007F434
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 * Callees:
 *     AppModelPolicy_GetPolicy_Internal @ 0x180069D78 (AppModelPolicy_GetPolicy_Internal.c)
 *     LdrSetDefaultDllDirectories @ 0x18007F5A0 (LdrSetDefaultDllDirectories.c)
 */

int LdrpInitializePolicy()
{
  struct _PEB *v0; // rax
  _UNICODE_STRING *p_DllPath; // rcx
  unsigned __int8 BitField; // dl
  __int128 v3; // xmm0
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  _PS_PKG_CLAIM v8; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v9; // [rsp+38h] [rbp-30h] BYREF
  _PS_PKG_CLAIM v10; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 v11; // [rsp+48h] [rbp-20h] BYREF
  _PS_PKG_CLAIM v12; // [rsp+50h] [rbp-18h] BYREF
  int v13; // [rsp+80h] [rbp+18h] BYREF
  unsigned __int64 v14; // [rsp+88h] [rbp+20h] BYREF
  _PS_PKG_CLAIM v15; // [rsp+90h] [rbp+28h] BYREF
  unsigned __int64 v16; // [rsp+98h] [rbp+30h] BYREF

  v0 = NtCurrentPeb();
  p_DllPath = &v0->ProcessParameters->DllPath;
  LdrpAppPackagesPath = 0uLL;
  LdrpOriginalAppPackagesPath = 0uLL;
  BitField = v0->BitField;
  if ( (BitField & 0x10) != 0 && p_DllPath->Length )
  {
    v3 = (__int128)*p_DllPath;
    LdrpPolicyBits = 41;
    LdrpAppPackagesPath = v3;
    LdrpOriginalAppPackagesPath = v3;
    if ( (int)AppModelPolicy_GetPolicy_Internal((__int64)p_DllPath, 4, &v13, &v15, &v14) < 0 || v13 == 262145 )
      LdrSetDefaultDllDirectories(0x1000u);
    else
      LdrpPolicyBits &= ~1u;
    if ( (int)AppModelPolicy_GetPolicy_Internal(v4, 7, &v13, &v8, &v16) >= 0 && v13 == 458753 )
      LdrpPolicyBits |= 2u;
    if ( (int)AppModelPolicy_GetPolicy_Internal(v5, 19, &v13, &v10, &v9) >= 0 && v13 == 1245185 )
      LdrpPolicyBits |= 0x40u;
    LODWORD(v0) = AppModelPolicy_GetPolicy_Internal(v6, 32, &v13, &v12, &v11) | 0x10000000;
    if ( (int)v0 >= 0 && v13 == 2097153 )
      LdrpPolicyBits |= 4u;
  }
  else if ( (BitField & 2) != 0 )
  {
    p_DllPath->Length = 0;
  }
  else if ( p_DllPath->Length )
  {
    LODWORD(v0) = LdrSetDllDirectory(p_DllPath);
  }
  return (int)v0;
}
