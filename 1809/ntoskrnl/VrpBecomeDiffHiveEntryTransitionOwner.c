/*
 * XREFs of VrpBecomeDiffHiveEntryTransitionOwner @ 0x14080E50C
 * Callers:
 *     VrpLoadDifferencingHive @ 0x14080EAF8 (VrpLoadDifferencingHive.c)
 *     VrpUnloadDifferencingHive @ 0x14080EEBC (VrpUnloadDifferencingHive.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
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
