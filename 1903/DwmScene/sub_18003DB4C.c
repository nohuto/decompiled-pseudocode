/*
 * XREFs of sub_18003DB4C @ 0x18003DB4C
 * Callers:
 *     sub_180034D80 @ 0x180034D80 (sub_180034D80.c)
 *     sub_180037360 @ 0x180037360 (sub_180037360.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_18003DB4C(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 104);
  *a2 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return a2;
}
