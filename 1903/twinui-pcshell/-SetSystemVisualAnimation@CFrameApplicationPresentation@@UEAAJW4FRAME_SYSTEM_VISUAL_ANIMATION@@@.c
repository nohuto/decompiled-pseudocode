/*
 * XREFs of ?SetSystemVisualAnimation@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL_ANIMATION@@@Z @ 0x1801517D0
 * Callers:
 *     <none>
 * Callees:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_c82b1bd0fc680f00d43f36f5219b485a___ @ 0x180150184 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_c82b1bd0fc680f00d43f36f5219b485a___.c)
 */

__int64 __fastcall CFrameApplicationPresentation::SetSystemVisualAnimation(_DWORD *a1, int a2)
{
  __int128 v2; // xmm0
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  DWORD2(v4) = a2;
  *(_QWORD *)&v4 = a1;
  v2 = v4;
  a1[138] = a2;
  v4 = v2;
  return CFrameApplicationPresentation::_AddTaskToQueue__lambda_c82b1bd0fc680f00d43f36f5219b485a___(a1, &v4);
}
