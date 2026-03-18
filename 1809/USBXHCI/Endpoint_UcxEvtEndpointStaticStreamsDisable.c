/*
 * XREFs of Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x1C0019990
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C00093F0 (WPP_RECORDER_SF_ddL.c)
 *     XilEndpoint_AllocateStreamContextArray @ 0x1C0014130 (XilEndpoint_AllocateStreamContextArray.c)
 *     XilEndpoint_CommitStreamContextArrayUpdates @ 0x1C001430C (XilEndpoint_CommitStreamContextArrayUpdates.c)
 *     XilEndpoint_FreeStreamContextArray @ 0x1C001470C (XilEndpoint_FreeStreamContextArray.c)
 *     TR_Enable_Internal @ 0x1C00244B8 (TR_Enable_Internal.c)
 *     TR_GetDequeuePointer @ 0x1C002499C (TR_GetDequeuePointer.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x1C00362EC (UsbDevice_ReconfigureEndpoint.c)
 */

__int64 __fastcall Endpoint_UcxEvtEndpointStaticStreamsDisable(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  _DWORD *v6; // rbx
  __int64 v7; // rdi
  _QWORD *v8; // rax
  POOL_TYPE v9; // ecx
  PVOID PoolWithTag; // rax
  int StreamContextArray; // ebx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 result; // rax
  __int64 DequeuePointer; // rax
  __int64 v16; // rdx
  int v17; // r8d
  _QWORD *v18; // rcx
  __int64 v19; // [rsp+28h] [rbp-60h]
  __int64 v20; // [rsp+30h] [rbp-58h]
  __int64 v21; // [rsp+38h] [rbp-50h]
  _QWORD v22[5]; // [rsp+40h] [rbp-48h] BYREF

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
    0x6Eu,
    (__int64)&WPP_cc93d32a3d3f360a569d7e7ab2fec42f_Traceguids,
    *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)v6 + 16LL) + 135LL),
    *(_DWORD *)(*(_QWORD *)v6 + 144LL),
    v6[2]);
  v8 = (_QWORD *)(*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                   WPP_MAIN_CB.Dpc.ProcessorHistory,
                   a3,
                   off_1C004F068);
  v9 = *(&WPP_MAIN_CB.AlignmentRequirement + 1);
  *v8 = v6;
  PoolWithTag = ExAllocatePoolWithTag(v9, 0x98uLL, 0x49434858u);
  *(_QWORD *)(v7 + 128) = PoolWithTag;
  if ( !PoolWithTag )
  {
    *(_DWORD *)(v5 + 4) = -1073737728;
    StreamContextArray = -1073741670;
LABEL_10:
    v18 = *(_QWORD **)(v7 + 128);
    if ( v18 )
    {
      XilEndpoint_FreeStreamContextArray(v18);
      ExFreePoolWithTag(*(PVOID *)(v7 + 128), 0x49434858u);
      *(_QWORD *)(v7 + 128) = 0LL;
    }
    return (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             a3,
             (unsigned int)StreamContextArray);
  }
  memset(PoolWithTag, 0, 0x98uLL);
  **(_QWORD **)(v7 + 128) = v7;
  *(_DWORD *)(*(_QWORD *)(v7 + 128) + 8LL) = 1;
  *(_DWORD *)(*(_QWORD *)(v7 + 128) + 12LL) = 1;
  StreamContextArray = XilEndpoint_AllocateStreamContextArray(*(_QWORD *)(v7 + 128));
  if ( StreamContextArray < 0 )
    goto LABEL_10;
  v12 = *(_QWORD *)(v7 + 128);
  v13 = *(_QWORD *)(v7 + 88);
  *(_QWORD *)(v7 + 136) = v12;
  *(_QWORD *)(v12 + 48) = v13;
  StreamContextArray = TR_Enable_Internal(*(_QWORD *)(v7 + 88));
  if ( StreamContextArray >= 0 )
  {
    DequeuePointer = TR_GetDequeuePointer(*(_QWORD *)(v7 + 88));
    v16 = *(_QWORD *)(*(_QWORD *)(v7 + 136) + 32LL);
    *(_QWORD *)(*(_QWORD *)(v16 + 16) + 16LL) = DequeuePointer;
    result = XilEndpoint_CommitStreamContextArrayUpdates(*(_QWORD *)(v7 + 136), v16, v17);
    StreamContextArray = result;
    if ( (int)result >= 0 )
    {
      result = UsbDevice_ReconfigureEndpoint(
                 *(_QWORD *)(v7 + 16),
                 v7,
                 Endpoint_EndpointStaticStreamsDisableCompletion,
                 a3);
      StreamContextArray = 0;
    }
    else
    {
      *(_DWORD *)(v5 + 4) = -2147481600;
    }
  }
  else
  {
    LODWORD(v21) = StreamContextArray;
    LODWORD(v20) = *(_DWORD *)(v7 + 144);
    LODWORD(v19) = *(unsigned __int8 *)(*(_QWORD *)(v7 + 16) + 135LL);
    result = WPP_RECORDER_SF_ddL(
               *(_QWORD *)(v7 + 80),
               2u,
               0xDu,
               0x6Fu,
               (__int64)&WPP_cc93d32a3d3f360a569d7e7ab2fec42f_Traceguids,
               v19,
               v20,
               v21);
    *(_DWORD *)(v5 + 4) = -1073737728;
  }
  if ( StreamContextArray < 0 )
    goto LABEL_10;
  return result;
}
