/*
 * XREFs of ??0DXGADAPTER@@QEAA@PEAVDXGGLOBAL@@@Z @ 0x1C014C600
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014C9EC (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PE.c)
 * Callees:
 *     memset @ 0x1C00231C0 (memset.c)
 *     ??0DXG_VMBUS_CHANNEL_BASE@@QEAA@W4DXGKVMB_COMMANDCHANNELTYPE@@@Z @ 0x1C014C9C4 (--0DXG_VMBUS_CHANNEL_BASE@@QEAA@W4DXGKVMB_COMMANDCHANNELTYPE@@@Z.c)
 */

DXGADAPTER *__fastcall DXGADAPTER::DXGADAPTER(char *DeferredContext, struct DXGGLOBAL *a2)
{
  KSPIN_LOCK *v3; // rcx
  __int64 v4; // rcx
  EVENT_TYPE v5; // edx

  *((_QWORD *)DeferredContext + 2) = a2;
  *(_QWORD *)DeferredContext = 0LL;
  *((_QWORD *)DeferredContext + 1) = 0LL;
  *((_QWORD *)DeferredContext + 3) = 0LL;
  *((_DWORD *)DeferredContext + 22) = -1;
  *((_QWORD *)DeferredContext + 10) = 0LL;
  *((_QWORD *)DeferredContext + 9) = 0LL;
  *((_DWORD *)DeferredContext + 28) = -1;
  *((_QWORD *)DeferredContext + 13) = 0LL;
  *((_QWORD *)DeferredContext + 12) = 0LL;
  *((_QWORD *)DeferredContext + 16) = 0LL;
  *((_QWORD *)DeferredContext + 15) = 0LL;
  *((_DWORD *)DeferredContext + 52) = -1;
  *((_DWORD *)DeferredContext + 677) = -1;
  *((_DWORD *)DeferredContext + 678) = -1;
  *((_DWORD *)DeferredContext + 34) = 0;
  *((_QWORD *)DeferredContext + 18) = 0LL;
  *((_DWORD *)DeferredContext + 38) = 2;
  *((_DWORD *)DeferredContext + 44) = 0;
  *(_QWORD *)(DeferredContext + 181) = 0x10000LL;
  *((_QWORD *)DeferredContext + 24) = 0LL;
  *((_QWORD *)DeferredContext + 25) = 0LL;
  *((_QWORD *)DeferredContext + 30) = 0LL;
  DeferredContext[2429] = 0;
  *((_WORD *)DeferredContext + 1217) = 0;
  *((_DWORD *)DeferredContext + 612) = 0;
  *((_DWORD *)DeferredContext + 614) = 0;
  *((_WORD *)DeferredContext + 1235) = 256;
  *((_WORD *)DeferredContext + 1238) = 0;
  *((_QWORD *)DeferredContext + 315) = 0LL;
  *((_QWORD *)DeferredContext + 316) = 0LL;
  *((_QWORD *)DeferredContext + 317) = 0LL;
  *((_DWORD *)DeferredContext + 638) = 0;
  *((_QWORD *)DeferredContext + 320) = 0LL;
  *((_QWORD *)DeferredContext + 321) = 0LL;
  *((_DWORD *)DeferredContext + 676) = 0;
  *(_QWORD *)(DeferredContext + 2716) = 0LL;
  *((_QWORD *)DeferredContext + 365) = 0LL;
  *(_DWORD *)(DeferredContext + 2997) = 0;
  *(_WORD *)(DeferredContext + 3001) = 256;
  *((_DWORD *)DeferredContext + 751) = 0;
  v3 = (KSPIN_LOCK *)(DeferredContext + 3024);
  v3[1] = 0LL;
  KeInitializeSpinLock(v3);
  *((_QWORD *)DeferredContext + 380) = 0LL;
  *((_DWORD *)DeferredContext + 810) = 0;
  *((_DWORD *)DeferredContext + 832) = 0;
  *((_QWORD *)DeferredContext + 422) = 0LL;
  DeferredContext[3384] = 0;
  *((_DWORD *)DeferredContext + 912) = 0;
  *((_DWORD *)DeferredContext + 958) = -1;
  *((_QWORD *)DeferredContext + 478) = 0LL;
  *((_QWORD *)DeferredContext + 477) = 0LL;
  *((_DWORD *)DeferredContext + 962) = 0;
  *((_QWORD *)DeferredContext + 482) = 0LL;
  *((_QWORD *)DeferredContext + 483) = 0LL;
  *((_QWORD *)DeferredContext + 484) = 0LL;
  *((_DWORD *)DeferredContext + 970) = 0;
  DeferredContext[4080] = 0;
  *((_DWORD *)DeferredContext + 1021) = 0;
  *((_QWORD *)DeferredContext + 514) = 0LL;
  *((_QWORD *)DeferredContext + 515) = 0LL;
  *((_DWORD *)DeferredContext + 1032) = 0;
  DeferredContext[4132] = 0;
  *((_QWORD *)DeferredContext + 517) = 0LL;
  *((_DWORD *)DeferredContext + 1036) = 0;
  DeferredContext[4148] = 0;
  DXG_VMBUS_CHANNEL_BASE::DXG_VMBUS_CHANNEL_BASE(DeferredContext + 4152, 0LL);
  *(_QWORD *)(v4 + 56) = 0LL;
  *((_DWORD *)DeferredContext + 1064) = 0;
  DeferredContext[4260] = 0;
  *((_DWORD *)DeferredContext + 1066) = 0;
  *((_QWORD *)DeferredContext + 534) = 0LL;
  *((_DWORD *)DeferredContext + 1076) = -1;
  *((_QWORD *)DeferredContext + 537) = 0LL;
  KeInitializeEvent((PRKEVENT)DeferredContext + 2, v5, 1u);
  KeInitializeEvent((PRKEVENT)DeferredContext + 9, NotificationEvent, 1u);
  memset(DeferredContext + 248, 0, 0x5B8uLL);
  memset(DeferredContext + 1720, 0, 0x68uLL);
  memset(DeferredContext + 1824, 0, 0x248uLL);
  *((_QWORD *)DeferredContext + 20) = 0LL;
  *((_QWORD *)DeferredContext + 21) = 0LL;
  KeInitializeEvent((PRKEVENT)DeferredContext + 104, NotificationEvent, 0);
  KeInitializeTimer((PKTIMER)(DeferredContext + 3112));
  KeInitializeDpc((PRKDPC)(DeferredContext + 3176), (PKDEFERRED_ROUTINE)DxgkpComponentIdleListTimerDpc, DeferredContext);
  KeInitializeTimer((PKTIMER)(DeferredContext + 3656));
  KeInitializeDpc((PRKDPC)(DeferredContext + 3720), (PKDEFERRED_ROUTINE)DxgkpVSyncPhaseTimerDpc, DeferredContext);
  *((_QWORD *)DeferredContext + 476) = DeferredContext;
  *((_QWORD *)DeferredContext + 475) = DxgkpProcessVSyncPhaseThread;
  *((_QWORD *)DeferredContext + 473) = 0LL;
  KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 480);
  KeInitializeTimer((PKTIMER)(DeferredContext + 3944));
  KeInitializeDpc((PRKDPC)(DeferredContext + 4008), (PKDEFERRED_ROUTINE)DxgkpFirstFrameTimerDpc, DeferredContext);
  KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 509);
  *((_QWORD *)DeferredContext + 490) = DeferredContext;
  *((_QWORD *)DeferredContext + 489) = DxgkpProcessPowerPStateWork;
  *((_QWORD *)DeferredContext + 487) = 0LL;
  KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 491);
  *((_QWORD *)DeferredContext + 384) = DeferredContext + 3064;
  *((_QWORD *)DeferredContext + 383) = DeferredContext + 3064;
  *((_QWORD *)DeferredContext + 386) = DeferredContext + 3080;
  *((_QWORD *)DeferredContext + 385) = DeferredContext + 3080;
  return (DXGADAPTER *)DeferredContext;
}
