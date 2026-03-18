/*
 * XREFs of ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x140006A4C
 * Callers:
 *     BlackScreenDiagnostics::GetCurrentProcessVersionInfo @ 0x140006CA0 (BlackScreenDiagnostics--GetCurrentProcessVersionInfo.c)
 *     ?Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFlags@2@@Z @ 0x140007BC0 (-Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFla.c)
 * Callees:
 *     memmove_0 @ 0x140004A73 (memmove_0.c)
 *     std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_for__lambda_05cef1f6fdf474c9f3ed207deba0f73b__unsigned_short_const___ @ 0x140006964 (std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_unsigned_short_.c)
 */

char *__fastcall std::wstring::wstring(char *a1, _WORD *Src, __int64 a3)
{
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  char *v7; // rsi
  __int64 v8; // rbx

  *((_QWORD *)a1 + 3) = 7LL;
  *((_QWORD *)a1 + 2) = 0LL;
  *(_WORD *)a1 = 0;
  v5 = -1LL;
  do
    ++v5;
  while ( Src[v5] );
  v6 = *((_QWORD *)a1 + 3);
  if ( v5 > v6 )
  {
    std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_for__lambda_05cef1f6fdf474c9f3ed207deba0f73b__unsigned_short_const___(
      (__int64)a1,
      v5,
      a3,
      Src);
  }
  else
  {
    v7 = a1;
    if ( v6 >= 8 )
      v7 = *(char **)a1;
    v8 = 2 * v5;
    *((_QWORD *)a1 + 2) = v5;
    memmove_0(v7, Src, 2 * v5);
    *(_WORD *)&v7[v8] = 0;
  }
  return a1;
}
