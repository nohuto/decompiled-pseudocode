/*
 * XREFs of ?Release@CVisual@@UEAAKXZ @ 0x180078900
 * Callers:
 *     ?PostRender@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x1800BBB80 (-PostRender@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ @ 0x1800DD184 (-ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ.c)
 * Callees:
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18007897C (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x1800790C4 (-NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z.c)
 *     ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x1800AA044 (-SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z.c)
 *     ?ClearInteraction@CVisual@@QEAAXXZ @ 0x1800D2694 (-ClearInteraction@CVisual@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
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
      CVisual::NotifyMidManipulationUpdate(this, 1LL, this);
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
