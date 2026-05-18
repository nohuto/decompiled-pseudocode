/*
 * XREFs of sub_180068740 @ 0x180068740
 * Callers:
 *     sub_18002AA60 @ 0x18002AA60 (sub_18002AA60.c)
 * Callees:
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x1801273F8 (-_Xbad_function_call@std@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180068740(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 128);
  v2 = *(_QWORD *)(a1 + 136);
  while ( v1 != v2 )
  {
    v3 = *(_QWORD *)(v1 + 56);
    if ( !v3 )
    {
      std::_Xbad_function_call();
      JUMPOUT(0x180068789LL);
    }
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    v1 += 64LL;
  }
  return result;
}
