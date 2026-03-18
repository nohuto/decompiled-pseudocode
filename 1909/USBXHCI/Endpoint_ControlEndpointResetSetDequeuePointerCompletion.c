/*
 * XREFs of Endpoint_ControlEndpointResetSetDequeuePointerCompletion @ 0x1C0017D60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C000B350 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C000B478 (WPP_RECORDER_SF_ddL.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C000E974 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0010108 (Controller_ReportFatalError.c)
 *     ESM_AddEvent @ 0x1C0044E54 (ESM_AddEvent.c)
 */

__int64 __fastcall Endpoint_ControlEndpointResetSetDequeuePointerCompletion(__int64 a1, int a2, __int64 *a3)
{
  __int64 v3; // rbx
  unsigned __int8 v6; // cl
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 48);
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(v3 + 80),
        4u,
        0xDu,
        0x50u,
        (__int64)&WPP_c774b641227c31193674b815a53e6fbe_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 135LL),
        *(_DWORD *)(v3 + 144));
    goto LABEL_11;
  }
  v6 = *(_BYTE *)(a1 + 60);
  if ( v6 != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v3 + 80),
        2u,
        0xDu,
        0x52u,
        (__int64)&WPP_c774b641227c31193674b815a53e6fbe_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 135LL),
        *(_DWORD *)(v3 + 144),
        v6);
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD **)v3,
      *(_QWORD *)(v3 + 8),
      *(_QWORD *)(v3 + 24),
      128LL,
      "Set Dequeue pointer command following a Reset Endpoint command failed",
      (__int64 *)(a1 + 24),
      a3);
    Controller_ReportFatalError(*(_QWORD *)v3, 2, 4101, *(_QWORD *)(v3 + 16), v3, 0LL);
LABEL_11:
    _m_prefetchw((const void *)(v3 + 32));
    result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(v3 + 32), 2u);
    if ( (result & 2) != 0 )
      return result;
    return ESM_AddEvent((PVOID)(v3 + 288));
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(v3 + 80),
      4u,
      0xDu,
      0x51u,
      (__int64)&WPP_c774b641227c31193674b815a53e6fbe_Traceguids,
      1,
      *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 135LL),
      *(_DWORD *)(v3 + 144));
  *(_DWORD *)(v3 + 280) = 0;
  return ESM_AddEvent((PVOID)(v3 + 288));
}
