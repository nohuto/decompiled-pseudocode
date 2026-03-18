/*
 * XREFs of RtlpInsertStringAtom @ 0x1406DA2BC
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x14001C400 (RtlAddAtomToAtomTableEx.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExCreateHandleEx @ 0x1405E6A10 (ExCreateHandleEx.c)
 *     ExMapHandleToPointer @ 0x14060F3C0 (ExMapHandleToPointer.c)
 *     ExDestroyHandle @ 0x14060F860 (ExDestroyHandle.c)
 */

char __fastcall RtlpInsertStringAtom(__int64 a1, __int64 a2)
{
  __int64 Handle; // rax
  __int64 v5; // rbx
  unsigned int v6; // eax
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v9; // rax

  Handle = ExCreateHandleEx(*(_QWORD *)(a1 + 16), a2, 0, 0, 0LL);
  v5 = Handle;
  if ( Handle )
  {
    v6 = (unsigned int)Handle >> 2;
    if ( v6 <= 0xFFFF && v6 + 49152 >= v6 && v6 + 49152 <= 0xFFFF )
    {
      *(_WORD *)(a2 + 8) = v6;
      *(_WORD *)(a2 + 10) = v6 - 0x4000;
      return 1;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v9 = ExMapHandleToPointer(*(unsigned int **)(a1 + 16), v5);
    ExDestroyHandle(*(_QWORD *)(a1 + 16), v5, v9);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return 0;
}
