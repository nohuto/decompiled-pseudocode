/*
 * XREFs of ??0DXGADAPTER@@QEAA@PEAVDXGGLOBAL@@@Z @ 0x1C0162D14
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0161C90 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PE.c)
 * Callees:
 *     memset @ 0x1C0025440 (memset.c)
 *     ??0DXG_VMBUS_CHANNEL_BASE@@QEAA@W4DXGKVMB_COMMANDCHANNELTYPE@@@Z @ 0x1C01630F8 (--0DXG_VMBUS_CHANNEL_BASE@@QEAA@W4DXGKVMB_COMMANDCHANNELTYPE@@@Z.c)
 */

DXGADAPTER *__fastcall DXGADAPTER::DXGADAPTER(char *DeferredContext, struct DXGGLOBAL *a2)
{
  KSPIN_LOCK *v3; // rcx
  __int64 v4; // rcx
  EVENT_TYPE v5; // edx
  DXGADAPTER *result; // rax

  *((_QWORD *)DeferredContext + 2) = a2;
  *(_QWORD *)DeferredContext = 0LL;
  *((_QWORD *)DeferredContext + 1) = 0LL;
  *((_QWORD *)DeferredContext + 3) = 0LL;
  *((_DWORD *)DeferredContext + 22) = -1;
  *((_QWORD *)DeferredContext + 9) = 0LL;
  *((_QWORD *)DeferredContext + 10) = 0LL;
  *((_DWORD *)DeferredContext + 28) = -1;
  *((_QWORD *)DeferredContext + 12) = 0LL;
  *((_QWORD *)DeferredContext + 13) = 0LL;
  *((_QWORD *)DeferredContext + 15) = 0LL;
  *((_QWORD *)DeferredContext + 16) = 0LL;
  *((_DWORD *)DeferredContext + 52) = -1;
  *((_DWORD *)DeferredContext + 685) = -1;
  *((_DWORD *)DeferredContext + 686) = -1;
  *((_DWORD *)DeferredContext + 34) = 0;
  *((_QWORD *)DeferredContext + 18) = 0LL;
  *((_DWORD *)DeferredContext + 38) = 2;
  *((_DWORD *)DeferredContext + 44) = 0;
  *(_QWORD *)(DeferredContext + 181) = 0x10000LL;
  *((_QWORD *)DeferredContext + 24) = 0LL;
  *((_QWORD *)DeferredContext + 25) = 0LL;
  *((_QWORD *)DeferredContext + 30) = 0LL;
  *((_DWORD *)DeferredContext + 613) = 1000;
  *((_QWORD *)DeferredContext + 307) = 0LL;
  DeferredContext[2465] = 0;
  *((_WORD *)DeferredContext + 1235) = 0;
  *((_DWORD *)DeferredContext + 620) = 0;
  *((_DWORD *)DeferredContext + 622) = 0;
  *((_WORD *)DeferredContext + 1251) = 256;
  DeferredContext[2508] = 0;
  *((_QWORD *)DeferredContext + 319) = 0LL;
  *((_QWORD *)DeferredContext + 320) = 0LL;
  *((_QWORD *)DeferredContext + 321) = 0LL;
  *((_QWORD *)DeferredContext + 323) = 0LL;
  *((_QWORD *)DeferredContext + 324) = 0LL;
  *((_QWORD *)DeferredContext + 325) = 0LL;
  *((_DWORD *)DeferredContext + 684) = 0;
  *(_QWORD *)(DeferredContext + 2748) = 0LL;
  *((_QWORD *)DeferredContext + 369) = 0LL;
  *(_DWORD *)(DeferredContext + 3029) = 0;
  *(_WORD *)(DeferredContext + 3033) = 256;
  *((_DWORD *)DeferredContext + 759) = 0;
  v3 = (KSPIN_LOCK *)(DeferredContext + 3056);
  v3[1] = 0LL;
  KeInitializeSpinLock(v3);
  *((_QWORD *)DeferredContext + 384) = 0LL;
  *((_DWORD *)DeferredContext + 818) = 0;
  *((_DWORD *)DeferredContext + 840) = 0;
  *((_QWORD *)DeferredContext + 426) = 0LL;
  DeferredContext[3416] = 0;
  *((_DWORD *)DeferredContext + 920) = 0;
  *((_DWORD *)DeferredContext + 966) = -1;
  *((_QWORD *)DeferredContext + 481) = 0LL;
  *((_QWORD *)DeferredContext + 482) = 0LL;
  *((_DWORD *)DeferredContext + 970) = 0;
  *((_QWORD *)DeferredContext + 486) = 0LL;
  *((_QWORD *)DeferredContext + 487) = 0LL;
  *((_QWORD *)DeferredContext + 488) = 0LL;
  *((_DWORD *)DeferredContext + 978) = 0;
  DeferredContext[4112] = 0;
  *((_DWORD *)DeferredContext + 1029) = 0;
  DXG_VMBUS_CHANNEL_BASE::DXG_VMBUS_CHANNEL_BASE(DeferredContext + 4144, 0LL);
  *(_QWORD *)(v4 + 56) = 0LL;
  *((_DWORD *)DeferredContext + 1074) = -1;
  *((_QWORD *)DeferredContext + 536) = 0LL;
  *((_DWORD *)DeferredContext + 1062) = 0;
  DeferredContext[4252] = 0;
  *((_DWORD *)DeferredContext + 1064) = 0;
  *((_QWORD *)DeferredContext + 533) = 0LL;
  *((_QWORD *)DeferredContext + 538) = 0LL;
  *((_QWORD *)DeferredContext + 539) = 0LL;
  *((_QWORD *)DeferredContext + 544) = 0LL;
  *((_DWORD *)DeferredContext + 1092) = -1;
  *((_QWORD *)DeferredContext + 545) = 0LL;
  KeInitializeEvent((PRKEVENT)DeferredContext + 2, v5, 1u);
  KeInitializeEvent((PRKEVENT)DeferredContext + 9, NotificationEvent, 1u);
  memset(DeferredContext + 248, 0, 0x5C8uLL);
  memset(DeferredContext + 1736, 0, 0x70uLL);
  memset(DeferredContext + 1848, 0, 0x248uLL);
  *((_QWORD *)DeferredContext + 20) = 0LL;
  *((_QWORD *)DeferredContext + 21) = 0LL;
  KeInitializeEvent((PRKEVENT)(DeferredContext + 2528), NotificationEvent, 0);
  KeInitializeTimer((PKTIMER)(DeferredContext + 3144));
  KeInitializeDpc((PRKDPC)(DeferredContext + 3208), (PKDEFERRED_ROUTINE)DxgkpComponentIdleListTimerDpc, DeferredContext);
  KeInitializeTimer((PKTIMER)(DeferredContext + 3688));
  KeInitializeDpc((PRKDPC)(DeferredContext + 3752), (PKDEFERRED_ROUTINE)DxgkpVSyncPhaseTimerDpc, DeferredContext);
  *((_QWORD *)DeferredContext + 480) = DeferredContext;
  *((_QWORD *)DeferredContext + 479) = DxgkpProcessVSyncPhaseThread;
  *((_QWORD *)DeferredContext + 477) = 0LL;
  KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 484);
  KeInitializeTimer((PKTIMER)(DeferredContext + 3976));
  KeInitializeDpc((PRKDPC)(DeferredContext + 4040), (PKDEFERRED_ROUTINE)DxgkpFirstFrameTimerDpc, DeferredContext);
  KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 513);
  *((_QWORD *)DeferredContext + 494) = DeferredContext;
  *((_QWORD *)DeferredContext + 493) = DxgkpProcessPowerPStateWork;
  *((_QWORD *)DeferredContext + 491) = 0LL;
  KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 495);
  *((_QWORD *)DeferredContext + 388) = DeferredContext + 3096;
  *((_QWORD *)DeferredContext + 387) = DeferredContext + 3096;
  *((_QWORD *)DeferredContext + 390) = DeferredContext + 3112;
  *((_QWORD *)DeferredContext + 389) = DeferredContext + 3112;
  *((_QWORD *)DeferredContext + 542) = ProcessDeadlockThread;
  result = (DXGADAPTER *)DeferredContext;
  *((_QWORD *)DeferredContext + 543) = DeferredContext;
  *((_QWORD *)DeferredContext + 540) = 0LL;
  return result;
}
