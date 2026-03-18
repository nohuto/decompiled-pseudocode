/*
 * XREFs of PopFxEnforceDirectedPowerTransition @ 0x1402F3264
 * Callers:
 *     PopFxCompleteDirectedPowerTransition @ 0x1402F2D0C (PopFxCompleteDirectedPowerTransition.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     PopDirectedDripsDiagTraceDfxPowerStateFailure @ 0x140304658 (PopDirectedDripsDiagTraceDfxPowerStateFailure.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14084BF40 (DbgkWerCaptureLiveKernelDump.c)
 *     PopCheckTestsigningEnabled @ 0x1408A23D8 (PopCheckTestsigningEnabled.c)
 *     PopDirectedDripsUmIsTestModeEnabled @ 0x1408B8D90 (PopDirectedDripsUmIsTestModeEnabled.c)
 */

_UNKNOWN **__fastcall PopFxEnforceDirectedPowerTransition(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _UNKNOWN **result; // rax
  unsigned __int8 v5; // bl
  char v6; // bp
  int v7; // edi
  ULONG_PTR v9; // r9
  char v10; // r9
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = &retaddr;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  if ( (int)a2 < 0 )
    result = (_UNKNOWN **)PopDirectedDripsDiagTraceDfxPowerStateFailure();
  if ( PopDirectedDripsDfxEnforcementPolicy && v7 < 0 )
  {
    LOBYTE(a4) = 0;
    if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
      NT_ASSERT(
        "*** DFX Transition Failure
    This break point indicates that a device has failed its
    Directed Power transition callback.
");
    if ( !v5 && !v6
      || !(unsigned __int8)PopDirectedDripsUmIsTestModeEnabled(BugCheckParameter2, a2, a3, a4)
      && !v10
      && (ViVerifierEnabled || (unsigned __int8)PopCheckTestsigningEnabled()) )
    {
      v9 = v5;
      goto LABEL_16;
    }
    v9 = v5;
    if ( PopDirectedDripsDfxEnforcementPolicy == 2 )
LABEL_16:
      KeBugCheckEx(0x9Fu, 6uLL, BugCheckParameter2, v9, 0LL);
    return (_UNKNOWN **)DbgkWerCaptureLiveKernelDump(L"DirectedFxPowerStateFailure", 0LL, 0LL, 0LL, 0LL, 0);
  }
  return result;
}
