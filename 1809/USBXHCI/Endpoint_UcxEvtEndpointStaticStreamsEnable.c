/*
 * XREFs of Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x1C0019C40
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C00093F0 (WPP_RECORDER_SF_ddL.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C00121D8 (WPP_RECORDER_SF_dddd.c)
 *     XilEndpoint_AllocateStreamContextArray @ 0x1C0014130 (XilEndpoint_AllocateStreamContextArray.c)
 *     XilEndpoint_CommitStreamContextArrayUpdates @ 0x1C001430C (XilEndpoint_CommitStreamContextArrayUpdates.c)
 *     XilEndpoint_FreeStreamContextArray @ 0x1C001470C (XilEndpoint_FreeStreamContextArray.c)
 *     Endpoint_GetDequeuePointer @ 0x1C001615C (Endpoint_GetDequeuePointer.c)
 *     TR_Disable_Internal @ 0x1C0024200 (TR_Disable_Internal.c)
 *     TR_Enable_Internal @ 0x1C00244B8 (TR_Enable_Internal.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x1C00362EC (UsbDevice_ReconfigureEndpoint.c)
 */

__int64 __fastcall Endpoint_UcxEvtEndpointStaticStreamsEnable(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r14
  _DWORD *v6; // rsi
  __int64 v7; // rbx
  unsigned int v8; // edx
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // edi
  unsigned int v13; // ebp
  __int64 DequeuePointer; // rax
  __int64 v15; // r8
  unsigned int i; // ebp
  __int64 v17; // [rsp+28h] [rbp-90h]
  __int64 v18; // [rsp+30h] [rbp-88h]
  __int64 v19; // [rsp+38h] [rbp-80h]
  int v20; // [rsp+50h] [rbp-68h] BYREF
  int v21; // [rsp+54h] [rbp-64h] BYREF
  _QWORD v22[5]; // [rsp+58h] [rbp-60h] BYREF

  memset(v22, 0, sizeof(v22));
  LOWORD(v22[0]) = 40;
  (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    a3,
    v22);
  v5 = v22[1];
  v6 = (_DWORD *)(*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                   WPP_MAIN_CB.Dpc.ProcessorHistory,
                   a2,
                   off_1C004F310);
  v7 = *(_QWORD *)v6;
  WPP_RECORDER_SF_ddL(
    *(_QWORD *)(*(_QWORD *)v6 + 80LL),
    4u,
    0xDu,
    0x68u,
    (__int64)&WPP_cc93d32a3d3f360a569d7e7ab2fec42f_Traceguids,
    *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)v6 + 16LL) + 135LL),
    *(_DWORD *)(*(_QWORD *)v6 + 144LL),
    v6[2]);
  (*(void (__fastcall **)(unsigned __int64, _QWORD, _QWORD, _QWORD))(WdfFunctions_01023 + 1304))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    *(_QWORD *)(*(_QWORD *)(v7 + 88) + 72LL),
    0LL,
    0LL);
  (*(void (__fastcall **)(unsigned __int64, _QWORD, int *, int *))(WdfFunctions_01023 + 1224))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    *(_QWORD *)(*(_QWORD *)(v7 + 88) + 72LL),
    &v21,
    &v20);
  if ( v21 || v20 )
  {
    LODWORD(v19) = v21;
    LODWORD(v18) = *(_DWORD *)(v7 + 144);
    LODWORD(v17) = *(unsigned __int8 *)(*(_QWORD *)(v7 + 16) + 135LL);
    result = WPP_RECORDER_SF_dddd(
               *(_QWORD *)(v7 + 80),
               2u,
               0xDu,
               0x69u,
               (__int64)&WPP_cc93d32a3d3f360a569d7e7ab2fec42f_Traceguids,
               v17,
               v18,
               v19,
               v20);
    *(_DWORD *)(v5 + 4) = -2147482880;
    v12 = -1073741811;
    goto LABEL_16;
  }
  v8 = v6[2];
  if ( v8 && v8 <= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 88LL) + 112LL) )
  {
    *(_QWORD *)(*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                 WPP_MAIN_CB.Dpc.ProcessorHistory,
                 a3,
                 off_1C004F068) = v6;
    result = XilEndpoint_AllocateStreamContextArray((__int64)v6);
    v12 = result;
    if ( (int)result < 0 )
    {
LABEL_6:
      *(_DWORD *)(v5 + 4) = -1073737728;
      goto LABEL_16;
    }
    v13 = 1;
    *(_QWORD *)(v7 + 136) = v6;
    if ( v6[2] )
    {
      while ( 1 )
      {
        v12 = TR_Enable_Internal(*(_QWORD *)(104LL * (v13 - 1) + *(_QWORD *)(v7 + 136) + 48));
        if ( v12 < 0 )
          break;
        DequeuePointer = Endpoint_GetDequeuePointer(v7, v13);
        v15 = v13++;
        v11 = 2 * v15;
        v10 = *(_QWORD *)(*(_QWORD *)(v7 + 136) + 32LL);
        *(_QWORD *)(*(_QWORD *)(v10 + 16) + 8 * v11) = DequeuePointer;
        if ( v13 > v6[2] )
          goto LABEL_10;
      }
      LODWORD(v19) = v13;
      LODWORD(v18) = *(_DWORD *)(v7 + 144);
      LODWORD(v17) = *(unsigned __int8 *)(*(_QWORD *)(v7 + 16) + 135LL);
      result = WPP_RECORDER_SF_dddd(
                 *(_QWORD *)(v7 + 80),
                 2u,
                 0xDu,
                 0x6Bu,
                 (__int64)&WPP_cc93d32a3d3f360a569d7e7ab2fec42f_Traceguids,
                 v17,
                 v18,
                 v19,
                 v12);
      goto LABEL_6;
    }
LABEL_10:
    result = XilEndpoint_CommitStreamContextArrayUpdates((__int64)v6, v10, v11);
    v12 = result;
    if ( (int)result >= 0 )
      return UsbDevice_ReconfigureEndpoint(*(_QWORD *)(v7 + 16), v7, Endpoint_EndpointStaticStreamsEnableCompletion, a3);
    *(_DWORD *)(v5 + 4) = -2147481600;
LABEL_16:
    if ( v12 >= 0 )
      return result;
    goto LABEL_17;
  }
  LODWORD(v19) = v6[2];
  LODWORD(v18) = *(_DWORD *)(v7 + 144);
  LODWORD(v17) = *(unsigned __int8 *)(*(_QWORD *)(v7 + 16) + 135LL);
  WPP_RECORDER_SF_ddL(
    *(_QWORD *)(v7 + 80),
    2u,
    0xDu,
    0x6Au,
    (__int64)&WPP_cc93d32a3d3f360a569d7e7ab2fec42f_Traceguids,
    v17,
    v18,
    v19);
  *(_DWORD *)(v5 + 4) = -2147482880;
  v12 = -1073741811;
LABEL_17:
  for ( i = 1; i <= v6[2]; ++i )
  {
    LOBYTE(v10) = 1;
    TR_Disable_Internal(*(_QWORD *)&v6[26 * i - 14], v10);
  }
  *(_QWORD *)(v7 + 136) = *(_QWORD *)(v7 + 128);
  XilEndpoint_FreeStreamContextArray(v6);
  (*(void (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 1232))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    *(_QWORD *)(*(_QWORD *)(v7 + 88) + 72LL));
  return (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           a3,
           (unsigned int)v12);
}
