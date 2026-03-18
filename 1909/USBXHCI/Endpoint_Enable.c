/*
 * XREFs of Endpoint_Enable @ 0x1C00182F0
 * Callers:
 *     UsbDevice_InitializeInputContextForAddEndpoints @ 0x1C000583C (UsbDevice_InitializeInputContextForAddEndpoints.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C003C7E0 (UsbDevice_UcxEvtEnable.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     RtlStringCchPrintfA @ 0x1C000B1CC (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C000B478 (WPP_RECORDER_SF_ddL.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C0014BD8 (WPP_RECORDER_SF_dddd.c)
 *     XilEndpoint_AllocateStreamContextArray @ 0x1C0016D20 (XilEndpoint_AllocateStreamContextArray.c)
 *     XilEndpoint_CommitStreamContextArrayUpdates @ 0x1C0016F3C (XilEndpoint_CommitStreamContextArrayUpdates.c)
 *     Endpoint_Disable_Internal @ 0x1C0018194 (Endpoint_Disable_Internal.c)
 *     Endpoint_GetDequeuePointer @ 0x1C0018FFC (Endpoint_GetDequeuePointer.c)
 *     WPP_RECORDER_SF_ddq @ 0x1C001D740 (WPP_RECORDER_SF_ddq.c)
 *     TR_Enable_Internal @ 0x1C0028BA8 (TR_Enable_Internal.c)
 *     TR_GetDequeuePointer @ 0x1C00290DC (TR_GetDequeuePointer.c)
 *     ESM_AddEvent @ 0x1C0044E54 (ESM_AddEvent.c)
 */

