/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1a08449ab0a2814bb2af7204eecc9930___::Run @ 0x1803C3260
 * Callers:
 *     <none>
 * Callees:
 *     ?TickPlaceModeIdleAnimation@WindowArrangementView@@AEAAJXZ @ 0x1803C45C0 (-TickPlaceModeIdleAnimation@WindowArrangementView@@AEAAJXZ.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1a08449ab0a2814bb2af7204eecc9930___::Run(
        __int64 a1)
{
  WindowArrangementView *v1; // rcx
  __int64 result; // rax

  v1 = *(WindowArrangementView **)(a1 + 16);
  if ( *((_DWORD *)v1 + 74) == 2 )
    return WindowArrangementView::TickPlaceModeIdleAnimation(v1);
  return result;
}
