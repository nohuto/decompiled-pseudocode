/*
 * XREFs of ndisPowerSuspendRequestComplete @ 0x1C0074E30
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0010C04 (-NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ndisLogMiniportEvent @ 0x1C0016888 (ndisLogMiniportEvent.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     McTemplateK0jqxqd @ 0x1C003D2DC (McTemplateK0jqxqd.c)
 *     WPP_SF_dq @ 0x1C0041A40 (WPP_SF_dq.c)
 *     WPP_SF_qZ @ 0x1C0049D60 (WPP_SF_qZ.c)
 *     ?NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C007E93C (-NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 */

void __fastcall ndisPowerSuspendRequestComplete(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _NDIS_MINIPORT_BLOCK *a4,
        int *a5)
{
  _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rdi
  KIRQL v7; // bl
  bool v8; // zf
  unsigned int Value; // ecx
  __int64 v10; // rcx
  _NDIS_SELECTIVE_SUSPEND *v11; // rbx
  KIRQL v12; // al
  KIRQL v13; // bl

  SelectiveSuspend = a4->SelectiveSuspend;
  if ( (unsigned __int8)byte_1C00A025D >= 4u )
    WPP_SF_qD(0x15u, &WPP_0cf0eaabdf4f3c4b779dfb88bb6a846b_Traceguids, (__int64)a4, *a5);
  ndisLogMiniportEvent((__int64)a4, 0xFu);
  if ( *a5 < 0 )
  {
    v11 = a4->SelectiveSuspend;
    NdisTraceLoggingUnexpectedSelectiveSuspendError(a4, 0x4AFu, *a5);
    v11->LastUnexpectedFailureLine[1] = v11->LastUnexpectedFailureLine[0];
    v11->LastUnexpectedFailureLine[0] = 1199;
    if ( (unsigned __int8)byte_1C00A025E >= 2u )
      WPP_SF_dq(0x17u, &WPP_0cf0eaabdf4f3c4b779dfb88bb6a846b_Traceguids, *a5, a4);
    v12 = KeAcquireSpinLockRaiseToDpc(&SelectiveSuspend->Lock);
    SelectiveSuspend->Flags.Value &= ~8u;
    v13 = v12;
    KeSetEvent(&SelectiveSuspend->PowerSuspendCompleteEvent, 0, 0);
    KeReleaseSpinLock(&SelectiveSuspend->Lock, v13);
  }
  else
  {
    v7 = KeAcquireSpinLockRaiseToDpc(&SelectiveSuspend->Lock);
    SelectiveSuspend->Flags.Value = SelectiveSuspend->Flags.Value & 0xFFFFFFE7 | 0x10;
    KeClearEvent(&SelectiveSuspend->DevicePowerReadyEvent);
    KeSetEvent(&SelectiveSuspend->PowerSuspendCompleteEvent, 0, 0);
    ++SelectiveSuspend->SuspendCount;
    v8 = SelectiveSuspend->LastResumeReason.Value == 0;
    SelectiveSuspend->LastSuspendTime.QuadPart = MEMORY[0xFFFFF78000000014];
    if ( !v8 )
    {
      Value = SelectiveSuspend->LastResumeReason.Value;
      if ( Value > 0xF )
      {
        if ( Value - 33 > 0x20 )
          Value = -1;
        else
          Value -= 17;
      }
      if ( Value <= 0x30 )
        SelectiveSuspend->TelemetryData.Reasons[Value].TotalTimeMs += (MEMORY[0xFFFFF78000000014]
                                                                     - SelectiveSuspend->LastCancelTime.QuadPart)
                                                                    / 10000;
    }
    KeReleaseSpinLock(&SelectiveSuspend->Lock, v7);
    NDIS_COUNT_POWER_TRANSITION(a4, SelectiveSuspend->LastRequestedIdlePowerState);
    if ( (byte_1C00A2081 & 8) != 0 )
      McTemplateK0jqxqd(
        v10,
        &DevicePowerStateChange,
        &a4->InterfaceGuid,
        (__int64)&a4->InterfaceGuid,
        a4->IfIndex,
        a4->NetLuid.Value,
        1,
        SelectiveSuspend->LastRequestedIdlePowerState);
    if ( (unsigned __int8)byte_1C00A0258 >= 4u )
      WPP_SF_qZ(0x16u, &WPP_0cf0eaabdf4f3c4b779dfb88bb6a846b_Traceguids, (__int64)a4, &a4->pAdapterInstanceName->Length);
  }
}
