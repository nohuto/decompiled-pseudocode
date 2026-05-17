/*
 * XREFs of LdrpInitializePolicy @ 0x1800833F8
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180040650 (RtlInitUnicodeString.c)
 *     AppModelPolicy_GetPolicy_Internal @ 0x18007455C (AppModelPolicy_GetPolicy_Internal.c)
 *     LdrSetDefaultDllDirectories @ 0x180083560 (LdrSetDefaultDllDirectories.c)
 *     LdrSetDllDirectory @ 0x1800835A0 (LdrSetDllDirectory.c)
 */

char LdrpInitializePolicy()
{
  struct _PEB *v0; // rbx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rdi
  __int64 v2; // rcx
  int Policy_Internal; // eax
  UNICODE_STRING DllPath; // xmm0
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int16 v9; // [rsp+30h] [rbp-30h] BYREF
  __int64 v10; // [rsp+38h] [rbp-28h] BYREF
  __int16 v11; // [rsp+40h] [rbp-20h] BYREF
  __int64 v12; // [rsp+48h] [rbp-18h] BYREF
  _WORD v13[8]; // [rsp+50h] [rbp-10h] BYREF
  int v14; // [rsp+80h] [rbp+20h] BYREF
  __int64 v15; // [rsp+88h] [rbp+28h] BYREF
  __int16 v16; // [rsp+90h] [rbp+30h] BYREF
  __int64 v17; // [rsp+98h] [rbp+38h] BYREF

  v0 = NtCurrentPeb();
  ProcessParameters = v0->ProcessParameters;
  RtlInitUnicodeString(&LdrpAppPackagesPath, 0LL);
  RtlInitUnicodeString(&LdrpOriginalAppPackagesPath, 0LL);
  LOBYTE(Policy_Internal) = v0->BitField;
  if ( (Policy_Internal & 0x10) != 0 && ProcessParameters->DllPath.Length )
  {
    DllPath = ProcessParameters->DllPath;
    LdrpPolicyBits = 41;
    LdrpAppPackagesPath = DllPath;
    LdrpOriginalAppPackagesPath = DllPath;
    if ( (int)AppModelPolicy_GetPolicy_Internal(v2, 4, &v14, &v16, &v15) < 0 || v14 == 262145 )
      LdrSetDefaultDllDirectories(4096LL);
    else
      LdrpPolicyBits &= ~1u;
    if ( (int)AppModelPolicy_GetPolicy_Internal(v5, 7, &v14, &v9, &v17) >= 0 && v14 == 458753 )
      LdrpPolicyBits |= 2u;
    if ( (int)AppModelPolicy_GetPolicy_Internal(v6, 19, &v14, &v11, &v10) >= 0 && v14 == 1245185 )
      LdrpPolicyBits |= 0x40u;
    Policy_Internal = AppModelPolicy_GetPolicy_Internal(v7, 32, &v14, v13, &v12);
    if ( Policy_Internal >= 0 && v14 == 2097153 )
      LdrpPolicyBits |= 4u;
  }
  else if ( (Policy_Internal & 2) != 0 )
  {
    ProcessParameters->DllPath.Length = 0;
  }
  else if ( ProcessParameters->DllPath.Length )
  {
    LOBYTE(Policy_Internal) = LdrSetDllDirectory(&ProcessParameters->DllPath);
  }
  return Policy_Internal;
}
