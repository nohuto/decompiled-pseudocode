/*
 * XREFs of ?GetWeakRefToSelf@CInteractionTracker@@AEAAPEAV?$CWeakReference@VCResource@@@@XZ @ 0x1801D93D0
 * Callers:
 *     _lambda_2149ae26af8bda672c72659e191929ce_::operator() @ 0x1801D719C (_lambda_2149ae26af8bda672c72659e191929ce_--operator().c)
 *     ?AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1801DD8CC (-AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4.c)
 *     ?RegisterIndirectTargetsForBoundTrackers@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@PEAVCBaseExpression@@W4Enum@InteractionTrackerProperty@@@Z @ 0x1801DE6D8 (-RegisterIndirectTargetsForBoundTrackers@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractio.c)
 * Callees:
 *     ?Create@?$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x1800A5178 (-Create@-$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 */

struct CWeakResourceReference *__fastcall CInteractionTracker::GetWeakRefToSelf(struct CWeakResourceReference **a1)
{
  struct CWeakResourceReference **v1; // rbx
  struct CWeakResourceReference *result; // rax
  int v3; // eax
  const void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = a1 + 8;
  result = a1[8];
  if ( !result )
  {
    *v1 = 0LL;
    v3 = CWeakReference<CVisual>::Create((struct CResource *)a1, a1 + 8);
    if ( v3 < 0 )
      ModuleFailFastForHRESULT(v3, retaddr);
    return *v1;
  }
  return result;
}
