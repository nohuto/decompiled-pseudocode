/*
 * XREFs of PspGetJobLockHierarchyForDeletion @ 0x1406076F0
 * Callers:
 *     PspJobDelete @ 0x14008FD50 (PspJobDelete.c)
 * Callees:
 *     PspUnlockJobAssignment @ 0x1406018EC (PspUnlockJobAssignment.c)
 *     PspLockJobAssignment @ 0x14060193C (PspLockJobAssignment.c)
 */

__int64 __fastcall PspGetJobLockHierarchyForDeletion(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v5; // rax
  unsigned int v6; // edx
  __int64 v7; // rax

  CurrentThread = KeGetCurrentThread();
  PspLockJobAssignment((__int64)CurrentThread);
  v5 = *(_QWORD *)(a1 + 1072);
  v6 = 0;
  if ( v5 )
  {
    *(_BYTE *)(a2 + 16) = 0;
    v6 = 1;
    *(_QWORD *)(a2 + 8) = v5;
  }
  v7 = 2LL * v6;
  *(_QWORD *)(a2 + 8 * v7 + 8) = a1;
  *(_BYTE *)(a2 + 8 * v7 + 16) = 0;
  *(_DWORD *)a2 = v6 + 1;
  return PspUnlockJobAssignment((__int64)CurrentThread);
}
