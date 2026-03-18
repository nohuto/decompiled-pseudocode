/*
 * XREFs of Endpoint_OnCancelEndpointConfigureCompletion_EpDropped @ 0x1C0016680
 * Callers:
 *     <none>
 * Callees:
 *     Command_SendCommand @ 0x1C0008820 (Command_SendCommand.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00092C8 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C00093F0 (WPP_RECORDER_SF_ddL.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C000AC6C (CommonBuffer_ReleaseBuffer.c)
 *     Controller_ReportFatalError @ 0x1C000DAAC (Controller_ReportFatalError.c)
 *     Endpoint_GetDequeuePointer @ 0x1C001615C (Endpoint_GetDequeuePointer.c)
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x1C0018358 (Endpoint_SetUpConfigureEndpointCommand.c)
 *     ESM_AddEvent @ 0x1C003F694 (ESM_AddEvent.c)
 */

__int64 __fastcall Endpoint_OnCancelEndpointConfigureCompletion_EpDropped(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  unsigned __int8 v4; // al
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 DequeuePointer; // rax
  int v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+30h] [rbp-18h]
  int v12; // [rsp+30h] [rbp-18h]
  int v13; // [rsp+30h] [rbp-18h]
  int v14; // [rsp+38h] [rbp-10h]
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  v3 = *(_QWORD *)(*(_QWORD *)v2 + 144LL);
  if ( a2 == 3 )
  {
    v11 = *(_DWORD *)(v2 + 144);
    v8 = *(unsigned __int8 *)(*(_QWORD *)(v2 + 16) + 135LL);
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v2 + 80),
      4u,
      0xDu,
      0x46u,
      (__int64)&WPP_cc93d32a3d3f360a569d7e7ab2fec42f_Traceguids,
      v8,
      v11);
  }
  else
  {
    v4 = *(_BYTE *)(a1 + 60);
    v5 = *(_QWORD *)(v2 + 16);
    if ( v4 == 1 )
    {
      v13 = *(_DWORD *)(v2 + 144);
      v10 = *(unsigned __int8 *)(v5 + 135);
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(v2 + 80),
        4u,
        0xDu,
        0x48u,
        (__int64)&WPP_cc93d32a3d3f360a569d7e7ab2fec42f_Traceguids,
        v10,
        v13);
      Endpoint_SetUpConfigureEndpointCommand(
        v2,
        0,
        (int)Endpoint_OnCancelEndpointConfigureCompletion,
        v2,
        *(_QWORD *)(v2 + 256),
        0LL,
        (__int64)&v15,
        (void *)(v2 + 160));
      DequeuePointer = Endpoint_GetDequeuePointer(v2, 0);
      *(_QWORD *)(v15 + 8) = DequeuePointer;
      return Command_SendCommand(v3, v2 + 160);
    }
    v14 = v4;
    v12 = *(_DWORD *)(v2 + 144);
    v9 = *(unsigned __int8 *)(v5 + 135);
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(v2 + 80),
      2u,
      0xDu,
      0x47u,
      (__int64)&WPP_cc93d32a3d3f360a569d7e7ab2fec42f_Traceguids,
      v9,
      v12,
      v14);
    Controller_ReportFatalError(*(_QWORD *)v2, 2, 4119, *(_QWORD *)(v2 + 16), v2, 0LL);
  }
  CommonBuffer_ReleaseBuffer(*(_QWORD *)(*(_QWORD *)v2 + 120LL), *(_DWORD **)(v2 + 256));
  *(_QWORD *)(v2 + 256) = 0LL;
  _m_prefetchw((const void *)(v2 + 32));
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(v2 + 32), 2u);
  if ( (result & 2) == 0 )
    return ESM_AddEvent((PVOID)(v2 + 288));
  return result;
}
