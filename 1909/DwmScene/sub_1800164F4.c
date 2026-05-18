/*
 * XREFs of sub_1800164F4 @ 0x1800164F4
 * Callers:
 *     sub_1800184F0 @ 0x1800184F0 (sub_1800184F0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800164F4(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rcx

  v4 = *a1;
  if ( v4 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return sub_180016448(a1, a2);
}
