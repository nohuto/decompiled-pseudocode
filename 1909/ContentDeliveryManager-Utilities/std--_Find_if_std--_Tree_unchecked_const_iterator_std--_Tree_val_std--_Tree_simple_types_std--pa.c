/*
 * XREFs of std::_Find_if_std::_Tree_unchecked_const_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short__________std::_Iterator_base0___lambda_30b10436083aba01be8f7c4a25a13343___ @ 0x180043AFC
 * Callers:
 *     ?AreSubscriptionContextsEqual@SubscribedContentStore@CreativeFramework@@YA_NAEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@0@Z @ 0x18003E674 (-AreSubscriptionContextsEqual@SubscribedContentStore@CreativeFramework@@YA_NAEBV-$map@V-$basic_s.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180032230 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
void ***__fastcall std::_Find_if_std::_Tree_unchecked_const_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short__________std::_Iterator_base0___lambda_30b10436083aba01be8f7c4a25a13343___(
        void ***a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4)
{
  void **v6; // rbx
  const WCHAR *v8; // r8
  const WCHAR *v9; // rcx
  const WCHAR *v10; // r8
  const WCHAR *v11; // rcx
  char v12; // si
  void ***v13; // rax
  void **j; // rcx
  void **i; // rax
  LPCWCH lpString2[3]; // [rsp+38h] [rbp-39h] BYREF
  unsigned __int64 v18; // [rsp+50h] [rbp-21h]
  LPCWCH v19[2]; // [rsp+58h] [rbp-19h] BYREF
  __int64 v20; // [rsp+68h] [rbp-9h]
  unsigned __int64 v21; // [rsp+70h] [rbp-1h]
  __int64 v22; // [rsp+78h] [rbp+7h]
  LPCWCH *v23; // [rsp+80h] [rbp+Fh]
  __int64 v24; // [rsp+88h] [rbp+17h]

  v22 = -2LL;
  v6 = (void **)a2;
  v24 = a4;
  if ( a2 != a3 )
  {
    do
    {
      v23 = lpString2;
      v18 = 7LL;
      lpString2[2] = 0LL;
      LOWORD(lpString2[0]) = 0;
      std::wstring::assign((void **)lpString2, v6 + 4, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
      v21 = 7LL;
      v20 = 0LL;
      LOWORD(v19[0]) = 0;
      std::wstring::assign((void **)v19, v6 + 8, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
      v8 = (const WCHAR *)lpString2;
      if ( v18 >= 8 )
        v8 = lpString2[0];
      if ( *(_QWORD *)(a4 + 24) < 8uLL )
        v9 = (const WCHAR *)a4;
      else
        v9 = *(const WCHAR **)a4;
      if ( CompareStringOrdinal(v9, -1, v8, -1, 1) != 2 )
        goto LABEL_13;
      v10 = (const WCHAR *)v19;
      if ( v21 >= 8 )
        v10 = v19[0];
      v11 = (const WCHAR *)(a4 + 32);
      if ( *(_QWORD *)(a4 + 56) >= 8uLL )
        v11 = *(const WCHAR **)v11;
      v12 = 1;
      if ( CompareStringOrdinal(v11, -1, v10, -1, 1) != 2 )
LABEL_13:
        v12 = 0;
      if ( v21 >= 8 )
        operator delete((void *)v19[0]);
      v21 = 7LL;
      v20 = 0LL;
      LOWORD(v19[0]) = 0;
      if ( v18 >= 8 )
        operator delete((void *)lpString2[0]);
      if ( v12 )
        break;
      if ( !*((_BYTE *)v6 + 25) )
      {
        v13 = (void ***)v6[2];
        if ( *((_BYTE *)v13 + 25) )
        {
          for ( i = (void **)v6[1]; !*((_BYTE *)i + 25) && v6 == i[2]; i = (void **)i[1] )
            v6 = i;
          v6 = i;
        }
        else
        {
          v6 = (void **)v6[2];
          for ( j = *v13; !*((_BYTE *)j + 25); j = (void **)*j )
            v6 = j;
        }
      }
    }
    while ( v6 != (void **)a3 );
  }
  *a1 = v6;
  if ( *(_QWORD *)(a4 + 56) >= 8uLL )
    operator delete(*(void **)(a4 + 32));
  *(_QWORD *)(a4 + 56) = 7LL;
  *(_QWORD *)(a4 + 48) = 0LL;
  *(_WORD *)(a4 + 32) = 0;
  if ( *(_QWORD *)(a4 + 24) >= 8uLL )
    operator delete(*(void **)a4);
  *(_QWORD *)(a4 + 24) = 7LL;
  *(_QWORD *)(a4 + 16) = 0LL;
  *(_WORD *)a4 = 0;
  return a1;
}