__int64 __fastcall Endpoint_Enable(__int64 a1)
{
  int v2; // edx
  __int64 v3; // rax
  __int64 v4; // r14
  __int64 v5; // rsi
  char *PoolWithTag; // rax
  __int64 v7; // rdx
  int StreamContextArray; // edi
  __int64 DequeuePointer; // rax
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rax
  unsigned int v14; // ebp
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v18; // [rsp+28h] [rbp-80h]
  __int64 v19; // [rsp+30h] [rbp-78h]
  __int64 v20; // [rsp+38h] [rbp-70h]
  _QWORD v21[6]; // [rsp+50h] [rbp-58h] BYREF

  memset(v21, 0, sizeof(v21));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_ddq(
      *(_QWORD *)(*(_QWORD *)a1 + 72LL),
      v2,
      13,
      22,
      (__int64)&WPP_c774b641227c31193674b815a53e6fbe_Traceguids,
      *(_BYTE *)(*(_QWORD *)(a1 + 16) + 135LL),
      *(_DWORD *)(a1 + 144),
      *(_QWORD *)(a1 + 24));
  }
  v3 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64 (__fastcall *)(_QWORD)))qword_1C00576B8)(
         UcxDriverGlobals,
         *(_QWORD *)(a1 + 24),
         Endpoint_Enable);
  v4 = v3;
  if ( *(_BYTE *)(a1 + 37) )
  {
    if ( !v3 )
    {
      v5 = *(_QWORD *)(a1 + 128);
      if ( !v5 )
      {
        PoolWithTag = (char *)ExAllocatePoolWithTag(
                                *((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1),
                                0x98uLL,
                                0x49434858u);
        *(_QWORD *)(a1 + 128) = PoolWithTag;
        v5 = (__int64)PoolWithTag;
        if ( !PoolWithTag )
        {
          StreamContextArray = -1073741670;
LABEL_19:
          LOBYTE(v7) = 1;
          Endpoint_Disable_Internal(a1, v7);
          goto LABEL_32;
        }
        *(_QWORD *)(a1 + 136) = PoolWithTag;
        memset(PoolWithTag + 16, 0, 0x88uLL);
        *(_QWORD *)v5 = a1;
        *(_DWORD *)(v5 + 8) = 1;
        *(_DWORD *)(v5 + 12) = 1;
        *(_QWORD *)(*(_QWORD *)(a1 + 136) + 48LL) = *(_QWORD *)(a1 + 88);
        StreamContextArray = XilEndpoint_AllocateStreamContextArray(v5);
        if ( StreamContextArray < 0 )
          goto LABEL_19;
      }
      StreamContextArray = TR_Enable_Internal(*(_QWORD *)(a1 + 88));
      if ( StreamContextArray < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v20) = StreamContextArray;
          LODWORD(v19) = *(_DWORD *)(a1 + 144);
          LODWORD(v18) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 16) + 135LL);
          WPP_RECORDER_SF_ddL(
            *(_QWORD *)(*(_QWORD *)a1 + 72LL),
            2u,
            0xDu,
            0x17u,
            (__int64)&WPP_c774b641227c31193674b815a53e6fbe_Traceguids,
            v18,
            v19,
            v20);
        }
        goto LABEL_18;
      }
      DequeuePointer = TR_GetDequeuePointer(*(_QWORD *)(a1 + 88));
      v7 = *(_QWORD *)(*(_QWORD *)(a1 + 136) + 32LL);
      *(_QWORD *)(*(_QWORD *)(v7 + 16) + 16LL) = DequeuePointer;
      goto LABEL_14;
    }
    v13 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            v3,
            off_1C0056338);
    *(_QWORD *)(a1 + 136) = v13;
    v5 = v13;
    if ( !*(_QWORD *)(v13 + 32) )
    {
      StreamContextArray = XilEndpoint_AllocateStreamContextArray(v13);
      if ( StreamContextArray < 0 )
        goto LABEL_19;
    }
    v14 = 1;
    if ( !*(_DWORD *)(v5 + 8) )
    {
LABEL_14:
      StreamContextArray = XilEndpoint_CommitStreamContextArrayUpdates(v5, v7, v10);
      if ( StreamContextArray < 0 )
        goto LABEL_19;
      goto LABEL_15;
    }
    while ( 1 )
    {
      StreamContextArray = TR_Enable_Internal(*(_QWORD *)(104LL * (v14 - 1) + *(_QWORD *)(a1 + 136) + 48));
      if ( StreamContextArray < 0 )
        break;
      v15 = Endpoint_GetDequeuePointer(a1, v14);
      v16 = v14++;
      v10 = 2 * v16;
      v7 = *(_QWORD *)(*(_QWORD *)(a1 + 136) + 32LL);
      *(_QWORD *)(*(_QWORD *)(v7 + 16) + 8 * v10) = v15;
      if ( v14 > *(_DWORD *)(v5 + 8) )
        goto LABEL_14;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v20) = v14 + 1;
      LODWORD(v19) = *(_DWORD *)(a1 + 144);
      LODWORD(v18) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 16) + 135LL);
      WPP_RECORDER_SF_dddd(
        *(_QWORD *)(*(_QWORD *)a1 + 72LL),
        2u,
        0xDu,
        0x18u,
        (__int64)&WPP_c774b641227c31193674b815a53e6fbe_Traceguids,
        v18,
        v19,
        v20,
        StreamContextArray);
    }
  }
  else
  {
    StreamContextArray = TR_Enable_Internal(*(_QWORD *)(a1 + 88));
    if ( StreamContextArray >= 0 )
    {
LABEL_15:
      v11 = *(_QWORD *)(a1 + 16);
      v12 = *(_QWORD *)a1;
      v21[2] = 0LL;
      v21[0] = 48LL;
      LOBYTE(v21[4]) = 0;
      HIDWORD(v21[3]) = 16;
      LOBYTE(v21[3]) = 0;
      v21[1] = 0xC800000400LL;
      RtlStringCchPrintfA(
        (NTSTRSAFE_PSTR)&v21[4],
        0x10uLL,
        "%02d SLT%02d DCI%02d",
        *(_DWORD *)(v12 + 176),
        *(unsigned __int8 *)(v11 + 135),
        *(_DWORD *)(a1 + 144));
      if ( (unsigned int)imp_WppRecorderLogCreate(WPP_GLOBAL_Control, v21, a1 + 80) )
        *(_QWORD *)(a1 + 80) = *(_QWORD *)(*(_QWORD *)a1 + 72LL);
      StreamContextArray = 0;
      goto LABEL_18;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v20) = StreamContextArray;
      LODWORD(v19) = *(_DWORD *)(a1 + 144);
      LODWORD(v18) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 16) + 135LL);
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(*(_QWORD *)a1 + 72LL),
        2u,
        0xDu,
        0x19u,
        (__int64)&WPP_c774b641227c31193674b815a53e6fbe_Traceguids,
        v18,
        v19,
        v20);
    }
  }
LABEL_18:
  if ( StreamContextArray < 0 )
    goto LABEL_19;
  ESM_AddEvent((PVOID)(a1 + 288));
LABEL_32:
  if ( v4 )
    (*(void (__fastcall **)(unsigned __int64, __int64, __int64 (__fastcall *)(_QWORD), __int64, const char *))(WdfFunctions_01023 + 1648))(
      WPP_MAIN_CB.Dpc.ProcessorHistory,
      v4,
      Endpoint_Enable,
      1012LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\endpoint.c");
  return (unsigned int)StreamContextArray;
}
