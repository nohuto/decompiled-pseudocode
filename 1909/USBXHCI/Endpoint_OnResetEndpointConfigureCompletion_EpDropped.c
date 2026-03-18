/*
 * XREFs of Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1C001A260
 * Callers:
 *     <none>
 * Callees:
 *     Command_SendCommand @ 0x1C000A7C8 (Command_SendCommand.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000B350 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C000B478 (WPP_RECORDER_SF_ddL.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C000CE9C (CommonBuffer_ReleaseBuffer.c)
 *     Controller_ReportFatalError @ 0x1C0010108 (Controller_ReportFatalError.c)
 *     XilEndpoint_CommitStreamContextArrayUpdates @ 0x1C0016F3C (XilEndpoint_CommitStreamContextArrayUpdates.c)
 *     XilEndpoint_FetchStreamContextArray @ 0x1C00172B4 (XilEndpoint_FetchStreamContextArray.c)
 *     Endpoint_GetDequeuePointer @ 0x1C0018FFC (Endpoint_GetDequeuePointer.c)
 *     Endpoint_InitializeTransferRing @ 0x1C00190BC (Endpoint_InitializeTransferRing.c)
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x1C001B488 (Endpoint_SetUpConfigureEndpointCommand.c)
 *     ESM_AddEvent @ 0x1C0044E54 (ESM_AddEvent.c)
 */

__int64 __fastcall Endpoint_OnResetEndpointConfigureCompletion_EpDropped(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rsi
  __int64 *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rbp
  __int64 result; // rax
  __int64 v9; // rdx
  int v10; // r8d
  __int64 v11; // rcx
  unsigned int i; // ebx
  __int64 DequeuePointer; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 48);
  v5 = *(__int64 **)v3;
  v6 = **(_QWORD **)v3;
  v7 = *(_QWORD *)(v6 + 144);
  if ( (_DWORD)a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dd(
        v5[10],
        4u,
        0xDu,
        0x32u,
        (__int64)&WPP_c774b641227c31193674b815a53e6fbe_Traceguids,
        *(unsigned __int8 *)(v5[2] + 135),
        *((_DWORD *)v5 + 36));
  }
  else
  {
    LOBYTE(a2) = *(_BYTE *)(a1 + 60);
    if ( (_BYTE)a2 == 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dd(
          v5[10],
          4u,
          0xDu,
          0x34u,
          (__int64)&WPP_c774b641227c31193674b815a53e6fbe_Traceguids,
          *(unsigned __int8 *)(v5[2] + 135),
          *((_DWORD *)v5 + 36));
      if ( (int)XilEndpoint_FetchStreamContextArray(v5[17], a2, a3) >= 0 )
      {
        v11 = v5[17];
        for ( i = 1; i <= *(_DWORD *)(v11 + 8); v11 = v5[17] )
        {
          Endpoint_InitializeTransferRing(v5, i);
          DequeuePointer = Endpoint_GetDequeuePointer((__int64)v5, i);
          v14 = i++;
          v9 = 2 * v14;
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5[17] + 32) + 16LL) + 8 * v9) = DequeuePointer;
        }
        if ( (int)XilEndpoint_CommitStreamContextArrayUpdates(v11, v9, v10) >= 0 )
        {
          Endpoint_SetUpConfigureEndpointCommand(
            (int)v5,
            0,
            (int)Endpoint_OnResetEndpointConfigureCompletion,
            v3,
            *(_QWORD *)(v3 + 8),
            0LL,
            (__int64)&v16,
            (void *)(v3 + 16));
          v15 = Endpoint_GetDequeuePointer((__int64)v5, 0);
          *(_QWORD *)(v16 + 8) = v15;
          return Command_SendCommand(v7, v3 + 16);
        }
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_ddL(
          v5[10],
          2u,
          0xDu,
          0x33u,
          (__int64)&WPP_c774b641227c31193674b815a53e6fbe_Traceguids,
          *(unsigned __int8 *)(v5[2] + 135),
          *((_DWORD *)v5 + 36),
          (unsigned __int8)a2);
        v6 = *v5;
      }
      Controller_ReportFatalError(v6, 2, 4119, v5[2], (__int64)v5, 0LL);
    }
  }
  CommonBuffer_ReleaseBuffer(*(_QWORD *)(*v5 + 120), *(_DWORD **)(v3 + 8));
  *(_QWORD *)(v3 + 8) = 0LL;
  *((_DWORD *)v5 + 70) = 0;
  _m_prefetchw(v5 + 4);
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)v5 + 8, 2u);
  if ( (result & 2) == 0 )
    return ESM_AddEvent(v5 + 36);
  return result;
}
