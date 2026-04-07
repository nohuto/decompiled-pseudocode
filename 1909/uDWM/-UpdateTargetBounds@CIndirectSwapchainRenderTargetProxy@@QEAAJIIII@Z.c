/*
 * XREFs of ?UpdateTargetBounds@CIndirectSwapchainRenderTargetProxy@@QEAAJIIII@Z @ 0x1800B6360
 * Callers:
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x18001EBB0 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 *     ?SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ @ 0x18008DC4C (-SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTargetProxy::UpdateTargetBounds(
        CIndirectSwapchainRenderTargetProxy *this,
        unsigned int a2,
        unsigned int a3,
        int a4,
        unsigned int a5)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int, unsigned int))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL)
                                                                                      + 776LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           a2,
           a3,
           a4,
           a5);
}
