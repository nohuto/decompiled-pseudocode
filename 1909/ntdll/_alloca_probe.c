/*
 * XREFs of _alloca_probe @ 0x1800A1EE0
 * Callers:
 *     RtlUnwind @ 0x18001AD60 (RtlUnwind.c)
 *     RtlUnwindEx @ 0x18001D490 (RtlUnwindEx.c)
 *     RtlRaiseException @ 0x18006A740 (RtlRaiseException.c)
 *     RtlDispatchException @ 0x18006A8C0 (RtlDispatchException.c)
 *     RtlWow64GetProcessMachines @ 0x1800786C0 (RtlWow64GetProcessMachines.c)
 *     RtlQueryWnfStateData @ 0x18007CC10 (RtlQueryWnfStateData.c)
 *     RtlWow64IsWowGuestMachineSupported @ 0x18007F2B0 (RtlWow64IsWowGuestMachineSupported.c)
 *     RtlQueryWnfStateDataWithExplicitScope @ 0x180083680 (RtlQueryWnfStateDataWithExplicitScope.c)
 *     ReadStringDelimited_1 @ 0x18009B1F8 (ReadStringDelimited_1.c)
 *     LdrpInitializeExecutionOptions @ 0x1800D17B0 (LdrpInitializeExecutionOptions.c)
 *     AVrfInitializeVerifier @ 0x1800D8C38 (AVrfInitializeVerifier.c)
 *     RtlValidateProcessHeaps @ 0x1800EFB10 (RtlValidateProcessHeaps.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall alloca_probe()
{
  unsigned __int64 result; // rax
  char *v1; // r10
  char *StackLimit; // r11
  char v3; // [rsp+18h] [rbp+8h] BYREF

  v1 = &v3 - result;
  if ( (unsigned __int64)&v3 < result )
    v1 = 0LL;
  StackLimit = (char *)NtCurrentTeb()->NtTib.StackLimit;
  if ( v1 < StackLimit )
  {
    LOWORD(v1) = (unsigned __int16)v1 & 0xF000;
    do
      StackLimit -= 4096;
    while ( v1 < StackLimit );
  }
  return result;
}
