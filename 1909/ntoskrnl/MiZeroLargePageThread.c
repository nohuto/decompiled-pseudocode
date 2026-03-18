/*
 * XREFs of MiZeroLargePageThread @ 0x14018FB20
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x140012880 (KeSetActualBasePriorityThread.c)
 *     MiDeleteZeroThreadContext @ 0x14018FB94 (MiDeleteZeroThreadContext.c)
 *     MiZeroLargePages @ 0x14018FC0C (MiZeroLargePages.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall MiZeroLargePageThread(PVOID P)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v3; // ebx
  __int64 v4; // rcx

  CurrentThread = KeGetCurrentThread();
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x400u;
  v3 = KeSetActualBasePriorityThread((__int64)CurrentThread, 0LL);
  MiZeroLargePages(v4, P);
  KeSetActualBasePriorityThread((__int64)CurrentThread, v3);
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~0x400u;
  MiDeleteZeroThreadContext(P);
  ExFreePoolWithTag(P, 0);
}
