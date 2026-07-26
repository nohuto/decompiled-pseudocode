/*
 * XREFs of ?ndisFInvokeStatus@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0016C0C
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0017430 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0017A6C (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ndisIndicateInitialStateToFilter @ 0x1C0028F20 (ndisIndicateInitialStateToFilter.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisFInvokeStatus(struct _NDIS_FILTER_BLOCK *a1, struct _NDIS_STATUS_INDICATION *a2)
{
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // rbp
  struct _NDIS_STATUS_INDICATION *v3; // rdi
  int StatusCode; // esi
  int v6; // edx
  int v7; // [rsp+30h] [rbp-28h]

  FilterDriver = a1->FilterDriver;
  v3 = a2;
  StatusCode = a2->StatusCode;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = a2->StatusCode;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      24,
      123,
      (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
      (char)a1,
      v7);
  }
  FilterDriver->DefaultFilterCharacteristics.StatusHandler(a1->FilterModuleContext, v3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      24,
      124,
      (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
      (char)a1,
      StatusCode);
  }
}
