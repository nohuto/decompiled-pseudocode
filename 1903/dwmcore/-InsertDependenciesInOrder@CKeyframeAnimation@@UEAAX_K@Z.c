/*
 * XREFs of ?InsertDependenciesInOrder@CKeyframeAnimation@@UEAAX_K@Z @ 0x1800BD9D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@?$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x18002B314 (-Create@-$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?LookupExpressionsForTarget@CExpressionManager@@QEAAPEAUExpressionListEntry@@PEAV?$CWeakReference@VCResource@@@@I@Z @ 0x1800BDB0C (-LookupExpressionsForTarget@CExpressionManager@@QEAAPEAUExpressionListEntry@@PEAV-$CWeakReferenc.c)
 *     ?InsertInOrder@CBaseExpression@@QEAAX_K@Z @ 0x1800BDB78 (-InsertInOrder@CBaseExpression@@QEAAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CKeyframeAnimation::InsertDependenciesInOrder(CKeyframeAnimation *this, unsigned __int64 a2)
{
  __int64 i; // rdi
  __int64 *v5; // rdi
  __int64 v6; // rdx
  __int64 j; // rbx
  int v8; // eax
  __int64 v9; // r8
  void *retaddr; // [rsp+28h] [rbp+0h]

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 98); i = (unsigned int)(i + 1) )
    CBaseExpression::InsertInOrder(*(CBaseExpression **)(*((_QWORD *)this + 46) + 8 * i), a2);
  v5 = (__int64 *)((char *)this + 312);
  v6 = *((_QWORD *)this + 39);
  if ( !v6 )
  {
    *v5 = 0LL;
    v8 = CWeakReference<CVisual>::Create(this, (struct CWeakResourceReference **)this + 39);
    if ( v8 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v8, retaddr, v9);
    v6 = *v5;
  }
  for ( j = CExpressionManager::LookupExpressionsForTarget(*(_QWORD *)(*((_QWORD *)this + 2) + 240LL), v6, 30LL);
        j;
        j = *(_QWORD *)(j + 16) )
  {
    CBaseExpression::InsertInOrder(*(CBaseExpression **)(j + 8), a2);
  }
}
