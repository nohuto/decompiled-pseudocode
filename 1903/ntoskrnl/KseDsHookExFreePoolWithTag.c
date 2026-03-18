/*
 * XREFs of KseDsHookExFreePoolWithTag @ 0x1402B7A00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     KsepDsEventPoolFree @ 0x1402B86E8 (KsepDsEventPoolFree.c)
 */

__int64 __fastcall KseDsHookExFreePoolWithTag(__int64 a1, unsigned int a2)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  ((void (*)(void))qword_140427688)();
  return KsepDsEventPoolFree(a1, retaddr, a2);
}
