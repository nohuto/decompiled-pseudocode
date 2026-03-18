/*
 * XREFs of std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_for__lambda_05cef1f6fdf474c9f3ed207deba0f73b__unsigned_short_const___ @ 0x140006964
 * Callers:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x140006A4C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     BlackScreenDiagnostics::GetCurrentProcessVersionInfo @ 0x140006CA0 (BlackScreenDiagnostics--GetCurrentProcessVersionInfo.c)
 *     ?Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFlags@2@@Z @ 0x140007BC0 (-Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFla.c)
 * Callees:
 *     memcpy_0 @ 0x140004A67 (memcpy_0.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1400068C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x140006928 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x1400090C4 (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_for__lambda_05cef1f6fdf474c9f3ed207deba0f73b__unsigned_short_const___(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        const void *a4)
{
  __int64 v4; // rbx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  size_t v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rbp

  v4 = 0x7FFFFFFFFFFFFFFELL;
  if ( a2 > 0x7FFFFFFFFFFFFFFELL )
    std::_Xlength_error((const char *)a1);
  v8 = *(_QWORD *)(a1 + 24);
  v9 = a2 | 7;
  if ( (a2 | 7) <= 0x7FFFFFFFFFFFFFFELL )
  {
    v10 = v8 >> 1;
    if ( v8 <= 0x7FFFFFFFFFFFFFFELL - (v8 >> 1) )
    {
      v4 = v10 + v8;
      if ( v9 >= v10 + v8 )
        v4 = a2 | 7;
    }
  }
  v11 = 2 * (v4 + 1);
  if ( (unsigned __int64)(v4 + 1) > 0x7FFFFFFFFFFFFFFFLL )
    v11 = -1LL;
  v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(v11);
  *(_QWORD *)(a1 + 24) = v4;
  *(_QWORD *)(a1 + 16) = a2;
  v13 = v12;
  memcpy_0(v12, a4, 2 * a2);
  *((_WORD *)v13 + a2) = 0;
  if ( v8 >= 8 )
    std::_Deallocate<16,0>(*(char **)a1, 2 * v8 + 2);
  *(_QWORD *)a1 = v13;
  return a1;
}
