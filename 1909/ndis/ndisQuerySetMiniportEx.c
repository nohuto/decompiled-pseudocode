/*
 * XREFs of ndisQuerySetMiniportEx @ 0x1C0006A60
 * Callers:
 *     ndisDeviceControlHandler @ 0x1C0008BE0 (ndisDeviceControlHandler.c)
 *     ndisQuerySetMiniport @ 0x1C001136C (ndisQuerySetMiniport.c)
 *     ndisQueryDeviceOid @ 0x1C00121B0 (ndisQueryDeviceOid.c)
 *     ?ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z @ 0x1C00137C0 (-ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z.c)
 *     ?ndisQueryGuidDataSize@@YAJPEAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_GUID@@1@Z @ 0x1C001879C (-ndisQueryGuidDataSize@@YAJPEAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_NDIS_CO_VC_PTR_BLO.c)
 *     ?ndisQueryGuidData@@YAJPEAEKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_GUID@@1@Z @ 0x1C0018A1C (-ndisQueryGuidData@@YAJPEAEKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_NDIS_CO_VC_PTR_BLOCK@.c)
 *     ndisPMAddWOLPattern @ 0x1C001D0F4 (ndisPMAddWOLPattern.c)
 *     ndisWmiExecuteMethod @ 0x1C001DEEC (ndisWmiExecuteMethod.c)
 *     ndisOidPMRemove @ 0x1C0022E6C (ndisOidPMRemove.c)
 *     ndisPMAddProtocolOffload @ 0x1C002311C (ndisPMAddProtocolOffload.c)
 *     ?ndisQueryCustomGuids@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_GUID@@PEAG@Z @ 0x1C0029908 (-ndisQueryCustomGuids@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_GUID@@PE.c)
 *     ndisIovCreateDefaultNicSwitch @ 0x1C00329C4 (ndisIovCreateDefaultNicSwitch.c)
 *     ndisQuerySetMiniportEx2 @ 0x1C0033FFC (ndisQuerySetMiniportEx2.c)
 *     ndisAddWoLMagicPacket @ 0x1C0034998 (ndisAddWoLMagicPacket.c)
 *     ndisRejectUnsupportedPMOffloads @ 0x1C00761BC (ndisRejectUnsupportedPMOffloads.c)
 *     ndisRejectUnsupportedWoLPatterns @ 0x1C0076408 (ndisRejectUnsupportedWoLPatterns.c)
 *     ?ndisMDoProtocolRequest@@YAKPEAU_NDIS_OPEN_BLOCK@@EKPEAXJJE@Z @ 0x1C009244C (-ndisMDoProtocolRequest@@YAKPEAU_NDIS_OPEN_BLOCK@@EKPEAXJJE@Z.c)
 *     ?ndisMethodDeviceOid@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAU_NDIS_OID_REQUEST@@PEAEII@Z @ 0x1C0094744 (-ndisMethodDeviceOid@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAU_NDIS_OID_REQUEST@@PEAEII@Z.c)
 *     ndisMSendPmParametersOidForAoAc @ 0x1C00A540C (ndisMSendPmParametersOidForAoAc.c)
 *     ?ndisMediaDisconnectWorker@@YAXPEAX@Z @ 0x1C00A54D0 (-ndisMediaDisconnectWorker@@YAXPEAX@Z.c)
 *     ?ndisQueryMediaStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A56B8 (-ndisQueryMediaStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00A851C (ndisWmiChangeSingleInstance.c)
 *     ndisDisableRsc @ 0x1C00AAFA4 (ndisDisableRsc.c)
 *     ndisGetMiniportOffloadCapability @ 0x1C00AB118 (ndisGetMiniportOffloadCapability.c)
 *     ndisIovDeleteDefaultNicSwitch @ 0x1C00B1A14 (ndisIovDeleteDefaultNicSwitch.c)
 *     ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x1C00BD598 (-ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@.c)
 * Callees:
 *     ndisQueueOidRequest @ 0x1C0004470 (ndisQueueOidRequest.c)
 *     WPP_RECORDER_SF_qDq @ 0x1C00083F0 (WPP_RECORDER_SF_qDq.c)
 *     WPP_RECORDER_SF_qDqd @ 0x1C00084B0 (WPP_RECORDER_SF_qDqd.c)
 *     NdisMSleep @ 0x1C001BEC0 (NdisMSleep.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001C08C (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisDoDirectOidRequest @ 0x1C001DB3C (ndisDoDirectOidRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     ndisMCoOidRequestToRequest @ 0x1C006B1C0 (ndisMCoOidRequestToRequest.c)
 *     NdisMCoOidRequestComplete @ 0x1C00868F0 (NdisMCoOidRequestComplete.c)
 *     ndisDereferenceVcPtr @ 0x1C0087390 (ndisDereferenceVcPtr.c)
 *     ndisReferenceVcPtr @ 0x1C0087690 (ndisReferenceVcPtr.c)
 */

