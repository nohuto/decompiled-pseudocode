/*
 * XREFs of std::vector_DISPLAYCONFIG_PATH_INFO_std::allocator_DISPLAYCONFIG_PATH_INFO___::_Resize__lambda_de503bca2ec23f17d3532137bfe816e6___ @ 0x1801B67DC
 * Callers:
 *     CalculateDisplayBlankTime @ 0x1801B6DA0 (CalculateDisplayBlankTime.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180078318 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     memmove_0 @ 0x1800EC557 (memmove_0.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18015B1EC (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Change_array@?$vector@UDISPLAYCONFIG_PATH_INFO@@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@AEAAXQEAUDISPLAYCONFIG_PATH_INFO@@_K1@Z @ 0x1801B81F8 (-_Change_array@-$vector@UDISPLAYCONFIG_PATH_INFO@@V-$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@.c)
 */

__int64 __fastcall std::vector_DISPLAYCONFIG_PATH_INFO_std::allocator_DISPLAYCONFIG_PATH_INFO___::_Resize__lambda_de503bca2ec23f17d3532137bfe816e6___(
        __int64 a1,
        unsigned __int64 a2)
{
  _BYTE *v2; // rdi
  _BYTE *v4; // r9
  const char *v6; // rcx
  __int64 result; // rax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  SIZE_T v12; // rcx
  char *v13; // r15
  unsigned __int64 v14; // rbx
  size_t v15; // rbx

  v2 = *(_BYTE **)(a1 + 8);
  v4 = *(_BYTE **)a1;
  v6 = (const char *)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1);
  result = (unsigned __int64)((unsigned __int128)((__int64)v6 * (__int128)0xE38E38E38E38E39LL) >> 64) >> 63;
  v8 = (v2 - v4) / 72;
  v9 = (__int64)v6 / 72;
  if ( a2 <= (__int64)v6 / 72 )
  {
    if ( a2 <= v8 )
    {
      if ( a2 != v8 )
      {
        result = 9 * a2;
        *(_QWORD *)(a1 + 8) = &v4[72 * a2];
      }
    }
    else
    {
      v14 = a2 - v8;
      if ( v14 )
      {
        v15 = 72 * v14;
        result = (__int64)memset_0(v2, 0, v15);
        v2 += v15;
      }
      *(_QWORD *)(a1 + 8) = v2;
    }
  }
  else
  {
    if ( a2 > 0x38E38E38E38E38ELL )
      std::_Xlength_error(v6);
    v10 = v9 >> 1;
    if ( v9 <= 0x38E38E38E38E38ELL - (v9 >> 1) )
    {
      v11 = v10 + v9;
      if ( v10 + v9 < a2 )
        v11 = a2;
    }
    else
    {
      v11 = a2;
    }
    v12 = 72 * v11;
    if ( v11 > 0x38E38E38E38E38ELL )
      v12 = -1LL;
    v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
    if ( a2 != v8 )
      memset_0(&v13[72 * v8], 0, 72 * (a2 - v8));
    memmove_0(v13, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    return std::vector<DISPLAYCONFIG_PATH_INFO>::_Change_array(a1, v13, a2, v11);
  }
  return result;
}
