/*
 * XREFs of rimResetPnpRemovePendingStateBits @ 0x1C005C370
 * Callers:
 *     RIMUnregisterForInput @ 0x1C00566D0 (RIMUnregisterForInput.c)
 *     RIMRemoveDevOfInputType @ 0x1C005B43C (RIMRemoveDevOfInputType.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C00378D4 (WPP_RECORDER_SF_q.c)
 */

_UNKNOWN **__fastcall rimResetPnpRemovePendingStateBits(__int64 a1)
{
  _UNKNOWN **result; // rax

  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    result = (_UNKNOWN **)WPP_RECORDER_SF_q(
                            (_DWORD)gRimLog,
                            4,
                            1,
                            37,
                            (__int64)&WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids,
                            a1);
  *(_DWORD *)(a1 + 200) &= ~1u;
  *(_DWORD *)(a1 + 184) &= 0x3FFFFFFFu;
  *(_DWORD *)(a1 + 188) &= ~1u;
  *(_QWORD *)(a1 + 192) = 0LL;
  return result;
}
