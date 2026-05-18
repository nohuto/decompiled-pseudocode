/*
 * XREFs of sub_180034250 @ 0x180034250
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A950 @ 0x18006A950 (sub_18006A950.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180034250(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = sub_18006A950();
  v3 = *(_QWORD *)(a1 + 144);
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 880LL))(v3);
  return result;
}
