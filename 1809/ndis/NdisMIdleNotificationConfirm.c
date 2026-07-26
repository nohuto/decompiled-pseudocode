/*
 * XREFs of NdisMIdleNotificationConfirm @ 0x1C0073DB0
 * Callers:
 *     <none>
 * Callees:
 *     ndisCancelWakeUpDpcTimer @ 0x1C0010DB8 (ndisCancelWakeUpDpcTimer.c)
 *     ndisCancelWaitWake @ 0x1C0011794 (ndisCancelWaitWake.c)
 *     ndisLogMiniportEvent @ 0x1C0016888 (ndisLogMiniportEvent.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_dq @ 0x1C0041A40 (WPP_SF_dq.c)
 *     ?ndisAoAcIdleRequestConfirm@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C007704C (-ndisAoAcIdleRequestConfirm@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C007E93C (-NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 *     ndisRequestDeviceLowPower @ 0x1C00B8D00 (ndisRequestDeviceLowPower.c)
 *     ndisRequestWaitWake @ 0x1C00BBF44 (ndisRequestWaitWake.c)
 */

void __fastcall NdisMIdleNotificationConfirm(struct _NDIS_MINIPORT_BLOCK *Context, unsigned int a2)
{
  _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rsi
  KIRQL v5; // bl
  unsigned int Value; // eax
  int v7; // eax
  int v8; // r15d
  _NDIS_SELECTIVE_SUSPEND *v9; // rbx
  int v10; // eax
  int v11; // ebp
  _NDIS_SELECTIVE_SUSPEND *v12; // rbx
  KIRQL v13; // al
  KIRQL v14; // bl

  SelectiveSuspend = Context->SelectiveSuspend;
  if ( (unsigned __int8)byte_1C00A025E >= 4u )
    WPP_SF_qD(0xFu, &WPP_0cf0eaabdf4f3c4b779dfb88bb6a846b_Traceguids, (__int64)Context, a2);
  ndisLogMiniportEvent((__int64)Context, 0x13u);
  v5 = KeAcquireSpinLockRaiseToDpc(&SelectiveSuspend->Lock);
  Value = SelectiveSuspend->Flags.Value;
  if ( (Value & 0x100) != 0 )
  {
    KeReleaseSpinLock(&SelectiveSuspend->Lock, v5);
    ndisAoAcIdleRequestConfirm(Context);
  }
  else
  {
    SelectiveSuspend->Flags.Value = Value | 8;
    KeClearEvent(&SelectiveSuspend->PowerSuspendCompleteEvent);
    KeReleaseSpinLock(&SelectiveSuspend->Lock, v5);
    ndisCancelWakeUpDpcTimer((__int64)Context);
    ndisCancelWaitWake((__int64)Context);
    v7 = ndisRequestWaitWake(Context, ndisIdleWaitWakeCallback);
    v8 = v7;
    if ( v7 != 259 )
    {
      v9 = Context->SelectiveSuspend;
      NdisTraceLoggingUnexpectedSelectiveSuspendError(Context, 0x325u, v7);
      v9->LastUnexpectedFailureLine[1] = v9->LastUnexpectedFailureLine[0];
      v9->LastUnexpectedFailureLine[0] = 805;
      if ( (unsigned __int8)byte_1C00A025E >= 2u )
        WPP_SF_dq(0x10u, &WPP_0cf0eaabdf4f3c4b779dfb88bb6a846b_Traceguids, v8, Context);
    }
    SelectiveSuspend->LastRequestedIdlePowerState = a2;
    v10 = ndisRequestDeviceLowPower(Context, a2, &ndisPowerSuspendRequestComplete, Context, 3);
    v11 = v10;
    if ( v10 == 259 )
    {
      KeWaitForSingleObject(&SelectiveSuspend->PowerSuspendCompleteEvent, Executive, 0, 0, 0LL);
    }
    else
    {
      v12 = Context->SelectiveSuspend;
      NdisTraceLoggingUnexpectedSelectiveSuspendError(Context, 0x33Fu, v10);
      v12->LastUnexpectedFailureLine[1] = v12->LastUnexpectedFailureLine[0];
      v12->LastUnexpectedFailureLine[0] = 831;
      if ( (unsigned __int8)byte_1C00A025E >= 2u )
        WPP_SF_dq(0x11u, &WPP_0cf0eaabdf4f3c4b779dfb88bb6a846b_Traceguids, v11, Context);
      v13 = KeAcquireSpinLockRaiseToDpc(&SelectiveSuspend->Lock);
      SelectiveSuspend->Flags.Value &= ~8u;
      v14 = v13;
      KeSetEvent(&SelectiveSuspend->PowerSuspendCompleteEvent, 0, 0);
      KeReleaseSpinLock(&SelectiveSuspend->Lock, v14);
    }
    if ( (unsigned __int8)byte_1C00A025E >= 4u )
      WPP_SF_q(0x12u, &WPP_0cf0eaabdf4f3c4b779dfb88bb6a846b_Traceguids, (__int64)Context);
  }
}
