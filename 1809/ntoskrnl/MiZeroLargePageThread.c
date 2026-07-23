/*
 * XREFs of MiZeroLargePageThread @ 0x140185180
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x1400CCFC0 (KeSetActualBasePriorityThread.c)
 *     MiDeleteZeroThreadContext @ 0x1401851F4 (MiDeleteZeroThreadContext.c)
 *     MiZeroLargePages @ 0x14018526C (MiZeroLargePages.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall MiZeroLargePageThread(PVOID P, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // r8

  CurrentThread = KeGetCurrentThread();
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x400u;
  v5 = KeSetActualBasePriorityThread((__int64)CurrentThread, 0LL, a3);
  MiZeroLargePages(v6, P);
  KeSetActualBasePriorityThread((__int64)CurrentThread, v5, v7);
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~0x400u;
  MiDeleteZeroThreadContext(P);
  ExFreePoolWithTag(P, 0);
}
