/*
 * XREFs of ?ForceDisconnectClientNode@CWindowData@@QEAAXXZ @ 0x180010518
 * Callers:
 *     ?ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180010940 (-ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?ForceDisconnectClientArea@CTopLevelWindow@@QEAAXXZ @ 0x180006548 (-ForceDisconnectClientArea@CTopLevelWindow@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWindowData::ForceDisconnectClientNode(CWindowData *this)
{
  struct CVisual **v2; // rcx

  v2 = (struct CVisual **)*((_QWORD *)this + 49);
  if ( v2 )
    CTopLevelWindow::ForceDisconnectClientArea(v2);
  if ( *((_DWORD *)this + 32) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 5) + 128LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5));
    *((_DWORD *)this + 32) = 0;
  }
}
