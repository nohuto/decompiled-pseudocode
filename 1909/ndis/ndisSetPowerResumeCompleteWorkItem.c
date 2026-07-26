/*
 * XREFs of ndisSetPowerResumeCompleteWorkItem @ 0x1C00B9D50
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C00143F4 (-NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ndisSignalD0RequestComplete @ 0x1C0014420 (ndisSignalD0RequestComplete.c)
 *     WPP_RECORDER_SF_qZ @ 0x1C0019620 (WPP_RECORDER_SF_qZ.c)
 *     WPP_RECORDER_SF_Lq @ 0x1C001A2B4 (WPP_RECORDER_SF_Lq.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     McTemplateK0jqxqd @ 0x1C00619C8 (McTemplateK0jqxqd.c)
 *     ndisSelectiveSuspendResumeOperations @ 0x1C00B95DC (ndisSelectiveSuspendResumeOperations.c)
 *     ?NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C00C3D20 (-NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 *     ndisMInvokeOidRequest @ 0x1C00FB8A0 (ndisMInvokeOidRequest.c)
 *     ndisRemoveWoLDirectedMAC @ 0x1C0115860 (ndisRemoveWoLDirectedMAC.c)
 */

int __fastcall ndisSetPowerResumeCompleteWorkItem(__int64 a1)
{
  __int64 v1; // rdi
  _IRP *v2; // r13
  int v3; // esi
  __int64 v4; // r15
  __int64 v5; // rcx
  int v6; // r14d
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rdx
  KIRQL v10; // al
  POWER_STATE State; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v13[16]; // [rsp+50h] [rbp-B0h] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  v2 = *(_IRP **)(a1 + 40);
  v3 = 0;
  v4 = *(_QWORD *)(v1 + 4448);
  memset((char *)v13 + 1, 0, 0xF7uLL);
  NDIS_COUNT_POWER_TRANSITION((struct _NDIS_MINIPORT_BLOCK *)v1, 1);
  if ( (byte_1C00E8081 & 8) != 0 )
    McTemplateK0jqxqd(
      v5,
      &DevicePowerStateChange,
      (const GUID *)(v1 + 4008),
      v1 + 4008,
      *(_DWORD *)(v1 + 4056),
      *(_QWORD *)(v1 + 4024),
      1,
      1);
  State.SystemState = PowerSystemWorking;
  memset(v13, 0, 0xF8uLL);
  DWORD2(v13[5]) |= 0x408u;
  *((_QWORD *)&v13[6] + 1) = &ndisIntReqGeneric;
  LODWORD(v13[0]) = 15466902;
  *((_QWORD *)&v13[2] + 1) = &State;
  LODWORD(v13[2]) = -50265855;
  *(_QWORD *)((char *)v13 + 4) = 1LL;
  LODWORD(v13[3]) = 4;
  KeInitializeEvent((PRKEVENT)&v13[7], NotificationEvent, 0);
  v6 = ndisMInvokeOidRequest(v1);
  if ( v6 == 259 )
  {
    KeWaitForSingleObject(&v13[7], Executive, 0, 0, 0LL);
    v6 = v13[5];
  }
  if ( v6 )
  {
    v7 = *(_QWORD *)(v1 + 4448);
    v3 = -1073741823;
    NdisTraceLoggingUnexpectedSelectiveSuspendError((struct _NDIS_MINIPORT_BLOCK *)v1, 8u, v6);
    *(_WORD *)(v7 + 626) = *(_WORD *)(v7 + 624);
    *(_WORD *)(v7 + 624) = 8;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xFu,
        0x1Fu,
        (struct _GUID *)&WPP_5c92d274ba7c3cfc77b41af92408ef8f_Traceguids,
        v6,
        v1);
  }
  else
  {
    v8 = *(_QWORD *)(v1 + 4456);
    if ( v8
      && (*(_BYTE *)(v1 + 124) & 0x60) == 0x60
      && (unsigned int)(*(_DWORD *)(v1 + 1272) - 2) <= 2
      && (*(_DWORD *)(v1 + 1004) & 6) != 0
      && *(_BYTE *)(v8 + 1096) )
    {
      ndisRemoveWoLDirectedMAC(v1);
    }
    ndisSelectiveSuspendResumeOperations((struct _NDIS_MINIPORT_BLOCK *)v1, 1);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qZ(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v9,
        9u,
        0x20u,
        (struct _GUID *)&WPP_5c92d274ba7c3cfc77b41af92408ef8f_Traceguids,
        v1,
        *(unsigned __int16 **)(v1 + 3856));
  }
  v2->IoStatus.Status = v3;
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v4);
  *(_DWORD *)(v4 + 504) &= ~0x20u;
  KeReleaseSpinLock((PKSPIN_LOCK)v4, v10);
  PoSetPowerState(*(PDEVICE_OBJECT *)(v1 + 3824), DevicePowerState, State);
  IofCompleteRequest(v2, 0);
  return ndisSignalD0RequestComplete((struct _NDIS_MINIPORT_BLOCK *)v1, v3);
}
