/*
 * XREFs of sub_1801043F4 @ 0x1801043F4
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180075100 (RtlQueryProcessDebugInformation.c)
 *     sub_1800F085C @ 0x1800F085C (sub_1800F085C.c)
 * Callees:
 *     ZwPowerInformation @ 0x18009D2B0 (ZwPowerInformation.c)
 */

NTSTATUS __fastcall sub_1801043F4(HANDLE Handle)
{
  HANDLE InputBuffer; // [rsp+30h] [rbp-28h] BYREF
  int v4; // [rsp+38h] [rbp-20h]
  char v5; // [rsp+3Ch] [rbp-1Ch]
  __int64 v6; // [rsp+40h] [rbp-18h]

  InputBuffer = Handle;
  v4 = 3;
  v5 = 0;
  v6 = 0LL;
  ZwPowerInformation(PowerRequestAction, &InputBuffer, 0x18u, 0LL, 0);
  return ZwClose(Handle);
}
