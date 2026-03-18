/*
 * XREFs of ?LookupExpressionsForTarget@CExpressionManager@@QEAAPEAUExpressionListEntry@@PEAV?$CWeakReference@VCResource@@@@I@Z @ 0x1800A87DC
 * Callers:
 *     ?InsertDependenciesInOrder@CKeyframeAnimation@@UEAAX_K@Z @ 0x1800A86A0 (-InsertDependenciesInOrder@CKeyframeAnimation@@UEAAX_K@Z.c)
 *     ?InsertDependenciesInOrder@CExpression@@UEAAX_K@Z @ 0x1800A8730 (-InsertDependenciesInOrder@CExpression@@UEAAX_K@Z.c)
 *     ?InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAX_KPEAV?$CWeakReference@VCResource@@@@I@Z @ 0x1801BFC98 (-InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAX_KPEAV-$CWeakReference@VCResource@@@.c)
 *     ?AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1801DD8CC (-AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CExpressionManager::LookupExpressionsForTarget(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rax
  void *v4; // rbx
  _QWORD *v5; // rdi
  void *v7; // rcx
  __int128 v8; // [rsp+20h] [rbp-38h]
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF
  void *v10; // [rsp+40h] [rbp-18h]
  void *retaddr; // [rsp+58h] [rbp+0h]

  if ( !a2 )
    ModuleFailFastForHRESULT(2147549183LL, retaddr, a3);
  v10 = 0LL;
  *(_QWORD *)&v8 = a2;
  DWORD2(v8) = a3;
  v9 = v8;
  v3 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)(a1 + 328), &v9);
  v4 = v10;
  v5 = v3;
  while ( v4 )
  {
    v7 = v4;
    v4 = (void *)*((_QWORD *)v4 + 2);
    operator delete(v7);
  }
  if ( v5 )
    return v5[2];
  else
    return 0LL;
}
