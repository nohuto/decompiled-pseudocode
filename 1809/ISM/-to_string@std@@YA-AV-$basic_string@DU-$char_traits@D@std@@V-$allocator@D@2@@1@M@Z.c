/*
 * XREFs of ?to_string@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@M@Z @ 0x180101B4C
 * Callers:
 *     ?GetVector3AsString@ISMTracing@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAUVector3@Numerics@Foundation@Windows@@@Z @ 0x180101C94 (-GetVector3AsString@ISMTracing@@SA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std.c)
 * Callees:
 *     std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_for__lambda_138c3d7c38c85abb84c7fc7bfe5747b7__char_ @ 0x1801018A8 (std--basic_string_char_std--char_traits_char__std--allocator_char___--_Reallocate_for__lambda_13.c)
 *     std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_e1befb086ad3257e3f042a63030725f7__unsigned___int64_char_ @ 0x1801019D8 (std--basic_string_char_std--char_traits_char__std--allocator_char___--_Reallocate_g_ea_1801019D8.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     sprintf_s @ 0x18012C4F8 (sprintf_s.c)
 *     _scprintf @ 0x18012C550 (_scprintf.c)
 */

// Hidden C++ exception states: #wind=1
char **__fastcall std::to_string(char **Src, float a2)
{
  int v3; // eax
  char *v4; // rbp
  int v5; // eax
  size_t v6; // rbx
  char *v7; // rsi
  char *v8; // rcx
  char *v9; // rdx
  char *v10; // rax
  signed __int64 v11; // rsi
  unsigned __int64 v12; // r8
  void *v13; // rax
  char *v14; // rbx

  v3 = scprintf("%f", a2);
  v4 = (char *)v3;
  v5 = v3 + 1;
  v6 = v5;
  Src[2] = 0LL;
  Src[3] = (char *)15;
  *(_BYTE *)Src = 0;
  if ( v5 > (unsigned __int64)Src[3] )
  {
    std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_for__lambda_138c3d7c38c85abb84c7fc7bfe5747b7__char_(
      Src,
      v5);
  }
  else
  {
    v7 = (char *)Src;
    if ( (unsigned __int64)Src[3] >= 0x10 )
      v7 = *Src;
    Src[2] = (char *)v5;
    memset_0(v7, 0, v5);
    v7[v6] = 0;
  }
  v8 = (char *)Src;
  if ( (unsigned __int64)Src[3] >= 0x10 )
    v8 = *Src;
  sprintf_s(v8, v6, "%f", a2);
  v9 = Src[2];
  if ( v4 > v9 )
  {
    v11 = v4 - v9;
    v12 = (unsigned __int64)Src[3];
    if ( v4 - v9 > v12 - (unsigned __int64)v9 )
    {
      std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_e1befb086ad3257e3f042a63030725f7__unsigned___int64_char_(
        Src,
        v4 - v9,
        v12,
        v4 - v9);
    }
    else
    {
      Src[2] = v4;
      v13 = Src;
      if ( v12 >= 0x10 )
        v13 = *Src;
      v14 = &v9[(_QWORD)v13];
      memset_0(&v9[(_QWORD)v13], 0, v4 - v9);
      v14[v11] = 0;
    }
  }
  else
  {
    Src[2] = v4;
    v10 = (char *)Src;
    if ( (unsigned __int64)Src[3] >= 0x10 )
      v10 = *Src;
    v4[(_QWORD)v10] = 0;
  }
  return Src;
}
