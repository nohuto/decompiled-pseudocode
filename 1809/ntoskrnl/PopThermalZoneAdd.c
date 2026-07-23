/*
 * XREFs of PopThermalZoneAdd @ 0x140746A00
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     KeInitializeTimer2 @ 0x1400FD550 (KeInitializeTimer2.c)
 *     KeInitializeIRTimer @ 0x14013B020 (KeInitializeIRTimer.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x140186550 (PopThermalUpdateTelemetryClientCount.c)
 *     PopReleasePolicyLock @ 0x140566370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140566690 (PopAcquirePolicyLock.c)
 *     PopResetCurrentPolicies @ 0x1407487DC (PopResetCurrentPolicies.c)
 */

void __fastcall PopThermalZoneAdd(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = a1 + 296;
  if ( PopThermalPollingMode )
  {
    v6 = 262152;
    KeInitializeIRTimer(v2, (__int64)PopThermalZoneTimerCallback, a1, (unsigned __int8 *)&v6, 2);
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
  *(_QWORD *)(a1 + 512) = MEMORY[0xFFFFF78000000008];
  *(_QWORD *)(a1 + 432) = 0LL;
  *(_QWORD *)(a1 + 440) = 0LL;
  *(_QWORD *)(a1 + 432) = 0LL;
  if ( ++PopThermalZoneCount == 1 )
  {
    PopAcquirePolicyLock();
    if ( BYTE13(PopCapabilities) != 1 )
    {
      BYTE13(PopCapabilities) = 1;
      PopResetCurrentPolicies(v5, v4);
    }
    PopReleasePolicyLock();
  }
  PopThermalUpdateTelemetryClientCount(1);
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 264), DelayedWorkQueue);
}
