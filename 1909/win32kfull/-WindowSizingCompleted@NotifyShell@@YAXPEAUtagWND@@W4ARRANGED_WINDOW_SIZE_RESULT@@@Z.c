/*
 * XREFs of ?WindowSizingCompleted@NotifyShell@@YAXPEAUtagWND@@W4ARRANGED_WINDOW_SIZE_RESULT@@@Z @ 0x1C023A204
 * Callers:
 *     ?xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01FED54 (-xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C002BE9C (WPP_RECORDER_SF_q.c)
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x1C01090CC (_anonymous_namespace_--NotifyShellSimplePayload.c)
 */

_UNKNOWN **__fastcall NotifyShell::WindowSizingCompleted(__int64 *a1, int a2)
{
  int v3; // edx
  int v4; // ecx
  _UNKNOWN **result; // rax

  anonymous_namespace_::NotifyShellSimplePayload(*a1, 8, a2, 0LL);
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return (_UNKNOWN **)WPP_RECORDER_SF_q(v4, v3, 1, 15, (__int64)&WPP_9c76f83846f93a05eb3032aeec27f59d_Traceguids, a1);
  return result;
}
