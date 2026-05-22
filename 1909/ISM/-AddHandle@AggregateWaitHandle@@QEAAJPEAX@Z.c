/*
 * XREFs of ?AddHandle@AggregateWaitHandle@@QEAAJPEAX@Z @ 0x180029BA8
 * Callers:
 *     ?Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAXPEAUISIPCServer@@KK@Z22PEAPEAU4@@Z @ 0x18001642C (-Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAXPEAUISIPCServer@@KK@Z22PEAPEA.c)
 *     ?DispatchNextCallback@SipcServer@@UEAAJXZ @ 0x1800274C0 (-DispatchNextCallback@SipcServer@@UEAAJXZ.c)
 *     ?InitializeWaitHandles@EndpointListEntry@SipcServer@@QEAAJXZ @ 0x1800D6094 (-InitializeWaitHandles@EndpointListEntry@SipcServer@@QEAAJXZ.c)
 * Callees:
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002C548 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall AggregateWaitHandle::AddHandle(AggregateWaitHandle *this, void *a2)
{
  void *v4; // rax
  void *v5; // rbx
  int v6; // ebx
  AggregateWaitHandle **v7; // rdx
  AggregateWaitHandle *v8; // rcx
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
  v6 = NtCreateWaitCompletionPacket(&hObject, 1LL);
  if ( v6 < 0 )
    return v6 | 0x10000000u;
  v6 = NtAssociateWaitCompletionPacket(hObject, *(_QWORD *)this, a2, *((_QWORD *)this + 2), 0LL, 0, 0LL, 0LL);
  if ( v6 < 0 )
  {
    CloseHandle(hObject);
    return v6 | 0x10000000u;
  }
  *(_QWORD *)(*((_QWORD *)this + 2) + 16LL) = a2;
  *(_QWORD *)(*((_QWORD *)this + 2) + 24LL) = hObject;
  v7 = (AggregateWaitHandle **)*((_QWORD *)this + 4);
  v8 = (AggregateWaitHandle *)*((_QWORD *)this + 2);
  if ( *v7 != (AggregateWaitHandle *)((char *)this + 24) )
    __fastfail(3u);
  *(_QWORD *)v8 = (char *)this + 24;
  *((_QWORD *)v8 + 1) = v7;
  *v7 = v8;
  ++*((_QWORD *)this + 5);
  *((_QWORD *)this + 4) = v8;
  *((_QWORD *)this + 2) = 0LL;
  return 0LL;
}
