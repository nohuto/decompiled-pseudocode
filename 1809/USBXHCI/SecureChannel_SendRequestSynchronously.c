/*
 * XREFs of SecureChannel_SendRequestSynchronously @ 0x1C0063174
 * Callers:
 *     XilCommand_AllocateSecureResources @ 0x1C0009CD4 (XilCommand_AllocateSecureResources.c)
 *     XilCommand_CreateSecureObject @ 0x1C0009E70 (XilCommand_CreateSecureObject.c)
 *     XilCommand_FreeSecureResources @ 0x1C0009FC0 (XilCommand_FreeSecureResources.c)
 *     XilCommand_InitializeSecureResources @ 0x1C000A130 (XilCommand_InitializeSecureResources.c)
 *     XilCommand_SendAbortRingCommandRequest @ 0x1C000A238 (XilCommand_SendAbortRingCommandRequest.c)
 *     XilCommand_SendAddCommandCRBToRingRequest @ 0x1C000A344 (XilCommand_SendAddCommandCRBToRingRequest.c)
 *     XilCommand_SendAdvanceDequeuePointerRequest @ 0x1C000A55C (XilCommand_SendAdvanceDequeuePointerRequest.c)
 *     XilCommand_SendQueryIsRingRunningRequest @ 0x1C000A66C (XilCommand_SendQueryIsRingRunningRequest.c)
 *     XilCommand_SendRequestToRingDoorbell @ 0x1C000A788 (XilCommand_SendRequestToRingDoorbell.c)
 *     XilDeviceSlot_AllocateSecureResources @ 0x1C0013310 (XilDeviceSlot_AllocateSecureResources.c)
 *     XilDeviceSlot_CreateSecureObject @ 0x1C001349C (XilDeviceSlot_CreateSecureObject.c)
 *     XilDeviceSlot_FreeSecureResources @ 0x1C00135C0 (XilDeviceSlot_FreeSecureResources.c)
 *     XilDeviceSlot_InitializeSecureResources @ 0x1C00136F4 (XilDeviceSlot_InitializeSecureResources.c)
 *     XilDeviceSlot_InitializeSecureScratchpadBuffers @ 0x1C0013804 (XilDeviceSlot_InitializeSecureScratchpadBuffers.c)
 *     XilDeviceSlot_SendClearDeviceContextRequest @ 0x1C0013A68 (XilDeviceSlot_SendClearDeviceContextRequest.c)
 *     XilDeviceSlot_SendQueryEndpointContextInfoRequest @ 0x1C0013B7C (XilDeviceSlot_SendQueryEndpointContextInfoRequest.c)
 *     XilDeviceSlot_SendQuerySlotContextInfoRequest @ 0x1C0013CC8 (XilDeviceSlot_SendQuerySlotContextInfoRequest.c)
 *     XilDeviceSlot_SendSetDeviceContextRequest @ 0x1C0013E04 (XilDeviceSlot_SendSetDeviceContextRequest.c)
 *     XilEndpoint_CreateSecureObject @ 0x1C0014468 (XilEndpoint_CreateSecureObject.c)
 *     XilEndpoint_DestroySecureObject @ 0x1C00145CC (XilEndpoint_DestroySecureObject.c)
 *     XilEndpoint_SendRequestToAllocateSecureStreamContextArray @ 0x1C001479C (XilEndpoint_SendRequestToAllocateSecureStreamContextArray.c)
 *     XilEndpoint_SendRequestToFreeSecureStreamContextArray @ 0x1C00148D4 (XilEndpoint_SendRequestToFreeSecureStreamContextArray.c)
 *     XilEndpoint_SendRequestToGetSecureStreamContextArray @ 0x1C00149A0 (XilEndpoint_SendRequestToGetSecureStreamContextArray.c)
 *     XilEndpoint_SendRequestToSetSecureStreamContextArray @ 0x1C0014B7C (XilEndpoint_SendRequestToSetSecureStreamContextArray.c)
 *     TR_AcquireSecureSegments @ 0x1C0023730 (TR_AcquireSecureSegments.c)
 *     TR_AddTRBRangeToSecureTransferRing @ 0x1C0023B94 (TR_AddTRBRangeToSecureTransferRing.c)
 *     TR_CreateSecureObject @ 0x1C0023FEC (TR_CreateSecureObject.c)
 *     TR_FreeSecureTransferSegments @ 0x1C0024884 (TR_FreeSecureTransferSegments.c)
 *     TR_InitializeTransferSegment @ 0x1C0024C0C (TR_InitializeTransferSegment.c)
 *     TR_SendCompleteStageRequest @ 0x1C00250A4 (TR_SendCompleteStageRequest.c)
 *     XilUsbDevice_CreateSecureObject @ 0x1C00344E8 (XilUsbDevice_CreateSecureObject.c)
 *     XilUsbDevice_DestroySecureObject @ 0x1C003462C (XilUsbDevice_DestroySecureObject.c)
 *     XilUsbDevice_SendRequestToRingDoorbell @ 0x1C0034714 (XilUsbDevice_SendRequestToRingDoorbell.c)
 *     SecureDmaEnabler_Unmap @ 0x1C00413C8 (SecureDmaEnabler_Unmap.c)
 *     Controller_CreateSecureObject @ 0x1C0058738 (Controller_CreateSecureObject.c)
 *     Controller_DestroySecureObject @ 0x1C0058FB4 (Controller_DestroySecureObject.c)
 *     Register_CreateSecureObject @ 0x1C005F7C8 (Register_CreateSecureObject.c)
 *     Register_MapSecureMmio @ 0x1C005F8C8 (Register_MapSecureMmio.c)
 *     Register_ReadSecureMmio @ 0x1C0060404 (Register_ReadSecureMmio.c)
 *     Register_UnmapSecureMmio @ 0x1C0060650 (Register_UnmapSecureMmio.c)
 *     Register_WriteSecureMmio @ 0x1C00606CC (Register_WriteSecureMmio.c)
 *     SecureDmaEnabler_CreateSecureObject @ 0x1C0062D1C (SecureDmaEnabler_CreateSecureObject.c)
 *     SecureDmaEnabler_MapMemory @ 0x1C0062E40 (SecureDmaEnabler_MapMemory.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0qqqq @ 0x1C00414A0 (McTemplateK0qqqq.c)
 *     McTemplateK0qqx @ 0x1C0041538 (McTemplateK0qqx.c)
 *     WPP_RECORDER_SF_DP @ 0x1C00415B4 (WPP_RECORDER_SF_DP.c)
 *     WPP_RECORDER_SF_Ld @ 0x1C004168C (WPP_RECORDER_SF_Ld.c)
 */