__int64 __fastcall ndisQuerySetMiniportEx(__int64 a1, _QWORD *a2, __int64 a3, char a4, __int64 a5, __int64 a6)
{
  ULONGLONG UnbiasedInterruptTime; // r14
  _QWORD *v9; // r13
  int v10; // r15d
  signed __int32 v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  _DWORD *v15; // rax
  unsigned int v16; // ecx
  unsigned int i; // ebx
  int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // ebx
  int v21; // edx
  int v22; // r8d
  __int64 v23; // rax
  __int64 v25; // rdx
  NDIS_STATUS v26; // eax
  __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  char v29; // [rsp+90h] [rbp+8h]
  ULONGLONG v30; // [rsp+A0h] [rbp+18h]

  UnbiasedInterruptTime = 0LL;
  v9 = a2;
  v10 = *(_DWORD *)(a3 + 32);
  v29 = 0;
  v30 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qDq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      a3,
      12,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      a1,
      v10,
      a5);
  }
  v12 = _InterlockedIncrement((volatile signed __int32 *)&ndisPkgs);
  if ( !ImageSectionHandle )
  {
    if ( v12 == 1 )
    {
      ImageSectionHandle = MmLockPagableDataSection(AddressWithinSection);
      MmUnlockPagableImageSection(ImageSectionHandle);
    }
    else
    {
      do
        NdisMSleep(0x32u);
      while ( !ImageSectionHandle );
    }
  }
  MmLockPagableSectionByHandle(ImageSectionHandle);
  if ( *(_QWORD *)(a1 + 4456) && *(_DWORD *)(a3 + 4) == 1 && *(_DWORD *)(a3 + 32) == -50265855 )
  {
    UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
    v30 = UnbiasedInterruptTime;
  }
  if ( (*(_DWORD *)(a1 + 3688) & 0x400) == 0 )
    *(_BYTE *)(a3 + 232) = 1;
  if ( *(_QWORD *)(a3 + 104) && a4 )
    v29 = 1;
  v14 = *(_DWORD *)(a1 + 124);
  if ( (v14 & 0x100) != 0 )
  {
    v20 = -1073676280;
    goto LABEL_34;
  }
  if ( (v14 & 0x4000) != 0 )
  {
    v20 = -1073741823;
    goto LABEL_34;
  }
  if ( *(int *)(a1 + 3868) <= 1 || *(_DWORD *)(a3 + 32) == -50265855 )
  {
    *(_DWORD *)(a3 + 88) |= 8u;
    KeInitializeEvent((PRKEVENT)(a3 + 112), NotificationEvent, 0);
    v13 = *(unsigned int *)(a3 + 32);
    v15 = &ndisDirectOidRequestPathOids;
    v16 = 0;
    while ( (_DWORD)v13 != *v15 )
    {
      ++v16;
      ++v15;
      if ( v16 >= 0x17 )
        goto LABEL_16;
    }
    *(_DWORD *)(a3 + 88) |= 0x200000u;
LABEL_16:
    if ( KeGetCurrentIrql() < 2u )
    {
      for ( i = 0; i < 0x1388; ++i )
      {
        if ( (*(_DWORD *)(a1 + 120) & 0x300000) == 0 )
          break;
        NdisMSleep(0x3E8u);
      }
    }
    v18 = *(_DWORD *)(a1 + 120);
    if ( (v18 & 0x300000) != 0 )
    {
      v20 = -1073676275;
    }
    else
    {
      if ( (v18 & 0x20000) != 0 )
      {
        v25 = 0LL;
        if ( v9 )
        {
          if ( !(unsigned __int8)ndisReferenceVcPtr(v9, 0LL) )
          {
            v20 = -1073676286;
            goto LABEL_48;
          }
          v25 = v9[25];
        }
        if ( *(_BYTE *)(a1 + 32) < 6u )
          v26 = ndisMCoOidRequestToRequest(a1);
        else
          v26 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(a1 + 3760) + 552LL))(
                  *(_QWORD *)(a1 + 24),
                  v25,
                  a3);
        if ( v26 == 259 )
          KeWaitForSingleObject((PVOID)(a3 + 112), Executive, 0, 0, 0LL);
        else
          NdisMCoOidRequestComplete((NDIS_HANDLE)a1, v9, (PNDIS_OID_REQUEST)a3, v26);
        v20 = *(_DWORD *)(a3 + 80);
        if ( v9 )
          ndisDereferenceVcPtr((char)v9);
        goto LABEL_25;
      }
      if ( (*(_DWORD *)(a3 + 88) & 0x200000) != 0 )
        v19 = ndisDoDirectOidRequest(a3, a1, a6, a5);
      else
        v19 = ndisQueueOidRequest(a3, a1, a6, a5);
      v20 = v19;
      if ( v19 == 259 )
      {
        KeWaitForSingleObject((PVOID)(a3 + 112), Executive, 0, 0, 0LL);
        v20 = *(_DWORD *)(a3 + 80);
LABEL_25:
        UnbiasedInterruptTime = v30;
        goto LABEL_26;
      }
    }
LABEL_48:
    UnbiasedInterruptTime = v30;
    goto LABEL_34;
  }
  v20 = -1071448017;
LABEL_34:
  if ( v29 == 1 && a4 )
  {
    LOBYTE(v13) = 6;
    ndisMDereferenceOpenUnlocked(*(_QWORD *)(a3 + 104), v13);
  }
LABEL_26:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v21,
      v22,
      13,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      a1,
      v10,
      a5,
      v20);
  v23 = *(_QWORD *)(a1 + 4456);
  if ( v23 && *(_DWORD *)(a3 + 4) == 1 && *(_DWORD *)(a3 + 32) == -50265855 )
  {
    ++*(_DWORD *)(v23 + 1144);
    *(_QWORD *)(*(_QWORD *)(a1 + 4456) + 1152LL) = (KeQueryUnbiasedInterruptTime() - UnbiasedInterruptTime + 5000)
                                                 / 0x2710;
    v27 = *(_QWORD *)(a1 + 4456);
    v28 = *(_QWORD *)(v27 + 1160);
    if ( v28 <= *(_QWORD *)(v27 + 1152) )
      v28 = *(_QWORD *)(v27 + 1152);
    *(_QWORD *)(v27 + 1160) = v28;
    *(_QWORD *)(*(_QWORD *)(a1 + 4456) + 1168LL) += *(_QWORD *)(*(_QWORD *)(a1 + 4456) + 1152LL);
  }
  return v20;
}
