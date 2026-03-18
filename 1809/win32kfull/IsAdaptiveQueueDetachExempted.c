/*
 * XREFs of IsAdaptiveQueueDetachExempted @ 0x1C00D7CEC
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0032740 (xxxRealInternalGetMessage.c)
 *     PostInputMessage @ 0x1C00D3F4C (PostInputMessage.c)
 *     IsShellFrameHangResilient @ 0x1C00D7C8C (IsShellFrameHangResilient.c)
 *     EditionMouseMoveShellResilience @ 0x1C011C330 (EditionMouseMoveShellResilience.c)
 *     xxxMoveSize @ 0x1C01EBF38 (xxxMoveSize.c)
 * Callees:
 *     IsDebuggerAttached @ 0x1C00D7D60 (IsDebuggerAttached.c)
 *     IsIAMThread @ 0x1C00D7DA0 (IsIAMThread.c)
 */

_BOOL8 __fastcall IsAdaptiveQueueDetachExempted(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  _BOOL8 result; // rax

  v3 = *(_QWORD *)(a1 + 1368);
  result = 1;
  if ( v3 )
  {
    v5 = *(_QWORD *)(v3 + 88);
    if ( (!v5 || !(unsigned int)IsIAMThread(*(_QWORD *)(v5 + 16), a2, a3))
      && !(unsigned int)IsDebuggerAttached(*(_QWORD *)(a1 + 424)) )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(a1 + 1368) + 88LL);
      if ( !v6 || !(unsigned int)IsDebuggerAttached(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 424LL)) )
        return 0;
    }
  }
  return result;
}
