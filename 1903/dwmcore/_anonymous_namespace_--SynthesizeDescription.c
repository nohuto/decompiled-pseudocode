/*
 * XREFs of _anonymous_namespace_::SynthesizeDescription @ 0x18001F94C
 * Callers:
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x180099900 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::GetExpressionTypeString @ 0x18001F9F4 (_anonymous_namespace_--GetExpressionTypeString.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x1800327FC (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     swprintf_s @ 0x1800E801C (swprintf_s.c)
 */

__int64 __fastcall anonymous_namespace_::SynthesizeDescription(__int64 a1, __int64 a2)
{
  __int64 ExpressionTypeString; // rax
  __int64 v4; // rdx
  int v5; // r8d
  int v6; // eax
  wchar_t *v7; // rdx
  int v9; // [rsp+28h] [rbp-F0h]
  wchar_t Buffer[104]; // [rsp+30h] [rbp-E8h] BYREF

  ExpressionTypeString = anonymous_namespace_::GetExpressionTypeString(
                           *(unsigned int *)(a2 + 144),
                           a2,
                           *(unsigned int *)(a2 + 184));
  v9 = v5;
  v6 = swprintf_s(Buffer, 0x64uLL, L"%s::%s::%d", off_1802716C0[*(int *)(v4 + 204)], ExpressionTypeString, v9);
  if ( v6 < 0 || (v7 = Buffer, (unsigned __int64)v6 > 0x64) )
    v7 = L"::ERROR::";
  std::wstring::wstring(a1, v7);
  return a1;
}
