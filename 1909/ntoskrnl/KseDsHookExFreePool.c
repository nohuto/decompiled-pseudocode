/*
 * XREFs of KseDsHookExFreePool @ 0x1402B7720
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     KsepDsEventPoolFree @ 0x1402B8448 (KsepDsEventPoolFree.c)
 */

__int64 __fastcall KseDsHookExFreePool(__int64 a1)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  ((void (*)(void))qword_1404276C8)();
  return KsepDsEventPoolFree(a1, retaddr, 1701736270LL);
}
