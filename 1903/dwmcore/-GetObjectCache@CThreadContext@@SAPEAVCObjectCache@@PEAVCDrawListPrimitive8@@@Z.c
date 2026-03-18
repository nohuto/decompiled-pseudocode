/*
 * XREFs of ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCDrawListPrimitive8@@@Z @ 0x18004D22C
 * Callers:
 *     PrimitiveStorage::Alloc_16_ @ 0x18009B3D4 (PrimitiveStorage--Alloc_16_.c)
 *     ??_E?$CCachableStorage@VCDrawListPrimitive8@@$0BA@@PrimitiveStorage@@UEAAPEAXI@Z @ 0x1800B9C60 (--_E-$CCachableStorage@VCDrawListPrimitive8@@$0BA@@PrimitiveStorage@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x180051114 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 */

struct CObjectCache *__fastcall CThreadContext::GetObjectCache(struct CDrawListPrimitive8 *a1)
{
  int Current; // eax
  __int64 v2; // r8
  void *retaddr; // [rsp+28h] [rbp+0h]
  struct CThreadContext *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = a1;
  Current = CThreadContext::GetCurrent(&v5);
  if ( Current < 0 )
    ModuleFailFastForHRESULT((unsigned int)Current, retaddr, v2);
  return (struct CThreadContext *)((char *)v5 + 120);
}
