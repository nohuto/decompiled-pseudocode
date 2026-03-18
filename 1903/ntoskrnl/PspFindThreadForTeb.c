/*
 * XREFs of PspFindThreadForTeb @ 0x1408C8CF0
 * Callers:
 *     KiSwapToUmsThread @ 0x140880D60 (KiSwapToUmsThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x1408CD184 (PspDisassociateUmsThreadFromPrimary.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     PsLookupThreadByThreadId @ 0x1405D0860 (PsLookupThreadByThreadId.c)
 */

PETHREAD __fastcall PspFindThreadForTeb(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  PETHREAD Thread; // [rsp+40h] [rbp+8h] BYREF

  Thread = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( a1
    && PsLookupThreadByThreadId(*(HANDLE *)(a1 + 72), &Thread) >= 0
    && (Thread->Process != CurrentThread->Process || (Thread->Header.Reserved1 & 0x40) == 0) )
  {
    ObfDereferenceObject(Thread);
    return 0LL;
  }
  return Thread;
}
