/*
 * XREFs of ReadUSBFnFeaturesFromCurrentConfiguration @ 0x1C003ACC0
 * Callers:
 *     UsbDualRoleFeaturesQueryLocalMachine @ 0x1C003AE14 (UsbDualRoleFeaturesQueryLocalMachine.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_SS @ 0x1C003A3B4 (WPP_RECORDER_SF_SS.c)
 *     WPP_RECORDER_SF_Sd @ 0x1C003A554 (WPP_RECORDER_SF_Sd.c)
 *     CheckUSBFnConfiguration @ 0x1C003AA60 (CheckUSBFnConfiguration.c)
 *     MyRegOpenKeyForRead @ 0x1C003B0E0 (MyRegOpenKeyForRead.c)
 *     MyRegQueryString @ 0x1C003B148 (MyRegQueryString.c)
 */

__int64 __fastcall ReadUSBFnFeaturesFromCurrentConfiguration(_DWORD *a1, char a2)
{
  const wchar_t *v2; // rsi
  int v4; // ebx
  int String; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  wchar_t *v9; // rdi
  int v11; // [rsp+20h] [rbp-38h]
  HANDLE Handle; // [rsp+70h] [rbp+18h] BYREF
  PVOID P; // [rsp+78h] [rbp+20h]

  Handle = 0LL;
  P = 0LL;
  v2 = L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\USBFN";
  if ( a2 )
    v2 = L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\USBFN\\Default";
  v4 = MyRegOpenKeyForRead(a1, v2, &Handle);
  if ( v4 >= 0 )
  {
    String = MyRegQueryString(Handle);
    v9 = (wchar_t *)P;
    v4 = String;
    if ( String >= 0 )
    {
      WPP_RECORDER_SF_SS((__int64)WPP_GLOBAL_Control->DeviceExtension, v6, v7, v8, v11, v2, (const wchar_t *)P);
      ZwClose(Handle);
      Handle = 0LL;
      v4 = CheckUSBFnConfiguration(a1, v9);
    }
    else
    {
      WPP_RECORDER_SF_Sd((__int64)WPP_GLOBAL_Control->DeviceExtension, 3u, v7, 0x1Fu, v11, v2);
    }
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
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
