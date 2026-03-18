/*
 * XREFs of MiUnlockStealVm @ 0x1400A1594
 * Callers:
 *     MiStealPage @ 0x1400A0834 (MiStealPage.c)
 *     MiLockStealUserVm @ 0x1400E22B4 (MiLockStealUserVm.c)
 *     MiLockStealSystemVm @ 0x14012C2F0 (MiLockStealSystemVm.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     MmDetachSession @ 0x14008BB30 (MmDetachSession.c)
 *     KeForceDetachProcess @ 0x14008E81C (KeForceDetachProcess.c)
 *     MiUnlockSystemVa @ 0x1400A15F4 (MiUnlockSystemVa.c)
 *     MiAttachThreadDone @ 0x1400E2224 (MiAttachThreadDone.c)
 */

LONG_PTR __fastcall MiUnlockStealVm(__int64 a1)
{
  LONG_PTR result; // rax
  void *v3; // rdi

  result = MiUnlockSystemVa(a1);
  if ( *(_QWORD *)(a1 + 64) )
  {
    KeForceDetachProcess((_BYTE *)(a1 + 72), 0);
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
