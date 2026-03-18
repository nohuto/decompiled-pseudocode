/*
 * XREFs of ?LoadPointerDevicePenSettings@@YAHXZ @ 0x1C00655A0
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C004A500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ReadPointerDeviceSettings @ 0x1C0069000 (ReadPointerDeviceSettings.c)
 *     GetPenHoldTime @ 0x1C01D1EE0 (GetPenHoldTime.c)
 * Callees:
 *     ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x1C00694D8 (-OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z.c)
 *     ?ReadPointerDeviceCfgDWORDSetting@@YAJPEAXPEAUtagDEVICECONFIG_SETTING@@@Z @ 0x1C0069C7C (-ReadPointerDeviceCfgDWORDSetting@@YAJPEAXPEAUtagDEVICECONFIG_SETTING@@@Z.c)
 */

__int64 LoadPointerDevicePenSettings(void)
{
  struct tagDEVICECONFIG_SETTING *v0; // rbx
  __int64 result; // rax
  _DWORD *v2; // rdi
  __int64 v3; // rsi
  void *v4; // rbp
  void *v5; // [rsp+40h] [rbp+8h] BYREF

  v0 = (struct tagDEVICECONFIG_SETTING *)off_1C031C040;
  if ( OpenDeviceCfgKey(0x60u, L"\\Software\\Microsoft\\Wisp\\Pen\\SysEventParameters", 0x20019u, &v5, 0) < 0 )
    return 0LL;
  v4 = v5;
  v3 = 8LL;
  v2 = (_DWORD *)((char *)v0 + 12);
  do
  {
    if ( (int)ReadPointerDeviceCfgDWORDSetting(v4, v0) < 0 )
      *v2 = -1;
    v0 = (struct tagDEVICECONFIG_SETTING *)((char *)v0 + 16);
    v2 += 4;
    --v3;
  }
  while ( v3 );
  ZwClose(v4);
  result = 1LL;
  gPenMonitor = 1;
  return result;
}
