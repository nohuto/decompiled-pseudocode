/*
 * XREFs of MiUnlockStealVm @ 0x1400ECDE4
 * Callers:
 *     MiLockStealSystemVm @ 0x1400E99F8 (MiLockStealSystemVm.c)
 *     MiStealPage @ 0x1400EBFC4 (MiStealPage.c)
 *     MiLockStealUserVm @ 0x1400EDC94 (MiLockStealUserVm.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     MiUnlockSystemVa @ 0x1400ECE44 (MiUnlockSystemVa.c)
 *     MiAttachThreadDone @ 0x1400EEB1C (MiAttachThreadDone.c)
 *     MmDetachSession @ 0x14011A630 (MmDetachSession.c)
 *     KeForceDetachProcess @ 0x140128044 (KeForceDetachProcess.c)
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
