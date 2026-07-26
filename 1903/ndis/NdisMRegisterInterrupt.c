/*
 * XREFs of NdisMRegisterInterrupt @ 0x1C00A0EA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C00158A0 (WPP_RECORDER_SF_qdL.c)
 *     WPP_RECORDER_SF_LL @ 0x1C001D55C (WPP_RECORDER_SF_LL.c)
 *     ndisTranslateResources @ 0x1C002EA28 (ndisTranslateResources.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     McTemplateK0jqxqqq @ 0x1C0068C00 (McTemplateK0jqxqqq.c)
 */

NDIS_STATUS __stdcall NdisMRegisterInterrupt(
        PNDIS_MINIPORT_INTERRUPT Interrupt,
        NDIS_HANDLE MiniportAdapterHandle,
        UINT InterruptVector,
        UINT InterruptLevel,
        BOOLEAN RequestIsr,
        BOOLEAN SharedInterrupt,
        NDIS_INTERRUPT_MODE InterruptMode)
{
  __int64 v7; // r15
  unsigned __int8 v10; // r14
  int v11; // edx
  NDIS_STATUS v12; // ebx
  BOOLEAN v13; // r12
  void (__fastcall *v14)(void *); // rcx
  __int64 v15; // rcx
  KAFFINITY v16; // rcx
  __int16 v17; // dx
  ULONG v18; // r13d
  NTSTATUS v19; // eax
  __int64 v20; // rcx
  char v21; // r12
  __int64 v23; // [rsp+38h] [rbp-61h]
  __int64 v24; // [rsp+40h] [rbp-59h]
  __int64 v25; // [rsp+58h] [rbp-41h] BYREF
  _IO_CONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+68h] [rbp-31h] BYREF
  __int64 v27; // [rsp+F0h] [rbp+57h] BYREF

  v7 = InterruptLevel;
  v27 = 0LL;
  v25 = 0LL;
  v10 = 0;
  memset(&Parameters, 0, sizeof(Parameters));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      1,
      12,
      (struct _GUID *)&WPP_6a66c12e6892314c82587e9ff74a73a8_Traceguids,
      (char)MiniportAdapterHandle,
      v7);
  }
  if ( *((_BYTE *)MiniportAdapterHandle + 32) >= 6u )
  {
    v12 = -1071448020;
LABEL_22:
    _InterlockedDecrement((volatile signed __int32 *)MiniportAdapterHandle + 476);
    *((_QWORD *)MiniportAdapterHandle + 14) = 0LL;
    goto LABEL_23;
  }
  if ( (*((_DWORD *)MiniportAdapterHandle + 922) & 2) != 0 )
  {
    v12 = -1073741670;
    goto LABEL_22;
  }
  _InterlockedIncrement((volatile signed __int32 *)MiniportAdapterHandle + 476);
  v13 = SharedInterrupt;
  Interrupt->Reserved = (void *)*((_QWORD *)MiniportAdapterHandle + 3);
  *((_QWORD *)MiniportAdapterHandle + 14) = Interrupt;
  Interrupt->DpcCount = 0;
  Interrupt->IsDeregistered = 0;
  Interrupt->Miniport = (_NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle;
  Interrupt->MiniportIsr = *(void (__fastcall **)(unsigned __int8 *, unsigned __int8 *, void *))(*((_QWORD *)MiniportAdapterHandle
                                                                                                 + 470)
                                                                                               + 168LL);
  v14 = *(void (__fastcall **)(void *))(*((_QWORD *)MiniportAdapterHandle + 470) + 152LL);
  Interrupt->IsrRequested = RequestIsr;
  Interrupt->MiniportDpc = v14;
  Interrupt->SharedInterrupt = v13;
  if ( !v13 )
    *((_DWORD *)MiniportAdapterHandle + 468) |= 0x4000000u;
  KeInitializeEvent(&Interrupt->DpcsCompletedEvent, SynchronizationEvent, 0);
  KeInitializeDpc(&Interrupt->InterruptDpc, (PKDEFERRED_ROUTINE)ndis5InterruptDpc, Interrupt);
  KeSetImportanceDpc(&Interrupt->InterruptDpc, MediumImportance);
  *((_QWORD *)MiniportAdapterHandle + 430) = MiniportAdapterHandle;
  *((_QWORD *)MiniportAdapterHandle + 429) = ndis5QueuedMiniportDpcWorkItem;
  *((_QWORD *)MiniportAdapterHandle + 427) = 0LL;
  *((_DWORD *)MiniportAdapterHandle + 30) &= ~0x20u;
  v12 = ndisTranslateResources((__int64)MiniportAdapterHandle, 2LL, v7, &v25, &v27);
  if ( v12 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v11,
        1,
        13,
        (struct _GUID *)&WPP_6a66c12e6892314c82587e9ff74a73a8_Traceguids,
        (char)MiniportAdapterHandle,
        v7);
    }
    if ( (byte_1C00E8041 & 1) != 0 )
      McTemplateK0jqxqqq(
        v15,
        &RegisterInterruptFailed,
        (const GUID *)((char *)MiniportAdapterHandle + 4008),
        (__int64)MiniportAdapterHandle + 4008,
        *((_DWORD *)MiniportAdapterHandle + 1014),
        *((_QWORD *)MiniportAdapterHandle + 503),
        v12,
        1,
        0);
    v12 = -1073741823;
    goto LABEL_22;
  }
  if ( v27 )
  {
    v16 = *(_QWORD *)(v27 + 12);
    v17 = *(_WORD *)(v27 + 2);
    v10 = *(_BYTE *)(v27 + 4);
    v18 = *(_DWORD *)(v27 + 8);
    Parameters.FullySpecified.PhysicalDeviceObject = (PDEVICE_OBJECT)*((_QWORD *)MiniportAdapterHandle + 479);
    Parameters.FullySpecified.ServiceRoutine = (PKSERVICE_ROUTINE)ndisMIsr;
    Parameters.FullySpecified.ProcessorEnableMask = v16;
    *((_DWORD *)MiniportAdapterHandle + 31) |= 0x80000000;
    Parameters.FullySpecified.InterruptMode = v17 != 0;
    Parameters.Version = 1;
    Parameters.FullySpecified.InterruptObject = &Interrupt->InterruptObject;
    *(_OWORD *)&Parameters.MessageBased.ServiceContext = (unsigned __int64)Interrupt;
    Parameters.FullySpecified.Vector = v18;
    Parameters.FullySpecified.Irql = v10;
    *(_WORD *)&Parameters.MessageBased.SynchronizeIrql = v10;
    Parameters.FullySpecified.ShareVector = v13;
    v19 = IoConnectInterruptEx(&Parameters);
    v21 = v19;
    if ( v19 < 0 )
    {
      v12 = -1073741823;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v23) = v18;
        WPP_RECORDER_SF_LL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          1u,
          0xEu,
          (struct _GUID *)&WPP_6a66c12e6892314c82587e9ff74a73a8_Traceguids,
          v10,
          v23);
      }
      if ( (byte_1C00E8041 & 1) != 0 )
        McTemplateK0jqxqqq(
          v20,
          &RegisterInterruptFailed,
          (const GUID *)((char *)MiniportAdapterHandle + 4008),
          (__int64)MiniportAdapterHandle + 4008,
          *((_DWORD *)MiniportAdapterHandle + 1014),
          *((_QWORD *)MiniportAdapterHandle + 503),
          v21,
          2,
          v10);
      Interrupt->InterruptObject = 0LL;
      goto LABEL_22;
    }
  }
LABEL_23:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v24) = v12;
    WPP_RECORDER_SF_qdL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      1u,
      0xFu,
      (struct _GUID *)&WPP_6a66c12e6892314c82587e9ff74a73a8_Traceguids,
      (char)MiniportAdapterHandle,
      v10,
      v24);
  }
  return v12;
}
