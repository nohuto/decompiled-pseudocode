/*
 * XREFs of SecureChannel_SendRequestSynchronously @ 0x1C006B43C
 * Callers:
 *     XilUsbDevice_QueryAttributesFromTrustlet @ 0x1C0004CDC (XilUsbDevice_QueryAttributesFromTrustlet.c)
 *     XilCommand_AllocateSecureResources @ 0x1C000BD5C (XilCommand_AllocateSecureResources.c)
 *     XilCommand_CreateSecureObject @ 0x1C000BF24 (XilCommand_CreateSecureObject.c)
 *     XilCommand_FreeSecureResources @ 0x1C000C0A0 (XilCommand_FreeSecureResources.c)
 *     XilCommand_InitializeSecureResources @ 0x1C000C234 (XilCommand_InitializeSecureResources.c)
 *     XilCommand_SendAbortRingCommandRequest @ 0x1C000C360 (XilCommand_SendAbortRingCommandRequest.c)
 *     XilCommand_SendAddCommandCRBToRingRequest @ 0x1C000C490 (XilCommand_SendAddCommandCRBToRingRequest.c)
 *     XilCommand_SendAdvanceDequeuePointerRequest @ 0x1C000C6F8 (XilCommand_SendAdvanceDequeuePointerRequest.c)
 *     XilCommand_SendQueryIsRingRunningRequest @ 0x1C000C828 (XilCommand_SendQueryIsRingRunningRequest.c)
 *     XilCommand_SendRequestToRingDoorbell @ 0x1C000C978 (XilCommand_SendRequestToRingDoorbell.c)
 *     XilDeviceSlot_AllocateSecureResources @ 0x1C0015D88 (XilDeviceSlot_AllocateSecureResources.c)
 *     XilDeviceSlot_CreateSecureObject @ 0x1C0015F44 (XilDeviceSlot_CreateSecureObject.c)
 *     XilDeviceSlot_FreeSecureResources @ 0x1C0016090 (XilDeviceSlot_FreeSecureResources.c)
 *     XilDeviceSlot_InitializeSecureResources @ 0x1C00161E8 (XilDeviceSlot_InitializeSecureResources.c)
 *     XilDeviceSlot_InitializeSecureScratchpadBuffers @ 0x1C0016318 (XilDeviceSlot_InitializeSecureScratchpadBuffers.c)
 *     XilDeviceSlot_SendClearDeviceContextRequest @ 0x1C00165C0 (XilDeviceSlot_SendClearDeviceContextRequest.c)
 *     XilDeviceSlot_SendQueryEndpointContextInfoRequest @ 0x1C0016700 (XilDeviceSlot_SendQueryEndpointContextInfoRequest.c)
 *     XilDeviceSlot_SendQuerySlotContextInfoRequest @ 0x1C0016864 (XilDeviceSlot_SendQuerySlotContextInfoRequest.c)
 *     XilDeviceSlot_SendSetDeviceContextRequest @ 0x1C00169C4 (XilDeviceSlot_SendSetDeviceContextRequest.c)
 *     XilEndpoint_CreateSecureObject @ 0x1C0017098 (XilEndpoint_CreateSecureObject.c)
 *     XilEndpoint_DestroySecureObject @ 0x1C0017228 (XilEndpoint_DestroySecureObject.c)
 *     XilEndpoint_SendRequestToAllocateSecureStreamContextArray @ 0x1C00173F0 (XilEndpoint_SendRequestToAllocateSecureStreamContextArray.c)
 *     XilEndpoint_SendRequestToFreeSecureStreamContextArray @ 0x1C0017544 (XilEndpoint_SendRequestToFreeSecureStreamContextArray.c)
 *     XilEndpoint_SendRequestToGetSecureStreamContextArray @ 0x1C0017624 (XilEndpoint_SendRequestToGetSecureStreamContextArray.c)
 *     XilEndpoint_SendRequestToSetSecureStreamContextArray @ 0x1C001782C (XilEndpoint_SendRequestToSetSecureStreamContextArray.c)
 *     TR_AcquireSecureSegments @ 0x1C0027D40 (TR_AcquireSecureSegments.c)
 *     TR_AddTRBRangeToSecureTransferRing @ 0x1C00281D8 (TR_AddTRBRangeToSecureTransferRing.c)
 *     TR_CreateSecureObject @ 0x1C002867C (TR_CreateSecureObject.c)
 *     TR_FreeSecureTransferSegments @ 0x1C0028FB0 (TR_FreeSecureTransferSegments.c)
 *     TR_InitializeTransferSegment @ 0x1C002934C (TR_InitializeTransferSegment.c)
 *     TR_SendCompleteStageRequest @ 0x1C00297F4 (TR_SendCompleteStageRequest.c)
 *     XilUsbDevice_CreateSecureObject @ 0x1C00394D8 (XilUsbDevice_CreateSecureObject.c)
 *     XilUsbDevice_DestroySecureObject @ 0x1C003963C (XilUsbDevice_DestroySecureObject.c)
 *     XilUsbDevice_SendRequestToRingDoorbell @ 0x1C003975C (XilUsbDevice_SendRequestToRingDoorbell.c)
 *     SecureDmaEnabler_Unmap @ 0x1C0046C00 (SecureDmaEnabler_Unmap.c)
 *     Controller_CreateSecureObject @ 0x1C005F8A0 (Controller_CreateSecureObject.c)
 *     Controller_DestroySecureObject @ 0x1C00601F0 (Controller_DestroySecureObject.c)
 *     Register_CreateSecureObject @ 0x1C0067578 (Register_CreateSecureObject.c)
 *     Register_MapSecureMmio @ 0x1C006768C (Register_MapSecureMmio.c)
 *     Register_ReadSecureMmio @ 0x1C00683B4 (Register_ReadSecureMmio.c)
 *     Register_UnmapSecureMmio @ 0x1C006861C (Register_UnmapSecureMmio.c)
 *     Register_WriteSecureMmio @ 0x1C006869C (Register_WriteSecureMmio.c)
 *     SecureDmaEnabler_CreateSecureObject @ 0x1C006AF4C (SecureDmaEnabler_CreateSecureObject.c)
 *     SecureDmaEnabler_MapMemory @ 0x1C006B084 (SecureDmaEnabler_MapMemory.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     McTemplateK0qqqq @ 0x1C0046CEC (McTemplateK0qqqq.c)
 *     McTemplateK0qqx @ 0x1C0046D84 (McTemplateK0qqx.c)
 *     WPP_RECORDER_SF_DP @ 0x1C0046E00 (WPP_RECORDER_SF_DP.c)
 *     WPP_RECORDER_SF_Ld @ 0x1C0046ED8 (WPP_RECORDER_SF_Ld.c)
 */

