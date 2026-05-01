/*
 * XREFs of RmgrSrv_RmAccessCheck @ 0x180005C00
 * Callers:
 *     <none>
 * Callees:
 *     ?RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x180003284 (-RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
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
  int v17; // [rsp+D8h] [rbp-28h]
  int v18; // [rsp+DCh] [rbp-24h]
  unsigned int *v19; // [rsp+E0h] [rbp-20h]
  int v20; // [rsp+E8h] [rbp-18h]
  int v21; // [rsp+ECh] [rbp-14h]
  unsigned int *v22; // [rsp+F0h] [rbp-10h]
  int v23; // [rsp+F8h] [rbp-8h]
  int v24; // [rsp+FCh] [rbp-4h]

  v8 = 0;
  RpcCallAttributes[0] = 2;
  RpcCallAttributes[1] = 16;
  memset_0(v13, 0, 0x68uLL);
  RpcServerInqCallAttributesW(ClientBinding, RpcCallAttributes);
  if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 2uLL) )
  {
    v18 = 0;
    v21 = 0;
    v24 = 0;
    v9 = v14;
    v16 = (unsigned int *)&v9;
    v19 = &v10;
    v22 = &v11;
    v17 = 4;
    v10 = a3;
    v20 = 4;
    v11 = a2;
    v23 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_18008449F, 0LL, 0LL, 5u, &pData);
  }
  v6 = ExecutionModel::ResourceManager::RmAccessCheckEx((__int64)g_pResourceManager, a2, a3);
  v8 = v6;
  if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 2uLL) )
  {
    v18 = 0;
    v16 = &v8;
    v17 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_180084558, 0LL, 0LL, 3u, &pData);
    return v8;
  }
  return v6;
}
