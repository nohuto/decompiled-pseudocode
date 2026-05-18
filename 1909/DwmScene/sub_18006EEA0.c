/*
 * XREFs of sub_18006EEA0 @ 0x18006EEA0
 * Callers:
 *     sub_18006EEA0 @ 0x18006EEA0 (sub_18006EEA0.c)
 *     sub_18006EF58 @ 0x18006EF58 (sub_18006EF58.c)
 * Callees:
 *     sub_180063540 @ 0x180063540 (sub_180063540.c)
 *     sub_18006EEA0 @ 0x18006EEA0 (sub_18006EEA0.c)
 *     sub_180087450 @ 0x180087450 (sub_180087450.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x180127508 (-_Xbad_function_call@std@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18006EEA0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 result; // rax
  __int64 v12; // rdi
  __int64 i; // rbx

  sub_180063540(a1 + 16);
  v6 = *a3;
  sub_180087450(*a3);
  v7 = *(_QWORD *)(v6 + 376);
  v8 = *(_QWORD *)(v6 + 384);
  while ( v7 != v8 )
  {
    v9 = *(_QWORD *)(a2 + 56);
    if ( !v9 )
    {
      std::_Xbad_function_call();
      JUMPOUT(0x18006EF54LL);
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 16LL))(v9, v7);
    v7 += 16LL;
  }
  v10 = *a3;
  result = sub_180087450(*a3);
  v12 = *(_QWORD *)(v10 + 40);
  for ( i = *(_QWORD *)(v10 + 32); i != v12; i += 16LL )
    result = sub_18006EEA0(a1, a2, i);
  return result;
}
