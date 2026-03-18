/*
 * XREFs of ApiSetEditionUpdateRawMouseMode @ 0x1C003AAEC
 * Callers:
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@@Z @ 0x1C0037C94 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 *     xxxCreateThreadInfo @ 0x1C006F538 (xxxCreateThreadInfo.c)
 *     zzzDestroyQueue @ 0x1C00703F0 (zzzDestroyQueue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetEditionUpdateRawMouseMode(__int64 a1)
{
  __int64 result; // rax

  result = IsEditionUpdateRawMouseModeSupported();
  if ( (int)result >= 0 )
    return EditionUpdateRawMouseMode(a1);
  return result;
}
