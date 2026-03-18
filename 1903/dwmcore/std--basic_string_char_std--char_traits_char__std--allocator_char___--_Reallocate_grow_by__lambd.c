/*
 * XREFs of std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_319d5e083f45f90dcdce5dce53cbb275__char_ @ 0x1800C78F8
 * Callers:
 *     ?AppendVarInt@Base853Encoder@@QEAAXI@Z @ 0x18007CF60 (-AppendVarInt@Base853Encoder@@QEAAXI@Z.c)
 *     ?push_back@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXD@Z @ 0x18007D1F8 (-push_back@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXD@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180078318 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA_K_K@Z @ 0x1800C79D0 (-_Calculate_growth@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEBA_K_K@Z.c)
 *     memcpy_0 @ 0x1800EC54B (memcpy_0.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18015B1EC (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

char *__fastcall std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_319d5e083f45f90dcdce5dce53cbb275__char_(
        char *Src,
        __int64 a2,
        __int64 a3,
        char a4)
{
  size_t v4; // rbp
  unsigned __int64 v7; // r13
  __int64 v8; // rbx
  _BYTE *v9; // rax
  _BYTE *v10; // r14
  void *v11; // rbx

  v4 = *((_QWORD *)Src + 2);
  if ( v4 == 0x7FFFFFFFFFFFFFFFLL )
    std::_Xlength_error(Src);
  v7 = *((_QWORD *)Src + 3);
  v8 = std::string::_Calculate_growth(Src, v4 + 1);
  v9 = (_BYTE *)std::_Allocate<16,std::_Default_allocate_traits,0>(v8 + 1);
  *((_QWORD *)Src + 2) = v4 + 1;
  v10 = v9;
  *((_QWORD *)Src + 3) = v8;
  if ( v7 < 0x10 )
  {
    memcpy_0(v9, Src, v4);
    v10[v4] = a4;
    v10[v4 + 1] = 0;
  }
  else
  {
    v11 = *(void **)Src;
    memcpy_0(v9, *(const void **)Src, v4);
    v10[v4] = a4;
    v10[v4 + 1] = 0;
    std::_Deallocate<16,0>(v11, v7 + 1);
  }
  *(_QWORD *)Src = v10;
  return Src;
}
