/*
 * XREFs of ?ReleaseD3DResourcesInternal@CDWMSwapChain@@UEAAXXZ @ 0x1800D9510
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDWMSwapChain::ReleaseD3DResourcesInternal(CDWMSwapChain *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 53);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 53) = 0LL;
  }
}
