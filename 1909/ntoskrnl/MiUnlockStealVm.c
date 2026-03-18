/*
 * XREFs of MiUnlockStealVm @ 0x1400C4688
 * Callers:
 *     MiLockStealUserVm @ 0x1400C2478 (MiLockStealUserVm.c)
 *     MiStealPage @ 0x1400C3928 (MiStealPage.c)
 *     MiLockStealSystemVm @ 0x14012CDC0 (MiLockStealSystemVm.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     MmDetachSession @ 0x14008CE30 (MmDetachSession.c)
 *     MiUnlockSystemVa @ 0x1400C46E8 (MiUnlockSystemVa.c)
 *     MiAttachThreadDone @ 0x1400C76B0 (MiAttachThreadDone.c)
 *     KeForceDetachProcess @ 0x1400CBE04 (KeForceDetachProcess.c)
 */

LONG_PTR __fastcall MiUnlockStealVm(__int64 a1)
{
  LONG_PTR result; // rax
  void *v3; // rdi

  result = MiUnlockSystemVa(a1);
  if ( *(_QWORD *)(a1 + 64) )
  {
    KeForceDetachProcess(a1 + 72, 0LL);
    return MiAttachThreadDone(*(_QWORD *)(a1 + 64));
  }
  else
  {
    v3 = *(void **)(a1 + 56);
    if ( v3 )
    {
      MmDetachSession(*(_QWORD *)(a1 + 56), a1 + 72);
      return ObfDereferenceObject(v3);
    }
  }
  return result;
}
