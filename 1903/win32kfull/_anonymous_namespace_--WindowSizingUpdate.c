/*
 * XREFs of _anonymous_namespace_::WindowSizingUpdate @ 0x1C023A87C
 * Callers:
 *     ?PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z @ 0x1C002D8D4 (-PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0025A2C (WPP_RECORDER_SF_q.c)
 *     _anonymous_namespace_::NotifyShellWindowPosChangedCommon @ 0x1C023A63C (_anonymous_namespace_--NotifyShellWindowPosChangedCommon.c)
 */

_UNKNOWN **__fastcall anonymous_namespace_::WindowSizingUpdate(_QWORD *a1)
{
  int v2; // edx
  int v3; // ecx
  _UNKNOWN **result; // rax

  anonymous_namespace_::NotifyShellWindowPosChangedCommon(a1, 0, 1, 7);
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return (_UNKNOWN **)WPP_RECORDER_SF_q(
                          v3,
                          v2,
                          1u,
                          0xAu,
                          (__int64)&WPP_9c76f83846f93a05eb3032aeec27f59d_Traceguids,
                          a1);
  return result;
}
