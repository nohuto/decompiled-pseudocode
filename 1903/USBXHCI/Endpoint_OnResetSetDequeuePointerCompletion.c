/*
 * XREFs of Endpoint_OnResetSetDequeuePointerCompletion @ 0x1C001A810
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C000B350 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C000B478 (WPP_RECORDER_SF_ddL.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C000E974 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0010108 (Controller_ReportFatalError.c)
 *     Endpoint_StreamsOnResetSetDequeuePointerComplete @ 0x1C001B828 (Endpoint_StreamsOnResetSetDequeuePointerComplete.c)
 *     ESM_AddEvent @ 0x1C0044E54 (ESM_AddEvent.c)
 */

__int64 __fastcall Endpoint_OnResetSetDequeuePointerCompletion(__int64 a1, int a2, __int64 *a3)
{
  __int64 *v3; // rsi
  __int64 v6; // rbx
  unsigned __int8 v7; // cl
  __int64 result; // rax

  v3 = *(__int64 **)(a1 + 48);
  v6 = *v3;
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(v6 + 80),
        4u,
        0xDu,
        0x29u,
        (__int64)&WPP_c774b641227c31193674b815a53e6fbe_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 135LL),
        *(_DWORD *)(v6 + 144));
    goto LABEL_8;
  }
  v7 = *(_BYTE *)(a1 + 60);
  if ( v7 != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v6 + 80),
        2u,
        0xDu,
        0x2Au,
        (__int64)&WPP_c774b641227c31193674b815a53e6fbe_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 135LL),
        *(_DWORD *)(v6 + 144),
        v7);
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD **)v6,
      *(_QWORD *)(v6 + 8),
      *(_QWORD *)(v6 + 24),
      128LL,
      "Set Dequeue pointer command following a Reset Endpoint command failed",
      (__int64 *)(a1 + 24),
      a3);
    Controller_ReportFatalError(*(_QWORD *)v6, 2, 4122, *(_QWORD *)(v6 + 16), v6, (__int64)a3);
LABEL_8:
    *(_DWORD *)(v6 + 280) = -1073741823;
    _m_prefetchw((const void *)(v6 + 32));
    result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(v6 + 32), 2u);
    if ( (result & 2) != 0 )
      return result;
    return ESM_AddEvent((PVOID)(v6 + 288));
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(v6 + 80),
      4u,
      0xDu,
      0x2Bu,
      (__int64)&WPP_c774b641227c31193674b815a53e6fbe_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 135LL),
      *(_DWORD *)(v6 + 144),
      *(unsigned __int16 *)(a1 + 34));
  if ( *(_BYTE *)(v6 + 37) )
    return Endpoint_StreamsOnResetSetDequeuePointerComplete(v3, *(unsigned __int16 *)(a1 + 34));
  *(_DWORD *)(v6 + 280) = 0;
  return ESM_AddEvent((PVOID)(v6 + 288));
}
