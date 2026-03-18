/*
 * XREFs of Endpoint_OnCancelSetDequeuePointerCompletion @ 0x1C00198D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ddL @ 0x1C000B478 (WPP_RECORDER_SF_ddL.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C000E974 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0010108 (Controller_ReportFatalError.c)
 *     Endpoint_StreamsOnCancelSetDequeuePointerComplete @ 0x1C001B774 (Endpoint_StreamsOnCancelSetDequeuePointerComplete.c)
 *     WPP_RECORDER_SF_dddL @ 0x1C001D624 (WPP_RECORDER_SF_dddL.c)
 *     ESM_AddEvent @ 0x1C0044E54 (ESM_AddEvent.c)
 */

__int64 __fastcall Endpoint_OnCancelSetDequeuePointerCompletion(__int64 a1, int a2, __int64 *a3)
{
  __int64 v3; // rbx
  int v6; // edx
  __int64 result; // rax
  int v8; // edx

  v3 = *(_QWORD *)(a1 + 48);
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v3 + 80),
        4u,
        0xDu,
        0x3Du,
        (__int64)&WPP_c774b641227c31193674b815a53e6fbe_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 135LL),
        *(_DWORD *)(v3 + 144),
        *(unsigned __int16 *)(a1 + 34));
    goto LABEL_8;
  }
  if ( *(_BYTE *)(a1 + 60) != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = *(unsigned __int16 *)(a1 + 34);
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_dddL(*(_QWORD *)(v3 + 80), v6, *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 135LL), 62);
    }
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD **)v3,
      *(_QWORD *)(v3 + 8),
      *(_QWORD *)(v3 + 24),
      512LL,
      "Set Dequeue Pointer command following a Stop Endpoint command failed",
      (__int64 *)(a1 + 24),
      a3);
    Controller_ReportFatalError(*(_QWORD *)v3, 2, 4106, *(_QWORD *)(v3 + 16), v3, 0LL);
LABEL_8:
    _m_prefetchw((const void *)(v3 + 32));
    result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(v3 + 32), 2u);
    if ( (result & 2) != 0 )
      return result;
    return ESM_AddEvent((PVOID)(v3 + 288));
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 135LL);
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_dddL(*(_QWORD *)(v3 + 80), v8, (_DWORD)a3, 63);
  }
  if ( *(_BYTE *)(v3 + 37) )
    return Endpoint_StreamsOnCancelSetDequeuePointerComplete(v3, *(unsigned __int16 *)(a1 + 34));
  return ESM_AddEvent((PVOID)(v3 + 288));
}
