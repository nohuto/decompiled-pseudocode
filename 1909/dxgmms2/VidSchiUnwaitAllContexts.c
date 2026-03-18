/*
 * XREFs of VidSchiUnwaitAllContexts @ 0x1C0031278
 * Callers:
 *     VidSchiReportHwHang @ 0x1C003A6AC (VidSchiReportHwHang.c)
 *     VidSchFlushAdapter @ 0x1C00CAE30 (VidSchFlushAdapter.c)
 * Callees:
 *     ?VidSchiUnwaitAllContextsInList@@YAXPEAU_LIST_ENTRY@@@Z @ 0x1C002BDBC (-VidSchiUnwaitAllContextsInList@@YAXPEAU_LIST_ENTRY@@@Z.c)
 */

LONG __fastcall VidSchiUnwaitAllContexts(__int64 a1)
{
  __int64 i; // rsi
  __int64 *v3; // rbx
  __int64 v4; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1648), &LockHandle);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 72); i = (unsigned int)(i + 1) )
  {
    v3 = *(__int64 **)(a1 + 616);
    if ( (unsigned int)i < *(_DWORD *)(a1 + 688) )
      v3 += i;
    v4 = *v3;
    VidSchiUnwaitAllContextsInList((struct _LIST_ENTRY *)(v4 + 2584));
    VidSchiUnwaitAllContextsInList((struct _LIST_ENTRY *)(v4 + 2536));
    VidSchiUnwaitAllContextsInList((struct _LIST_ENTRY *)(v4 + 2568));
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  *(_QWORD *)(a1 + 1144) = MEMORY[0xFFFFF78000000320];
  return KeSetEvent((PRKEVENT)(a1 + 1112), 0, 0);
}
