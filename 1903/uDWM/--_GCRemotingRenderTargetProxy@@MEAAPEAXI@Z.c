/*
 * XREFs of ??_GCRemotingRenderTargetProxy@@MEAAPEAXI@Z @ 0x1800B6520
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResourceProxy@@MEAA@XZ @ 0x180016A78 (--1CResourceProxy@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

CRemotingRenderTargetProxy *__fastcall CRemotingRenderTargetProxy::`scalar deleting destructor'(
        CRemotingRenderTargetProxy *this,
        char a2)
{
  *(_QWORD *)this = &CIndirectSwapchainRenderTargetProxy::`vftable';
  CResourceProxy::~CResourceProxy(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CRemotingRenderTargetProxy *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
