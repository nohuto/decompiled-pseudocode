/*
 * XREFs of ?LoadPointerDeviceTouchSettings@@YAHXZ @ 0x1C0132370
 * Callers:
 *     ReadPointerDeviceSettings @ 0x1C00AA230 (ReadPointerDeviceSettings.c)
 *     ?GetTouchTimeFromCPLValue@@YAKKKKH@Z @ 0x1C01F6290 (-GetTouchTimeFromCPLValue@@YAKKKKH@Z.c)
 * Callees:
 *     ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x1C00AC468 (-OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z.c)
 *     ?ReadPointerDeviceCfgDWORDSetting@@YAJPEAXPEAUtagDEVICECONFIG_SETTING@@@Z @ 0x1C01197FC (-ReadPointerDeviceCfgDWORDSetting@@YAJPEAXPEAUtagDEVICECONFIG_SETTING@@@Z.c)
 */

__int64 LoadPointerDeviceTouchSettings(void)
{
  PCWSTR *v0; // rbx
  __int64 result; // rax
  _DWORD *v2; // rdi
  __int64 v3; // rsi
  struct tagDEVICECONFIG_SETTING *v4; // rdi
  HANDLE v5; // rbx
  HANDLE v6; // rbp
  HANDLE Handle; // [rsp+50h] [rbp+8h] BYREF

  if ( !gTouchMonitor )
  {
    v0 = (PCWSTR *)off_1C030C060;
    if ( (int)OpenDeviceCfgKey(0x3Eu, L"\\Software\\Microsoft\\Wisp\\Touch", 0x20019u, &Handle, 0) < 0 )
      return 0LL;
    v2 = (_DWORD *)v0 + 3;
    v6 = Handle;
    v3 = 13LL;
    do
    {
      if ( (int)ReadPointerDeviceCfgDWORDSetting(v6, v0) < 0 )
        *v2 = -1;
      v0 += 2;
      v2 += 4;
      --v3;
    }
    while ( v3 );
    ZwClose(v6);
  }
  if ( !gMultiTouchMonitor )
  {
    v4 = off_1C030C050;
    if ( (int)OpenDeviceCfgKey(0x48u, L"\\Software\\Microsoft\\Wisp\\MultiTouch", 0x20019u, &Handle, 0) < 0 )
      return 0LL;
    v5 = Handle;
    if ( (int)ReadPointerDeviceCfgDWORDSetting(Handle, (PCWSTR *)v4) < 0 )
      *((_DWORD *)v4 + 3) = -1;
    ZwClose(v5);
  }
  gTouchMonitor = 1;
  result = 1LL;
  gMultiTouchMonitor = 1;
  return result;
}
