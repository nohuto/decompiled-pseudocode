/*
 * XREFs of sub_180013A10 @ 0x180013A10
 * Callers:
 *     sub_180013C00 @ 0x180013C00 (sub_180013C00.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180013A10(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rcx

  v4 = *a1;
  if ( v4 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return sub_180013978(a1, a2);
}
