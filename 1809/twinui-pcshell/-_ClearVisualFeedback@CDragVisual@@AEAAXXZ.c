/*
 * XREFs of ?_ClearVisualFeedback@CDragVisual@@AEAAXXZ @ 0x180373828
 * Callers:
 *     ?SetPosition@CDragVisual@@UEAAXUtagPOINT@@_N@Z @ 0x1803731A0 (-SetPosition@CDragVisual@@UEAAXUtagPOINT@@_N@Z.c)
 *     ?_CancelPlacement@CDragVisual@@AEAAXXZ @ 0x180373770 (-_CancelPlacement@CDragVisual@@AEAAXXZ.c)
 *     ?_CommitPlacement@CDragVisual@@AEAAXXZ @ 0x180373868 (-_CommitPlacement@CDragVisual@@AEAAXXZ.c)
 *     ?_OnClick@CDragVisual@@AEAAXUtagPOINT@@@Z @ 0x180374030 (-_OnClick@CDragVisual@@AEAAXUtagPOINT@@@Z.c)
 *     ?_OnKeyDown@CDragVisual@@AEAAX_K@Z @ 0x180374194 (-_OnKeyDown@CDragVisual@@AEAAX_K@Z.c)
 *     ?_OnStartDrag@CDragVisual@@AEAAJIUtagPOINT@@@Z @ 0x180374970 (-_OnStartDrag@CDragVisual@@AEAAJIUtagPOINT@@@Z.c)
 *     ?_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x1803753D0 (-_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDragVisual::_ClearVisualFeedback(CDragVisual *this)
{
  if ( *((_DWORD *)this + 37) == 6 && !*((_BYTE *)this + 326) )
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 17) + 64LL))(
      *((_QWORD *)this + 17),
      0LL,
      0LL,
      0LL);
}
