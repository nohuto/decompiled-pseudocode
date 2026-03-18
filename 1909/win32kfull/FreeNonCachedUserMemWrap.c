/*
 * XREFs of FreeNonCachedUserMemWrap @ 0x1C00E2510
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyUMPDHeap@@YAXPEAU_UMPDHEAP@@@Z @ 0x1C00F4808 (-DestroyUMPDHeap@@YAXPEAU_UMPDHEAP@@@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 */

void __fastcall FreeNonCachedUserMemWrap(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rdi
  __int64 *ThreadWin32Thread; // rax
  struct _UMPDHEAP *v6; // rcx

  if ( *(_DWORD *)(a1 + 424) && *(_DWORD *)(a1 + 408) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
  {
    *(_QWORD *)(a1 + 392) = 0LL;
  }
  else if ( *(_QWORD *)(a1 + 56) )
  {
    CurrentThread = KeGetCurrentThread();
    v4 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v4 = *ThreadWin32Thread;
    }
    v6 = *(struct _UMPDHEAP **)(a1 + 56);
    if ( *(struct _UMPDHEAP **)(v4 + 56) != v6 )
      DestroyUMPDHeap(v6);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
}
