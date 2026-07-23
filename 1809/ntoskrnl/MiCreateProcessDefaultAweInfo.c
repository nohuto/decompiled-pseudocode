/*
 * XREFs of MiCreateProcessDefaultAweInfo @ 0x140850C6C
 * Callers:
 *     MiCreateUserPhysicalView @ 0x140850D4C (MiCreateUserPhysicalView.c)
 *     NtAllocateUserPhysicalPages @ 0x1408518F0 (NtAllocateUserPhysicalPages.c)
 * Callees:
 *     MiLockAweVadsExclusive @ 0x1402B14CC (MiLockAweVadsExclusive.c)
 *     MiUnlockAweVadsExclusive @ 0x1402B22FC (MiUnlockAweVadsExclusive.c)
 *     MiAllocateAweInfo @ 0x14085073C (MiAllocateAweInfo.c)
 *     MiDeleteAweInfo @ 0x140850F50 (MiDeleteAweInfo.c)
 */

__int64 __fastcall MiCreateProcessDefaultAweInfo(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // rbp
  __int64 v4; // r15
  __int64 v5; // rbx
  __int64 result; // rax
  int v7; // edi
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v4 = *(_QWORD *)&Process[1].IdealGlobalNode;
  v5 = *(_QWORD *)(v4 + 344);
  v8 = v5;
  if ( !v5 )
  {
    result = MiAllocateAweInfo(0LL, 1, 0, &v8);
    if ( (int)result < 0 )
      return result;
    v7 = 0;
    MiLockAweVadsExclusive((__int64)CurrentThread);
    v5 = v8;
    if ( !*(_QWORD *)(*(_QWORD *)&Process[1].IdealGlobalNode + 344LL) )
    {
      *(_QWORD *)(v4 + 344) = v8;
      v7 = 1;
    }
    MiUnlockAweVadsExclusive((__int64)CurrentThread);
    if ( !v7 )
    {
      MiDeleteAweInfo(KeGetCurrentThread()->ApcState.Process, v8);
      v5 = *(_QWORD *)(*(_QWORD *)&Process[1].IdealGlobalNode + 344LL);
    }
  }
  *a1 = v5;
  return 0LL;
}