__int64 __fastcall SecureChannel_SendRequestSynchronously(
        __int64 a1,
        GUID *a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5)
{
  LARGE_INTEGER v5; // rbx
  __int64 v9; // rcx
  signed __int32 v10; // r15d
  unsigned int v11; // r12d
  char v12; // r13
  LARGE_INTEGER PerformanceCounter; // rax
  _QWORD *v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // r14d
  __int64 v20; // rax
  struct _MCGEN_TRACE_CONTEXT *v21; // rcx
  int v23; // [rsp+20h] [rbp-60h]
  __int64 v24; // [rsp+28h] [rbp-58h]
  _QWORD v25[3]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v26[3]; // [rsp+68h] [rbp-18h] BYREF
  unsigned __int64 v27; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v28; // [rsp+D8h] [rbp+58h]

  v28 = a4;
  v5.QuadPart = 0LL;
  v9 = 1LL;
  v10 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 24), 1u);
  v11 = a5;
  a2[1].Data1 = v10;
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
  {
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_NULL.Data1 && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_NULL.Data4 )
      EtwActivityIdControl(3u, a2);
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
      McTemplateK0qqqq((struct _MCGEN_TRACE_CONTEXT *)v9, (__int64)a2, a2, a2[2].Data1, a3, v11, v10);
    v12 = 1;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    a4 = v28;
    v5 = PerformanceCounter;
  }
  else
  {
    v12 = 0;
  }
  v26[1] = a2;
  v26[0] = 1LL;
  v26[2] = a3;
  if ( a4 )
  {
    v25[0] = 1LL;
    v14 = v25;
    v25[1] = a4;
    v25[2] = v11;
  }
  else
  {
    v14 = 0LL;
  }
  v15 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _QWORD, __int64, _QWORD *, _QWORD *, _QWORD, unsigned __int64 *))(WdfFunctions_01023 + 3592))(
          WPP_MAIN_CB.Dpc.ProcessorHistory,
          *(_QWORD *)a1,
          0LL,
          6078464LL,
          v26,
          v14,
          0LL,
          &v27);
  v19 = v15;
  if ( v15 >= 0 )
  {
    if ( v27 > 0xFFFFFFFF || (_DWORD)v27 != v11 )
    {
      WPP_RECORDER_SF_DP(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), v16, v17, v18, v23);
      v19 = -1073741306;
    }
  }
  else
  {
    LODWORD(v24) = v15;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL),
      2u,
      0x13u,
      0xDu,
      (__int64)&WPP_8e4a88313dd436790ae6788f85b62921_Traceguids,
      v24);
  }
  if ( v19 < 0 )
    WPP_RECORDER_SF_Ld(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), v16, v17, v18, v23);
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 24));
  if ( v12 )
  {
    v20 = 1000000000 * (*(_QWORD *)&KeQueryPerformanceCounter(0LL) - v5.QuadPart);
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
      McTemplateK0qqx(v21, v20 % *(_QWORD *)(a1 + 16), a2, a2[2].Data1, v10, v20 / *(_QWORD *)(a1 + 16));
  }
  return (unsigned int)v19;
}
