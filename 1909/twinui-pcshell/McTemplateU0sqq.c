/*
 * XREFs of McTemplateU0sqq @ 0x18042417C
 * Callers:
 *     ?CreateRemoteProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x1804238C0 (-CreateRemoteProxy@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 *     ?GetMessageProxy@MessageProxyReconnectAdapter@@UEAAJPEAPEAUIMessageProxy@@@Z @ 0x180423B60 (-GetMessageProxy@MessageProxyReconnectAdapter@@UEAAJPEAPEAUIMessageProxy@@@Z.c)
 *     ?Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z @ 0x180424298 (-Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z.c)
 * Callees:
 *     McGenEventWrite @ 0x18003AA0C (McGenEventWrite.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0sqq(__int64 a1, __int64 a2, const char *a3, int a4, char a5)
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
  v13 = 4LL;
  v12 = &v16;
  v15 = 4LL;
  v14 = &a5;
  if ( !a3 )
    a3 = "NULL";
  v9 = a3;
  return McGenEventWrite(MICROSOFT_WINDOWSPHONE_INPUT_Context, &EhmMessage, (__int64)a3, 4u, &v8);
}
