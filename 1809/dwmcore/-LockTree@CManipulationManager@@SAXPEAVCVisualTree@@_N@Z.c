/*
 * XREFs of ?LockTree@CManipulationManager@@SAXPEAVCVisualTree@@_N@Z @ 0x1801EA7FC
 * Callers:
 *     ?OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IW4InputType@@_N22@Z @ 0x1801EB0C0 (-OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IW4InputType@@_N22@Z.c)
 *     ?OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z @ 0x1801F7678 (-OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CManipulationManager::LockTree(struct CVisualTree *a1, char a2)
{
  RTL_SRWLOCK *v2; // rcx

  v2 = (RTL_SRWLOCK *)(*((_QWORD *)a1 + 2) + 552LL);
  if ( a2 )
    AcquireSRWLockShared(v2);
  else
    ReleaseSRWLockShared(v2);
}
