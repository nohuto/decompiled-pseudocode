/*
 * XREFs of KseDsCallbackHookDriverStartIo @ 0x1402B7230
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     KsepDsEventDriverStartIo @ 0x1402B7DEC (KsepDsEventDriverStartIo.c)
 */

__int64 __fastcall KseDsCallbackHookDriverStartIo(__int64 a1, __int64 a2)
{
  __int64 v4; // rax

  v4 = (*(__int64 (__fastcall **)(_QWORD))qword_140426B38)(*(_QWORD *)(a1 + 8));
  (*(void (__fastcall **)(__int64, __int64))(v4 + 8))(a1, a2);
  return KsepDsEventDriverStartIo(*(_QWORD *)(a1 + 8), a1, a2);
}
