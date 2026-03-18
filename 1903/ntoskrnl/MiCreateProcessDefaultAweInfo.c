/*
 * XREFs of MiCreateProcessDefaultAweInfo @ 0x14089638C
 * Callers:
 *     MiCreateUserPhysicalView @ 0x14089646C (MiCreateUserPhysicalView.c)
 *     NtAllocateUserPhysicalPages @ 0x140896E60 (NtAllocateUserPhysicalPages.c)
 * Callees:
 *     MiLockAweVadsExclusive @ 0x1402D6EA4 (MiLockAweVadsExclusive.c)
 *     MiUnlockAweVadsExclusive @ 0x1402D7C9C (MiUnlockAweVadsExclusive.c)
 *     MiAllocateAweInfo @ 0x140895E58 (MiAllocateAweInfo.c)
 *     MiDeleteAweInfo @ 0x140896668 (MiDeleteAweInfo.c)
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
  v4 = *(_QWORD *)&Process[1].IdealNode[14];
  v5 = *(_QWORD *)(v4 + 392);
  v8 = v5;
  if ( !v5 )
  {
    result = MiAllocateAweInfo(0LL, 1, 0, &v8);
    if ( (int)result < 0 )
      return result;
    v7 = 0;
    MiLockAweVadsExclusive((__int64)CurrentThread);
    v5 = v8;
    if ( !*(_QWORD *)(*(_QWORD *)&Process[1].IdealNode[14] + 392LL) )
    {
      *(_QWORD *)(v4 + 392) = v8;
      v7 = 1;
    }
    MiUnlockAweVadsExclusive((__int64)CurrentThread);
    if ( !v7 )
    {
      MiDeleteAweInfo(KeGetCurrentThread()->ApcState.Process, v8);
      v5 = *(_QWORD *)(*(_QWORD *)&Process[1].IdealNode[14] + 392LL);
    }
  }
  *a1 = v5;
  return 0LL;
}
