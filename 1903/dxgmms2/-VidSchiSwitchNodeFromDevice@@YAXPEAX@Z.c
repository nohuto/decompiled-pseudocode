/*
 * XREFs of ?VidSchiSwitchNodeFromDevice@@YAXPEAX@Z @ 0x1C00320B0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiIncrementContextReference @ 0x1C0010760 (VidSchiIncrementContextReference.c)
 *     VidSchiDecrementContextReference @ 0x1C0011460 (VidSchiDecrementContextReference.c)
 *     VidSchiSwitchNodeFromContext @ 0x1C007C150 (VidSchiSwitchNodeFromContext.c)
 */

void __fastcall VidSchiSwitchNodeFromDevice(_QWORD *a1)
{
  __int64 v1; // rbp
  _QWORD **v2; // rsi
  __int64 v3; // rdx
  _QWORD *v4; // rdi
  struct _VIDSCH_CONTEXT *v5; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1[4];
  v2 = (_QWORD **)(a1 + 9);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 1648), &LockHandle);
  v4 = *v2;
  while ( v4 != v2 )
  {
    v5 = (struct _VIDSCH_CONTEXT *)(v4 - 3);
    VidSchiIncrementContextReference((__int64)(v4 - 3), v3);
    if ( !*((_DWORD *)v4 + 216) )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      VidSchiSwitchNodeFromContext(v4 - 3);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 1648), &LockHandle);
    }
    v4 = (_QWORD *)*v4;
    VidSchiDecrementContextReference(v5, 1);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
