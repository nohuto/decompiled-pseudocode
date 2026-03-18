/*
 * XREFs of IsAdaptiveQueueDetachExempted @ 0x1C00027E0
 * Callers:
 *     PostInputMessage @ 0x1C0023BFC (PostInputMessage.c)
 *     xxxRealInternalGetMessage @ 0x1C009BCF0 (xxxRealInternalGetMessage.c)
 *     IsShellFrameHangResilient @ 0x1C01207DC (IsShellFrameHangResilient.c)
 *     EditionMouseMoveShellResilience @ 0x1C0124080 (EditionMouseMoveShellResilience.c)
 *     xxxMoveSize @ 0x1C0201CF0 (xxxMoveSize.c)
 * Callees:
 *     IsDebuggerAttached @ 0x1C0017AC8 (IsDebuggerAttached.c)
 *     IsIAMThread @ 0x1C011B430 (IsIAMThread.c)
 */

_BOOL8 __fastcall IsAdaptiveQueueDetachExempted(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  _BOOL8 result; // rax

  v1 = *(_QWORD *)(a1 + 1392);
  result = 1;
  if ( v1 )
  {
    v3 = *(_QWORD *)(v1 + 112);
    if ( (!v3 || !(unsigned int)IsIAMThread(*(_QWORD *)(v3 + 16)))
      && !(unsigned int)IsDebuggerAttached(*(_QWORD *)(a1 + 416)) )
    {
      v4 = *(_QWORD *)(*(_QWORD *)(a1 + 1392) + 112LL);
      if ( !v4 || !(unsigned int)IsDebuggerAttached(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 416LL)) )
        return 0;
    }
  }
  return result;
}
