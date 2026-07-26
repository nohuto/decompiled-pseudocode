/*
 * XREFs of NdisMAllocateMapRegisters @ 0x1C0117D80
 * Callers:
 *     <none>
 * Callees:
 *     NdisWriteErrorLogEntry @ 0x1C0014630 (NdisWriteErrorLogEntry.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_D @ 0x1C0041770 (WPP_SF_D.c)
 *     McTemplateK0qqq @ 0x1C004F464 (McTemplateK0qqq.c)
 *     ndisDereferenceDmaAdapter @ 0x1C0065580 (ndisDereferenceDmaAdapter.c)
 *     ndisDereferencePackage @ 0x1C00B6834 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00B685C (ndisReferencePackage.c)
 */

NDIS_STATUS __stdcall NdisMAllocateMapRegisters(
        NDIS_HANDLE MiniportAdapterHandle,
        UINT DmaChannel,
        NDIS_DMA_SIZE DmaSize,
        ULONG BaseMapRegistersNeeded,
        ULONG MaximumPhysicalMapping)
{
  __int64 v5; // r14
  unsigned __int16 *v6; // rbx
  int v7; // edi
  char v8; // r13
  char *v11; // rsi
  unsigned __int16 *PoolWithTag; // rax
  PVOID v13; // rax
  int v15; // eax
  ULONG v16; // r15d
  unsigned int v17; // r12d
  struct _DMA_ADAPTER *DmaAdapter; // r14
  _DMA_OPERATIONS *DmaOperations; // rcx
  char v20; // al
  unsigned __int16 v21; // r15
  KIRQL v22; // r12
  int v23; // eax
  unsigned int v24; // edx
  char v25; // al
  void (__fastcall *v26)(_DMA_ADAPTER *, void *, unsigned int); // r13
  __int64 v27; // r14
  void *v28; // rcx
  KIRQL v29; // r15
  char v30; // [rsp+30h] [rbp-81h]
  char v31; // [rsp+31h] [rbp-80h]
  ULONG v32; // [rsp+34h] [rbp-7Dh]
  ULONG NumberOfMapRegisters; // [rsp+38h] [rbp-79h] BYREF
  unsigned int v34; // [rsp+3Ch] [rbp-75h]
  int (__fastcall *AllocateAdapterChannel)(_DMA_ADAPTER *, _DEVICE_OBJECT *, unsigned int, _IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *), void *); // [rsp+48h] [rbp-69h]
  void (__fastcall *FreeMapRegisters)(_DMA_ADAPTER *, void *, unsigned int); // [rsp+50h] [rbp-61h]
  char *v37; // [rsp+58h] [rbp-59h]
  struct _KEVENT Event; // [rsp+60h] [rbp-51h] BYREF
  _BYTE DeviceDescription[64]; // [rsp+80h] [rbp-31h] BYREF

  v5 = BaseMapRegistersNeeded;
  v6 = 0LL;
  v37 = (char *)MiniportAdapterHandle;
  v7 = 0;
  v8 = 0;
  v11 = (char *)MiniportAdapterHandle;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(
      0x29u,
      &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids,
      (__int64)MiniportAdapterHandle,
      BaseMapRegistersNeeded);
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( (*((_DWORD *)v11 + 928) & 1) != 0 )
    goto LABEL_4;
  if ( (*((_DWORD *)v11 + 30) & 8) == 0 )
    goto LABEL_46;
  PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xA0uLL, 0x6264444Eu);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    v30 = 1;
    memset(PoolWithTag, 0, 0xA0uLL);
    *(_DWORD *)v6 = 10486031;
    *((_QWORD *)v6 + 1) = v11;
    *((_QWORD *)v6 + 2) = *((_QWORD *)v11 + 3);
    v6[77] = v5;
    *((_DWORD *)v6 + 13) = MaximumPhysicalMapping;
    *((_QWORD *)v6 + 17) = 0LL;
    if ( (_DWORD)v5 )
    {
      v13 = ExAllocatePoolWithTag(NonPagedPoolNx, 16 * v5, 0x726D444Eu);
      *((_QWORD *)v6 + 17) = v13;
      if ( !v13 )
      {
        NdisWriteErrorLogEntry(v11, 0xC0001389, 1u, 0xFFFFFFFFLL);
        goto LABEL_10;
      }
    }
    *((_QWORD *)v6 + 18) = &Event;
    KeInitializeEvent(&Event, NotificationEvent, 0);
    memset(DeviceDescription, 0, sizeof(DeviceDescription));
    *(_DWORD *)&DeviceDescription[12] = *((_DWORD *)v11 + 937);
    v15 = *((_DWORD *)v11 + 119);
    *(_DWORD *)DeviceDescription = 0;
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
        *((_DWORD *)v11 + 30) |= 0x10u;
        DeviceDescription[11] = 1;
      }
    }
    *(_DWORD *)&DeviceDescription[32] = MaximumPhysicalMapping;
    v16 = ((MaximumPhysicalMapping - 2) >> 12) + 2;
    v32 = v16;
    if ( v16 * (unsigned __int64)v6[77] > 0xFFFFFFFF )
    {
      NdisWriteErrorLogEntry(v11, 0xC0001389, 1u, 4294967294LL);
      goto LABEL_11;
    }
    v17 = v16 * v6[77];
    DmaAdapter = IoGetDmaAdapter(
                   *((PDEVICE_OBJECT *)v11 + 483),
                   (struct _DEVICE_DESCRIPTION *)DeviceDescription,
                   &NumberOfMapRegisters);
    if ( !DmaAdapter || NumberOfMapRegisters < v16 )
    {
      NdisWriteErrorLogEntry(v11, 0xC0001389, 1u, 0xFFFFFFFFLL);
      v28 = (void *)*((_QWORD *)v6 + 17);
      if ( v28 )
      {
        ExFreePoolWithTag(v28, 0);
        *((_QWORD *)v6 + 17) = 0LL;
      }
      v7 = -1073741670;
      if ( DmaAdapter )
      {
        v29 = KfRaiseIrql(2u);
        DmaAdapter->DmaOperations->PutDmaAdapter(DmaAdapter);
        if ( v29 != 2 )
          KeLowerIrql(v29);
      }
      goto LABEL_11;
    }
    *((_QWORD *)v6 + 3) = DmaAdapter;
    *((_QWORD *)v6 + 16) = 0LL;
    *((_QWORD *)v11 + 63) = v6;
    _InterlockedIncrement((volatile signed __int32 *)v6 + 18);
    DmaOperations = DmaAdapter->DmaOperations;
    v30 = 0;
    AllocateAdapterChannel = DmaOperations->AllocateAdapterChannel;
    FreeMapRegisters = DmaOperations->FreeMapRegisters;
    v31 = 0;
    if ( (*(_DWORD *)&DeviceDescription[20] == 1
       || (HalPrivateDispatchTable[12](DmaAdapter, v16, v6[77], *((_QWORD *)v6 + 17)) >= 0
         ? (v20 = 0)
         : v17 <= 0x40
         ? (v20 = 1)
         : (ExFreePoolWithTag(*((PVOID *)v6 + 17), 0),
            *((_QWORD *)v6 + 17) = 0LL,
            ndisDereferenceDmaAdapter(v6),
            v31 = 1,
            NdisWriteErrorLogEntry(v11, 0xC0001389, 1u, v17),
            v20 = 0),
           *(_DWORD *)&DeviceDescription[20] == 1 || v20))
      && (v21 = 0, v6[77]) )
    {
      while ( 1 )
      {
        v6[76] = v21;
        v22 = KfRaiseIrql(2u);
        v23 = AllocateAdapterChannel(
                DmaAdapter,
                *((_DEVICE_OBJECT **)v11 + 482),
                v32,
                (_IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *))ndisAllocationExecutionRoutine,
                v6);
        v34 = v23;
        v24 = v23;
        if ( v23 < 0 )
          break;
        if ( v22 != 2 )
          KeLowerIrql(v22);
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        KeClearEvent(&Event);
        if ( ++v21 >= v6[77] )
          goto LABEL_44;
      }
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
      {
        WPP_SF_D(0x2Bu, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, v23);
        v24 = v34;
      }
      if ( (byte_1C00A2081 & 1) != 0 )
        McTemplateK0qqq(0LL, &AllocateAdapterChannelFailed, (const GUID *)(v11 + 4040), v24, 0xAD2u, 0);
      if ( v21 )
      {
        v26 = FreeMapRegisters;
        v27 = 16LL * v21 - 16;
        do
        {
          v26(*((_DMA_ADAPTER **)v6 + 3), *(void **)(v27 + *((_QWORD *)v6 + 17)), v32);
          v27 -= 16LL;
          --v21;
        }
        while ( v21 );
        v7 = 0;
        v11 = v37;
      }
      if ( v22 != 2 )
        KeLowerIrql(v22);
      NdisWriteErrorLogEntry(v11, 0xC0001389, 1u, 0xFFFFFFFFLL);
      ExFreePoolWithTag(*((PVOID *)v6 + 17), 0);
      *((_QWORD *)v6 + 17) = 0LL;
      ndisDereferenceDmaAdapter(v6);
      v25 = 1;
    }
    else
    {
LABEL_44:
      v25 = v31;
    }
    if ( v25 )
    {
LABEL_10:
      v7 = -1073741670;
LABEL_11:
      v8 = v30;
      goto LABEL_12;
    }
LABEL_46:
    v8 = 0;
    goto LABEL_12;
  }
LABEL_4:
  v7 = -1073741670;
LABEL_12:
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( v7 && v8 && v6 )
    ExFreePoolWithTag(v6, 0);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0x2Cu, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (__int64)v11, v7);
  return v7;
}
