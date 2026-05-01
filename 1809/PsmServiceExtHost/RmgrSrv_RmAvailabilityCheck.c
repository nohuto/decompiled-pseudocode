/*
 * XREFs of RmgrSrv_RmAvailabilityCheck @ 0x180054A70
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 *     ?RmAvailabilityCheck@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K@Z @ 0x180058E70 (-RmAvailabilityCheck@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2.c)
 */

__int64 __fastcall RmgrSrv_RmAvailabilityCheck(
        RPC_BINDING_HANDLE ClientBinding,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        int a5)
{
  __int64 v9; // rcx
  unsigned int v10; // r9d
  unsigned int v12; // [rsp+30h] [rbp-D0h] BYREF
  int v13; // [rsp+34h] [rbp-CCh] BYREF
  int v14; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v15; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned int v16; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD RpcCallAttributes[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v18[56]; // [rsp+58h] [rbp-A8h] BYREF
  int v19; // [rsp+90h] [rbp-70h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int *v21; // [rsp+E0h] [rbp-20h]
  int v22; // [rsp+E8h] [rbp-18h]
  int v23; // [rsp+ECh] [rbp-14h]
  int *v24; // [rsp+F0h] [rbp-10h]
  int v25; // [rsp+F8h] [rbp-8h]
  int v26; // [rsp+FCh] [rbp-4h]
  int *v27; // [rsp+100h] [rbp+0h]
  int v28; // [rsp+108h] [rbp+8h]
  int v29; // [rsp+10Ch] [rbp+Ch]
  int *v30; // [rsp+110h] [rbp+10h]
  int v31; // [rsp+118h] [rbp+18h]
  int v32; // [rsp+11Ch] [rbp+1Ch]

  v12 = 0;
  RpcCallAttributes[0] = 2;
  RpcCallAttributes[1] = 16;
  memset_0(v18, 0, 0x68uLL);
  RpcServerInqCallAttributesW(ClientBinding, RpcCallAttributes);
  if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 2uLL) )
  {
    v23 = 0;
    v26 = 0;
    v29 = 0;
    v32 = 0;
    v13 = v19;
    v21 = (unsigned int *)&v13;
    v24 = &v14;
    v27 = (int *)&v15;
    v30 = (int *)&v16;
    v22 = 4;
    v14 = a5;
    v25 = 4;
    v15 = a2;
    v28 = 4;
    v16 = a4;
    v31 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_180084636, 0LL, 0LL, 6u, &pData);
  }
  v10 = ExecutionModel::ResourceManager::RmAvailabilityCheck(v9, a2, a3, a4, a5);
  v12 = v10;
  if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 2uLL) )
  {
    v23 = 0;
    v21 = &v12;
    v22 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_180084808, 0LL, 0LL, 3u, &pData);
    return v12;
  }
  return v10;
}
