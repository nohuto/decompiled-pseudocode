/*
 * XREFs of ?RemoveHeap@UMPDOBJ@@QEAAXXZ @ 0x1C0101ED8
 * Callers:
 *     FreeNonCachedUserMemWrap @ 0x1C0101E90 (FreeNonCachedUserMemWrap.c)
 *     ?FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ @ 0x1C0277E88 (-FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?DestroyUMPDHeap@@YAXPEAU_UMPDHEAP@@@Z @ 0x1C010F2F0 (-DestroyUMPDHeap@@YAXPEAU_UMPDHEAP@@@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 */

void __fastcall UMPDOBJ::RemoveHeap(struct _UMPDHEAP **this, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rdi
  __int64 *ThreadWin32Thread; // rax
  struct _UMPDHEAP *v6; // rcx

  if ( this[7] )
  {
    CurrentThread = KeGetCurrentThread();
    v4 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(this, a2) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v4 = *ThreadWin32Thread;
    }
    v6 = this[7];
    if ( *(struct _UMPDHEAP **)(v4 + 56) != v6 )
      DestroyUMPDHeap(v6);
    this[7] = 0LL;
  }
}
