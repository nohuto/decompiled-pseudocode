/*
 * XREFs of ?Release@CVisual@@UEAAKXZ @ 0x18009F590
 * Callers:
 *     ?PostRender@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x18005D180 (-PostRender@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ @ 0x1800E8070 (-ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ.c)
 * Callees:
 *     ?ClearInteraction@CVisual@@QEAAXXZ @ 0x18009F65C (-ClearInteraction@CVisual@@QEAAXXZ.c)
 *     ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x18009FBD0 (-SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z.c)
 *     ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x18009FC60 (-NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::Release(CVisual *this)
{
  unsigned __int32 v2; // edi
  _DWORD *v4; // r8
  __int64 v5; // rcx
  _BYTE *v6; // rdx
  unsigned int i; // eax
  CInteraction **v8; // rcx
  CInteraction *v9; // rcx

  if ( *((_DWORD *)this + 2) == 1 )
  {
    v4 = (_DWORD *)*((_QWORD *)this + 28);
    if ( (*v4 & 0x400000) != 0 )
    {
      v5 = (unsigned int)v4[1];
      v6 = v4 + 2;
      for ( i = 0; i < (unsigned int)v5; ++v6 )
      {
        if ( *v6 == 10 )
          break;
        ++i;
      }
      if ( i >= (unsigned int)v5 )
        v8 = 0LL;
      else
        v8 = (CInteraction **)((char *)v4 + v5 + 8LL * i - (((_BYTE)v5 + 15) & 7) + 15);
      v9 = *v8;
      if ( v9 )
      {
        CInteraction::SetVisual(v9, 0LL);
        CVisual::NotifyMidManipulationUpdate(this, 1LL, this);
        CVisual::ClearInteraction(this);
      }
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
