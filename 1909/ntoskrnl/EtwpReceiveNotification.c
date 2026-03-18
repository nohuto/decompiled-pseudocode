/*
 * XREFs of EtwpReceiveNotification @ 0x140694158
 * Callers:
 *     NtTraceControl @ 0x14064C530 (NtTraceControl.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     EtwpReleaseQueueEntry @ 0x1406942E8 (EtwpReleaseQueueEntry.c)
 *     EtwpUnreferenceDataBlock @ 0x14069434C (EtwpUnreferenceDataBlock.c)
 */

__int64 __fastcall EtwpReceiveNotification(void *a1, unsigned int a2, char a3, _DWORD *a4)
{
  int v4; // esi
  unsigned __int64 v9; // r14
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v11; // rbx
  _QWORD *v12; // r14
  _QWORD *i; // rdi
  _QWORD *v14; // rax
  void **v15; // rcx
  __int64 v16; // rbp
  _QWORD *v17; // r12
  signed __int32 v18; // ebx
  _QWORD *v20; // rax

  v4 = 0;
  v9 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[8];
  if ( !v9 )
    return (unsigned int)-1073741811;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = v9 + 16;
  ExAcquirePushLockExclusiveEx(v9 + 16, 0LL);
  v12 = (_QWORD *)(v9 + 24);
  for ( i = (_QWORD *)*v12; i != v12 && a3 != (*(_BYTE *)(i[3] + 99LL) & 1); i = (_QWORD *)*i )
    ;
  if ( i == v12 )
  {
    ExReleasePushLockEx(v11, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return (unsigned int)-2147483622;
  }
  v14 = (_QWORD *)*i;
  if ( *(_QWORD **)(*i + 8LL) != i )
    goto LABEL_20;
  v15 = (void **)i[1];
  if ( *v15 != i )
    goto LABEL_20;
  *v15 = v14;
  v14[1] = v15;
  v16 = i[2];
  if ( *(_DWORD *)(v16 + 4) <= a2 )
    goto LABEL_9;
  v20 = (_QWORD *)*v12;
  if ( *(_QWORD **)(*v12 + 8LL) != v12 )
LABEL_20:
    __fastfail(3u);
  *i = v20;
  v4 = -1073741789;
  i[1] = v12;
  v20[1] = i;
  *v12 = i;
LABEL_9:
  v17 = (_QWORD *)*v12;
  *a4 = *(_DWORD *)(v16 + 4);
  ExReleasePushLockEx(v11, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v4 >= 0 )
  {
    v18 = _InterlockedIncrement((volatile signed __int32 *)(v16 + 20));
    memmove(a1, (const void *)v16, *(unsigned int *)(v16 + 4));
    *((_QWORD *)a1 + 3) = 0LL;
    *((_DWORD *)a1 + 5) = v18;
    *((_DWORD *)a1 + 6) = *((unsigned __int16 *)i + 24);
    if ( *(_BYTE *)(v16 + 12) )
      *((_DWORD *)a1 + 4) = *((unsigned __int16 *)i + 25);
    EtwpUnreferenceDataBlock(v16);
    EtwpReleaseQueueEntry(i);
    if ( v17 != v12 )
      return 261;
  }
  return (unsigned int)v4;
}
