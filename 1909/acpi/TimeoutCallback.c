/*
 * XREFs of TimeoutCallback @ 0x1C0068330
 * Callers:
 *     <none>
 * Callees:
 *     RestartContext @ 0x1C001EAF0 (RestartContext.c)
 */

void __fastcall TimeoutCallback(
        struct _KDPC *Dpc,
        struct _SLIST_ENTRY *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  KIRQL v5; // al
  int Next; // ecx
  struct _SLIST_ENTRY *v7; // rax
  _SLIST_ENTRY *v8; // r8
  _SLIST_ENTRY **v9; // rdx

  v5 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  byte_1C0082700 = v5;
  Next = (int)DeferredContext[4].Next;
  if ( (Next & 1) != 0 )
  {
    v7 = DeferredContext + 2;
    LODWORD(DeferredContext[4].Next) = Next & 0xFFFFFFFA | 4;
    v8 = DeferredContext[2].Next;
    if ( *(&v8->Next + 1) != &DeferredContext[2]
      || (v9 = (_SLIST_ENTRY **)*((_QWORD *)&DeferredContext[2].Next + 1), *v9 != v7) )
    {
      __fastfail(3u);
    }
    *v9 = v8;
    *((_QWORD *)&v8->Next + 1) = v9;
    *((_QWORD *)&DeferredContext[2].Next + 1) = DeferredContext + 2;
    v7->Next = v7;
    goto LABEL_8;
  }
  if ( (Next & 2) != 0 )
  {
    LODWORD(DeferredContext[4].Next) = Next & 0xFFFFFFFD;
LABEL_8:
    KeReleaseSpinLock(&SpinLock, byte_1C0082700);
    RestartContext(DeferredContext, ((__int64)DeferredContext[4].Next & 0x100) == 0);
    return;
  }
  KeReleaseSpinLock(&SpinLock, v5);
}
