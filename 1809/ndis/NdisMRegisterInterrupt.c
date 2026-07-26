/*
 * XREFs of NdisMRegisterInterrupt @ 0x1C00F37D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_qdD @ 0x1C003A814 (WPP_SF_qdD.c)
 *     WPP_SF_dd @ 0x1C0041D74 (WPP_SF_dd.c)
 *     McTemplateK0jqxqdq @ 0x1C00434F0 (McTemplateK0jqxqdq.c)
 *     ndisTranslateResources @ 0x1C00D0A10 (ndisTranslateResources.c)
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
  unsigned __int8 v8; // r14
  NDIS_STATUS v11; // ebx
  BOOLEAN v12; // r12
  void (__fastcall *v13)(void *); // rcx
  __int64 v14; // rcx
  KAFFINITY v15; // rcx
  __int16 v16; // dx
  ULONG v17; // r13d
  NTSTATUS v18; // eax
  __int64 v19; // rcx
  char v20; // r12
  __int64 v22; // [rsp+28h] [rbp-71h]
  __int64 v23; // [rsp+58h] [rbp-41h] BYREF
  _IO_CONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+68h] [rbp-31h] BYREF
  __int64 v25; // [rsp+F0h] [rbp+57h] BYREF

  v7 = InterruptLevel;
  v8 = 0;
  v25 = 0LL;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0xCu, &WPP_a220dbba1db53d57c8c40116951fe210_Traceguids, (__int64)MiniportAdapterHandle, InterruptLevel);
  if ( *((_BYTE *)MiniportAdapterHandle + 32) >= 6u )
  {
    v11 = -1071448020;
LABEL_22:
    _InterlockedDecrement((volatile signed __int32 *)MiniportAdapterHandle + 478);
    *((_QWORD *)MiniportAdapterHandle + 14) = 0LL;
    goto LABEL_23;
  }
  if ( (*((_DWORD *)MiniportAdapterHandle + 928) & 2) != 0 )
  {
    v11 = -1073741670;
    goto LABEL_22;
  }
  _InterlockedIncrement((volatile signed __int32 *)MiniportAdapterHandle + 478);
  v12 = SharedInterrupt;
  Interrupt->Reserved = (void *)*((_QWORD *)MiniportAdapterHandle + 3);
  *((_QWORD *)MiniportAdapterHandle + 14) = Interrupt;
  Interrupt->DpcCount = 0;
  Interrupt->IsDeregistered = 0;
  Interrupt->Miniport = (_NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle;
  Interrupt->MiniportIsr = *(void (__fastcall **)(unsigned __int8 *, unsigned __int8 *, void *))(*((_QWORD *)MiniportAdapterHandle
                                                                                                 + 474)
                                                                                               + 168LL);
  v13 = *(void (__fastcall **)(void *))(*((_QWORD *)MiniportAdapterHandle + 474) + 152LL);
  Interrupt->IsrRequested = RequestIsr;
  Interrupt->MiniportDpc = v13;
  Interrupt->SharedInterrupt = v12;
  if ( !v12 )
    *((_DWORD *)MiniportAdapterHandle + 470) |= 0x4000000u;
  KeInitializeEvent(&Interrupt->DpcsCompletedEvent, SynchronizationEvent, 0);
  KeInitializeDpc(&Interrupt->InterruptDpc, (PKDEFERRED_ROUTINE)ndis5InterruptDpc, Interrupt);
  KeSetImportanceDpc(&Interrupt->InterruptDpc, MediumImportance);
  *((_QWORD *)MiniportAdapterHandle + 433) = MiniportAdapterHandle;
  *((_QWORD *)MiniportAdapterHandle + 432) = ndis5QueuedMiniportDpcWorkItem;
  *((_QWORD *)MiniportAdapterHandle + 430) = 0LL;
  *((_DWORD *)MiniportAdapterHandle + 30) &= ~0x20u;
  v11 = ndisTranslateResources((__int64)MiniportAdapterHandle, 2, v7, &v23, &v25);
  if ( v11 )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
      WPP_SF_qD(0xDu, &WPP_a220dbba1db53d57c8c40116951fe210_Traceguids, (__int64)MiniportAdapterHandle, v7);
    if ( (byte_1C00A2081 & 1) != 0 )
      McTemplateK0jqxqdq(
        v14,
        &RegisterInterruptFailed,
        (const GUID *)((char *)MiniportAdapterHandle + 4040),
        (__int64)MiniportAdapterHandle + 4040,
        *((_DWORD *)MiniportAdapterHandle + 1022),
        *((_QWORD *)MiniportAdapterHandle + 507),
        v11,
        170,
        0);
    v11 = -1073741823;
    goto LABEL_22;
  }
  if ( v25 )
  {
    v15 = *(_QWORD *)(v25 + 12);
    v16 = *(_WORD *)(v25 + 2);
    v8 = *(_BYTE *)(v25 + 4);
    v17 = *(_DWORD *)(v25 + 8);
    Parameters.FullySpecified.PhysicalDeviceObject = (PDEVICE_OBJECT)*((_QWORD *)MiniportAdapterHandle + 483);
    Parameters.FullySpecified.ServiceRoutine = (PKSERVICE_ROUTINE)ndisMIsr;
    Parameters.FullySpecified.ProcessorEnableMask = v15;
    *((_DWORD *)MiniportAdapterHandle + 31) |= 0x80000000;
    Parameters.FullySpecified.InterruptMode = v16 != 0;
    Parameters.Version = 1;
    Parameters.FullySpecified.InterruptObject = &Interrupt->InterruptObject;
    *(_OWORD *)&Parameters.MessageBased.ServiceContext = (unsigned __int64)Interrupt;
    Parameters.FullySpecified.Vector = v17;
    Parameters.FullySpecified.Irql = v8;
    *(_WORD *)&Parameters.MessageBased.SynchronizeIrql = v8;
    Parameters.FullySpecified.ShareVector = v12;
    v18 = IoConnectInterruptEx(&Parameters);
    v20 = v18;
    if ( v18 < 0 )
    {
      v11 = -1073741823;
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
        WPP_SF_dd(0xEu, &WPP_a220dbba1db53d57c8c40116951fe210_Traceguids, v8, v17);
      if ( (byte_1C00A2081 & 1) != 0 )
        McTemplateK0jqxqdq(
          v19,
          &RegisterInterruptFailed,
          (const GUID *)((char *)MiniportAdapterHandle + 4040),
          (__int64)MiniportAdapterHandle + 4040,
          *((_DWORD *)MiniportAdapterHandle + 1022),
          *((_QWORD *)MiniportAdapterHandle + 507),
          v20,
          240,
          v8);
      Interrupt->InterruptObject = 0LL;
      goto LABEL_22;
    }
  }
LABEL_23:
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    LODWORD(v22) = v11;
    WPP_SF_qdD(0xFu, &WPP_a220dbba1db53d57c8c40116951fe210_Traceguids, (__int64)MiniportAdapterHandle, v8, v22);
  }
  return v11;
}
