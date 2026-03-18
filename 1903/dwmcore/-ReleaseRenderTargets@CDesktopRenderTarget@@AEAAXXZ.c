/*
 * XREFs of ?ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ @ 0x1800AFD38
 * Callers:
 *     ?CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x1800AF968 (-CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ @ 0x1800AFE88 (-CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ??1CDesktopRenderTarget@@EEAA@XZ @ 0x1801A74CC (--1CDesktopRenderTarget@@EEAA@XZ.c)
 *     ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x1801A7D78 (-CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?NotifyInvalidDisplaySet@CDesktopRenderTarget@@UEAAJXZ @ 0x1801A88F0 (-NotifyInvalidDisplaySet@CDesktopRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?RemoveRenderTarget@CDesktopRenderTarget@@AEAAXPEAVCHwndRenderTarget@@@Z @ 0x1800A322C (-RemoveRenderTarget@CDesktopRenderTarget@@AEAAXPEAVCHwndRenderTarget@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800B8A58 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDesktopRenderTarget::ReleaseRenderTargets(CDesktopRenderTarget *this)
{
  int i; // edi
  __int64 j; // rdi
  __int64 v4; // rcx

  for ( i = *((_DWORD *)this + 50); i > 0; --i )
    CDesktopRenderTarget::RemoveRenderTarget(
      this,
      *(struct CHwndRenderTarget **)(*((_QWORD *)this + 22) + 8LL * (unsigned int)(i - 1)));
  for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 62); j = (unsigned int)(j + 1) )
  {
    v4 = *(_QWORD *)(*((_QWORD *)this + 28) + 8 * j);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *((_DWORD *)this + 62) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 224, 8LL);
  *((_BYTE *)this + 320) = 0;
}
