/*
 * XREFs of ?StopStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ @ 0x18000CD24
 * Callers:
 *     ?ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z @ 0x18000B8D4 (-ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z.c)
 *     ?NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z @ 0x18000CC48 (-NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z.c)
 *     ?Cleanup@CAnimationEngine@@QEAAXXZ @ 0x18009DADC (-Cleanup@CAnimationEngine@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAnimationEngine::CTransitionVisualSet::StopStoryboard(CAnimationEngine::CTransitionVisualSet *this)
{
  __int64 i; // rdi
  __int64 v3; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 5); i = (unsigned int)(i + 1) )
  {
    v3 = **(_QWORD **)(*((_QWORD *)this + 5) + 8 * i);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  *((_BYTE *)this + 49) = 1;
}
