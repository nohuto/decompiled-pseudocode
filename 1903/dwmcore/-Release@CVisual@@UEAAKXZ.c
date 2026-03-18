/*
 * XREFs of ?Release@CVisual@@UEAAKXZ @ 0x18008AA20
 * Callers:
 *     ?PostRender@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x1800B9890 (-PostRender@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ @ 0x1800DC514 (-ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ.c)
 * Callees:
 *     ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x18002B208 (-SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z.c)
 *     ?ClearInteraction@CVisual@@QEAAXXZ @ 0x18002D810 (-ClearInteraction@CVisual@@QEAAXXZ.c)
 *     ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x180089BCC (-NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18008AA9C (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::Release(CVisual *this)
{
  unsigned __int32 v2; // edi
  CInteraction *InteractionInternal; // rax

  if ( *((_DWORD *)this + 2) == 1 )
  {
    InteractionInternal = CVisual::GetInteractionInternal(this);
    if ( InteractionInternal )
    {
      CInteraction::SetVisual(InteractionInternal, 0LL);
      CVisual::NotifyMidManipulationUpdate((__int64)this, 1u, (__int64)this);
      CVisual::ClearInteraction(this);
    }
  }
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 )
  {
    --*((_DWORD *)this + 2);
    (*(void (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 1LL);
  }
  return v2;
}
