/*
 * XREFs of NdisMAllocateMapRegisters @ 0x1C0139490
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferencePackage @ 0x1C0001008 (ndisReferencePackage.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ndisDereferencePackage @ 0x1C001B95C (ndisDereferencePackage.c)
 *     NdisWriteErrorLogEntry @ 0x1C0022460 (NdisWriteErrorLogEntry.c)
 *     WPP_RECORDER_SF_D @ 0x1C0032358 (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     McTemplateK0qqq @ 0x1C007D7C8 (McTemplateK0qqq.c)
 *     ndisDereferenceDmaAdapter @ 0x1C009F7C8 (ndisDereferenceDmaAdapter.c)
 */

NDIS_STATUS __stdcall NdisMAllocateMapRegisters(
        NDIS_HANDLE MiniportAdapterHandle,
        UINT DmaChannel,
        NDIS_DMA_SIZE DmaSize,
        ULONG BaseMapRegistersNeeded,
        ULONG MaximumPhysicalMapping)
{
  __int64 v6; // r14
  char *v8; // rsi
  unsigned __int16 *v9; // rbx
  NDIS_STATUS v10; // edi
  char v11; // r12
  const struct _GUID *v12; // rdx
  unsigned __int16 *PoolWithTag; // rax
  PVOID v14; // rax
  int v15; // eax
  ULONG v16; // r12d
  unsigned __int64 v17; // r15
  struct _DMA_ADAPTER *DmaAdapter; // rax
  struct _DMA_ADAPTER *v19; // r14
  char v20; // r13
  _DMA_OPERATIONS *DmaOperations; // rcx
  char v22; // al
  unsigned __int16 v23; // r15
  KIRQL v24; // r13
  int v25; // eax
  int v26; // edx
  unsigned __int64 v27; // rcx
  void (__fastcall *v28)(_DMA_ADAPTER *, void *, unsigned int); // rdi
  __int64 v29; // r14
  void *v30; // rcx
  KIRQL v31; // r15
  int v32; // edx
  char v34; // [rsp+41h] [rbp-70h]
  ULONG NumberOfMapRegisters; // [rsp+44h] [rbp-6Dh] BYREF
  PMCGEN_TRACE_CONTEXT Context; // [rsp+48h] [rbp-69h]
  int (__fastcall *AllocateAdapterChannel)(_DMA_ADAPTER *, _DEVICE_OBJECT *, unsigned int, _IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *), void *); // [rsp+50h] [rbp-61h]
  void (__fastcall *FreeMapRegisters)(_DMA_ADAPTER *, void *, unsigned int); // [rsp+58h] [rbp-59h]
  char *v39; // [rsp+60h] [rbp-51h]
  struct _KEVENT Event; // [rsp+68h] [rbp-49h] BYREF
  _BYTE DeviceDescription[64]; // [rsp+80h] [rbp-31h] BYREF

  v39 = (char *)MiniportAdapterHandle;
  v6 = BaseMapRegistersNeeded;
  v8 = (char *)MiniportAdapterHandle;
  memset(DeviceDescription, 0, sizeof(DeviceDescription));
  v9 = 0LL;
  v10 = 0;
  v11 = 0;
  v12 = &WPP_3bdda7144e74370204adec44604355d7_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v12,
      1,
      41,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      (char)v8,
      v6);
  }
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( (*((_DWORD *)v8 + 922) & 1) != 0 )
    goto LABEL_4;
  if ( (*((_DWORD *)v8 + 30) & 8) == 0 )
  {
LABEL_61:
    v11 = 0;
    goto LABEL_53;
  }
  PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xA0uLL, 0x6264444Eu);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0xA0uLL);
    *(_DWORD *)v9 = 10486031;
    *((_QWORD *)v9 + 1) = v8;
    *((_QWORD *)v9 + 2) = *((_QWORD *)v8 + 3);
    v9[77] = v6;
    *((_DWORD *)v9 + 13) = MaximumPhysicalMapping;
    *((_QWORD *)v9 + 17) = 0LL;
    if ( (_DWORD)v6 )
    {
      v14 = ExAllocatePoolWithTag(NonPagedPoolNx, 16 * v6, 0x726D444Eu);
      *((_QWORD *)v9 + 17) = v14;
      if ( !v14 )
      {
        NdisWriteErrorLogEntry(v8, 0xC0001389, 1u, 0xFFFFFFFFLL);
        v10 = -1073741670;
        v11 = 1;
        goto LABEL_53;
      }
    }
    *((_QWORD *)v9 + 18) = &Event;
    KeInitializeEvent(&Event, NotificationEvent, 0);
    *(_DWORD *)&DeviceDescription[12] = *((_DWORD *)v8 + 931);
    v15 = *((_DWORD *)v8 + 119);
    *(_WORD *)&DeviceDescription[4] = 257;
    *(_DWORD *)&DeviceDescription[16] = DmaChannel;
    *(_DWORD *)&DeviceDescription[20] = v15;
    if ( v15 == 1 )
    {
      *(_DWORD *)&DeviceDescription[28] = 0;
      *(_DWORD *)&DeviceDescription[24] = DmaChannel > 4;
    }
    else if ( v15 == 5 )
    {
      if ( DmaSize == 1 )
      {
        DeviceDescription[8] = 1;
      }
      else if ( DmaSize == 2 )
      {
        *((_DWORD *)v8 + 30) |= 0x10u;
        DeviceDescription[11] = 1;
      }
    }
    *(_DWORD *)&DeviceDescription[32] = MaximumPhysicalMapping;
    v16 = ((MaximumPhysicalMapping - 2) >> 12) + 2;
    v17 = v9[77] * (unsigned __int64)v16;
    if ( v17 > 0xFFFFFFFF )
    {
      NdisWriteErrorLogEntry(v8, 0xC0001389, 1u, 4294967294LL);
    }
    else
    {
      DmaAdapter = IoGetDmaAdapter(
                     *((PDEVICE_OBJECT *)v8 + 479),
                     (struct _DEVICE_DESCRIPTION *)DeviceDescription,
                     &NumberOfMapRegisters);
      v19 = DmaAdapter;
      if ( DmaAdapter && NumberOfMapRegisters >= v16 )
      {
        v20 = 0;
        *((_QWORD *)v9 + 3) = DmaAdapter;
        *((_QWORD *)v9 + 16) = 0LL;
        *((_QWORD *)v8 + 63) = v9;
        _InterlockedIncrement((volatile signed __int32 *)v9 + 18);
        DmaOperations = DmaAdapter->DmaOperations;
        v34 = 0;
        AllocateAdapterChannel = DmaOperations->AllocateAdapterChannel;
        FreeMapRegisters = DmaOperations->FreeMapRegisters;
        if ( *(_DWORD *)&DeviceDescription[20] != 1 )
        {
          if ( HalPrivateDispatchTable[12](DmaAdapter, v16, v9[77], *((_QWORD *)v9 + 17)) < 0 )
          {
            if ( (unsigned int)v17 <= 0x40 )
            {
              v20 = 1;
            }
            else
            {
              ExFreePoolWithTag(*((PVOID *)v9 + 17), 0);
              *((_QWORD *)v9 + 17) = 0LL;
              ndisDereferenceDmaAdapter(v9);
              v34 = 1;
              NdisWriteErrorLogEntry(v8, 0xC0001389, 1u, (unsigned int)v17);
            }
          }
          if ( *(_DWORD *)&DeviceDescription[20] != 1 && !v20 )
            goto LABEL_27;
        }
        v23 = 0;
        if ( v9[77] )
        {
          while ( 1 )
          {
            v9[76] = v23;
            v24 = KfRaiseIrql(2u);
            v25 = AllocateAdapterChannel(
                    v19,
                    *((_DEVICE_OBJECT **)v8 + 478),
                    v16,
                    (_IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *))ndisAllocationExecutionRoutine,
                    v9);
            v26 = 0;
            LODWORD(Context) = v25;
            v27 = (unsigned int)v25;
            if ( v25 < 0 )
              break;
            if ( v24 != 2 )
              KeLowerIrql(v24);
            KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
            KeClearEvent(&Event);
            if ( ++v23 >= v9[77] )
              goto LABEL_27;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v26) = 2;
            WPP_RECORDER_SF_D(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v26,
              1,
              43,
              (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
              v25);
            v27 = (unsigned int)Context;
          }
          if ( (byte_1C00E8081 & 1) != 0 )
            McTemplateK0qqq(
              (PMCGEN_TRACE_CONTEXT)v27,
              &AllocateAdapterChannelFailed,
              (const GUID *)(v8 + 4008),
              v27,
              0x10002u,
              0);
          if ( v23 )
          {
            v28 = FreeMapRegisters;
            v29 = 16LL * v23 - 16;
            do
            {
              v28(*((_DMA_ADAPTER **)v9 + 3), *(void **)(v29 + *((_QWORD *)v9 + 17)), v16);
              v29 -= 16LL;
              --v23;
            }
            while ( v23 );
            v10 = 0;
            v8 = v39;
          }
          if ( v24 != 2 )
            KeLowerIrql(v24);
          NdisWriteErrorLogEntry(v8, 0xC0001389, 1u, 0xFFFFFFFFLL);
          ExFreePoolWithTag(*((PVOID *)v9 + 17), 0);
          *((_QWORD *)v9 + 17) = 0LL;
          ndisDereferenceDmaAdapter(v9);
          v22 = 1;
        }
        else
        {
LABEL_27:
          v22 = v34;
        }
        if ( v22 )
        {
          v10 = -1073741670;
          v11 = 0;
          goto LABEL_53;
        }
        goto LABEL_61;
      }
      NdisWriteErrorLogEntry(v8, 0xC0001389, 1u, 0xFFFFFFFFLL);
      v30 = (void *)*((_QWORD *)v9 + 17);
      if ( v30 )
      {
        ExFreePoolWithTag(v30, 0);
        *((_QWORD *)v9 + 17) = 0LL;
      }
      v10 = -1073741670;
      if ( v19 )
      {
        v31 = KfRaiseIrql(2u);
        v19->DmaOperations->PutDmaAdapter(v19);
        if ( v31 != 2 )
          KeLowerIrql(v31);
      }
    }
    v11 = 1;
    goto LABEL_53;
  }
LABEL_4:
  v10 = -1073741670;
LABEL_53:
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( v10 && v11 && v9 )
    ExFreePoolWithTag(v9, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v32) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v32,
      1,
      44,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      (char)v8,
      v10);
  }
  return v10;
}
