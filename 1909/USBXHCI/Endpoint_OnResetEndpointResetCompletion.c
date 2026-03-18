/*
 * XREFs of Endpoint_OnResetEndpointResetCompletion @ 0x1C001A4D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C000B350 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C000B478 (WPP_RECORDER_SF_ddL.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C000E974 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0010108 (Controller_ReportFatalError.c)
 *     XilEndpoint_FetchStreamContextArray @ 0x1C00172B4 (XilEndpoint_FetchStreamContextArray.c)
 *     Endpoint_OnResetSetDequeuePointer @ 0x1C001A700 (Endpoint_OnResetSetDequeuePointer.c)
 *     UsbDevice_GetEndpointState @ 0x1C003B09C (UsbDevice_GetEndpointState.c)
 *     ESM_AddEvent @ 0x1C0044E54 (ESM_AddEvent.c)
 */

__int64 __fastcall Endpoint_OnResetEndpointResetCompletion(__int64 a1, int a2, __int64 *a3)
{
  __int64 *v3; // rsi
  __int64 v6; // rbx
  int StreamContextArray; // eax
  __int64 result; // rax
  unsigned __int8 v9; // cl
  __int64 EndpointState; // rdx
  int v11; // r8d
  __int64 v12; // rcx
  unsigned int i; // edi

  v3 = *(__int64 **)(a1 + 48);
  v6 = *v3;
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(v6 + 80),
        4u,
        0xDu,
        0x2Cu,
        (__int64)&WPP_c774b641227c31193674b815a53e6fbe_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 135LL),
        *(_DWORD *)(v6 + 144));
LABEL_4:
    StreamContextArray = -1073741823;
LABEL_5:
    *(_DWORD *)(v6 + 280) = StreamContextArray;
    _m_prefetchw((const void *)(v6 + 32));
    result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(v6 + 32), 2u);
    if ( (result & 2) == 0 )
      return ESM_AddEvent((PVOID)(v6 + 288));
    return result;
  }
  v9 = *(_BYTE *)(a1 + 60);
  if ( v9 != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v6 + 80),
        2u,
        0xDu,
        0x2Du,
        (__int64)&WPP_c774b641227c31193674b815a53e6fbe_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 135LL),
        *(_DWORD *)(v6 + 144),
        v9);
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD **)v6,
      *(_QWORD *)(v6 + 8),
      *(_QWORD *)(v6 + 24),
      256LL,
      "Endpoint Reset Command failed",
      (__int64 *)(a1 + 24),
      a3);
    Controller_ReportFatalError(*(_QWORD *)v6, 2, 4123, *(_QWORD *)(v6 + 16), v6, 0LL);
    goto LABEL_4;
  }
  EndpointState = (unsigned int)UsbDevice_GetEndpointState(*(_QWORD *)(v6 + 16), *(unsigned int *)(v6 + 144));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(v6 + 80),
      4u,
      0xDu,
      0x2Eu,
      (__int64)&WPP_c774b641227c31193674b815a53e6fbe_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 135LL),
      *(_DWORD *)(v6 + 144),
      EndpointState);
  if ( !*(_BYTE *)(v6 + 37) )
    return Endpoint_OnResetSetDequeuePointer(v3, 0LL);
  v12 = *(_QWORD *)(v6 + 136);
  *(_DWORD *)(v12 + 20) = 0;
  StreamContextArray = XilEndpoint_FetchStreamContextArray(v12, EndpointState, v11);
  if ( StreamContextArray < 0 )
    goto LABEL_5;
  result = *(_QWORD *)(v6 + 136);
  for ( i = 1; i <= *(_DWORD *)(result + 8); ++i )
  {
    Endpoint_OnResetSetDequeuePointer(v3, i);
    result = *(_QWORD *)(v6 + 136);
  }
  return result;
}
