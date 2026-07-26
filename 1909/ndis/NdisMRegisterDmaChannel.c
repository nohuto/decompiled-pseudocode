/*
 * XREFs of NdisMRegisterDmaChannel @ 0x1C013A050
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferencePackage @ 0x1C0001008 (ndisReferencePackage.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ndisDereferencePackage @ 0x1C001B95C (ndisDereferencePackage.c)
 *     WPP_RECORDER_SF_D @ 0x1C0032358 (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     McTemplateK0qqq @ 0x1C007D7C8 (McTemplateK0qqq.c)
 */

NDIS_STATUS __stdcall NdisMRegisterDmaChannel(
        PNDIS_HANDLE MiniportDmaHandle,
        NDIS_HANDLE MiniportAdapterHandle,
        UINT DmaChannel,
        BOOLEAN Dma32BitAddresses,
        PNDIS_DMA_DESCRIPTION DmaDescription,
        ULONG MaximumLength)
{
  const struct _GUID *v9; // rdx
  int v10; // r15d
  PVOID PoolWithTag; // rax
  int v12; // edx
  NDIS_STATUS v13; // ebx
  void *v14; // rsi
  char v15; // al
  bool v16; // zf
  int v17; // ecx
  ULONG DmaPort; // eax
  _DEVICE_OBJECT *v19; // rcx
  ULONG v20; // r12d
  struct _DMA_ADAPTER *DmaAdapter; // r15
  char *v22; // rax
  _QWORD *v23; // r14
  struct _KEVENT *v24; // r13
  int v25; // r12d
  int v26; // edx
  struct _MCGEN_TRACE_CONTEXT *v27; // rcx
  _QWORD *v28; // rax
  KIRQL v29; // r14
  KIRQL NewIrql; // [rsp+40h] [rbp-59h]
  ULONG NumberOfMapRegisters; // [rsp+44h] [rbp-55h] BYREF
  PNDIS_HANDLE v33; // [rsp+48h] [rbp-51h]
  _BYTE DeviceDescription[64]; // [rsp+50h] [rbp-49h] BYREF

  v33 = MiniportDmaHandle;
  memset(DeviceDescription, 0, sizeof(DeviceDescription));
  v9 = &WPP_3bdda7144e74370204adec44604355d7_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v9,
      1,
      36,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      (char)MiniportAdapterHandle);
  }
  v10 = *((_DWORD *)MiniportAdapterHandle + 930);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xA0uLL, 0x6264444Eu);
  v13 = 0;
  v14 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0xA0uLL);
    *(_DWORD *)v14 = 10486031;
    *((_QWORD *)v14 + 1) = MiniportAdapterHandle;
    *((_QWORD *)v14 + 2) = *((_QWORD *)MiniportAdapterHandle + 3);
    v15 = DeviceDescription[4];
    v16 = (*((_DWORD *)MiniportAdapterHandle + 30) & 8) == 0;
    v17 = *((_DWORD *)MiniportAdapterHandle + 30) & 8;
    *(_DWORD *)&DeviceDescription[16] = DmaChannel;
    if ( !v16 )
      v15 = 1;
    DeviceDescription[8] = Dma32BitAddresses;
    DeviceDescription[4] = v15;
    DeviceDescription[6] = DmaDescription->DemandMode;
    DeviceDescription[5] = v17 != 0;
    DeviceDescription[7] = DmaDescription->AutoInitialize;
    *(_DWORD *)&DeviceDescription[12] = *((_DWORD *)MiniportAdapterHandle + 931);
    *(_DWORD *)&DeviceDescription[24] = DmaDescription->DmaWidth;
    *(_DWORD *)&DeviceDescription[28] = DmaDescription->DmaSpeed;
    DmaPort = DmaDescription->DmaPort;
    *(_DWORD *)&DeviceDescription[32] = MaximumLength;
    v19 = (_DEVICE_OBJECT *)*((_QWORD *)MiniportAdapterHandle + 479);
    *(_DWORD *)&DeviceDescription[36] = DmaPort;
    v20 = ((MaximumLength - 2) >> 12) + 2;
    *(_DWORD *)&DeviceDescription[20] = v10;
    DmaAdapter = IoGetDmaAdapter(v19, (struct _DEVICE_DESCRIPTION *)DeviceDescription, &NumberOfMapRegisters);
    if ( DmaAdapter )
    {
      if ( NumberOfMapRegisters >= v20 )
      {
        v22 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x6264444Eu);
        v23 = v22;
        if ( v22 )
        {
          v24 = (struct _KEVENT *)(v22 + 8);
          KeInitializeEvent((PRKEVENT)(v22 + 8), NotificationEvent, 0);
          v23[5] = MiniportAdapterHandle;
          v23[4] = DmaAdapter;
          ndisReferencePackage((__int64)&ndisPkgs);
          NewIrql = KfRaiseIrql(2u);
          v25 = DmaAdapter->DmaOperations->AllocateAdapterChannel(
                  DmaAdapter,
                  *((_DEVICE_OBJECT **)MiniportAdapterHandle + 478),
                  v20,
                  (_IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *))ndisDmaExecutionRoutine,
                  v23);
          if ( NewIrql != 2 )
            KeLowerIrql(NewIrql);
          ndisDereferencePackage((__int64)&ndisPkgs);
          if ( v25 >= 0 )
          {
            KeWaitForSingleObject(v24, Executive, 0, 0, 0LL);
            KeClearEvent(v24);
            v28 = v33;
            *((_BYTE *)v23 + 48) = 0;
            *v28 = v23;
            *((_QWORD *)v14 + 3) = DmaAdapter;
            _InterlockedAdd((volatile signed __int32 *)v14 + 18, 1u);
            *((_QWORD *)MiniportAdapterHandle + 63) = v14;
            goto LABEL_22;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v26) = 2;
            WPP_RECORDER_SF_D(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v26,
              1,
              37,
              (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
              v25);
          }
          ExFreePoolWithTag(v23, 0);
          if ( (byte_1C00E8081 & 1) != 0 )
            McTemplateK0qqq(
              v27,
              &AllocateAdapterChannelFailed,
              (const GUID *)((char *)MiniportAdapterHandle + 4008),
              v25,
              0x10001u,
              0);
        }
      }
    }
    if ( DmaAdapter )
    {
      v29 = KfRaiseIrql(2u);
      DmaAdapter->DmaOperations->PutDmaAdapter(DmaAdapter);
      if ( v29 != 2 )
        KeLowerIrql(v29);
    }
    *((_QWORD *)MiniportAdapterHandle + 63) = 0LL;
    ExFreePoolWithTag(v14, 0);
  }
  v13 = -1073741670;
LABEL_22:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v12,
      1,
      38,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      (char)MiniportAdapterHandle,
      v13);
  }
  return v13;
}
