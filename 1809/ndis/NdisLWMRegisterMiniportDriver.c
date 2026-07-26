/*
 * XREFs of NdisLWMRegisterMiniportDriver @ 0x1C00F17A0
 * Callers:
 *     <none>
 * Callees:
 *     NdisConvertNtStatusToNdisStatus @ 0x1C0015520 (NdisConvertNtStatusToNdisStatus.c)
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C0021CD8 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_D @ 0x1C0041770 (WPP_SF_D.c)
 *     ??_G_NDIS_M_DRIVER_BLOCK@@QEAAPEAXI@Z @ 0x1C0064A5C (--_G_NDIS_M_DRIVER_BLOCK@@QEAAPEAXI@Z.c)
 *     ndisValidateLWMiniportDriverCharacteristicsHeader @ 0x1C00EAE34 (ndisValidateLWMiniportDriverCharacteristicsHeader.c)
 *     ?ndisLWMGetServiceKeyFromServiceName@@YAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@Z @ 0x1C00F10F8 (-ndisLWMGetServiceKeyFromServiceName@@YAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@U_UNICODE_STRING@.c)
 */

__int64 __fastcall NdisLWMRegisterMiniportDriver(void *a1, __int64 a2, void **a3)
{
  unsigned int v6; // edi
  unsigned __int8 v7; // al
  int v8; // eax
  PVOID v9; // rcx
  PVOID v10; // rbx
  void *v11; // rbx
  struct _NDIS_MINIPORT_DRIVER_CHARACTERISTICS v13; // [rsp+30h] [rbp-59h] BYREF
  PVOID P; // [rsp+100h] [rbp+77h] BYREF

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_(0x7Du, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids);
  *a3 = 0LL;
  v6 = ndisValidateLWMiniportDriverCharacteristicsHeader(a2, &P);
  if ( v6 )
    goto LABEL_14;
  memset(&v13, 0, sizeof(v13));
  v13.Header.Type = -118;
  v13.Header.Revision = (unsigned __int8)P;
  if ( (_BYTE)P == 3 )
  {
    v7 = *(_BYTE *)(a2 + 4);
    P = 0LL;
    v13.MajorNdisVersion = v7;
    v13.MinorNdisVersion = *(_BYTE *)(a2 + 5);
    v13.MajorDriverVersion = *(_BYTE *)(a2 + 6);
    v13.MinorDriverVersion = *(_BYTE *)(a2 + 7);
    v13.SetOptionsHandler = *(int (__fastcall **)(void *, void *))(a2 + 32);
    v13.PauseHandler = *(int (__fastcall **)(void *, _NDIS_MINIPORT_PAUSE_PARAMETERS *))(a2 + 40);
    v13.RestartHandler = *(int (__fastcall **)(void *, _NDIS_MINIPORT_RESTART_PARAMETERS *))(a2 + 48);
    v13.OidRequestHandler = *(int (__fastcall **)(void *, _NDIS_OID_REQUEST *))(a2 + 56);
    v13.SendNetBufferListsHandler = *(void (__fastcall **)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))(a2 + 64);
    v13.ReturnNetBufferListsHandler = *(void (__fastcall **)(void *, _NET_BUFFER_LIST *, unsigned int))(a2 + 72);
    v13.CancelSendHandler = *(void (__fastcall **)(void *, void *))(a2 + 80);
    v13.CancelOidRequestHandler = *(void (__fastcall **)(void *, void *))(a2 + 88);
    v13.DirectOidRequestHandler = *(int (__fastcall **)(void *, _NDIS_OID_REQUEST *))(a2 + 96);
    v13.CancelDirectOidRequestHandler = *(void (__fastcall **)(void *, void *))(a2 + 104);
    v13.SynchronousOidRequestHandler = *(int (__fastcall **)(void *, _NDIS_OID_REQUEST *))(a2 + 112);
    v13.Header.Size = 160;
    v13.Flags = 32;
    v8 = ndisLWMGetServiceKeyFromServiceName((PCUNICODE_STRING)(a2 + 16), &P);
    v6 = NdisConvertNtStatusToNdisStatus(v8);
    if ( v6 )
    {
      v9 = P;
      if ( !P )
        goto LABEL_13;
    }
    else
    {
      v10 = P;
      v6 = ndisInternalRegisterMiniportDriver(0LL, (struct _UNICODE_STRING *)P, a1, &v13, a3);
      if ( !v10 )
        goto LABEL_13;
      v9 = v10;
    }
    ExFreePoolWithTag(v9, 0);
LABEL_13:
    if ( !v6 )
      goto LABEL_16;
    goto LABEL_14;
  }
  v6 = -1073676283;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
    WPP_SF_(0x7Eu, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids);
LABEL_14:
  v11 = *a3;
  if ( *a3 )
  {
    _NDIS_M_DRIVER_BLOCK::`scalar deleting destructor'((_NDIS_M_DRIVER_BLOCK *)*a3);
    ExFreePoolWithTag(v11, 0);
    *a3 = 0LL;
  }
LABEL_16:
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_D(0x7Fu, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, v6);
  return v6;
}
