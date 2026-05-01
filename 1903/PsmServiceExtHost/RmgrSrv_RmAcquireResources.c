/*
 * XREFs of RmgrSrv_RmAcquireResources @ 0x180006720
 * Callers:
 *     <none>
 * Callees:
 *     ?RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAXKW44PendType@2@_NPEA_NPEAPEAUResourceHandle__@2@@Z @ 0x1800069CC (-RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     memset_0 @ 0x1800492AA (memset_0.c)
 */

__int64 __fastcall RmgrSrv_RmAcquireResources(
        RPC_BINDING_HANDLE ClientBinding,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        void *a7,
        int a8,
        int a9,
        int *a10,
        __int64 a11)
{
  int *v11; // rsi
  int v15; // r13d
  int v16; // ebx
  const GUID *v17; // r9
  __int64 v18; // r10
  bool v19; // r14
  HANDLE CurrentProcess; // rbx
  HANDLE v21; // rax
  __int64 v22; // rcx
  __int64 *v23; // rbx
  unsigned int v24; // r9d
  unsigned int v25; // r10d
  signed int LastError; // eax
  char v28[4]; // [rsp+60h] [rbp-A0h] BYREF
  int v29; // [rsp+64h] [rbp-9Ch] BYREF
  int v30; // [rsp+68h] [rbp-98h] BYREF
  int v31; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v32; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v33; // [rsp+74h] [rbp-8Ch] BYREF
  int v34; // [rsp+78h] [rbp-88h] BYREF
  __int64 v35; // [rsp+80h] [rbp-80h] BYREF
  __int64 v36; // [rsp+88h] [rbp-78h]
  HANDLE TargetHandle; // [rsp+90h] [rbp-70h] BYREF
  HANDLE hSourceHandle; // [rsp+98h] [rbp-68h]
  EVENT_DATA_DESCRIPTOR RpcCallAttributes[2]; // [rsp+A0h] [rbp-60h] BYREF
  int *v40; // [rsp+C0h] [rbp-40h]
  __int64 v41; // [rsp+C8h] [rbp-38h]
  int *v42; // [rsp+D0h] [rbp-30h]
  __int64 v43; // [rsp+D8h] [rbp-28h]
  int *v44; // [rsp+E0h] [rbp-20h]
  __int64 v45; // [rsp+E8h] [rbp-18h]
  int *v46; // [rsp+F0h] [rbp-10h]
  __int64 v47; // [rsp+F8h] [rbp-8h]
  int *v48; // [rsp+100h] [rbp+0h]
  __int64 v49; // [rsp+108h] [rbp+8h]
  int *v50; // [rsp+110h] [rbp+10h]
  __int64 v51; // [rsp+118h] [rbp+18h]

  v11 = a10;
  hSourceHandle = a7;
  v35 = a3;
  v36 = a11;
  RpcCallAttributes[0].Ptr = 0x1000000002LL;
  memset_0(&RpcCallAttributes[0].Size, 0, 0x68uLL);
  RpcServerInqCallAttributesW(ClientBinding, RpcCallAttributes);
  v15 = a9;
  v16 = (int)v44;
  TargetHandle = 0LL;
  v28[0] = 0;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 2uLL) )
  {
    v30 = v16;
    v40 = &v30;
    v42 = &v31;
    v44 = (int *)&v32;
    v46 = (int *)&v33;
    v48 = &a8;
    v50 = &v34;
    v41 = v18;
    v31 = a5;
    v43 = v18;
    v32 = a2;
    v45 = v18;
    v33 = a4;
    v47 = v18;
    v49 = v18;
    v34 = v15;
    v51 = v18;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800926C9, 0LL, v17, 8u, RpcCallAttributes);
  }
  v19 = a5 == v16;
  CurrentProcess = GetCurrentProcess();
  v21 = GetCurrentProcess();
  if ( DuplicateHandle(v21, hSourceHandle, CurrentProcess, &TargetHandle, 0, 0, 2u) )
  {
    v23 = (__int64 *)v36;
    v29 = ExecutionModel::ResourceManager::RmAcquireResources(
            v22,
            a2,
            v35,
            a4,
            a5,
            a6,
            TargetHandle,
            a8,
            v15,
            v19,
            v28,
            v36);
    v24 = v29;
    if ( v29 >= 0 )
      *v11 = v28[0] != 0;
  }
  else
  {
    LastError = GetLastError();
    v24 = LastError;
    if ( LastError > 0 )
      v24 = (unsigned __int16)LastError | 0x80070000;
    v23 = (__int64 *)v36;
    v29 = v24;
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 2uLL) )
  {
    v40 = &v29;
    v35 = *v23;
    v42 = (int *)&v35;
    v41 = v25;
    v43 = 8LL;
    v44 = v11;
    v45 = v25;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18009263C, 0LL, 0LL, 5u, RpcCallAttributes);
    return (unsigned int)v29;
  }
  return v24;
}
