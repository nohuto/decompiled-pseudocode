/*
 * XREFs of ?InsertDependenciesInOrder@CKeyframeAnimation@@UEAAX_K@Z @ 0x1800BD8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InsertInOrder@CBaseExpression@@QEAAX_K@Z @ 0x18005B880 (-InsertInOrder@CBaseExpression@@QEAAX_K@Z.c)
 *     ?Create@?$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x1800A0000 (-Create@-$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?FindElement@?$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAPEAVCTargetMapEntry@@UObjectPropertyReference@@@Z @ 0x1800BD964 (-FindElement@-$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAPEAVCTargetMap.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CKeyframeAnimation::InsertDependenciesInOrder(CKeyframeAnimation *this, unsigned __int64 a2)
{
  __int64 i; // rdi
  __int64 *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 Element; // rax
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  int v12; // [rsp+28h] [rbp-10h]
  void *retaddr; // [rsp+38h] [rbp+0h]

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 92); i = (unsigned int)(i + 1) )
    CBaseExpression::InsertInOrder(*(CBaseExpression **)(*((_QWORD *)this + 43) + 8 * i), a2);
  v5 = (__int64 *)((char *)this + 288);
  v6 = *((_QWORD *)this + 36);
  if ( !v6 )
  {
    *v5 = 0LL;
    v10 = CWeakReference<CVisual>::Create(this, (struct CWeakResourceReference **)this + 36);
    if ( v10 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v10, retaddr);
    v6 = *v5;
  }
  v7 = *((_QWORD *)this + 2);
  v11 = v6;
  v12 = 30;
  Element = CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::FindElement(*(_QWORD *)(v7 + 224) + 328LL, &v11);
  if ( Element )
    v9 = *(_QWORD *)(Element + 16);
  else
    v9 = 0LL;
  while ( v9 )
  {
    CBaseExpression::InsertInOrder(*(CBaseExpression **)(v9 + 8), a2);
    v9 = *(_QWORD *)(v9 + 16);
  }
}
