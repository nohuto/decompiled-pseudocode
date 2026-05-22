/*
 * XREFs of ?AcceptClientConnection@SipcServer@@UEAAJP6AXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@@ZP6AX010_K@Z0PEAPEAU2@@Z @ 0x1800A1D70
 * Callers:
 *     <none>
 * Callees:
 *     ?AddHandle@AggregateWaitHandle@@QEAAJPEAX@Z @ 0x18009FA40 (-AddHandle@AggregateWaitHandle@@QEAAJPEAX@Z.c)
 *     ?ReleasePrivateReference@SharedObjectBase@@IEAAIXZ @ 0x18009FC0C (-ReleasePrivateReference@SharedObjectBase@@IEAAIXZ.c)
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x18009FD04 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 *     ?CreateServerEndpoint@SipcEndpoint@@SAJPEAVSipcServer@@PEAVSipcPort@@PEAX2P6AX2PEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@@ZP6AX232_K@Z2PEAPEAV1@@Z @ 0x1800A1514 (-CreateServerEndpoint@SipcEndpoint@@SAJPEAVSipcServer@@PEAVSipcPort@@PEAX2P6AX2PEAUISIPCEndpoint.c)
 *     ?Release@?$SharedUnknownBase@UISIPCServer@@UIUnknown@@U2@U2@U2@U2@U2@U2@U2@U2@@@UEAAKXZ @ 0x1800A22E0 (-Release@-$SharedUnknownBase@UISIPCServer@@UIUnknown@@U2@U2@U2@U2@U2@U2@U2@U2@@@UEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SipcServer::AcceptClientConnection(
        SipcServer *this,
        void (__high *a2)(void *, struct ISIPCEndpoint *, enum SIPC_ENDPOINT_STATUS),
        void (*a3)(void *, struct ISIPCEndpoint *, void *, unsigned __int64),
        void *a4,
        struct ISIPCEndpoint **a5)
{
  struct ISIPCEndpoint **v5; // r14
  __int64 v10; // rdx
  unsigned int v11; // ebx
  int v12; // esi
  SharedObjectBase *v13; // rdi
  SipcServer **v14; // rdx
  SipcServer *v15; // rcx
  HANDLE v17; // [rsp+40h] [rbp-28h] BYREF
  SharedObjectBase *v18; // [rsp+48h] [rbp-20h] BYREF
  HANDLE hObject; // [rsp+78h] [rbp+10h] BYREF

  v5 = a5;
  *a5 = 0LL;
  if ( !a2 || !a3 )
  {
    v11 = -2147024809;
    goto LABEL_17;
  }
  v10 = *((_QWORD *)this + 20);
  if ( !v10 )
  {
    v11 = -2147418113;
LABEL_17:
    wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)v11);
    return v11;
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, HANDLE *, HANDLE *, struct ISIPCEndpoint ***))(**((_QWORD **)this + 10)
                                                                                                 + 8LL))(
          *((_QWORD *)this + 10),
          v10,
          &hObject,
          &v17,
          &a5);
  if ( v12 < 0 )
  {
LABEL_15:
    operator delete(*((void **)this + 20), (const struct std::nothrow_t *)0x20);
    *((_QWORD *)this + 20) = 0LL;
    return (unsigned int)v12;
  }
  v12 = SipcEndpoint::CreateServerEndpoint(
          (SipcServer *)((char *)this - 16),
          (struct SipcPort *)a5,
          hObject,
          v17,
          a2,
          a3,
          a4,
          &v18);
  if ( v12 < 0 )
  {
LABEL_12:
    if ( a5 )
      (*(void (__fastcall **)(struct ISIPCEndpoint **, __int64))*a5)(a5, 1LL);
    CloseHandle(hObject);
    CloseHandle(v17);
    goto LABEL_15;
  }
  v13 = v18;
  v12 = AggregateWaitHandle::AddHandle((SipcServer *)((char *)this + 88), *((void **)v18 + 16));
  if ( v12 < 0 )
  {
    SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::Release((char *)v13 + 16);
    SharedObjectBase::ReleasePrivateReference(v13);
    goto LABEL_12;
  }
  *(_QWORD *)(*((_QWORD *)this + 20) + 16LL) = v13;
  v14 = (SipcServer **)*((_QWORD *)this + 18);
  v15 = (SipcServer *)*((_QWORD *)this + 20);
  if ( *v14 != (SipcServer *)((char *)this + 136) )
    __fastfail(3u);
  *(_QWORD *)v15 = (char *)this + 136;
  *((_QWORD *)v15 + 1) = v14;
  *v14 = v15;
  ++*((_QWORD *)this + 19);
  *((_QWORD *)this + 18) = v15;
  *((_QWORD *)this + 20) = 0LL;
  *v5 = (SharedObjectBase *)((char *)v13 + 16);
  return 0LL;
}
