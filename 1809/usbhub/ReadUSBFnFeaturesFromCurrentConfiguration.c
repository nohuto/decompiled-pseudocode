/*
 * XREFs of ReadUSBFnFeaturesFromCurrentConfiguration @ 0x1C005D84C
 * Callers:
 *     UsbDualRoleFeaturesQueryLocalMachine @ 0x1C005DB08 (UsbDualRoleFeaturesQueryLocalMachine.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_Sd @ 0x1C0056C48 (WPP_RECORDER_SF_Sd.c)
 *     WPP_RECORDER_SF_SS @ 0x1C005C960 (WPP_RECORDER_SF_SS.c)
 *     CheckUSBFnConfiguration @ 0x1C005D14C (CheckUSBFnConfiguration.c)
 *     MyRegOpenKeyForRead @ 0x1C005DD7C (MyRegOpenKeyForRead.c)
 *     MyRegQueryString @ 0x1C005DDE4 (MyRegQueryString.c)
 */

__int64 __fastcall ReadUSBFnFeaturesFromCurrentConfiguration(_DWORD *a1, char a2)
{
  const wchar_t *v2; // rsi
  int v4; // ebx
  int String; // eax
  __int64 v6; // r8
  wchar_t *v7; // rdi
  HANDLE Handle; // [rsp+70h] [rbp+18h] BYREF
  PVOID P; // [rsp+78h] [rbp+20h]

  Handle = 0LL;
  P = 0LL;
  v2 = L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\USBFN\\Default";
  if ( !a2 )
    v2 = L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\USBFN";
  v4 = MyRegOpenKeyForRead(a1, v2, &Handle);
  if ( v4 >= 0 )
  {
    String = MyRegQueryString(Handle);
    v7 = (wchar_t *)P;
    v4 = String;
    if ( String >= 0 )
    {
      WPP_RECORDER_SF_SS(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        v6,
        0x20u,
        (__int64)&WPP_f97431189f293d3cb2a45283ac710ff5_Traceguids,
        v2,
        (const wchar_t *)P);
      ZwClose(Handle);
      Handle = 0LL;
      v4 = CheckUSBFnConfiguration(a1, v7);
    }
    else
    {
      WPP_RECORDER_SF_Sd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        v6,
        0x1Fu,
        (__int64)&WPP_f97431189f293d3cb2a45283ac710ff5_Traceguids,
        v2,
        String);
    }
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
  }
  else
  {
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      1u,
      0x1Du,
      (__int64)&WPP_f97431189f293d3cb2a45283ac710ff5_Traceguids,
      v4);
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v4;
}
