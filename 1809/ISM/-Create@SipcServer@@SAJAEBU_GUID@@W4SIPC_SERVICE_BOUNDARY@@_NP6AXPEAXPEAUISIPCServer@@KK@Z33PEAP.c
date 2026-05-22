/*
 * XREFs of ?Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@_NP6AXPEAXPEAUISIPCServer@@KK@Z33PEAPEAU4@@Z @ 0x1800A1B14
 * Callers:
 *     ?WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ @ 0x1800710A4 (-WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ.c)
 * Callees:
 *     ?Initialize@AggregateWaitHandle@@QEAAJXZ @ 0x18009F8D0 (-Initialize@AggregateWaitHandle@@QEAAJXZ.c)
 *     ?AddHandle@AggregateWaitHandle@@QEAAJPEAX@Z @ 0x18009FA40 (-AddHandle@AggregateWaitHandle@@QEAAJPEAX@Z.c)
 *     ?ReleasePrivateReference@SharedObjectBase@@IEAAIXZ @ 0x18009FC0C (-ReleasePrivateReference@SharedObjectBase@@IEAAIXZ.c)
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x18009FD04 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 *     ?CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@_NPEAXAEAPEAVSipcPort@@@Z @ 0x18009FFE0 (-CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@_NPEAXAEAPEAVSipcPort@@@Z.c)
 *     ?Release@?$SharedUnknownBase@UISIPCServer@@UIUnknown@@U2@U2@U2@U2@U2@U2@U2@U2@@@UEAAKXZ @ 0x1800A22E0 (-Release@-$SharedUnknownBase@UISIPCServer@@UIUnknown@@U2@U2@U2@U2@U2@U2@U2@U2@@@UEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C2B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SipcServer::Create(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  unsigned int v7; // ebx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // rbx
  int ServerPort; // edi
  void *v16; // rax

  *a7 = 0LL;
  if ( *(_QWORD *)&DirectX::g_XMZero.Data1 == 0x4652EB1C2819B8FFLL
    && *(_QWORD *)DirectX::g_XMZero.Data4 == 0xE48BA8EFB47AF080uLL )
  {
    v7 = -2147024809;
LABEL_4:
    wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)v7);
    return v7;
  }
  v9 = operator new(0xC8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v9;
  if ( v9 )
  {
    v9[1] = 0x200000002LL;
    v9[12] = 0LL;
    *v9 = &SipcServer::`vftable'{for `SharedObjectBase'};
    v9[2] = &SipcServer::`vftable'{for `ISIPCServer'};
    v9[3] = &SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::`vftable'{for `IUnknown'};
    v9[4] = &SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::`vftable'{for `IUnknown'};
    v9[5] = &SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::`vftable'{for `IUnknown'};
    v9[6] = &SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::`vftable'{for `IUnknown'};
    v9[7] = &SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::`vftable'{for `IUnknown'};
    v9[8] = &SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::`vftable'{for `IUnknown'};
    v9[9] = &SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::`vftable'{for `IUnknown'};
    v9[10] = &SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::`vftable'{for `IUnknown'};
    v9[11] = &SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::`vftable'{for `IUnknown'};
    v9[13] = 0LL;
    v9[14] = 0LL;
    v9[15] = 0LL;
    v9[18] = 0LL;
    v9[17] = v9 + 16;
    v9[16] = v9 + 16;
    v9[21] = 0LL;
    v9[20] = v9 + 19;
    v9[19] = v9 + 19;
    v9[22] = 0LL;
    v9[23] = LampArrayRawInputProvider::OnSipcClientConnection;
    v9[24] = a5;
  }
  else
  {
    v14 = 0LL;
  }
  if ( !v14 )
  {
    v7 = -2147024882;
    goto LABEL_4;
  }
  ServerPort = AlpcPort::CreateServerPort(v11, v10, v12, v13, (AlpcPort **)v14 + 12);
  if ( ServerPort < 0
    || (ServerPort = AggregateWaitHandle::Initialize((HANDLE *)v14 + 13), ServerPort < 0)
    || (v16 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v14[12] + 72LL))(v14[12]),
        ServerPort = AggregateWaitHandle::AddHandle((AggregateWaitHandle *)(v14 + 13), v16),
        ServerPort < 0) )
  {
    SharedObjectBase::ReleasePrivateReference((SharedObjectBase *)v14);
    SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::Release(v14 + 2);
    return (unsigned int)ServerPort;
  }
  else
  {
    *a7 = v14 + 2;
    return 0LL;
  }
}
