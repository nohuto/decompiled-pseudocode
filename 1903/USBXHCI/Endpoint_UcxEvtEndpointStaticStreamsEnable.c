/*
 * XREFs of Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x1C001CFA0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C000B478 (WPP_RECORDER_SF_ddL.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C0014BD8 (WPP_RECORDER_SF_dddd.c)
 *     XilEndpoint_AllocateStreamContextArray @ 0x1C0016D20 (XilEndpoint_AllocateStreamContextArray.c)
 *     XilEndpoint_CommitStreamContextArrayUpdates @ 0x1C0016F3C (XilEndpoint_CommitStreamContextArrayUpdates.c)
 *     XilEndpoint_FreeStreamContextArray @ 0x1C0017360 (XilEndpoint_FreeStreamContextArray.c)
 *     Endpoint_GetDequeuePointer @ 0x1C0018FFC (Endpoint_GetDequeuePointer.c)
 *     TR_Disable_Internal @ 0x1C00288AC (TR_Disable_Internal.c)
 *     TR_Enable_Internal @ 0x1C0028BA8 (TR_Enable_Internal.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x1C003B4BC (UsbDevice_ReconfigureEndpoint.c)
 */

__int64 __fastcall Endpoint_UcxEvtEndpointStaticStreamsEnable(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 result; // rax
  __int64 v10; // rdx
  int v11; // r8d
  int v12; // edi
  unsigned int v13; // ebp
  __int64 DequeuePointer; // rax
  __int64 v15; // rdx
  unsigned int i; // ebp
  __int64 v17; // [rsp+28h] [rbp-90h]
  __int64 v18; // [rsp+30h] [rbp-88h]
  __int64 v19; // [rsp+38h] [rbp-80h]
  __int64 v20; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v21[5]; // [rsp+58h] [rbp-60h] BYREF

  memset(v21, 0, sizeof(v21));
  LOWORD(v21[0]) = 40;
  (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    a3,
    v21);
  v5 = v21[1];
  v6 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a2,
         off_1C0056338);
  v7 = v6;
  v8 = *(_QWORD *)v6;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(v8 + 80),
      4u,
      0xDu,
      0x68u,
      (__int64)&WPP_c774b641227c31193674b815a53e6fbe_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(v8 + 16) + 135LL),
      *(_DWORD *)(v8 + 144),
      *(_DWORD *)(v6 + 8));
  (*(void (__fastcall **)(unsigned __int64, _QWORD, _QWORD, _QWORD))(WdfFunctions_01023 + 1304))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    *(_QWORD *)(*(_QWORD *)(v8 + 88) + 72LL),
    0LL,
    0LL);
  result = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, char *, __int64 *))(WdfFunctions_01023 + 1224))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             *(_QWORD *)(*(_QWORD *)(v8 + 88) + 72LL),
             (char *)&v20 + 4,
             &v20);
  v10 = (unsigned int)v20;
  if ( v20 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v19) = HIDWORD(v20);
      LODWORD(v18) = *(_DWORD *)(v8 + 144);
      LODWORD(v17) = *(unsigned __int8 *)(*(_QWORD *)(v8 + 16) + 135LL);
      result = WPP_RECORDER_SF_dddd(
                 *(_QWORD *)(v8 + 80),
                 2u,
                 0xDu,
                 0x69u,
                 (__int64)&WPP_c774b641227c31193674b815a53e6fbe_Traceguids,
                 v17,
                 v18,
                 v19,
                 v20);
    }
    *(_DWORD *)(v5 + 4) = -2147482880;
    v12 = -1073741811;
    goto LABEL_22;
  }
  v10 = *(unsigned int *)(v7 + 8);
  if ( (_DWORD)v10 && (unsigned int)v10 <= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 88LL) + 112LL) )
  {
    *(_QWORD *)(*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                 WPP_MAIN_CB.Dpc.ProcessorHistory,
                 a3,
                 off_1C0056090) = v7;
    result = XilEndpoint_AllocateStreamContextArray(v7);
    v12 = result;
    if ( (int)result < 0 )
    {
LABEL_7:
      *(_DWORD *)(v5 + 4) = -1073737728;
      goto LABEL_22;
    }
    v13 = 1;
    *(_QWORD *)(v8 + 136) = v7;
    if ( *(_DWORD *)(v7 + 8) )
    {
      while ( 1 )
      {
        result = TR_Enable_Internal(*(_QWORD *)(104LL * (v13 - 1) + *(_QWORD *)(v8 + 136) + 48));
        v12 = result;
        if ( (int)result < 0 )
          break;
        DequeuePointer = Endpoint_GetDequeuePointer(v8, v13);
        v15 = v13++;
        v10 = 2 * v15;
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 136) + 32LL) + 16LL) + 8 * v10) = DequeuePointer;
        if ( v13 > *(_DWORD *)(v7 + 8) )
          goto LABEL_11;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v19) = v13;
        LODWORD(v18) = *(_DWORD *)(v8 + 144);
        LODWORD(v17) = *(unsigned __int8 *)(*(_QWORD *)(v8 + 16) + 135LL);
        result = WPP_RECORDER_SF_dddd(
                   *(_QWORD *)(v8 + 80),
                   2u,
                   0xDu,
                   0x6Bu,
                   (__int64)&WPP_c774b641227c31193674b815a53e6fbe_Traceguids,
                   v17,
                   v18,
                   v19,
                   result);
      }
      goto LABEL_7;
    }
LABEL_11:
    result = XilEndpoint_CommitStreamContextArrayUpdates(v7, v10, v11);
    v12 = result;
    if ( (int)result >= 0 )
      return UsbDevice_ReconfigureEndpoint(*(_QWORD *)(v8 + 16), v8, Endpoint_EndpointStaticStreamsEnableCompletion, a3);
    *(_DWORD *)(v5 + 4) = -2147481600;
LABEL_22:
    if ( v12 >= 0 )
      return result;
    goto LABEL_23;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v19) = *(_DWORD *)(v7 + 8);
    LODWORD(v18) = *(_DWORD *)(v8 + 144);
    LODWORD(v17) = *(unsigned __int8 *)(*(_QWORD *)(v8 + 16) + 135LL);
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(v8 + 80),
      2u,
      0xDu,
      0x6Au,
      (__int64)&WPP_c774b641227c31193674b815a53e6fbe_Traceguids,
      v17,
      v18,
      v19);
  }
  *(_DWORD *)(v5 + 4) = -2147482880;
  v12 = -1073741811;
LABEL_23:
  for ( i = 1; i <= *(_DWORD *)(v7 + 8); ++i )
  {
    LOBYTE(v10) = 1;
    TR_Disable_Internal(*(_QWORD *)(104LL * (i - 1) + v7 + 48), v10);
  }
  *(_QWORD *)(v8 + 136) = *(_QWORD *)(v8 + 128);
  XilEndpoint_FreeStreamContextArray((_QWORD *)v7);
  (*(void (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 1232))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    *(_QWORD *)(*(_QWORD *)(v8 + 88) + 72LL));
  return (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           a3,
           (unsigned int)v12);
}
