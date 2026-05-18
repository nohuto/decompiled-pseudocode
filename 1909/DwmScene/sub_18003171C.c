/*
 * XREFs of sub_18003171C @ 0x18003171C
 * Callers:
 *     sub_180037040 @ 0x180037040 (sub_180037040.c)
 * Callees:
 *     sub_180030404 @ 0x180030404 (sub_180030404.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_18003171C(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rcx

  sub_180030404(a1);
  v4 = a1[20];
  *a2 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  return a2;
}
