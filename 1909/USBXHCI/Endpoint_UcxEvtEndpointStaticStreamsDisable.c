/*
 * XREFs of Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x1C001CCD0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C000B478 (WPP_RECORDER_SF_ddL.c)
 *     XilEndpoint_AllocateStreamContextArray @ 0x1C0016D20 (XilEndpoint_AllocateStreamContextArray.c)
 *     XilEndpoint_CommitStreamContextArrayUpdates @ 0x1C0016F3C (XilEndpoint_CommitStreamContextArrayUpdates.c)
 *     XilEndpoint_FreeStreamContextArray @ 0x1C0017360 (XilEndpoint_FreeStreamContextArray.c)
 *     TR_Enable_Internal @ 0x1C0028BA8 (TR_Enable_Internal.c)
 *     TR_GetDequeuePointer @ 0x1C00290DC (TR_GetDequeuePointer.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x1C003B4BC (UsbDevice_ReconfigureEndpoint.c)
 */

__int64 __fastcall Endpoint_UcxEvtEndpointStaticStreamsDisable(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 *v9; // rax
  POOL_TYPE v10; // ecx
  PVOID PoolWithTag; // rax
  int StreamContextArray; // edi
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 result; // rax
  __int64 DequeuePointer; // rax
  __int64 v17; // rdx
  int v18; // r8d
  _QWORD *v19; // rcx
  __int64 v20; // [rsp+28h] [rbp-70h]
  __int64 v21; // [rsp+30h] [rbp-68h]
  __int64 v22; // [rsp+38h] [rbp-60h]
  _QWORD v23[5]; // [rsp+40h] [rbp-58h] BYREF

  memset(v23, 0, sizeof(v23));
  LOWORD(v23[0]) = 40;
  (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    a3,
    v23);
  v5 = v23[1];
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
      0x6Eu,
      (__int64)&WPP_c774b641227c31193674b815a53e6fbe_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(v8 + 16) + 135LL),
      *(_DWORD *)(v8 + 144),
      *(_DWORD *)(v6 + 8));
  v9 = (__int64 *)(*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                    WPP_MAIN_CB.Dpc.ProcessorHistory,
                    a3,
                    off_1C0056090);
  v10 = *(&WPP_MAIN_CB.AlignmentRequirement + 1);
  *v9 = v7;
  PoolWithTag = ExAllocatePoolWithTag(v10, 0x98uLL, 0x49434858u);
  *(_QWORD *)(v8 + 128) = PoolWithTag;
  if ( !PoolWithTag )
  {
    *(_DWORD *)(v5 + 4) = -1073737728;
    StreamContextArray = -1073741670;
LABEL_14:
    v19 = *(_QWORD **)(v8 + 128);
    if ( v19 )
    {
      XilEndpoint_FreeStreamContextArray(v19);
      ExFreePoolWithTag(*(PVOID *)(v8 + 128), 0x49434858u);
      *(_QWORD *)(v8 + 128) = 0LL;
    }
    return (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             a3,
             (unsigned int)StreamContextArray);
  }
  memset(PoolWithTag, 0, 0x98uLL);
  **(_QWORD **)(v8 + 128) = v8;
  *(_DWORD *)(*(_QWORD *)(v8 + 128) + 8LL) = 1;
  *(_DWORD *)(*(_QWORD *)(v8 + 128) + 12LL) = 1;
  StreamContextArray = XilEndpoint_AllocateStreamContextArray(*(_QWORD *)(v8 + 128));
  if ( StreamContextArray < 0 )
    goto LABEL_14;
  v13 = *(_QWORD *)(v8 + 128);
  v14 = *(_QWORD *)(v8 + 88);
  *(_QWORD *)(v8 + 136) = v13;
  *(_QWORD *)(v13 + 48) = v14;
  result = TR_Enable_Internal(*(_QWORD *)(v8 + 88));
  StreamContextArray = result;
  if ( (int)result >= 0 )
  {
    DequeuePointer = TR_GetDequeuePointer(*(_QWORD *)(v8 + 88));
    v17 = *(_QWORD *)(*(_QWORD *)(v8 + 136) + 32LL);
    *(_QWORD *)(*(_QWORD *)(v17 + 16) + 16LL) = DequeuePointer;
    result = XilEndpoint_CommitStreamContextArrayUpdates(*(_QWORD *)(v8 + 136), v17, v18);
    StreamContextArray = result;
    if ( (int)result >= 0 )
    {
      result = UsbDevice_ReconfigureEndpoint(
                 *(_QWORD *)(v8 + 16),
                 v8,
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
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v22) = result;
      LODWORD(v21) = *(_DWORD *)(v8 + 144);
      LODWORD(v20) = *(unsigned __int8 *)(*(_QWORD *)(v8 + 16) + 135LL);
      result = WPP_RECORDER_SF_ddL(
                 *(_QWORD *)(v8 + 80),
                 2u,
                 0xDu,
                 0x6Fu,
                 (__int64)&WPP_c774b641227c31193674b815a53e6fbe_Traceguids,
                 v20,
                 v21,
                 v22);
    }
    *(_DWORD *)(v5 + 4) = -1073737728;
  }
  if ( StreamContextArray < 0 )
    goto LABEL_14;
  return result;
}
