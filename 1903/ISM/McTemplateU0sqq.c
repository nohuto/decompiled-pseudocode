/*
 * XREFs of McTemplateU0sqq @ 0x18005A684
 * Callers:
 *     ?CreateRemoteProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x180013F40 (-CreateRemoteProxy@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 *     ?GetMessageProxy@MessageProxyReconnectAdapter@@UEAAJPEAPEAUIMessageProxy@@@Z @ 0x18005A360 (-GetMessageProxy@MessageProxyReconnectAdapter@@UEAAJPEAPEAUIMessageProxy@@@Z.c)
 *     ?RuntimeClassInitialize@HotkeyContextualProcessor@@QEAAJXZ @ 0x180108700 (-RuntimeClassInitialize@HotkeyContextualProcessor@@QEAAJXZ.c)
 *     ?QueryInterface@InputInfoValidator@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180142E00 (-QueryInterface@InputInfoValidator@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z @ 0x180147B0C (-Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z.c)
 *     ?IsProxyInitialized@TextInputStateAdapter@@UEAAJPEA_N@Z @ 0x180148610 (-IsProxyInitialized@TextInputStateAdapter@@UEAAJPEA_N@Z.c)
 *     ?OnConnected@TextInputStateAdapter@@UEAAJPEAUIMessageProxy@@@Z @ 0x180148680 (-OnConnected@TextInputStateAdapter@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ?OnPropertyChanged@TextInputStateAdapter@@UEAAJPEAUIMessageProxy@@G@Z @ 0x180148750 (-OnPropertyChanged@TextInputStateAdapter@@UEAAJPEAUIMessageProxy@@G@Z.c)
 *     ?PropertyChangeHelper@TextInputStateAdapter@@AEAAJG_N@Z @ 0x180148804 (-PropertyChangeHelper@TextInputStateAdapter@@AEAAJG_N@Z.c)
 *     ?RuntimeClassInitialize@TextInputStateAdapter@@QEAAJPEAUITextInputStateAdapterOwner@@@Z @ 0x1801495CC (-RuntimeClassInitialize@TextInputStateAdapter@@QEAAJPEAUITextInputStateAdapterOwner@@@Z.c)
 *     ?SetInterestedProperty@TextInputStateAdapter@@UEAAJG_N@Z @ 0x180149800 (-SetInterestedProperty@TextInputStateAdapter@@UEAAJG_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     McGenEventWrite @ 0x18005A620 (McGenEventWrite.c)
 */

ULONG __fastcall McTemplateU0sqq(__int64 a1, __int64 a2, const char *a3, __int64 a4, char a5)
{
  __int64 v5; // rax
  int v6; // eax
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+30h] [rbp-50h] BYREF
  const char *v9; // [rsp+40h] [rbp-40h]
  int v10; // [rsp+48h] [rbp-38h]
  int v11; // [rsp+4Ch] [rbp-34h]
  int *v12; // [rsp+50h] [rbp-30h]
  __int64 v13; // [rsp+58h] [rbp-28h]
  char *v14; // [rsp+60h] [rbp-20h]
  __int64 v15; // [rsp+68h] [rbp-18h]
  int v16; // [rsp+A8h] [rbp+28h] BYREF

  v16 = a4;
  if ( a3 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a3[v5] );
    v6 = v5 + 1;
  }
  else
  {
    v6 = 5;
  }
  v10 = v6;
  v11 = 0;
  v12 = &v16;
  v13 = 4LL;
  v14 = &a5;
  if ( !a3 )
    a3 = "NULL";
  v9 = a3;
  v15 = 4LL;
  return McGenEventWrite((__int64)"NULL", 0LL, (__int64)a3, a4, &v8);
}
