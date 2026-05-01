/*
 * XREFs of ?_OnContextMenu@CMultitaskingViewFrame@@AEAAXAEBVContextMenuArgs@@@Z @ 0x18035CFF0
 * Callers:
 *     ?v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x18035D7F0 (-v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMultitaskingViewFrame::_OnContextMenu(CMultitaskingViewFrame *this, const struct ContextMenuArgs *a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 313);
  if ( v4 && (*(_DWORD *)a2 != -1 || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 304LL))(v4)) )
    (*(void (__fastcall **)(_QWORD, const struct ContextMenuArgs *))(**((_QWORD **)this + 313) + 256LL))(
      *((_QWORD *)this + 313),
      a2);
}
