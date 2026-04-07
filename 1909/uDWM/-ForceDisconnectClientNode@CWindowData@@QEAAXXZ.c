/*
 * XREFs of ?ForceDisconnectClientNode@CWindowData@@QEAAXXZ @ 0x180012A84
 * Callers:
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180012D6C (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180039B30 (-ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?ForceDisconnectClientArea@CTopLevelWindow@@QEAAXXZ @ 0x18003CB8C (-ForceDisconnectClientArea@CTopLevelWindow@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWindowData::ForceDisconnectClientNode(CWindowData *this)
{
  CTopLevelWindow *v2; // rcx

  v2 = (CTopLevelWindow *)*((_QWORD *)this + 50);
  if ( v2 )
    CTopLevelWindow::ForceDisconnectClientArea(v2);
  if ( *((_DWORD *)this + 32) )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL)
                                   + 136LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                       + 16LL));
    *((_DWORD *)this + 32) = 0;
  }
}
