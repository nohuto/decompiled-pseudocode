/*
 * XREFs of sub_180022F38 @ 0x180022F38
 * Callers:
 *     sub_180023720 @ 0x180023720 (sub_180023720.c)
 *     sub_180024910 @ 0x180024910 (sub_180024910.c)
 *     sub_1800297DC @ 0x1800297DC (sub_1800297DC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_180022F38(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 4272);
  *a2 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return a2;
}
