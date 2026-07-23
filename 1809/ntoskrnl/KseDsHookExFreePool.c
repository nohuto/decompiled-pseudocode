/*
 * XREFs of KseDsHookExFreePool @ 0x1402A0770
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     KsepDsEventPoolFree @ 0x1402A1498 (KsepDsEventPoolFree.c)
 */

__int64 __fastcall KseDsHookExFreePool(__int64 a1)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  ((void (*)(void))qword_140402318)();
  return KsepDsEventPoolFree(a1, retaddr, 1701736270LL);
}
