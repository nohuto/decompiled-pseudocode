/*
 * XREFs of DxgkDispMgrCreate @ 0x1C00C5BE0
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?reset@?$auto_rc@V?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@@QEAAXPEAV?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@Z @ 0x1C001B3BC (-reset@-$auto_rc@V-$rc_buffer@U-$AlpcRequest@$07@DispBroker@@@@@@QEAAXPEAV-$rc_buffer@U-$AlpcReq.c)
 *     ??0DXGDISPLAYMANAGEROBJECT@@QEAA@_N@Z @ 0x1C00C5E04 (--0DXGDISPLAYMANAGEROBJECT@@QEAA@_N@Z.c)
 */

__int64 __fastcall DxgkDispMgrCreate(ULONG64 a1)
{
  ULONG64 v2; // rcx
  DXGDISPLAYMANAGEROBJECT *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  DXGDISPLAYMANAGEROBJECT *v8; // rdi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r14
  _QWORD *v14; // rax
  PVOID v15; // r14
  NTSTATUS inserted; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdi
  _QWORD *v21; // rdx
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  ACCESS_MASK DesiredAccess[4]; // [rsp+50h] [rbp-28h]
  HANDLE Handle; // [rsp+60h] [rbp-18h] BYREF
  PVOID Object; // [rsp+88h] [rbp+10h] BYREF
  ReferenceCounted *v31; // [rsp+90h] [rbp+18h] BYREF

  Handle = 0LL;
  v2 = a1 + 24;
  if ( v2 < a1 || v2 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *(_OWORD *)DesiredAccess = *(_OWORD *)a1;
  Handle = *(HANDLE *)(a1 + 16);
  v3 = (DXGDISPLAYMANAGEROBJECT *)operator new[](0x98uLL, 0x4B677844u, PagedPool);
  if ( v3 )
    v8 = DXGDISPLAYMANAGEROBJECT::DXGDISPLAYMANAGEROBJECT(v3, DesiredAccess[3] & 1);
  else
    v8 = 0LL;
  v31 = v8;
  if ( !v8 || !*((_QWORD *)v8 + 2) || !*((_BYTE *)v8 + 24) )
  {
    v27 = WdLogNewEntry5_WdLowResource(v5, v4, v6, v7);
    *(_QWORD *)(v27 + 24) = 773LL;
    WdLogEvent5_WdLowResource(v27);
    LODWORD(v13) = -1073741801;
    goto LABEL_20;
  }
  Object = 0LL;
  LOBYTE(v7) = 1;
  LOBYTE(v5) = 1;
  v9 = ObCreateObject(v5, g_pDxgkDisplayManagerObjectType, *(_QWORD *)DesiredAccess, v7, 0LL, 16, 168, 0, &Object);
  v13 = v9;
  if ( v9 < 0 )
  {
    v23 = WdLogNewEntry5_WdError(v11, v10, v12);
    *(_QWORD *)(v23 + 24) = v13;
    WdLogEvent5_WdError(v23);
LABEL_20:
    auto_rc<rc_buffer<DispBroker::AlpcRequest<8>>>::reset(&v31, 0LL, v24);
    return (unsigned int)v13;
  }
  v14 = Object;
  *(_QWORD *)Object = 0LL;
  v14[1] = 0LL;
  v15 = Object;
  if ( *((_QWORD *)v8 + 4) )
  {
    v25 = WdLogNewEntry5_WdAssertion(0LL, v10);
    *(_QWORD *)(v25 + 24) = 558LL;
    WdLogEvent5_WdAssertion(v25);
  }
  *((_QWORD *)v8 + 4) = v15;
  v31 = 0LL;
  *(_QWORD *)Object = v8;
  inserted = ObInsertObject(Object, 0LL, DesiredAccess[2], 0, 0LL, &Handle);
  v20 = inserted;
  if ( inserted < 0 )
  {
    v26 = WdLogNewEntry5_WdError(v18, v17, v19);
    *(_QWORD *)(v26 + 24) = v20;
    WdLogEvent5_WdError(v26);
    LODWORD(v13) = v20;
    goto LABEL_20;
  }
  v21 = (_QWORD *)(a1 + 16);
  if ( a1 + 16 >= MmUserProbeAddress )
    v21 = (_QWORD *)MmUserProbeAddress;
  *v21 = Handle;
  auto_rc<rc_buffer<DispBroker::AlpcRequest<8>>>::reset(&v31, 0LL, v19);
  return (unsigned int)v20;
}
