/*
 * XREFs of ?ndisMRawInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00EF360
 * Callers:
 *     ?ndisMpHookInvokeOidRequestHandler@@YAHPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00820D0 (-ndisMpHookInvokeOidRequestHandler@@YAHPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST.c)
 * Callees:
 *     ?ndisDisarmWatchdogAsync@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C000E610 (-ndisDisarmWatchdogAsync@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_qdD @ 0x1C003A814 (WPP_SF_qdD.c)
 *     ?ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z @ 0x1C00B79D0 (-ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z.c)
 *     ?ndisDrainWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00B7E4C (-ndisDrainWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 */

__int64 __fastcall ndisMRawInvokeOidRequest(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rdi
  unsigned __int64 Oid; // rsi
  _NDIS_M_DRIVER_BLOCK *v6; // rax
  bool v7; // al
  _NDIS_MINIPORT_DRIVER_CHARACTERISTICS *Myptr; // rcx
  int v9; // eax
  unsigned int v10; // edi
  unsigned int v12[2]; // [rsp+20h] [rbp-18h]

  DriverHandle = a1->DriverHandle;
  Oid = a2->DATA.QUERY_INFORMATION.Oid;
  v6 = DriverHandle;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
  {
    WPP_SF_qD(0x107u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, (__int64)a1, Oid);
    v6 = a1->DriverHandle;
  }
  if ( v6->HookType != NdisMiniportHookDriverTypeWdi )
  {
    ndisDrainWatchdog((struct _NDIS_REFCOUNT_BLOCK *)a1->PendingOidWatchdog.m_ptr);
    ndisArmWatchdog(
      (struct _NDIS_REFCOUNT_BLOCK *)a1->PendingOidWatchdog.m_ptr,
      a1,
      (_NDIS_REFCOUNT_STACK_ENTRY)35,
      DriverHandle->UnhookedCharacteristics._Myptr->OidRequestHandler,
      (_NDIS_REFCOUNT_STACK_ENTRY)35000,
      Oid);
  }
  v7 = ndisVerifierNdisDispatch && (DriverHandle->Flags & 2) != 0;
  Myptr = DriverHandle->UnhookedCharacteristics._Myptr;
  if ( v7 )
    v9 = ndisVerifierNdisDispatch->NdisMiniportOidRequestHandler(
           a1->MiniportAdapterContext,
           a2,
           a1,
           a1->VerifierContext,
           Myptr->OidRequestHandler);
  else
    v9 = Myptr->OidRequestHandler(a1->MiniportAdapterContext, a2);
  v10 = v9;
  if ( v9 != 259 && a1->DriverHandle->HookType != NdisMiniportHookDriverTypeWdi )
    ndisDisarmWatchdogAsync(a1->PendingOidWatchdog.m_ptr);
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
  {
    v12[0] = v10;
    WPP_SF_qdD(0x108u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, (__int64)a1, Oid, *(_QWORD *)v12);
  }
  return v10;
}
