/*
 * XREFs of PopThermalZoneAdd @ 0x14075F1E0
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
 *     KeInitializeTimer2 @ 0x1400E8C90 (KeInitializeTimer2.c)
 *     KeInitializeIRTimer @ 0x140181154 (KeInitializeIRTimer.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x14018C320 (PopThermalUpdateTelemetryClientCount.c)
 *     PopReleasePolicyLock @ 0x140595868 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PopResetCurrentPolicies @ 0x14075B17C (PopResetCurrentPolicies.c)
 */

void __fastcall PopThermalZoneAdd(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rax
  int v5; // [rsp+40h] [rbp+8h] BYREF

  v2 = a1 + 296;
  if ( PopThermalPollingMode )
  {
    v5 = 262152;
    KeInitializeIRTimer(v2, (__int64)PopThermalZoneTimerCallback, a1, (unsigned __int8 *)&v5, 2);
  }
  else
  {
    KeInitializeTimer2(v2);
  }
  v3 = *(_QWORD *)(a1 + 56);
  *(_WORD *)(a1 + 69) = -1;
  *(_DWORD *)(a1 + 80) = 100;
  *(_DWORD *)(a1 + 84) = 100;
  *(_BYTE *)(a1 + 64) = 6;
  *(_BYTE *)(a1 + 67) = 2;
  *(_DWORD *)(a1 + 76) = 1000;
  *(_DWORD *)(v3 + 48) = -1073741667;
  LODWORD(v3) = PopThermalZoneNextId;
  *(_DWORD *)(a1 + 496) = PopThermalZoneNextId;
  *(_DWORD *)(a1 + 216) = 100;
  PopThermalZoneNextId = v3 + 1;
  KeInitializeEvent((PRKEVENT)(a1 + 448), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 472), NotificationEvent, 0);
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 280) = PopThermalWorker;
  *(_QWORD *)(a1 + 288) = a1;
  v4 = MEMORY[0xFFFFF78000000008];
  *(_QWORD *)(a1 + 512) = MEMORY[0xFFFFF78000000008];
  *(_QWORD *)(a1 + 520) = v4;
  *(_QWORD *)(a1 + 440) = 0LL;
  LODWORD(v4) = PopThermalZoneCount;
  *(_QWORD *)(a1 + 432) = 0LL;
  PopThermalZoneCount = v4 + 1;
  if ( !(_DWORD)v4 )
  {
    PopAcquirePolicyLock();
    if ( BYTE13(PopCapabilities) != 1 )
    {
      BYTE13(PopCapabilities) = 1;
      PopResetCurrentPolicies();
    }
    PopReleasePolicyLock();
  }
  PopThermalUpdateTelemetryClientCount(1);
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 264), DelayedWorkQueue);
}
