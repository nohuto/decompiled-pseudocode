/*
 * XREFs of KseDsCallbackHookDriverUnload @ 0x14029FFF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     KsepDsEventDriverUnload @ 0x1402A0C20 (KsepDsEventDriverUnload.c)
 */

__int64 __fastcall KseDsCallbackHookDriverUnload(__int64 a1)
{
  __int64 v2; // rax

  v2 = (*(__int64 (**)(void))qword_1404007F8)();
  (*(void (__fastcall **)(__int64))(v2 + 16))(a1);
  return KsepDsEventDriverUnload(a1, *(_QWORD *)(a1 + 24));
}
