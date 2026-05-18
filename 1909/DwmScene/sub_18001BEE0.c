/*
 * XREFs of sub_18001BEE0 @ 0x18001BEE0
 * Callers:
 *     sub_18001C488 @ 0x18001C488 (sub_18001C488.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001BEE0(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rcx

  v4 = *a1;
  if ( v4 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return sub_18001BE34(a1, a2);
}
