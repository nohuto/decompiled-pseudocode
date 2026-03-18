/*
 * XREFs of VidSchiWorkerThread @ 0x1C008A0C0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiRun_PriorityTable @ 0x1C008A1A0 (VidSchiRun_PriorityTable.c)
 *     VidSchiSetSchedulerStatus @ 0x1C008A370 (VidSchiSetSchedulerStatus.c)
 */

void __fastcall __noreturn VidSchiWorkerThread(_QWORD *StartContext)
{
  int ThreadInformation; // [rsp+48h] [rbp+10h] BYREF

  StartContext[19] = KeGetCurrentThread();
  KeSetActualBasePriorityThread(KeGetCurrentThread(), 16LL);
  *((_DWORD *)StartContext + 51) = 16;
  ThreadInformation = 1;
  ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadBreakOnTermination|0x20, &ThreadInformation, 4u);
  DpiSetSchedulerCallbackState(*(_QWORD *)(StartContext[2] + 192LL), 3LL);
  StartContext[149] = MEMORY[0xFFFFF78000000320];
  KeWaitForSingleObject(StartContext + 146, Executive, 0, 0, 0LL);
  VidSchiSetSchedulerStatus(StartContext, 1LL, 1LL);
  while ( 1 )
    VidSchiRun_PriorityTable(StartContext);
}
