/*
 * XREFs of ?RemoveHeap@UMPDOBJ@@QEAAXXZ @ 0x1C00192C0
 * Callers:
 *     FreeNonCachedUserMemWrap @ 0x1C00186F0 (FreeNonCachedUserMemWrap.c)
 *     ?FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ @ 0x1C0196FF0 (-FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?DestroyUMPDHeap@@YAXPEAU_UMPDHEAP@@@Z @ 0x1C0135874 (-DestroyUMPDHeap@@YAXPEAU_UMPDHEAP@@@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 */

void __fastcall UMPDOBJ::RemoveHeap(UMPDOBJ *this)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rdi
  __int64 *ThreadWin32Thread; // rax
  struct _UMPDHEAP *v5; // rcx

  if ( *((_QWORD *)this + 7) )
  {
    CurrentThread = KeGetCurrentThread();
    v3 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v3 = *ThreadWin32Thread;
    }
    v5 = (struct _UMPDHEAP *)*((_QWORD *)this + 7);
    if ( *(struct _UMPDHEAP **)(v3 + 56) != v5 )
      DestroyUMPDHeap(v5);
    *((_QWORD *)this + 7) = 0LL;
  }
}
