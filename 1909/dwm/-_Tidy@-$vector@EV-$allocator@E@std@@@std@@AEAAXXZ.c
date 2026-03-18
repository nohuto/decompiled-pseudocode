/*
 * XREFs of ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x1400083C4
 * Callers:
 *     BlackScreenDiagnostics::GetCurrentProcessVersionInfo @ 0x140006CA0 (BlackScreenDiagnostics--GetCurrentProcessVersionInfo.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x140006928 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<unsigned char>::_Tidy(__int64 a1)
{
  char *v2; // rcx
  __int64 result; // rax

  v2 = *(char **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, *(_QWORD *)(a1 + 16) - (_QWORD)v2);
    result = 0LL;
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
