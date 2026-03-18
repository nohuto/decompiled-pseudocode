/*
 * XREFs of ApiSetEditionUpdateRawMouseMode @ 0x1C0031DA0
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C002C1CC (xxxCreateThreadInfo.c)
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@@Z @ 0x1C002EE8C (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 *     zzzDestroyQueue @ 0x1C00E48C0 (zzzDestroyQueue.c)
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