__int64 __fastcall SecureChannel_SendRequestSynchronously(
        volatile signed __int32 *a1,
        GUID *a2,
        int a3,
        __int64 a4,
        unsigned int a5)
{
  LARGE_INTEGER PerformanceCounter; // rbx
  signed __int32 v10; // r15d
  unsigned int v11; // r12d
  __int64 *v12; // rcx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // r14d
  __int64 v18; // rax
  struct _MCGEN_TRACE_CONTEXT *v19; // rcx
  int v21; // [rsp+20h] [rbp-60h]
  __int64 v22; // [rsp+28h] [rbp-58h]
  __int64 v23; // [rsp+50h] [rbp-30h] BYREF
  __int64 v24; // [rsp+58h] [rbp-28h]
  __int64 v25; // [rsp+60h] [rbp-20h]
  _QWORD v26[2]; // [rsp+68h] [rbp-18h] BYREF
  int v27; // [rsp+78h] [rbp-8h]
  int v28; // [rsp+7Ch] [rbp-4h]
  unsigned __int64 v29; // [rsp+C0h] [rbp+40h] BYREF
  char v30; // [rsp+D0h] [rbp+50h]

  HIDWORD(v26[0]) = 0;
  v28 = 0;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  PerformanceCounter.QuadPart = 0LL;
  v10 = _InterlockedExchangeAdd(a1 + 6, 1u);
  v11 = a5;
  a2[1].Data1 = v10;
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
  {
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_NULL.Data1 && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_NULL.Data4 )
      EtwActivityIdControl(3u, a2);
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
      McTemplateK0qqqq((struct _MCGEN_TRACE_CONTEXT *)a1, (__int64)a2, a2, a2[2].Data1, a3, v11, v10);
    v30 = 1;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  }
  else
  {
    v30 = 0;
  }
  v26[0] = 1LL;
  v28 = 0;
  v26[1] = a2;
  v27 = a3;
  if ( a4 )
  {
    v23 = 1LL;
    v12 = &v23;
    v24 = a4;
    v25 = v11;
  }
  else
  {
    v12 = 0LL;
  }
  v13 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _QWORD, __int64, _QWORD *, __int64 *, _QWORD, unsigned __int64 *))(WdfFunctions_01023 + 3592))(
          WPP_MAIN_CB.Dpc.ProcessorHistory,
          *(_QWORD *)a1,
          0LL,
          6078464LL,
          v26,
          v12,
          0LL,
          &v29);
  v17 = v13;
  if ( v13 >= 0 )
  {
    if ( v29 > 0xFFFFFFFF || (_DWORD)v29 != v11 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DP(*(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL), v14, v15, v16, v21);
      v17 = -1073741306;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v22) = v13;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL),
      2u,
      0x13u,
      0xDu,
      (__int64)&WPP_8e4a88313dd436790ae6788f85b62921_Traceguids,
      v22);
  }
  if ( v17 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Ld(*(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL), v14, v15, v16, v21);
  _InterlockedDecrement(a1 + 6);
  if ( v30 )
  {
    v18 = 1000000000 * (*(_QWORD *)&KeQueryPerformanceCounter(0LL) - PerformanceCounter.QuadPart);
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
      McTemplateK0qqx(v19, v18 % *((_QWORD *)a1 + 2), a2, a2[2].Data1, v10, v18 / *((_QWORD *)a1 + 2));
  }
  return (unsigned int)v17;
}
