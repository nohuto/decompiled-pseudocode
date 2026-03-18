/*
 * XREFs of VerifierExReleaseFastMutex @ 0x140981AB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     ViKeIrqlLogCommon @ 0x1409794DC (ViKeIrqlLogCommon.c)
 *     VfDeadlockReleaseResource @ 0x14097B688 (VfDeadlockReleaseResource.c)
 *     ViExReleaseFastMutexCommon @ 0x140982048 (ViExReleaseFastMutexCommon.c)
 */

void __fastcall VerifierExReleaseFastMutex(const void *a1)
{
  __int64 v2; // rdi
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = ViExReleaseFastMutexCommon((ULONG_PTR)a1);
  VfDeadlockReleaseResource(a1, 3, (__int64)KeGetCurrentThread(), retaddr);
  ((void (__fastcall *)(const void *))pXdvExReleaseFastMutex)(a1);
  ViKeIrqlLogCommon(v2, 1u);
}
