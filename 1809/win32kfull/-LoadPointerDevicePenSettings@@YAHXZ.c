/*
 * XREFs of ?LoadPointerDevicePenSettings@@YAHXZ @ 0x1C0132D40
 * Callers:
 *     ReadPointerDeviceSettings @ 0x1C00AA230 (ReadPointerDeviceSettings.c)
 *     GetPenDoubleClickTime @ 0x1C01F6800 (GetPenDoubleClickTime.c)
 *     GetPenHoldTime @ 0x1C01F6840 (GetPenHoldTime.c)
 * Callees:
 *     ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x1C00AC468 (-OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z.c)
 *     ?ReadPointerDeviceCfgDWORDSetting@@YAJPEAXPEAUtagDEVICECONFIG_SETTING@@@Z @ 0x1C01197FC (-ReadPointerDeviceCfgDWORDSetting@@YAJPEAXPEAUtagDEVICECONFIG_SETTING@@@Z.c)
 */

__int64 LoadPointerDevicePenSettings(void)
{
  PCWSTR *v0; // rbx
  __int64 result; // rax
  _DWORD *v2; // rdi
  __int64 v3; // rsi
  void *v4; // rbp
  void *v5; // [rsp+40h] [rbp+8h] BYREF

  v0 = (PCWSTR *)off_1C030C040;
  if ( (int)OpenDeviceCfgKey(0x60u, L"\\Software\\Microsoft\\Wisp\\Pen\\SysEventParameters", 0x20019u, &v5, 0) < 0 )
    return 0LL;
  v4 = v5;
  v3 = 8LL;
  v2 = (_DWORD *)v0 + 3;
  do
  {
    if ( (int)ReadPointerDeviceCfgDWORDSetting(v4, v0) < 0 )
      *v2 = -1;
    v0 += 2;
    v2 += 4;
    --v3;
  }
  while ( v3 );
  ZwClose(v4);
  result = 1LL;
  gPenMonitor = 1;
  return result;
}
