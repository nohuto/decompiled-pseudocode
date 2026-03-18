/*
 * XREFs of Endpoint_OnCancelEndpointConfigureCompletion @ 0x1C00193E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C000B350 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C000B478 (WPP_RECORDER_SF_ddL.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C000CE9C (CommonBuffer_ReleaseBuffer.c)
 *     Controller_ReportFatalError @ 0x1C0010108 (Controller_ReportFatalError.c)
 *     Endpoint_SendClearStallTransfer @ 0x1C001B0F0 (Endpoint_SendClearStallTransfer.c)
 *     ESM_AddEvent @ 0x1C0044E54 (ESM_AddEvent.c)
 */

__int64 __fastcall Endpoint_OnCancelEndpointConfigureCompletion(__int64 a1, int a2)
{
  __int64 v2; // rdi
  unsigned __int8 v5; // cl
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 48);
  CommonBuffer_ReleaseBuffer(*(_QWORD *)(*(_QWORD *)v2 + 120LL), *(_DWORD **)(v2 + 256));
  *(_QWORD *)(v2 + 256) = 0LL;
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(v2 + 80),
        4u,
        0xDu,
        0x49u,
        (__int64)&WPP_c774b641227c31193674b815a53e6fbe_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(v2 + 16) + 135LL),
        *(_DWORD *)(v2 + 144));
LABEL_11:
    _m_prefetchw((const void *)(v2 + 32));
    result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(v2 + 32), 2u);
    if ( (result & 2) == 0 )
      return ESM_AddEvent((PVOID)(v2 + 288));
    return result;
  }
  v5 = *(_BYTE *)(a1 + 60);
  if ( v5 != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v2 + 80),
        2u,
        0xDu,
        0x4Bu,
        (__int64)&WPP_c774b641227c31193674b815a53e6fbe_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(v2 + 16) + 135LL),
        *(_DWORD *)(v2 + 144),
        v5);
    Controller_ReportFatalError(*(_QWORD *)v2, 2, 4125, *(_QWORD *)(v2 + 16), v2, 0LL);
    goto LABEL_11;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v2 + 80),
      4u,
      0xDu,
      0x4Au,
      (__int64)&WPP_c774b641227c31193674b815a53e6fbe_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(v2 + 16) + 135LL),
      *(_DWORD *)(v2 + 144));
  return Endpoint_SendClearStallTransfer((PVOID)v2);
}
