/*
 * XREFs of NdisLWMRegisterMiniportDriver @ 0x1C009D9E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0032358 (WPP_RECORDER_SF_D.c)
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C0036F60 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     NdisConvertNtStatusToNdisStatus @ 0x1C003F4F0 (NdisConvertNtStatusToNdisStatus.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     ??_G_NDIS_M_DRIVER_BLOCK@@QEAAPEAXI@Z @ 0x1C009CD78 (--_G_NDIS_M_DRIVER_BLOCK@@QEAAPEAXI@Z.c)
 *     ndisValidateLWMiniportDriverCharacteristicsHeader @ 0x1C0116608 (ndisValidateLWMiniportDriverCharacteristicsHeader.c)
 *     ?ndisLWMGetServiceKeyFromServiceName@@YAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@Z @ 0x1C0117FA0 (-ndisLWMGetServiceKeyFromServiceName@@YAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@U_UNICODE_STRING@.c)
 */

__int64 __fastcall NdisLWMRegisterMiniportDriver(void *a1, __int64 a2, void **a3)
{
  __int64 v4; // rbx
  int v6; // edx
  unsigned int v7; // edi
  unsigned __int8 v8; // al
  int v9; // eax
  PVOID v10; // rcx
  PVOID v11; // rbx
  void *v12; // rbx
  struct _NDIS_MINIPORT_DRIVER_CHARACTERISTICS v14; // [rsp+38h] [rbp-59h] BYREF
  PVOID P; // [rsp+108h] [rbp+77h] BYREF

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      1,
      128,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids);
  }
  *a3 = 0LL;
  v7 = ndisValidateLWMiniportDriverCharacteristicsHeader(v4, &P);
  if ( v7 )
    goto LABEL_14;
  memset(&v14, 0, sizeof(v14));
  v14.Header.Type = -118;
  v14.Header.Revision = (unsigned __int8)P;
  if ( (_BYTE)P == 3 )
  {
    v8 = *(_BYTE *)(v4 + 4);
    P = 0LL;
    v14.MajorNdisVersion = v8;
    v14.MinorNdisVersion = *(_BYTE *)(v4 + 5);
    v14.MajorDriverVersion = *(_BYTE *)(v4 + 6);
    v14.MinorDriverVersion = *(_BYTE *)(v4 + 7);
    v14.SetOptionsHandler = *(int (__fastcall **)(void *, void *))(v4 + 32);
    v14.PauseHandler = *(int (__fastcall **)(void *, _NDIS_MINIPORT_PAUSE_PARAMETERS *))(v4 + 40);
    v14.RestartHandler = *(int (__fastcall **)(void *, _NDIS_MINIPORT_RESTART_PARAMETERS *))(v4 + 48);
    v14.OidRequestHandler = *(int (__fastcall **)(void *, _NDIS_OID_REQUEST *))(v4 + 56);
    v14.SendNetBufferListsHandler = *(void (__fastcall **)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))(v4 + 64);
    v14.ReturnNetBufferListsHandler = *(void (__fastcall **)(void *, _NET_BUFFER_LIST *, unsigned int))(v4 + 72);
    v14.CancelSendHandler = *(void (__fastcall **)(void *, void *))(v4 + 80);
    v14.CancelOidRequestHandler = *(void (__fastcall **)(void *, void *))(v4 + 88);
    v14.DirectOidRequestHandler = *(int (__fastcall **)(void *, _NDIS_OID_REQUEST *))(v4 + 96);
    v14.CancelDirectOidRequestHandler = *(void (__fastcall **)(void *, void *))(v4 + 104);
    v14.SynchronousOidRequestHandler = *(int (__fastcall **)(void *, _NDIS_OID_REQUEST *))(v4 + 112);
    v14.Header.Size = 160;
    v14.Flags = 32;
    v9 = ndisLWMGetServiceKeyFromServiceName((unsigned __int8)v4 + 16);
    v7 = NdisConvertNtStatusToNdisStatus(v9);
    if ( v7 )
    {
      v10 = P;
      if ( !P )
        goto LABEL_13;
    }
    else
    {
      v11 = P;
      v7 = ndisInternalRegisterMiniportDriver(0LL, (struct _UNICODE_STRING *)P, a1, &v14, a3);
      if ( !v11 )
        goto LABEL_13;
      v10 = v11;
    }
    ExFreePoolWithTag(v10, 0);
LABEL_13:
    if ( !v7 )
      goto LABEL_16;
    goto LABEL_14;
  }
  v7 = -1073676283;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 2;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      1,
      129,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids);
  }
LABEL_14:
  v12 = *a3;
  if ( *a3 )
  {
    _NDIS_M_DRIVER_BLOCK::`scalar deleting destructor'((_NDIS_M_DRIVER_BLOCK *)*a3);
    ExFreePoolWithTag(v12, 0);
    *a3 = 0LL;
  }
LABEL_16:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      1,
      130,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      v7);
  }
  return v7;
}
