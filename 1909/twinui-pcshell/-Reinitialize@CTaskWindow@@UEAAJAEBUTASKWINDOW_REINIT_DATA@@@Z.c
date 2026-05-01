/*
 * XREFs of ?Reinitialize@CTaskWindow@@UEAAJAEBUTASKWINDOW_REINIT_DATA@@@Z @ 0x18016D720
 * Callers:
 *     <none>
 * Callees:
 *     ?_ReconcileViewWithVisibility@CTaskWindow@@AEAAXXZ @ 0x180013E24 (-_ReconcileViewWithVisibility@CTaskWindow@@AEAAXXZ.c)
 *     ??4?$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@@@Z @ 0x180015428 (--4-$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_QueryCloakedState@CTaskWindow@@AEAAXXZ @ 0x18016DDBC (-_QueryCloakedState@CTaskWindow@@AEAAXXZ.c)
 */

__int64 __fastcall CTaskWindow::Reinitialize(CTaskWindow *this, const struct TASKWINDOW_REINIT_DATA *a2)
{
  int v4; // esi

  Microsoft::WRL::ComPtr<IImmersiveMonitorManager>::operator=((__int64 *)this + 16, *((_QWORD *)a2 + 2));
  v4 = 0;
  *((_DWORD *)this + 15) = *((_DWORD *)a2 + 6);
  if ( (*(_BYTE *)a2 & 1) == 0
    || (v4 = (*(__int64 (__fastcall **)(CTaskWindow *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(
               this,
               *((_QWORD *)a2 + 1),
               *((_QWORD *)a2 + 4)),
        v4 >= 0) )
  {
    *((_BYTE *)this + 56) = 1;
    if ( (*(_BYTE *)a2 & 2) != 0 )
    {
      CTaskWindow::_QueryCloakedState((CTaskWindow *)((char *)this - 8));
    }
    else if ( (*(_BYTE *)a2 & 4) != 0 )
    {
      *((_DWORD *)this + 30) = 0;
      CTaskWindow::_ReconcileViewWithVisibility((struct IImmersiveApplicationInternal **)this - 1);
    }
  }
  return (unsigned int)v4;
}
