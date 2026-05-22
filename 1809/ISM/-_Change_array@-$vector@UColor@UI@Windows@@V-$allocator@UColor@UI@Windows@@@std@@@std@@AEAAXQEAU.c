/*
 * XREFs of ?_Change_array@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXQEAUColor@UI@Windows@@_K1@Z @ 0x180076214
 * Callers:
 *     ?_Reallocate_exactly@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAX_K@Z @ 0x18007614C (-_Reallocate_exactly@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEA.c)
 *     ??$_Emplace_reallocate@AEBUColor@UI@Windows@@@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAAPEAUColor@UI@Windows@@QEAU234@AEBU234@@Z @ 0x1800762A4 (--$_Emplace_reallocate@AEBUColor@UI@Windows@@@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI.c)
 *     std::vector_Windows::UI::Color_std::allocator_Windows::UI::Color___::_Resize__lambda_c948d9edf99f5fb7aad0043553e8ab01___ @ 0x180076404 (std--vector_Windows--UI--Color_std--allocator_Windows--UI--Color___--_Resize__lambda_c948d9edf99.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall std::vector<Windows::UI::Color>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *v6; // rcx
  const struct std::nothrow_t *v9; // rdx
  char *v10; // r8
  char *v11; // rcx
  __int64 result; // rax

  v6 = *(char **)a1;
  if ( v6 )
  {
    v9 = (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFFCuLL);
    if ( (unsigned __int64)v9 >= 0x1000 )
    {
      v10 = (char *)*((_QWORD *)v6 - 1);
      v9 = (const struct std::nothrow_t *)((char *)v9 + 39);
      v11 = (char *)(v6 - v10);
      if ( (unsigned __int64)(v11 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v11, v9);
        JUMPOUT(0x18007629BLL);
      }
      v6 = v10;
    }
    operator delete(v6, v9);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 4 * a3;
  result = a2 + 4 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
