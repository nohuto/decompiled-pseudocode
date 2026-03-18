/*
 * XREFs of ReadManifestAssignedValue @ 0x1C003A7F4
 * Callers:
 *     UsbDualRoleFeaturesQueryLocalMachine @ 0x1C003AE14 (UsbDualRoleFeaturesQueryLocalMachine.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     MyRegOpenKeyForRead @ 0x1C003B0E0 (MyRegOpenKeyForRead.c)
 *     MyRegQueryUlong @ 0x1C003B300 (MyRegQueryUlong.c)
 */

NTSTATUS __fastcall ReadManifestAssignedValue(int *a1)
{
  int Ulong; // eax
  unsigned __int16 v3; // r9
  NTSTATUS result; // eax
  int v5; // [rsp+28h] [rbp-10h]
  int v6; // [rsp+28h] [rbp-10h]
  HANDLE Handle; // [rsp+40h] [rbp+8h] BYREF

  Handle = 0LL;
  *a1 = 0;
  Ulong = MyRegOpenKeyForRead(a1, L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\USB", &Handle);
  if ( Ulong < 0 )
  {
    v3 = 17;
LABEL_3:
    v5 = Ulong;
    result = WPP_RECORDER_SF_d(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               2u,
               1u,
               v3,
               (__int64)&WPP_f97431189f293d3cb2a45283ac710ff5_Traceguids,
               v5);
    goto LABEL_7;
  }
  Ulong = MyRegQueryUlong(Handle);
  if ( Ulong < 0 )
  {
    v3 = 18;
    goto LABEL_3;
  }
  v6 = *a1;
  result = WPP_RECORDER_SF_d(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             4u,
             1u,
             0x13u,
             (__int64)&WPP_f97431189f293d3cb2a45283ac710ff5_Traceguids,
             v6);
LABEL_7:
  if ( Handle )
    return ZwClose(Handle);
  return result;
}
