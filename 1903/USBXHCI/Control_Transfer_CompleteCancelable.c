/*
 * XREFs of Control_Transfer_CompleteCancelable @ 0x1C002B57C
 * Callers:
 *     Control_MapTransfer @ 0x1C002A448 (Control_MapTransfer.c)
 *     Control_ProcessTransferCompletion @ 0x1C002A59C (Control_ProcessTransferCompletion.c)
 *     Control_ProcessTransferEventWithED1 @ 0x1C002AB34 (Control_ProcessTransferEventWithED1.c)
 *     Control_WdfEvtIoDefault @ 0x1C002C950 (Control_WdfEvtIoDefault.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000B350 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C000B478 (WPP_RECORDER_SF_ddL.c)
 *     Control_Transfer_Complete @ 0x1C002B34C (Control_Transfer_Complete.c)
 */

__int64 __fastcall Control_Transfer_CompleteCancelable(_QWORD *a1, char a2)
{
  __int64 v2; // rbx
  int v5; // eax
  unsigned int v6; // esi
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+28h] [rbp-20h]
  int v12; // [rsp+30h] [rbp-18h]
  int v13; // [rsp+30h] [rbp-18h]
  int v14; // [rsp+38h] [rbp-10h]

  v2 = a1[43];
  if ( *(_DWORD *)(v2 + 112) == 1 )
  {
    v5 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 2048))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           *(_QWORD *)(v2 + 24));
    v6 = v5;
    if ( v5 < 0 )
    {
      *(_DWORD *)(v2 + 112) = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v7 = a1[7];
        v14 = v5;
        v12 = *(_DWORD *)(v7 + 144);
        v10 = *(unsigned __int8 *)(a1[6] + 135LL);
        WPP_RECORDER_SF_ddL(
          *(_QWORD *)(v7 + 80),
          4u,
          0xEu,
          0x2Bu,
          (__int64)&WPP_f8d05c40f4743b0f34f8f34095e537bc_Traceguids,
          v10,
          v12,
          v14);
      }
      return v6;
    }
    *(_DWORD *)(v2 + 112) = 0;
  }
  if ( *(_DWORD *)(v2 + 116) != 1 )
  {
LABEL_11:
    a1[43] = 0LL;
    Control_Transfer_Complete((__int64)a1, v2, a2);
    return 0;
  }
  if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64, _QWORD, _QWORD))(WdfFunctions_01023 + 2560))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1[42],
         0LL) )
  {
    *(_DWORD *)(v2 + 116) = 0;
    goto LABEL_11;
  }
  v6 = -1073741536;
  *(_DWORD *)(v2 + 116) = 2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = a1[7];
    v13 = *(_DWORD *)(v8 + 144);
    v11 = *(unsigned __int8 *)(a1[6] + 135LL);
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v8 + 80),
      4u,
      0xEu,
      0x2Cu,
      (__int64)&WPP_f8d05c40f4743b0f34f8f34095e537bc_Traceguids,
      v11,
      v13);
  }
  return v6;
}
