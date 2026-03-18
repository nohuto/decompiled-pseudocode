/*
 * XREFs of NVMeControllerReset @ 0x1C000B6BC
 * Callers:
 *     NVMeHwResetBus @ 0x1C00085F0 (NVMeHwResetBus.c)
 *     NVMeControllerAsyncResetWorker @ 0x1C000A9B0 (NVMeControllerAsyncResetWorker.c)
 * Callees:
 *     NVMeControllerStartFailureEventLog @ 0x1C0007EAC (NVMeControllerStartFailureEventLog.c)
 *     ControllerReset @ 0x1C0008ABC (ControllerReset.c)
 *     NVMeCancelAllCompletionQueueDpc @ 0x1C000A500 (NVMeCancelAllCompletionQueueDpc.c)
 *     NVMeControllerCompleteAllIORequests @ 0x1C000AAA4 (NVMeControllerCompleteAllIORequests.c)
 *     NVMeControllerInitPart1 @ 0x1C000AF04 (NVMeControllerInitPart1.c)
 *     NVMeControllerInitPart2 @ 0x1C000B078 (NVMeControllerInitPart2.c)
 *     NVMeQueuesReInit @ 0x1C000D7C8 (NVMeQueuesReInit.c)
 */

char __fastcall NVMeControllerReset(__int64 a1, char a2)
{
  char v4; // di
  int v5; // edx
  __int64 *v6; // rcx
  __int64 v7; // rax
  signed __int32 v9[10]; // [rsp+0h] [rbp-28h] BYREF

  v4 = 1;
  StorPortDebugPrint(3LL, "StorNVMe - Controller Reset START\n");
  if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 3732), 0) )
  {
    StorPortDebugPrint(3LL, "StorNVMe - Controller Reset Already in Progress\n");
    return v4;
  }
  StorPortPause(a1, 120LL);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a1 + 20) & 0xFFFFFFEE | 0x10;
  NVMeControllerCompleteAllIORequests(a1, 14);
  NVMeCancelAllCompletionQueueDpc(a1);
  if ( a2 )
  {
    if ( (*(_QWORD *)(a1 + 160) & 0x1000000000LL) == 0 )
    {
      StorPortDebugPrint(3LL, "StorNVMe - Controller Reset FAILED (CAP.NSSRS == 0)\n");
      goto LABEL_10;
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 144) + 32LL) = 1314278757;
    _InterlockedOr(v9, 0);
    StorPortStallExecution(5000LL);
    if ( (*(_BYTE *)(a1 + 3712) & 3) == 3 )
      *(_BYTE *)(a1 + 3712) |= 4u;
  }
  else if ( !ControllerReset(a1) )
  {
    StorPortDebugPrint(3LL, "StorNVMe - Controller Reset FAILED (ControllerReset() == FALSE)\n");
    goto LABEL_10;
  }
  *(_DWORD *)(a1 + 20) &= ~0x10u;
  NVMeQueuesReInit(a1);
  if ( NVMeControllerInitPart1(a1, 0) )
  {
    if ( NVMeControllerInitPart2(a1, 0) )
    {
      v5 = 0;
      if ( *(int *)(a1 + 192) > 0 )
      {
        v6 = (__int64 *)(a1 + 1648);
        do
        {
          v7 = *v6;
          if ( *v6 )
          {
            if ( !a2 )
            {
              ++*(_DWORD *)(v7 + 40);
              v7 = *v6;
            }
            ++*(_DWORD *)(v7 + 44);
          }
          ++v5;
          ++v6;
        }
        while ( v5 < *(_DWORD *)(a1 + 192) );
      }
      goto LABEL_22;
    }
    StorPortDebugPrint(3LL, "StorNVMe - Controller Reset FAILED (NVMeControllerInitPart2() == FALSE)\n");
  }
  else
  {
    StorPortDebugPrint(3LL, "StorNVMe - Controller Reset FAILED (NVMeControllerInitPart1() == FALSE)\n");
  }
LABEL_10:
  v4 = 0;
LABEL_22:
  *(_DWORD *)(a1 + 3732) &= ~1u;
  StorPortResume(a1);
  if ( v4 )
    StorPortDebugPrint(3LL, "StorNVMe - Controller Reset SUCCESS\n");
  else
    NVMeControllerStartFailureEventLog(a1);
  return v4;
}
