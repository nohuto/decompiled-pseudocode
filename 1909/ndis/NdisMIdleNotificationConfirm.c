/*
 * XREFs of NdisMIdleNotificationConfirm @ 0x1C00B6FD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ndisCancelWakeUpDpcTimer @ 0x1C0014778 (ndisCancelWakeUpDpcTimer.c)
 *     ndisRequestDeviceLowPower @ 0x1C001483C (ndisRequestDeviceLowPower.c)
 *     ndisCancelWaitWake @ 0x1C0019D1C (ndisCancelWaitWake.c)
 *     ndisLogMiniportEvent @ 0x1C0019E70 (ndisLogMiniportEvent.c)
 *     WPP_RECORDER_SF_Lq @ 0x1C001A2B4 (WPP_RECORDER_SF_Lq.c)
 *     ndisRequestWaitWake @ 0x1C0032E7C (ndisRequestWaitWake.c)
 *     ?ndisAoAcIdleRequestConfirm@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BAE78 (-ndisAoAcIdleRequestConfirm@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C00C3D20 (-NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 */

void __fastcall NdisMIdleNotificationConfirm(struct _NDIS_MINIPORT_BLOCK *a1, POWER_STATE PowerState)
{
  _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rsi
  POWER_STATE v3; // ebp
  KIRQL v5; // bl
  unsigned int Value; // eax
  int v7; // eax
  char v8; // r15
  _NDIS_SELECTIVE_SUSPEND *v9; // rbx
  int v10; // eax
  char v11; // bp
  int v12; // edx
  _NDIS_SELECTIVE_SUSPEND *v13; // rbx
  KIRQL v14; // al
  KIRQL v15; // bl
  char SystemState; // [rsp+30h] [rbp-38h]

  SelectiveSuspend = a1->SelectiveSuspend;
  v3.SystemState = PowerState.SystemState;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    SystemState = PowerState.SystemState;
    LOBYTE(PowerState.SystemState) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      PowerState.SystemState,
      15,
      15,
      (struct _GUID *)&WPP_5c92d274ba7c3cfc77b41af92408ef8f_Traceguids,
      (char)a1,
      SystemState);
  }
  ndisLogMiniportEvent((__int64)a1, 0x13u);
  v5 = KeAcquireSpinLockRaiseToDpc(&SelectiveSuspend->Lock);
  Value = SelectiveSuspend->Flags.Value;
  if ( (Value & 0x100) != 0 )
  {
    KeReleaseSpinLock(&SelectiveSuspend->Lock, v5);
    ndisAoAcIdleRequestConfirm(a1);
  }
  else
  {
    SelectiveSuspend->Flags.Value = Value | 8;
    KeClearEvent(&SelectiveSuspend->PowerSuspendCompleteEvent);
    KeReleaseSpinLock(&SelectiveSuspend->Lock, v5);
    ndisCancelWakeUpDpcTimer((__int64)a1);
    ndisCancelWaitWake((__int64)a1);
    v7 = ndisRequestWaitWake((__int64)a1, ndisIdleWaitWakeCallback);
    v8 = v7;
    if ( v7 != 259 )
    {
      v9 = a1->SelectiveSuspend;
      NdisTraceLoggingUnexpectedSelectiveSuspendError(a1, 1u, v7);
      v9->LastUnexpectedFailureLine[1] = v9->LastUnexpectedFailureLine[0];
      v9->LastUnexpectedFailureLine[0] = 1;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Lq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xFu,
          0x10u,
          (struct _GUID *)&WPP_5c92d274ba7c3cfc77b41af92408ef8f_Traceguids,
          v8,
          a1);
    }
    SelectiveSuspend->LastRequestedIdlePowerState = v3.SystemState;
    v10 = ndisRequestDeviceLowPower((__int64)a1, v3, ndisPowerSuspendRequestComplete, a1, 3u);
    v11 = v10;
    if ( v10 == 259 )
    {
      KeWaitForSingleObject(&SelectiveSuspend->PowerSuspendCompleteEvent, Executive, 0, 0, 0LL);
    }
    else
    {
      v13 = a1->SelectiveSuspend;
      NdisTraceLoggingUnexpectedSelectiveSuspendError(a1, 2u, v10);
      v13->LastUnexpectedFailureLine[1] = v13->LastUnexpectedFailureLine[0];
      v13->LastUnexpectedFailureLine[0] = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Lq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xFu,
          0x11u,
          (struct _GUID *)&WPP_5c92d274ba7c3cfc77b41af92408ef8f_Traceguids,
          v11,
          a1);
      v14 = KeAcquireSpinLockRaiseToDpc(&SelectiveSuspend->Lock);
      SelectiveSuspend->Flags.Value &= ~8u;
      v15 = v14;
      KeSetEvent(&SelectiveSuspend->PowerSuspendCompleteEvent, 0, 0);
      KeReleaseSpinLock(&SelectiveSuspend->Lock, v15);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v12,
        15,
        18,
        (struct _GUID *)&WPP_5c92d274ba7c3cfc77b41af92408ef8f_Traceguids,
        (char)a1);
    }
  }
}
