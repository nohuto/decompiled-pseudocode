/*
 * XREFs of Endpoint_UcxEvtDefaultEndpointUpdate @ 0x1C001BE60
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     Command_SendCommand @ 0x1C000A7C8 (Command_SendCommand.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000B350 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C000B478 (WPP_RECORDER_SF_ddL.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C000CE9C (CommonBuffer_ReleaseBuffer.c)
 *     XilEndpoint_AcquireBuffer @ 0x1C0016CEC (XilEndpoint_AcquireBuffer.c)
 *     Endpoint_GetDequeuePointer @ 0x1C0018FFC (Endpoint_GetDequeuePointer.c)
 *     Endpoint_InitializeTransferRing @ 0x1C00190BC (Endpoint_InitializeTransferRing.c)
 */

__int64 __fastcall Endpoint_UcxEvtDefaultEndpointUpdate(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rsi
  char *v8; // rax
  int v9; // ebx
  _DWORD *v10; // rdx
  __int64 v12; // rbp
  __int64 v13; // r10
  __int64 v14; // r10
  __int16 v15; // ax
  char v16; // al
  __int64 v17; // rax
  __int64 DequeuePointer; // rax
  __int64 v19; // r10
  __int64 v20; // [rsp+28h] [rbp-80h]
  __int64 v21; // [rsp+30h] [rbp-78h]
  _QWORD v22[5]; // [rsp+50h] [rbp-58h] BYREF

  memset(v22, 0, sizeof(v22));
  LOWORD(v22[0]) = 40;
  (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    a2,
    v22);
  v3 = v22[1];
  v4 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         *(_QWORD *)(v22[1] + 24LL),
         off_1C00561A8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(*(_QWORD *)v4 + 72LL),
      4u,
      0xDu,
      0x1Eu,
      (__int64)&WPP_c774b641227c31193674b815a53e6fbe_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(v4 + 16) + 135LL),
      *(_DWORD *)(v4 + 144),
      *(_DWORD *)(v3 + 32));
  v5 = *(_QWORD *)(*(_QWORD *)v4 + 88LL);
  v6 = *(_QWORD *)(*(_QWORD *)v4 + 144LL);
  v7 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a2,
         off_1C0056090);
  memset((void *)(v7 + 8), 0, 0x70uLL);
  *(_QWORD *)v7 = v4;
  *(_DWORD *)(v7 + 16) = *(_DWORD *)(v3 + 32);
  v8 = XilEndpoint_AcquireBuffer((_BYTE *)v4, (*(_DWORD *)(v5 + 100) & 4) != 0 ? 2112 : 1056, v4, 829714501);
  v9 = 0;
  *(_QWORD *)(v7 + 8) = v8;
  if ( v8 )
  {
    v12 = *((_QWORD *)v8 + 2);
    v13 = -(__int64)((*(_DWORD *)(v5 + 100) & 4) != 0);
    *(_DWORD *)(v12 + 4) |= 2u;
    v14 = v12 + (v13 & 0x40) + 64;
    *(_DWORD *)(v14 + 4) ^= (*(_DWORD *)(v14 + 4) ^ (8 * *(_DWORD *)(v4 + 120))) & 0x38;
    v15 = *(_WORD *)(v7 + 16);
    *(_BYTE *)(v14 + 2) = 0;
    *(_DWORD *)v14 &= 0xFFFF80FF;
    *(_WORD *)(v14 + 6) = v15;
    *(_BYTE *)(v14 + 5) = 0;
    v16 = *(_BYTE *)(v4 + 99) & 3;
    if ( v16 != 1 )
    {
      if ( (*(_QWORD *)(*(_QWORD *)v4 + 336LL) & 0x10000000000000LL) == 0
        || v16 != 3
        || *(char *)(v4 + 98) >= 0
        || (v17 = *(_QWORD *)(v4 + 16), *(_WORD *)(v17 + 124) != 1529)
        || *(_WORD *)(v17 + 126) != 4353
        || *(_DWORD *)(v17 + 36) <= 1u )
      {
        v9 = 6;
      }
    }
    *(_DWORD *)(v14 + 4) = v9 & 0xFFFFFFFE | *(_DWORD *)(v14 + 4) & 0xFFFFFFF8;
    DequeuePointer = Endpoint_GetDequeuePointer(v4, 0);
    *(_QWORD *)(v19 + 8) = DequeuePointer;
    *(_DWORD *)(v4 + 152) = *(unsigned __int16 *)(v19 + 6);
    Endpoint_InitializeTransferRing((__int64 *)v4, 0);
    memset((void *)(v7 + 24), 0, 0x60uLL);
    *(_QWORD *)(v7 + 72) = v7;
    *(_QWORD *)(v7 + 64) = Endpoint_EvaluateContextCompletion;
    *(_DWORD *)(v7 + 60) = *(_DWORD *)(v7 + 60) & 0xFFFF03FF | 0x3400;
    *(_BYTE *)(v7 + 63) = *(_BYTE *)(*(_QWORD *)(v4 + 16) + 135LL);
    *(_QWORD *)(v7 + 48) = *(_QWORD *)(*(_QWORD *)(v7 + 8) + 24LL);
    *(_QWORD *)(v7 + 96) = v12;
    *(_DWORD *)(v7 + 104) = *(_DWORD *)(*(_QWORD *)(v7 + 8) + 44LL);
    *(_DWORD *)(v7 + 108) = 2;
    *(_QWORD *)(v7 + 112) = v4;
    return Command_SendCommand(v6, v7 + 24);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v21) = *(_DWORD *)(v4 + 144);
      LODWORD(v20) = *(unsigned __int8 *)(*(_QWORD *)(v4 + 16) + 135LL);
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(*(_QWORD *)v4 + 72LL),
        2u,
        0xDu,
        0x1Fu,
        (__int64)&WPP_c774b641227c31193674b815a53e6fbe_Traceguids,
        v20,
        v21);
    }
    v10 = *(_DWORD **)(v7 + 8);
    if ( v10 )
    {
      CommonBuffer_ReleaseBuffer(*(_QWORD *)(*(_QWORD *)v4 + 120LL), v10);
      *(_QWORD *)(v7 + 8) = 0LL;
    }
    return (*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64))(WdfFunctions_01023 + 2104))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             a2,
             3221225626LL);
  }
}
