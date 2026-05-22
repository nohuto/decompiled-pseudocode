/*
 * XREFs of ?Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAXPEAUISIPCServer@@KK@Z22PEAPEAU4@@Z @ 0x1800164BC
 * Callers:
 *     ?WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ @ 0x180016A84 (-WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ.c)
 * Callees:
 *     ?CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@PEAXAEAPEAVSipcPort@@@Z @ 0x180022670 (-CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@PEAXAEAPEAVSipcPort@@@Z.c)
 *     ??0SipcServer@@AEAA@AEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAXPEAUISIPCServer@@KK@Z2@Z @ 0x180029910 (--0SipcServer@@AEAA@AEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAXPEAUISIPCServer@@KK@Z2@Z.c)
 *     ?AddHandle@AggregateWaitHandle@@QEAAJPEAX@Z @ 0x18002A028 (-AddHandle@AggregateWaitHandle@@QEAAJPEAX@Z.c)
 *     ?Initialize@AggregateWaitHandle@@QEAAJXZ @ 0x18002A92C (-Initialize@AggregateWaitHandle@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002C8C8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1800D3F90 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 *     ?ReleasePrivateReference@SharedObjectBase@@IEAAIXZ @ 0x1800D6A10 (-ReleasePrivateReference@SharedObjectBase@@IEAAIXZ.c)
 *     ?ReleasePublicReference@SharedObjectBase@@IEAAIXZ @ 0x1800D6AA0 (-ReleasePublicReference@SharedObjectBase@@IEAAIXZ.c)
 */

__int64 __fastcall SipcServer::Create(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  __int64 v6; // rax
  void *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD **v10; // rbx
  int ServerPort; // edi
  void *v12; // rax
  unsigned int v14; // ebx

  *a6 = 0LL;
  v6 = 0x4652EB1C2819B8FFLL - *(_QWORD *)&GUID_NULL.Data1;
  if ( *(_QWORD *)&GUID_NULL.Data1 == 0x4652EB1C2819B8FFLL )
    v6 = 0xE48BA8EFB47AF080uLL - *(_QWORD *)GUID_NULL.Data4;
  if ( !v6 )
  {
    v14 = -2147024809;
LABEL_13:
    wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)v14, a2);
    return v14;
  }
  v7 = operator new(0x108uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
    v10 = (_QWORD **)SipcServer::SipcServer(v7);
  else
    v10 = 0LL;
  if ( !v10 )
  {
    v14 = -2147024882;
    goto LABEL_13;
  }
  ServerPort = AlpcPort::CreateServerPort(v8, a2, v9, v10 + 17);
  if ( ServerPort < 0
    || (ServerPort = AggregateWaitHandle::Initialize((AggregateWaitHandle *)(v10 + 18)), ServerPort < 0)
    || (v12 = (void *)(*(__int64 (__fastcall **)(_QWORD *))(*v10[17] + 40LL))(v10[17]),
        ServerPort = AggregateWaitHandle::AddHandle((AggregateWaitHandle *)(v10 + 18), v12),
        ServerPort < 0) )
  {
    SharedObjectBase::ReleasePrivateReference((SharedObjectBase *)v10);
    SharedObjectBase::ReleasePublicReference((SharedObjectBase *)v10);
    return (unsigned int)ServerPort;
  }
  else
  {
    *a6 = v10 + 2;
    return 0LL;
  }
}
