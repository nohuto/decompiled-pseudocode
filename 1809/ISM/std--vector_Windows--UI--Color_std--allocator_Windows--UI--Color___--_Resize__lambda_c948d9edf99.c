/*
 * XREFs of std::vector_Windows::UI::Color_std::allocator_Windows::UI::Color___::_Resize__lambda_c948d9edf99f5fb7aad0043553e8ab01___ @ 0x180076404
 * Callers:
 *     ?Initialize@LampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800740AC (-Initialize@LampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008CD8 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ?_Change_array@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXQEAUColor@UI@Windows@@_K1@Z @ 0x180076214 (-_Change_array@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXQEAU.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x18012DB6B (memmove_0.c)
 */

char *__fastcall std::vector_Windows::UI::Color_std::allocator_Windows::UI::Color___::_Resize__lambda_c948d9edf99f5fb7aad0043553e8ab01___(
        __int64 a1,
        unsigned __int64 a2)
{
  char *v4; // rdi
  char *result; // rax
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rsi
  size_t v10; // rax
  size_t v11; // rcx
  void *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rdi
  _QWORD *v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // rbx

  v4 = *(char **)(a1 + 8);
  result = *(char **)a1;
  v6 = (__int64)&v4[-*(_QWORD *)a1] >> 2;
  v7 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 2;
  if ( a2 <= v7 )
  {
    if ( a2 <= v6 )
    {
      if ( a2 != v6 )
      {
        result += 4 * a2;
        *(_QWORD *)(a1 + 8) = result;
      }
    }
    else
    {
      v18 = a2 - v6;
      if ( a2 != v6 )
      {
        result = (char *)memset_0(v4, 0, 4 * v18);
        v4 += 4 * v18;
      }
      *(_QWORD *)(a1 + 8) = v4;
    }
  }
  else
  {
    if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
      std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
    v8 = v7 >> 1;
    if ( v7 <= 0x3FFFFFFFFFFFFFFFLL - (v7 >> 1) )
    {
      v9 = v8 + v7;
      if ( v8 + v7 < a2 )
        v9 = a2;
    }
    else
    {
      v9 = a2;
    }
    v10 = 4 * v9;
    if ( v9 > 0x3FFFFFFFFFFFFFFFLL )
      v10 = -1LL;
    if ( v10 < 0x1000 )
    {
      v15 = 0LL;
      if ( v10 )
      {
        v16 = operator new(v10);
        v15 = v16;
      }
    }
    else
    {
      v11 = v10 + 39;
      if ( v10 + 39 < v10 )
        v11 = -1LL;
      v12 = operator new(v11);
      if ( !v12 )
      {
        _o__invalid_parameter_noinfo_noreturn(v14, v13);
        __debugbreak();
      }
      v15 = (_QWORD *)(((unsigned __int64)v12 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *(v15 - 1) = v12;
    }
    try
    {
      if ( a2 != v6 )
        memset_0((char *)v15 + 4 * v6, 0, 4 * (a2 - v6));
      memmove_0(v15, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
      result = (char *)std::vector<Windows::UI::Color>::_Change_array(a1, (__int64)v15, a2, v9);
    }
    catch ( ... )
    {
      std::allocator<enum Windows::Gaming::Input::GamepadButtons>::deallocate(v17, v15, v9);
      throw;
    }
  }
  return result;
}
