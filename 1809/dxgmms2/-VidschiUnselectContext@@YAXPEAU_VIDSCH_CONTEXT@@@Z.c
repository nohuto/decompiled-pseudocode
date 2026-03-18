/*
 * XREFs of ?VidschiUnselectContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C00145A0
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C0086990 (VidSchiRun_PriorityTable.c)
 * Callees:
 *     VidSchiUpdateContextStatus @ 0x1C0009350 (VidSchiUpdateContextStatus.c)
 */

void __fastcall VidschiUnselectContext(struct _VIDSCH_CONTEXT *a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(*((_QWORD *)a1 + 13) + 32LL) + 1648LL), &LockHandle);
  if ( (*((_DWORD *)a1 + 46) & 0x400) != 0 )
  {
    *((_DWORD *)a1 + 46) &= ~0x400u;
    if ( (*((_DWORD *)a1 + 46) & 0x200) != 0 && (*((_DWORD *)a1 + 46) & 2) == 0 )
      VidSchiUpdateContextStatus((__int64)a1, (_QWORD *)0xA, 491LL);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
