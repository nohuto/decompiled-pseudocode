/*
 * XREFs of PerfLogExecutiveResourceSetOwnerPointer @ 0x140331530
 * Callers:
 *     ExpSetResourceOwnerPointerEx @ 0x140100A20 (ExpSetResourceOwnerPointerEx.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140121B90 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     EtwpGetTrackingLockSlotForThread @ 0x140331000 (EtwpGetTrackingLockSlotForThread.c)
 */

struct _KTHREAD *__fastcall PerfLogExecutiveResourceSetOwnerPointer(unsigned int a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rdi
  struct _KTHREAD *result; // rax
  _QWORD v6[6]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v7[2]; // [rsp+60h] [rbp-20h] BYREF

  memset(v6, 0, sizeof(v6));
  CurrentPrcb = KeGetCurrentPrcb();
  ++CurrentPrcb->SynchCounters.ExEtwSynchTrackingNotificationsCount;
  v6[5] = a1;
  v6[4] = a2;
  memset(v6, 0, 28);
  v7[1] = 48LL;
  HIDWORD(v6[3]) = KeGetCurrentThread()[1].CurrentRunTime;
  v7[0] = v6;
  EtwTraceKernelEvent((__int64)v7, 1u, 0x20020000u, 0x52Bu, 0x1501802u);
  result = KeGetCurrentThread();
  if ( result[1].WaitBlock[0].Thread )
  {
    result = (struct _KTHREAD *)EtwpGetTrackingLockSlotForThread(a2, a1 & 0xFFFF0000);
    if ( result )
    {
      if ( LODWORD(result->QuantumTarget) )
      {
        ++CurrentPrcb->SynchCounters.ExEtwSynchTrackingNotificationsAccountedCount;
        result->Header.WaitListHead.Blink = 0LL;
        *(void **)((char *)&result->SListFaultAddress + 4) = 0LL;
        HIDWORD(result->QuantumTarget) = 0;
        *(_QWORD *)&result->Header.Lock = 0LL;
        result->Header.WaitListHead.Flink = 0LL;
        LODWORD(result->SListFaultAddress) = 0;
        HIDWORD(result->InitialStack) = 0;
      }
      else
      {
        HIDWORD(result->SListFaultAddress) = 0;
      }
    }
  }
  return result;
}
