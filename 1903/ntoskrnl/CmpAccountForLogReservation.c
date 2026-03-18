/*
 * XREFs of CmpAccountForLogReservation @ 0x140699F80
 * Callers:
 *     CmpTransInitializeTransaction @ 0x140699834 (CmpTransInitializeTransaction.c)
 *     CmKtmNotification @ 0x1406999A0 (CmKtmNotification.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 */

__int64 __fastcall CmpAccountForLogReservation(__int64 a1, __int64 a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rax
  void *v6; // rcx
  unsigned int appended; // ebx
  LONGLONG rgcbReservation; // [rsp+68h] [rbp+10h] BYREF

  rgcbReservation = 48LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 128), 1u);
  v6 = *(void **)(a1 + 96);
  if ( !a3 )
    rgcbReservation = -rgcbReservation;
  appended = ClfsReserveAndAppendLog(v6, 0LL, 0, 0LL, 0LL, 1u, &rgcbReservation, 0, 0LL);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 128));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return appended;
}
