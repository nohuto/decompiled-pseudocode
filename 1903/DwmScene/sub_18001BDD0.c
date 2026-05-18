/*
 * XREFs of sub_18001BDD0 @ 0x18001BDD0
 * Callers:
 *     sub_18001C378 @ 0x18001C378 (sub_18001C378.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001BDD0(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rcx

  v4 = *a1;
  if ( v4 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return sub_18001BD24(a1, a2);
}
