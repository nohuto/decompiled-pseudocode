/*
 * XREFs of Endpoint_OnCancelEndpointConfigureCompletion_EpDropped @ 0x1C0019580
 * Callers:
 *     <none>
 * Callees:
 *     Command_SendCommand @ 0x1C000A7C8 (Command_SendCommand.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000B350 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C000B478 (WPP_RECORDER_SF_ddL.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C000CE9C (CommonBuffer_ReleaseBuffer.c)
 *     Controller_ReportFatalError @ 0x1C0010108 (Controller_ReportFatalError.c)
 *     Endpoint_GetDequeuePointer @ 0x1C0018FFC (Endpoint_GetDequeuePointer.c)
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x1C001B488 (Endpoint_SetUpConfigureEndpointCommand.c)
 *     ESM_AddEvent @ 0x1C0044E54 (ESM_AddEvent.c)
 */

__int64 __fastcall Endpoint_OnCancelEndpointConfigureCompletion_EpDropped(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rcx
  __int64 v5; // rsi
  unsigned __int8 v6; // dl
  __int64 result; // rax
  __int64 DequeuePointer; // rax
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  v4 = *(_QWORD *)v2;
  v5 = *(_QWORD *)(*(_QWORD *)v2 + 144LL);
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(v2 + 80),
        4u,
        0xDu,
        0x46u,
        (__int64)&WPP_c774b641227c31193674b815a53e6fbe_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(v2 + 16) + 135LL),
        *(_DWORD *)(v2 + 144));
LABEL_8:
    CommonBuffer_ReleaseBuffer(*(_QWORD *)(*(_QWORD *)v2 + 120LL), *(_DWORD **)(v2 + 256));
    *(_QWORD *)(v2 + 256) = 0LL;
    _m_prefetchw((const void *)(v2 + 32));
    result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(v2 + 32), 2u);
    if ( (result & 2) == 0 )
      return ESM_AddEvent((PVOID)(v2 + 288));
    return result;
  }
  v6 = *(_BYTE *)(a1 + 60);
  if ( v6 != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v2 + 80),
        2u,
        0xDu,
        0x47u,
        (__int64)&WPP_c774b641227c31193674b815a53e6fbe_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(v2 + 16) + 135LL),
        *(_DWORD *)(v2 + 144),
        v6);
      v4 = *(_QWORD *)v2;
    }
    Controller_ReportFatalError(v4, 2, 4119, *(_QWORD *)(v2 + 16), v2, 0LL);
    goto LABEL_8;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v2 + 80),
      4u,
      0xDu,
      0x48u,
      (__int64)&WPP_c774b641227c31193674b815a53e6fbe_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(v2 + 16) + 135LL),
      *(_DWORD *)(v2 + 144));
  Endpoint_SetUpConfigureEndpointCommand(
    v2,
    0,
    (int)Endpoint_OnCancelEndpointConfigureCompletion,
    v2,
    *(_QWORD *)(v2 + 256),
    0LL,
    (__int64)&v9,
    (void *)(v2 + 160));
  DequeuePointer = Endpoint_GetDequeuePointer(v2, 0);
  *(_QWORD *)(v9 + 8) = DequeuePointer;
  return Command_SendCommand(v5, v2 + 160);
}
