/*
 * XREFs of EtwpReceiveNotification @ 0x1405C1E00
 * Callers:
 *     NtTraceControl @ 0x1405C3F40 (NtTraceControl.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     EtwpUnreferenceDataBlock @ 0x1405C1D74 (EtwpUnreferenceDataBlock.c)
 *     EtwpReleaseQueueEntry @ 0x1405C1D9C (EtwpReleaseQueueEntry.c)
 */

__int64 __fastcall EtwpReceiveNotification(void *a1, unsigned int a2, char a3, _DWORD *a4)
{
  int v4; // esi
  unsigned __int64 v9; // r14
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v11; // rbx
  PVOID **v12; // r14
  PVOID *i; // rdi
  PVOID *v14; // rax
  PVOID **v15; // rcx
  volatile signed __int32 *v16; // rbp
  PVOID *v17; // r12
  signed __int32 v18; // ebx
  PVOID *v20; // rax

  v4 = 0;
  v9 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[9];
  if ( !v9 )
    return (unsigned int)-1073741811;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = v9 + 16;
  ExAcquirePushLockExclusiveEx(v9 + 16, 0LL);
  v12 = (PVOID **)(v9 + 24);
  for ( i = *v12; i != (PVOID *)v12 && a3 != (*((_BYTE *)i[3] + 99) & 1); i = (PVOID *)*i )
    ;
  if ( i == (PVOID *)v12 )
  {
    ExReleasePushLockEx(v11, 0LL);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return (unsigned int)-2147483622;
  }
  v14 = (PVOID *)*i;
  if ( *((PVOID **)*i + 1) != i )
    goto LABEL_20;
  v15 = (PVOID **)i[1];
  if ( *v15 != i )
    goto LABEL_20;
  *v15 = v14;
  v14[1] = v15;
  v16 = (volatile signed __int32 *)i[2];
  if ( *((_DWORD *)v16 + 1) <= a2 )
    goto LABEL_9;
  v20 = *v12;
  if ( (*v12)[1] != v12 )
LABEL_20:
    __fastfail(3u);
  *i = v20;
  v4 = -1073741789;
  i[1] = v12;
  v20[1] = i;
  *v12 = i;
LABEL_9:
  v17 = *v12;
  *a4 = *((_DWORD *)v16 + 1);
  ExReleasePushLockEx(v11, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v4 >= 0 )
  {
    v18 = _InterlockedIncrement(v16 + 5);
    memmove(a1, (const void *)v16, *((unsigned int *)v16 + 1));
    *((_QWORD *)a1 + 3) = 0LL;
    *((_DWORD *)a1 + 5) = v18;
    *((_DWORD *)a1 + 6) = *((unsigned __int16 *)i + 24);
    if ( *((_BYTE *)v16 + 12) )
      *((_DWORD *)a1 + 4) = *((unsigned __int16 *)i + 25);
    EtwpUnreferenceDataBlock(v16);
    EtwpReleaseQueueEntry(i, 1);
    if ( v17 != (PVOID *)v12 )
      return 261;
  }
  return (unsigned int)v4;
}
