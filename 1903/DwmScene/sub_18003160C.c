/*
 * XREFs of sub_18003160C @ 0x18003160C
 * Callers:
 *     sub_180036F30 @ 0x180036F30 (sub_180036F30.c)
 * Callees:
 *     sub_1800302F4 @ 0x1800302F4 (sub_1800302F4.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_18003160C(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rcx

  sub_1800302F4(a1);
  v4 = a1[20];
  *a2 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  return a2;
}
