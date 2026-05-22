/*
 * XREFs of ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@0@Z @ 0x1801014C4
 * Callers:
 *     ?GetVector3AsString@ISMTracing@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAUVector3@Numerics@Foundation@Windows@@@Z @ 0x180101C94 (-GetVector3AsString@ISMTracing@@SA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std.c)
 * Callees:
 *     std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_f3a66ab6a0570788f31503db83886f49__unsigned___int64_char_const_____ptr64_unsigned___int64_ @ 0x180101364 (std--basic_string_char_std--char_traits_char__std--allocator_char___--_Reallocate_grow_by__lambd.c)
 *     std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_65e615be2a453ca0576c979606f46740__char_const_____ptr64_unsigned___int64_ @ 0x18010167C (std--basic_string_char_std--char_traits_char__std--allocator_char___--_Reallocate_g_ea_18010167C.c)
 *     memcpy_0 @ 0x18012DB5F (memcpy_0.c)
 *     memmove_0 @ 0x18012DB6B (memmove_0.c)
 */

__int64 __fastcall std::operator+<char>(__int64 a1, size_t *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  void **v6; // rsi
  size_t v7; // r15
  size_t v8; // rcx
  void **v9; // rdi
  size_t v10; // rax
  void **v11; // r12
  size_t v12; // r13
  size_t v13; // rax
  void *v14; // rbx

  v4 = a2[2];
  v6 = (void **)a3;
  v7 = *(_QWORD *)(a3 + 16);
  v8 = a2[3] - v4;
  v9 = (void **)a2;
  if ( v7 <= v8 || (v10 = *(_QWORD *)(a3 + 24) - v7, v10 < v4) )
  {
    if ( *(_QWORD *)(a3 + 24) >= 0x10uLL )
      v6 = *(void ***)a3;
    if ( v7 > v8 )
    {
      v9 = (void **)std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_65e615be2a453ca0576c979606f46740__char_const_____ptr64_unsigned___int64_(
                      a2,
                      *(_QWORD *)(a3 + 16));
    }
    else
    {
      a2[2] = v4 + v7;
      v13 = (size_t)a2;
      if ( a2[3] >= 0x10 )
        v13 = *a2;
      v14 = (void *)(v13 + v4);
      memmove_0(v14, v6, v7);
      *((_BYTE *)v14 + v7) = 0;
    }
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_OWORD *)a1 = *(_OWORD *)v9;
    *(_OWORD *)(a1 + 16) = *((_OWORD *)v9 + 1);
    v9[2] = 0LL;
    v9[3] = (void *)15;
    *(_BYTE *)v9 = 0;
  }
  else
  {
    if ( a2[3] >= 0x10 )
      v9 = (void **)*a2;
    if ( v4 > v10 )
    {
      v6 = std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_f3a66ab6a0570788f31503db83886f49__unsigned___int64_char_const_____ptr64_unsigned___int64_(
             (void **)a3,
             v4,
             a3,
             a4,
             v9,
             a2[2]);
    }
    else
    {
      v11 = (void **)a3;
      *(_QWORD *)(a3 + 16) = v7 + v4;
      if ( *(_QWORD *)(a3 + 24) >= 0x10uLL )
        v11 = *(void ***)a3;
      if ( (void **)((char *)v9 + v4) <= v11 || v9 > (void **)((char *)v11 + v7) )
      {
        v12 = v4;
      }
      else if ( v11 > v9 )
      {
        v12 = (char *)v11 - (char *)v9;
      }
      else
      {
        v12 = 0LL;
      }
      memmove_0((char *)v11 + v4, v11, v7 + 1);
      memcpy_0(v11, v9, v12);
      memcpy_0((char *)v11 + v12, (char *)v9 + v4 + v12, v4 - v12);
    }
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_OWORD *)a1 = *(_OWORD *)v6;
    *(_OWORD *)(a1 + 16) = *((_OWORD *)v6 + 1);
    v6[2] = 0LL;
    v6[3] = (void *)15;
    *(_BYTE *)v6 = 0;
  }
  return a1;
}
