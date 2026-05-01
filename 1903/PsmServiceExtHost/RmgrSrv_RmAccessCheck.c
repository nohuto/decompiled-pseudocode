/*
 * XREFs of RmgrSrv_RmAccessCheck @ 0x18003BD80
 * Callers:
 *     <none>
 * Callees:
 *     ?RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x18000A738 (-RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     memset_0 @ 0x1800492AA (memset_0.c)
 */

__int64 __fastcall RmgrSrv_RmAccessCheck(RPC_BINDING_HANDLE ClientBinding, unsigned int a2, unsigned int a3)
{
  unsigned int v6; // r9d
  unsigned int v8; // [rsp+30h] [rbp-D0h] BYREF
  int v9; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v10; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v11; // [rsp+3Ch] [rbp-C4h] BYREF
  _DWORD RpcCallAttributes[2]; // [rsp+40h] [rbp-C0h] BYREF
  char v13[56]; // [rsp+48h] [rbp-B8h] BYREF
  int v14; // [rsp+80h] [rbp-80h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int *v16; // [rsp+D0h] [rbp-30h]
  __int64 v17; // [rsp+D8h] [rbp-28h]
  unsigned int *v18; // [rsp+E0h] [rbp-20h]
  __int64 v19; // [rsp+E8h] [rbp-18h]
  unsigned int *v20; // [rsp+F0h] [rbp-10h]
  __int64 v21; // [rsp+F8h] [rbp-8h]

  RpcCallAttributes[0] = 2;
  RpcCallAttributes[1] = 16;
  memset_0(v13, 0, 0x68uLL);
  RpcServerInqCallAttributesW(ClientBinding, RpcCallAttributes);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 2uLL) )
  {
    v9 = v14;
    v16 = (unsigned int *)&v9;
    v18 = &v10;
    v20 = &v11;
    v17 = 4LL;
    v10 = a3;
    v19 = 4LL;
    v11 = a2;
    v21 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18009243F, 0LL, 0LL, 5u, &pData);
  }
  v6 = ExecutionModel::ResourceManager::RmAccessCheckEx((__int64)g_pResourceManager, a2, a3);
  v8 = v6;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 2uLL) )
  {
    v17 = 4LL;
    v16 = &v8;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800924F8, 0LL, 0LL, 3u, &pData);
    return v8;
  }
  return v6;
}
