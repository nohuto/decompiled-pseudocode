/*
 * XREFs of ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180174678
 * Callers:
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@AEBV10@0@Z @ 0x180172474 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-.c)
 *     ?SaveTextureFromSource@CDebugTreeDumper@@AEAAJPEAUID3D11Texture2D@@IPEAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180173EF8 (-SaveTextureFromSource@CDebugTreeDumper@@AEAAJPEAUID3D11Texture2D@@IPEAXPEAV-$basic_string@GU-$c.c)
 * Callees:
 *     memmove_0 @ 0x1800F0217 (memmove_0.c)
 *     std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_7030d12a21dba11210293044e97fe9c7__unsigned_short_const___unsigned___int64_ @ 0x180173624 (std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_un_ea_180173624.c)
 */

char *__fastcall std::wstring::append(char *Src, const void *a2, unsigned __int64 a3)
{
  __int64 v4; // rcx
  bool v5; // cf
  __int64 v6; // rsi
  _QWORD *v7; // rdi

  v4 = *((_QWORD *)Src + 2);
  if ( a3 > *((_QWORD *)Src + 3) - v4 )
    return std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_7030d12a21dba11210293044e97fe9c7__unsigned_short_const___unsigned___int64_(
             Src,
             a3,
             a3,
             a2,
             a3);
  v5 = *((_QWORD *)Src + 3) < 8uLL;
  v6 = v4 + a3;
  *((_QWORD *)Src + 2) = v4 + a3;
  v7 = Src;
  if ( !v5 )
    v7 = *(_QWORD **)Src;
  memmove_0((char *)v7 + 2 * v4, a2, 2 * a3);
  *((_WORD *)v7 + v6) = 0;
  return Src;
}
