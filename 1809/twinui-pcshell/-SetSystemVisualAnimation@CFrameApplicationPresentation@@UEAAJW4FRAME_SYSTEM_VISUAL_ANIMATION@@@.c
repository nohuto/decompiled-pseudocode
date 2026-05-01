/*
 * XREFs of ?SetSystemVisualAnimation@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL_ANIMATION@@@Z @ 0x180128160
 * Callers:
 *     <none>
 * Callees:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_4e5aa7ae6309665d05535a9d43f0d124___ @ 0x1801266E0 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_4e5aa7ae6309665d05535a9d43f0d124___.c)
 */

__int64 __fastcall CFrameApplicationPresentation::SetSystemVisualAnimation(_DWORD *a1, int a2)
{
  __int128 v2; // xmm0
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  DWORD2(v4) = a2;
  *(_QWORD *)&v4 = a1;
  v2 = v4;
  a1[136] = a2;
  v4 = v2;
  return CFrameApplicationPresentation::_AddTaskToQueue__lambda_4e5aa7ae6309665d05535a9d43f0d124___(a1, &v4);
}
