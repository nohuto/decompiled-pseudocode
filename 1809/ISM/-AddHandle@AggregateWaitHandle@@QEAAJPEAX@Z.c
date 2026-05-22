/*
 * XREFs of ?AddHandle@AggregateWaitHandle@@QEAAJPEAX@Z @ 0x18009FA40
 * Callers:
 *     ?Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@_NP6AXPEAXPEAUISIPCServer@@KK@Z33PEAPEAU4@@Z @ 0x1800A1B14 (-Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@_NP6AXPEAXPEAUISIPCServer@@KK@Z33PEAP.c)
 *     ?AcceptClientConnection@SipcServer@@UEAAJP6AXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@@ZP6AX010_K@Z0PEAPEAU2@@Z @ 0x1800A1D70 (-AcceptClientConnection@SipcServer@@UEAAJP6AXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@@ZP6.c)
 *     ?DispatchNextCallback@SipcServer@@UEAAJXZ @ 0x1800A1F30 (-DispatchNextCallback@SipcServer@@UEAAJXZ.c)
 * Callees:
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C2B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall AggregateWaitHandle::AddHandle(AggregateWaitHandle *this, void *a2)
{
  void *v4; // rax
  void *v5; // rbx
  int v7; // ebx
  AggregateWaitHandle **v8; // rdx
  AggregateWaitHandle *v9; // rcx
  HANDLE hObject; // [rsp+50h] [rbp+8h] BYREF

  if ( !*((_QWORD *)this + 2) )
  {
    v4 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v5 = v4;
    if ( v4 )
      memset_0(v4, 0, 0x20uLL);
    else
      v5 = 0LL;
    *((_QWORD *)this + 2) = v5;
    if ( !v5 )
      return 2147942414LL;
  }
  v7 = NtCreateWaitCompletionPacket(&hObject, 1LL);
  if ( v7 < 0 )
    return v7 | 0x10000000u;
  v7 = NtAssociateWaitCompletionPacket(hObject, *(_QWORD *)this, a2, *((_QWORD *)this + 2), 0LL, 0, 0LL, 0LL);
  if ( v7 < 0 )
  {
    CloseHandle(hObject);
    return v7 | 0x10000000u;
  }
  *(_QWORD *)(*((_QWORD *)this + 2) + 16LL) = a2;
  *(_QWORD *)(*((_QWORD *)this + 2) + 24LL) = hObject;
  v8 = (AggregateWaitHandle **)*((_QWORD *)this + 4);
  v9 = (AggregateWaitHandle *)*((_QWORD *)this + 2);
  if ( *v8 != (AggregateWaitHandle *)((char *)this + 24) )
    __fastfail(3u);
  *(_QWORD *)v9 = (char *)this + 24;
  *((_QWORD *)v9 + 1) = v8;
  *v8 = v9;
  ++*((_QWORD *)this + 5);
  *((_QWORD *)this + 4) = v9;
  *((_QWORD *)this + 2) = 0LL;
  return 0LL;
}
