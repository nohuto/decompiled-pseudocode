/*
 * XREFs of ?IsCurrentProcessDwm@@YAHXZ @ 0x1C0028F0C
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C002C1CC (xxxCreateThreadInfo.c)
 *     GreGetDCPoint @ 0x1C0076160 (GreGetDCPoint.c)
 *     xxxDestroyThreadInfo @ 0x1C0099D40 (xxxDestroyThreadInfo.c)
 *     ?UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C01465CC (-UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 IsCurrentProcessDwm(void)
{
  PVOID CurrentProcess; // rcx
  _BOOL8 result; // rax

  CurrentProcess = (PVOID)PsGetCurrentProcess();
  result = 0LL;
  if ( CurrentProcess )
    return CurrentProcess == g_pepDwm;
  return result;
}
