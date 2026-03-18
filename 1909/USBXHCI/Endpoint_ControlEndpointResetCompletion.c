/*
 * XREFs of Endpoint_ControlEndpointResetCompletion @ 0x1C0017B20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ddi @ 0x1C000310C (WPP_RECORDER_SF_ddi.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     Command_SendCommand @ 0x1C000A7C8 (Command_SendCommand.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000B350 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C000B478 (WPP_RECORDER_SF_ddL.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C000E974 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0010108 (Controller_ReportFatalError.c)
 *     Endpoint_GetDequeuePointer @ 0x1C0018FFC (Endpoint_GetDequeuePointer.c)
 *     TR_InitializeTransferRing @ 0x1C00292D8 (TR_InitializeTransferRing.c)
 *     ESM_AddEvent @ 0x1C0044E54 (ESM_AddEvent.c)
 */

__int64 __fastcall Endpoint_ControlEndpointResetCompletion(_QWORD *a1, int a2, __int64 *a3)
{
  __int64 v3; // rbx
  unsigned __int8 v6; // cl
  __int64 result; // rax
  __int64 v8; // rsi
  unsigned int v9; // r10d
  int v10; // r10d
  __int64 v11; // r8
  int v12; // [rsp+20h] [rbp-28h]

  v3 = a1[6];
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(v3 + 80),
        4u,
        0xDu,
        0x53u,
        (__int64)&WPP_c774b641227c31193674b815a53e6fbe_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 135LL),
        *(_DWORD *)(v3 + 144));
LABEL_8:
    _m_prefetchw((const void *)(v3 + 32));
    result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(v3 + 32), 2u);
    if ( (result & 2) == 0 )
      return ESM_AddEvent((PVOID)(v3 + 288));
    return result;
  }
  v6 = *((_BYTE *)a1 + 60);
  if ( v6 != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v3 + 80),
        2u,
        0xDu,
        0x54u,
        (__int64)&WPP_c774b641227c31193674b815a53e6fbe_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 135LL),
        *(_DWORD *)(v3 + 144),
        v6);
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD **)v3,
      *(_QWORD *)(v3 + 8),
      *(_QWORD *)(v3 + 24),
      256LL,
      "Endpoint Reset Command failed",
      a1 + 3,
      a3);
    Controller_ReportFatalError(*(_QWORD *)v3, 2, 4102, *(_QWORD *)(v3 + 16), v3, 0LL);
    goto LABEL_8;
  }
  v8 = *(_QWORD *)(*(_QWORD *)v3 + 144LL);
  TR_InitializeTransferRing(*(_QWORD *)(v3 + 88));
  memset(a1, 0, 0x60uLL);
  v9 = *((_DWORD *)a1 + 9) & 0xFFFF43FF;
  a1[5] = Endpoint_ControlEndpointResetSetDequeuePointerCompletion;
  a1[6] = v3;
  *((_DWORD *)a1 + 9) = v9 | 0x4000;
  a1[3] = Endpoint_GetDequeuePointer(v3, 0LL);
  *((_DWORD *)a1 + 9) = v10 ^ (v10 ^ (*(_DWORD *)(v3 + 144) << 16)) & 0x1F0000;
  LOBYTE(v11) = *(_BYTE *)(*(_QWORD *)(v3 + 16) + 135LL);
  *((_BYTE *)a1 + 39) = v11;
  a1[9] = 0LL;
  a1[10] = 0LL;
  a1[11] = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ddi(*(_QWORD *)(v3 + 80), 4u, v11, 0x55u, v12);
  return Command_SendCommand(v8, (__int64)a1);
}
