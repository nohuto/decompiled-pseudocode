/*
 * XREFs of sub_18003DC5C @ 0x18003DC5C
 * Callers:
 *     sub_180034E90 @ 0x180034E90 (sub_180034E90.c)
 *     sub_180037470 @ 0x180037470 (sub_180037470.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_18003DC5C(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 104);
  *a2 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return a2;
}
