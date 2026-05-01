/*
 * XREFs of std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___ @ 0x1800187BC
 * Callers:
 *     ?GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GameProperty_t@2@PEAPEAUHSTRING__@@@Z @ 0x180015CBC (-GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GamePro.c)
 * Callees:
 *     ?_Xlength@?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@CAXXZ @ 0x18000D04C (-_Xlength@-$vector@V-$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180042F64 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180043320 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x180043A5E (memset_0.c)
 *     memmove_0 @ 0x1800443BF (memmove_0.c)
 */

unsigned __int64 __fastcall std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___(
        const void **a1,
        unsigned __int64 a2)
{
  char *v4; // rcx
  unsigned __int64 v5; // r15
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rdx
  const struct std::nothrow_t *v8; // rbx
  size_t v9; // rcx
  void *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rdi
  _QWORD *v14; // rax
  char *v15; // rsi
  char *v16; // rcx
  const struct std::nothrow_t *v17; // rdx
  char *v18; // r8
  char *v19; // rcx
  char *v20; // rbx

  v4 = (char *)*a1;
  v5 = (_BYTE *)a1[1] - v4;
  result = (_BYTE *)a1[2] - v4;
  if ( a2 <= result )
  {
    if ( a2 <= v5 )
    {
      if ( a2 != v5 )
      {
        result = (unsigned __int64)&v4[a2];
        a1[1] = &v4[a2];
      }
    }
    else
    {
      v20 = &v4[a2];
      result = (unsigned __int64)memset_0((void *)a1[1], 0, &v4[a2] - (_BYTE *)a1[1]);
      a1[1] = v20;
    }
  }
  else
  {
    if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
      std::vector<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::_Xlength();
    v7 = result >> 1;
    if ( result <= 0x7FFFFFFFFFFFFFFFLL - (result >> 1) )
    {
      v8 = (const struct std::nothrow_t *)(v7 + result);
      if ( v7 + result < a2 )
        v8 = (const struct std::nothrow_t *)a2;
    }
    else
    {
      v8 = (const struct std::nothrow_t *)a2;
    }
    if ( (unsigned __int64)v8 < 0x1000 )
    {
      if ( v8 )
      {
        v14 = operator new((size_t)v8);
        v13 = v14;
      }
      else
      {
        v13 = 0LL;
      }
    }
    else
    {
      v9 = (size_t)v8 + 39;
      if ( (const struct std::nothrow_t *)((char *)v8 + 39) < v8 )
        v9 = -1LL;
      v10 = operator new(v9);
      if ( !v10 )
      {
        _o__invalid_parameter_noinfo_noreturn(v12, v11);
        __debugbreak();
      }
      v13 = (_QWORD *)(((unsigned __int64)v10 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *(v13 - 1) = v10;
    }
    try
    {
      v15 = (char *)v13 + a2;
      memset_0((char *)v13 + v5, 0, v15 - ((char *)v13 + v5));
      memmove_0(v13, *a1, (_BYTE *)a1[1] - (_BYTE *)*a1);
      v16 = (char *)*a1;
      if ( *a1 )
      {
        v17 = (const struct std::nothrow_t *)((_BYTE *)a1[2] - v16);
        if ( (unsigned __int64)v17 >= 0x1000 )
        {
          v17 = (const struct std::nothrow_t *)((char *)v17 + 39);
          v18 = (char *)*((_QWORD *)v16 - 1);
          v19 = (char *)(v16 - v18);
          if ( (unsigned __int64)(v19 - 8) > 0x1F )
          {
            _o__invalid_parameter_noinfo_noreturn(v19, v17);
            __debugbreak();
          }
          v16 = v18;
        }
        operator delete(v16, v17);
      }
      *a1 = v13;
      a1[1] = v15;
      result = (unsigned __int64)v8 + (_QWORD)v13;
      a1[2] = (char *)v8 + (_QWORD)v13;
    }
    catch ( ... )
    {
      std::allocator<unsigned char>::deallocate((__int64)v16, v13, v8);
      throw;
    }
  }
  return result;
}
