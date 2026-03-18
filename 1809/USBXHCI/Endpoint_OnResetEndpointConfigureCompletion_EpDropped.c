/*
 * XREFs of Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1C0017210
 * Callers:
 *     <none>
 * Callees:
 *     Command_SendCommand @ 0x1C0008820 (Command_SendCommand.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00092C8 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C00093F0 (WPP_RECORDER_SF_ddL.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C000AC6C (CommonBuffer_ReleaseBuffer.c)
 *     Controller_ReportFatalError @ 0x1C000DAAC (Controller_ReportFatalError.c)
 *     XilEndpoint_CommitStreamContextArrayUpdates @ 0x1C001430C (XilEndpoint_CommitStreamContextArrayUpdates.c)
 *     XilEndpoint_FetchStreamContextArray @ 0x1C0014660 (XilEndpoint_FetchStreamContextArray.c)
 *     Endpoint_GetDequeuePointer @ 0x1C001615C (Endpoint_GetDequeuePointer.c)
 *     Endpoint_InitializeTransferRing @ 0x1C001621C (Endpoint_InitializeTransferRing.c)
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x1C0018358 (Endpoint_SetUpConfigureEndpointCommand.c)
 *     ESM_AddEvent @ 0x1C003F694 (ESM_AddEvent.c)
 */

__int64 __fastcall Endpoint_OnResetEndpointConfigureCompletion_EpDropped(__int64 a1, int a2)
{
  __int64 *v2; // rsi
  __int64 v3; // rdi
  __int64 v4; // rbp
  __int64 result; // rax
  unsigned __int8 v6; // al
  __int64 v7; // rcx
  __int64 v8; // rdx
  int v9; // r8d
  __int64 v10; // rdx
  int v11; // r8d
  __int64 v12; // rcx
  unsigned int i; // ebx
  __int64 DequeuePointer; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  int v17; // [rsp+28h] [rbp-20h]
  int v18; // [rsp+28h] [rbp-20h]
  int v19; // [rsp+28h] [rbp-20h]
  int v20; // [rsp+30h] [rbp-18h]
  int v21; // [rsp+30h] [rbp-18h]
  int v22; // [rsp+30h] [rbp-18h]
  int v23; // [rsp+38h] [rbp-10h]
  __int64 v24; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(__int64 **)(a1 + 48);
  v3 = *v2;
  v4 = *(_QWORD *)(*(_QWORD *)*v2 + 144LL);
  if ( a2 == 3 )
  {
    v20 = *(_DWORD *)(v3 + 144);
    v17 = *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 135LL);
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v3 + 80),
      4u,
      0xDu,
      0x32u,
      (__int64)&WPP_cc93d32a3d3f360a569d7e7ab2fec42f_Traceguids,
      v17,
      v20);
  }
  else
  {
    v6 = *(_BYTE *)(a1 + 60);
    v7 = *(_QWORD *)(v3 + 16);
    if ( v6 == 1 )
    {
      v22 = *(_DWORD *)(v3 + 144);
      v19 = *(unsigned __int8 *)(v7 + 135);
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(v3 + 80),
        4u,
        0xDu,
        0x34u,
        (__int64)&WPP_cc93d32a3d3f360a569d7e7ab2fec42f_Traceguids,
        v19,
        v22);
      if ( (int)XilEndpoint_FetchStreamContextArray(*(_QWORD *)(v3 + 136), v8, v9) >= 0 )
      {
        v12 = *(_QWORD *)(v3 + 136);
        for ( i = 1; i <= *(_DWORD *)(v12 + 8); v12 = *(_QWORD *)(v3 + 136) )
        {
          Endpoint_InitializeTransferRing((__int64 *)v3, i);
          DequeuePointer = Endpoint_GetDequeuePointer(v3, i);
          v15 = i++;
          v10 = 2 * v15;
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 136) + 32LL) + 16LL) + 8 * v10) = DequeuePointer;
        }
        if ( (int)XilEndpoint_CommitStreamContextArrayUpdates(v12, v10, v11) >= 0 )
        {
          Endpoint_SetUpConfigureEndpointCommand(
            v3,
            0,
            (int)Endpoint_OnResetEndpointConfigureCompletion,
            (int)v2,
            v2[1],
            0LL,
            (__int64)&v24,
            v2 + 2);
          v16 = Endpoint_GetDequeuePointer(v3, 0);
          *(_QWORD *)(v24 + 8) = v16;
          return Command_SendCommand(v4, (__int64)(v2 + 2));
        }
      }
    }
    else
    {
      v23 = v6;
      v21 = *(_DWORD *)(v3 + 144);
      v18 = *(unsigned __int8 *)(v7 + 135);
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v3 + 80),
        2u,
        0xDu,
        0x33u,
        (__int64)&WPP_cc93d32a3d3f360a569d7e7ab2fec42f_Traceguids,
        v18,
        v21,
        v23);
      Controller_ReportFatalError(*(_QWORD *)v3, 2, 4119, *(_QWORD *)(v3 + 16), v3, 0LL);
    }
  }
  CommonBuffer_ReleaseBuffer(*(_QWORD *)(*(_QWORD *)v3 + 120LL), (_DWORD *)v2[1]);
  v2[1] = 0LL;
  *(_DWORD *)(v3 + 280) = 0;
  _m_prefetchw((const void *)(v3 + 32));
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(v3 + 32), 2u);
  if ( (result & 2) == 0 )
    return ESM_AddEvent((PVOID)(v3 + 288));
  return result;
}
