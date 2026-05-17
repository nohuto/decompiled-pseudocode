/*
 * XREFs of __chkstk @ 0x1800A1730
 * Callers:
 *     RtlUnwind @ 0x18001AD60 (RtlUnwind.c)
 *     RtlUnwindEx @ 0x18001D490 (RtlUnwindEx.c)
 *     RtlRaiseException @ 0x18006A4F0 (RtlRaiseException.c)
 *     sub_18006A670 @ 0x18006A670 (sub_18006A670.c)
 *     RtlWow64GetProcessMachines @ 0x180078240 (RtlWow64GetProcessMachines.c)
 *     RtlQueryWnfStateData @ 0x18007C570 (RtlQueryWnfStateData.c)
 *     RtlWow64IsWowGuestMachineSupported @ 0x18007EC10 (RtlWow64IsWowGuestMachineSupported.c)
 *     RtlQueryWnfStateDataWithExplicitScope @ 0x180082FE0 (RtlQueryWnfStateDataWithExplicitScope.c)
 *     sub_18009AB58 @ 0x18009AB58 (sub_18009AB58.c)
 *     sub_1800D16F0 @ 0x1800D16F0 (sub_1800D16F0.c)
 *     sub_1800D8B78 @ 0x1800D8B78 (sub_1800D8B78.c)
 *     RtlValidateProcessHeaps @ 0x1800EFA30 (RtlValidateProcessHeaps.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall _chkstk()
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
