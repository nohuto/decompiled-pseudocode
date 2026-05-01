/*
 * XREFs of _lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_::operator() @ 0x180371748
 * Callers:
 *     ?Hide@CDragVisual@@UEAAXW4DragVisualHideFlags@@PEAUHWND__@@@Z @ 0x180371F50 (-Hide@CDragVisual@@UEAAXW4DragVisualHideFlags@@PEAUHWND__@@@Z.c)
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_e855345159ffcf8e8cf911d9c3e7f6ed___lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e___::OnStoryboardStatusChanged @ 0x180372400 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_e855345159ffcf8e8cf911d9c3e7f6ed___lamb.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e__&___ptr64_::Run @ 0x180372630 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e__-___ptr64.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_::operator()(_QWORD *a1)
{
  HWND v2; // rcx

  v2 = (HWND)a1[1];
  if ( v2 )
    SetForegroundWindow(v2);
  DestroyWindow(*(HWND *)(*a1 + 152LL));
  return DestroyWindow(*(HWND *)(*a1 + 168LL));
}
