/*
 * XREFs of McTemplateU0sqq @ 0x18000FEA0
 * Callers:
 *     ?GetMessageProxy@MessageProxyReconnectAdapter@@UEAAJPEAPEAUIMessageProxy@@@Z @ 0x180010440 (-GetMessageProxy@MessageProxyReconnectAdapter@@UEAAJPEAPEAUIMessageProxy@@@Z.c)
 *     ?AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x18001070C (-AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 *     ?QueryInterface@InputInfoValidator@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801058D0 (-QueryInterface@InputInfoValidator@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     McGenEventWrite @ 0x18000FE3C (McGenEventWrite.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0sqq(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  const char *v7; // rax
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+30h] [rbp-50h] BYREF
  const char *v10; // [rsp+40h] [rbp-40h]
  int v11; // [rsp+48h] [rbp-38h]
  int v12; // [rsp+4Ch] [rbp-34h]
  int *v13; // [rsp+50h] [rbp-30h]
  __int64 v14; // [rsp+58h] [rbp-28h]
  char *v15; // [rsp+60h] [rbp-20h]
  __int64 v16; // [rsp+68h] [rbp-18h]
  int v17; // [rsp+A8h] [rbp+28h] BYREF

  v17 = a4;
  if ( a3 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( *(_BYTE *)(a3 + v5) );
    v6 = (unsigned int)(v5 + 1);
  }
  else
  {
    v6 = 5LL;
  }
  v11 = v6;
  v7 = "NULL";
  v12 = 0;
  if ( a3 )
    v7 = (const char *)a3;
  v14 = 4LL;
  v10 = v7;
  v13 = &v17;
  v15 = &a5;
  v16 = 4LL;
  return McGenEventWrite(v6, 0LL, a3, a4, &v9);
}
