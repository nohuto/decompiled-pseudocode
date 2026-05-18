/*
 * XREFs of sub_180034140 @ 0x180034140
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A840 @ 0x18006A840 (sub_18006A840.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180034140(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = sub_18006A840();
  v3 = *(_QWORD *)(a1 + 144);
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 880LL))(v3);
  return result;
}
