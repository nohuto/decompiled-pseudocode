/*
 * XREFs of ?ndisMRawInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C01175DC
 * Callers:
 *     ?ndisMpHookInvokeOidRequestHandler@@YAHPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00C7690 (-ndisMpHookInvokeOidRequestHandler@@YAHPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST.c)
 * Callees:
 *     ?ndisDisarmWatchdogAsync@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C0009B0C (-ndisDisarmWatchdogAsync@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C001AD38 (WPP_RECORDER_SF_qDD_ea_1C001AD38.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     ?ndisDrainWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00FB6B4 (-ndisDrainWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z @ 0x1C00FB6F0 (-ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z.c)
 */

__int64 __fastcall ndisMRawInvokeOidRequest(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rdi
  _NDIS_OID_REQUEST *v3; // rbp
  unsigned __int64 Oid; // rsi
  _NDIS_M_DRIVER_BLOCK *v6; // rax
  int v8; // eax
  unsigned int v9; // edi
  char v11[4]; // [rsp+30h] [rbp-28h]

  DriverHandle = a1->DriverHandle;
  v3 = a2;
  Oid = a2->DATA.QUERY_INFORMATION.Oid;
  v6 = DriverHandle;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v11 = a2->DATA.QUERY_INFORMATION.Oid;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      264,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      (char)a1,
      v11[0]);
    v6 = a1->DriverHandle;
  }
  if ( v6->HookType != NdisMiniportHookDriverTypeWdi )
  {
    ndisDrainWatchdog(a1->PendingOidWatchdog.m_ptr);
    ndisArmWatchdog(
      a1->PendingOidWatchdog.m_ptr,
      a1,
      35,
      DriverHandle->UnhookedCharacteristics.__ptr_.__value_->OidRequestHandler,
      0x88B8u,
      Oid);
  }
  if ( ndisVerifierNdisDispatch && (DriverHandle->Flags & 2) != 0 )
    v8 = ndisVerifierNdisDispatch->NdisMiniportOidRequestHandler(
           a1->MiniportAdapterContext,
           v3,
           a1,
           a1->VerifierContext,
           DriverHandle->UnhookedCharacteristics.__ptr_.__value_->OidRequestHandler);
  else
    v8 = DriverHandle->UnhookedCharacteristics.__ptr_.__value_->OidRequestHandler(a1->MiniportAdapterContext, v3);
  v9 = v8;
  if ( v8 != 259 && a1->DriverHandle->HookType != NdisMiniportHookDriverTypeWdi )
    ndisDisarmWatchdogAsync(a1->PendingOidWatchdog.m_ptr);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x109u,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      (char)a1,
      Oid,
      v9);
  return v9;
}
