/*
 * XREFs of PopPowerRequestInit @ 0x1409DB558
 * Callers:
 *     PoInitSystem @ 0x1409B2C10 (PoInitSystem.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x140006820 (RtlInitializeGenericTableAvl.c)
 *     RtlInitUnicodeString @ 0x1400B9A70 (RtlInitUnicodeString.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     ObCreateObjectType @ 0x1407289E0 (ObCreateObjectType.c)
 *     PopStatsInitPowerRequestLibrary @ 0x1409DB758 (PopStatsInitPowerRequestLibrary.c)
 */

__int64 PopPowerRequestInit()
{
  int v0; // ebx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v3[16]; // [rsp+40h] [rbp-29h] BYREF

  PopPowerRequestLock = 0LL;
  qword_140419278 = 0LL;
  PopPowerRequestSpinLock = 0LL;
  PopPowerRequestObjectCount = 0LL;
  PopSpecialPowerRequestObjectCount = 0LL;
  memset(v3, 0, 0x78uLL);
  RtlInitUnicodeString(&DestinationString, L"PowerRequest");
  BYTE2(v3[0]) |= 0x14u;
  v3[8] = PopClosePowerRequestObject;
  LOWORD(v3[0]) = 120;
  v3[9] = PopDeletePowerRequestObject;
  HIDWORD(v3[4]) = 512;
  HIDWORD(v3[5]) = 144;
  LODWORD(v3[1]) = 402;
  *(_OWORD *)((char *)&v3[1] + 4) = PopPowerRequestMapping;
  HIDWORD(v3[3]) = 2031616;
  v0 = ObCreateObjectType(&DestinationString, (__int64)v3, 0LL, (__int64)&PopPowerRequestObjectType);
  if ( v0 >= 0 )
  {
    PopCallbackWorkItem.Parameter = 0LL;
    PopCallbackWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopPowerRequestCallbackWorker;
    PopCallbackWorkItem.List.Flink = 0LL;
    qword_1404193F8 = (__int64)&PopPowerRequestObjectList;
    PopPowerRequestObjectList = (__int64)&PopPowerRequestObjectList;
    qword_140419408 = (__int64)&PopSpecialPowerRequestObjectList;
    PopSpecialPowerRequestObjectList = (__int64)&PopSpecialPowerRequestObjectList;
    qword_140419448 = (__int64)&PopPowerRequestCallbacks;
    PopPowerRequestCallbacks = (__int64)&PopPowerRequestCallbacks;
    RtlInitializeGenericTableAvl(
      &PopPowerRequestTable,
      (PRTL_AVL_COMPARE_ROUTINE)PopPowerRequestCompare,
      (PRTL_AVL_ALLOCATE_ROUTINE)PopPowerRequestAllocate,
      (PRTL_AVL_FREE_ROUTINE)PopPowerRequestFree,
      0LL);
    *(_QWORD *)&PopExecutionRequiredTimer.Header.Lock = 8LL;
    PopExecutionRequiredContext = 0x2E00000000LL;
    qword_140419258 = 0LL;
    PopExecutionRequiredTimer.Header.WaitListHead.Blink = &PopExecutionRequiredTimer.Header.WaitListHead;
    PopExecutionRequiredTimer.Header.WaitListHead.Flink = &PopExecutionRequiredTimer.Header.WaitListHead;
    qword_1404192F8 = (__int64)PopExecutionRequiredTimeoutCallback;
    PopExecutionRequiredTimeoutWorker.WorkerRoutine = (void (__fastcall *)(void *))PopExecutionRequiredTimeoutWorkerRoutine;
    PopExecutionRequiredTimer.DueTime.QuadPart = 0LL;
    *(_QWORD *)&PopExecutionRequiredTimer.Processor = 0LL;
    PopExecutionRequiredTimeoutDpc = 275;
    qword_140419300 = 0LL;
    qword_140419318 = 0LL;
    qword_1404192F0 = 0LL;
    PopExecutionRequiredTimeoutWorker.Parameter = 0LL;
    PopExecutionRequiredTimeoutWorker.List.Flink = 0LL;
    PopStatsInitPowerRequestLibrary();
  }
  return (unsigned int)v0;
}
