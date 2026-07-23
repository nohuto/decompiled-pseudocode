/*
 * XREFs of KseDsHookExFreePoolWithTag @ 0x1402A07B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     KsepDsEventPoolFree @ 0x1402A1498 (KsepDsEventPoolFree.c)
 */

__int64 __fastcall KseDsHookExFreePoolWithTag(__int64 a1, unsigned int a2)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  ((void (*)(void))qword_1404022D8)();
  return KsepDsEventPoolFree(a1, retaddr, a2);
}
