/*
 * XREFs of CmpAccountForLogReservation @ 0x1406BBCB8
 * Callers:
 *     CmpTransInitializeTransaction @ 0x1406BAD38 (CmpTransInitializeTransaction.c)
 *     CmKtmNotification @ 0x1406BAEA0 (CmKtmNotification.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
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
