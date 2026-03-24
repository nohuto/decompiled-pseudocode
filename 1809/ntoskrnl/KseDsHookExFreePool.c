/*
 * XREFs of KseDsHookExFreePool @ 0x1402A0580
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 *     KsepDsEventPoolFree @ 0x1402A12A8 (KsepDsEventPoolFree.c)
 */

__int64 __fastcall KseDsHookExFreePool(__int64 a1)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  ((void (*)(void))qword_140401318)();
  return KsepDsEventPoolFree(a1, retaddr, 1701736270LL);
}
