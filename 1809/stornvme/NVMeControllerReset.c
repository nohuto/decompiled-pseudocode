/*
 * XREFs of NVMeControllerReset @ 0x1C000E108
 * Callers:
 *     NVMeAsyncEventRequestCompletion @ 0x1C00012C0 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeHwResetBus @ 0x1C000B360 (NVMeHwResetBus.c)
 *     NVMeControllerAsyncResetWorker @ 0x1C000D5A0 (NVMeControllerAsyncResetWorker.c)
 * Callees:
 *     NVMeCancelAllCompletionQueueDpc @ 0x1C0006490 (NVMeCancelAllCompletionQueueDpc.c)
 *     NVMeControllerInitPart3 @ 0x1C0006510 (NVMeControllerInitPart3.c)
 *     NVMeControllerStartFailureEventLog @ 0x1C000AC40 (NVMeControllerStartFailureEventLog.c)
 *     ControllerReset @ 0x1C000B83C (ControllerReset.c)
 *     NVMeControllerCompleteAllIORequests @ 0x1C000D694 (NVMeControllerCompleteAllIORequests.c)
 *     NVMeControllerInitPart1 @ 0x1C000DABC (NVMeControllerInitPart1.c)
 *     NVMeControllerInitPart2 @ 0x1C000DC08 (NVMeControllerInitPart2.c)
 *     NVMeQueuesReInit @ 0x1C000F68C (NVMeQueuesReInit.c)
 */

char __fastcall NVMeControllerReset(__int64 a1, char a2)
{
  char v4; // di
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r8
  int v11; // edx
  __int64 *v12; // rcx
  __int64 v13; // rax
  signed __int32 v15[10]; // [rsp+0h] [rbp-28h] BYREF

  v4 = 1;
  StorPortDebugPrint(3LL, "StorNVMe - Controller Reset START\n");
  if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 3724), 0) )
  {
    StorPortDebugPrint(3LL, "StorNVMe - Controller Reset Already in Progress\n");
    return v4;
  }
  StorPortPause(a1, 120LL);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a1 + 20) & 0xFFFFFFEE | 0x10;
  NVMeControllerCompleteAllIORequests(a1, 14, v5, v6);
  NVMeCancelAllCompletionQueueDpc(a1);
  if ( a2 )
  {
    if ( (*(_QWORD *)(a1 + 152) & 0x1000000000LL) == 0 )
    {
      StorPortDebugPrint(3LL, "StorNVMe - Controller Reset FAILED (CAP.NSSRS == 0)\n");
      goto LABEL_10;
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 136) + 32LL) = 1314278757;
    _InterlockedOr(v15, 0);
    StorPortStallExecution(5000LL);
    if ( (*(_BYTE *)(a1 + 3704) & 3) == 3 )
      *(_BYTE *)(a1 + 3704) |= 4u;
  }
  else if ( !ControllerReset(a1, v7, v8, v9) )
  {
    StorPortDebugPrint(3LL, "StorNVMe - Controller Reset FAILED (ControllerReset() == FALSE)\n");
    goto LABEL_10;
  }
  *(_DWORD *)(a1 + 20) &= ~0x10u;
  NVMeQueuesReInit(a1);
  if ( NVMeControllerInitPart1(a1, 0) )
  {
    LOBYTE(v10) = 1;
    if ( NVMeControllerInitPart2(a1, 0LL, v10) )
    {
      if ( NVMeControllerInitPart3(a1, 1) )
      {
        v11 = 0;
        if ( *(int *)(a1 + 184) > 0 )
        {
          v12 = (__int64 *)(a1 + 1640);
          do
          {
            v13 = *v12;
            if ( *v12 )
            {
              if ( !a2 )
              {
                ++*(_DWORD *)(v13 + 40);
                v13 = *v12;
              }
              ++*(_DWORD *)(v13 + 44);
            }
            ++v11;
            ++v12;
          }
          while ( v11 < *(_DWORD *)(a1 + 184) );
        }
        goto LABEL_24;
      }
      StorPortDebugPrint(3LL, "StorNVMe - Controller Reset FAILED (NVMeControllerInitPart3() == FALSE)\n");
    }
    else
    {
      StorPortDebugPrint(3LL, "StorNVMe - Controller Reset FAILED (NVMeControllerInitPart2() == FALSE)\n");
    }
  }
  else
  {
    StorPortDebugPrint(3LL, "StorNVMe - Controller Reset FAILED (NVMeControllerInitPart1() == FALSE)\n");
  }
LABEL_10:
  v4 = 0;
LABEL_24:
  *(_DWORD *)(a1 + 3724) &= ~1u;
  StorPortResume(a1);
  if ( v4 )
    StorPortDebugPrint(3LL, "StorNVMe - Controller Reset SUCCESS\n");
  else
    NVMeControllerStartFailureEventLog(a1);
  return v4;
}
