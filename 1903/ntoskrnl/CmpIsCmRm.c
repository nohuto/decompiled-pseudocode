/*
 * XREFs of CmpIsCmRm @ 0x140699C94
 * Callers:
 *     CmKtmNotification @ 0x1406999A0 (CmKtmNotification.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400888B0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140088A40 (ExReleaseFastMutexUnsafe.c)
 *     CmListGetNextElement @ 0x140633584 (CmListGetNextElement.c)
 */

char __fastcall CmpIsCmRm(char *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char v2; // bl
  char *NextElement; // rax
  char v5; // r8
  char v6; // al
  _QWORD *v8; // [rsp+38h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  v8 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpRmListLock);
  while ( 1 )
  {
    NextElement = CmListGetNextElement((_QWORD **)&CmpRmListHead, &v8, 0);
    if ( !NextElement )
      break;
    if ( NextElement == a1 )
    {
      if ( *((_QWORD *)a1 + 6) && *((_QWORD *)a1 + 7) && *((_QWORD *)a1 + 4) )
      {
        v6 = 0;
        if ( *((_QWORD *)a1 + 5) )
          v6 = v5 + 1;
        v2 = v6;
      }
      break;
    }
  }
  ExReleaseFastMutexUnsafe(&CmpRmListLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v2;
}
