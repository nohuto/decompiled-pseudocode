/*
 * XREFs of LdrpInitializePolicy @ 0x18007F434
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 * Callees:
 *     AppModelPolicy_GetPolicy_Internal @ 0x180069D78 (AppModelPolicy_GetPolicy_Internal.c)
 *     LdrSetDefaultDllDirectories @ 0x18007F5A0 (LdrSetDefaultDllDirectories.c)
 */

__int64 LdrpInitializePolicy()
{
  __int64 result; // rax
  __int128 *v1; // rcx
  char v2; // dl
  __int128 v3; // xmm0
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int16 v7; // [rsp+30h] [rbp-38h] BYREF
  __int64 v8; // [rsp+38h] [rbp-30h] BYREF
  __int16 v9; // [rsp+40h] [rbp-28h] BYREF
  __int64 v10; // [rsp+48h] [rbp-20h] BYREF
  _WORD v11[12]; // [rsp+50h] [rbp-18h] BYREF
  int v12; // [rsp+80h] [rbp+18h] BYREF
  __int64 v13; // [rsp+88h] [rbp+20h] BYREF
  __int16 v14; // [rsp+90h] [rbp+28h] BYREF
  __int64 v15; // [rsp+98h] [rbp+30h] BYREF

  result = (__int64)NtCurrentPeb();
  v1 = (__int128 *)(*(_QWORD *)(result + 32) + 80LL);
  LdrpAppPackagesPath = 0uLL;
  LdrpOriginalAppPackagesPath = 0uLL;
  v2 = *(_BYTE *)(result + 3);
  if ( (v2 & 0x10) != 0 && *(_WORD *)v1 )
  {
    v3 = *v1;
    LdrpPolicyBits = 41;
    LdrpAppPackagesPath = v3;
    LdrpOriginalAppPackagesPath = v3;
    if ( (int)AppModelPolicy_GetPolicy_Internal((__int64)v1, 4, &v12, &v14, &v13) < 0 || v12 == 262145 )
      LdrSetDefaultDllDirectories(4096LL);
    else
      LdrpPolicyBits &= ~1u;
    if ( (int)AppModelPolicy_GetPolicy_Internal(v4, 7, &v12, &v7, &v15) >= 0 && v12 == 458753 )
      LdrpPolicyBits |= 2u;
    if ( (int)AppModelPolicy_GetPolicy_Internal(v5, 19, &v12, &v9, &v8) >= 0 && v12 == 1245185 )
      LdrpPolicyBits |= 0x40u;
    result = (unsigned int)AppModelPolicy_GetPolicy_Internal(v6, 32, &v12, v11, &v10) | 0x10000000;
    if ( (int)result >= 0 && v12 == 2097153 )
      LdrpPolicyBits |= 4u;
  }
  else if ( (v2 & 2) != 0 )
  {
    *(_WORD *)v1 = 0;
  }
  else if ( *(_WORD *)v1 )
  {
    return LdrSetDllDirectory();
  }
  return result;
}
