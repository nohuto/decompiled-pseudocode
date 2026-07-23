/*
 * XREFs of VrpBecomeDiffHiveEntryTransitionOwner @ 0x140846C24
 * Callers:
 *     VrpLoadDifferencingHive @ 0x1408471BC (VrpLoadDifferencingHive.c)
 *     VrpUnloadDifferencingHive @ 0x140847524 (VrpUnloadDifferencingHive.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14003E610 (KeAbPreAcquire.c)
 */

char __fastcall VrpBecomeDiffHiveEntryTransitionOwner(__int64 a1)
{
  _QWORD *v1; // rcx
  struct _KTHREAD *CurrentThread; // rax
  PRTL_BALANCED_NODE v4; // rax

  v1 = (_QWORD *)(a1 + 40);
  if ( *v1 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  *v1 = KeGetCurrentThread();
  v4 = KeAbPreAcquire((ULONG_PTR)v1, 0LL, 0);
  if ( v4 )
    BYTE2(v4[1].Left) |= 1u;
  return 1;
}
