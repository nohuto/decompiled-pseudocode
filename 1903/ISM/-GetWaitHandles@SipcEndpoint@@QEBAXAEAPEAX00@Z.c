/*
 * XREFs of ?GetWaitHandles@SipcEndpoint@@QEBAXAEAPEAX00@Z @ 0x1800D61D8
 * Callers:
 *     ?InitializeWaitHandles@EndpointListEntry@SipcServer@@QEAAJXZ @ 0x1800D62D4 (-InitializeWaitHandles@EndpointListEntry@SipcServer@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SipcEndpoint::GetWaitHandles(SipcEndpoint *this, void **a2, void **a3, void **a4)
{
  *a2 = *(void **)(*((_QWORD *)this + 12) + 8LL);
  *a3 = (void *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 40LL))(*((_QWORD *)this + 12));
  *a4 = (void *)*((_QWORD *)this + 16);
}
