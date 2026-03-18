/*
 * XREFs of UpdatePTPConfigFromRegistry @ 0x1C0128B50
 * Callers:
 *     <none>
 * Callees:
 *     ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x1C00AC468 (-OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z.c)
 *     ?ReadPointerDeviceCfgDWORDSetting@@YAJPEAXPEAUtagDEVICECONFIG_SETTING@@@Z @ 0x1C01197FC (-ReadPointerDeviceCfgDWORDSetting@@YAJPEAXPEAUtagDEVICECONFIG_SETTING@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 UpdatePTPConfigFromRegistry()
{
  PCWSTR *v1; // rbx
  _DWORD *v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  struct tagDEVICECONFIG_SETTING near **v7; // rbx
  unsigned int v8; // ecx
  void *v9; // rbp
  void *v10; // [rsp+50h] [rbp+8h] BYREF

  if ( gTouchPadMonitor )
    return 1LL;
  v1 = (PCWSTR *)off_1C030C010;
  if ( (int)OpenDeviceCfgKey(
              0x7Au,
              L"\\Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad",
              0x20019u,
              &v10,
              0) < 0 )
    return 0LL;
  v9 = v10;
  v3 = 13LL;
  v2 = (_DWORD *)v1 + 3;
  do
  {
    if ( (int)ReadPointerDeviceCfgDWORDSetting(v9, v1) < 0 )
      *v2 = *(v2 - 1);
    v1 += 2;
    v2 += 4;
    --v3;
  }
  while ( v3 );
  ZwClose(v9);
  v7 = off_1C030C010;
  if ( *((_DWORD *)off_1C030C010 + 7) )
    gTouchPadParameters[3] |= 4u;
  if ( *((_DWORD *)v7 + 11) )
    gTouchPadParameters[3] |= 8u;
  v8 = *((_DWORD *)v7 + 3);
  if ( v8 <= 4 )
    gTouchPadParameters[2] = v8;
  if ( (unsigned __int8)IsValidMouseSensitivity(*((unsigned int *)v7 + 31), v4, v5, v6) )
    gTouchPadParameters[4] = *((_DWORD *)v7 + 31);
  if ( *((_DWORD *)v7 + 15) )
    gTouchPadParameters[3] |= 0x80u;
  if ( *((_DWORD *)v7 + 19) )
    gTouchPadParameters[3] |= 0x100u;
  if ( *((_DWORD *)v7 + 51) )
    gTouchPadParameters[5] |= 0x80u;
  if ( !*((_DWORD *)v7 + 35) )
    gTouchPadParameters[5] &= ~1u;
  if ( !*((_DWORD *)v7 + 39) )
    gTouchPadParameters[5] &= ~2u;
  if ( !*((_DWORD *)v7 + 43) )
    gTouchPadParameters[5] &= ~4u;
  if ( !*((_DWORD *)v7 + 23) )
    gTouchPadParameters[3] &= ~0x200u;
  if ( !*((_DWORD *)v7 + 27) )
    gTouchPadParameters[3] &= ~0x400u;
  if ( !*((_DWORD *)v7 + 47) )
    gTouchPadParameters[5] &= ~0x40u;
  gTouchPadMonitor = 1;
  gTouchPadParameters[0] = 0;
  return 1LL;
}
