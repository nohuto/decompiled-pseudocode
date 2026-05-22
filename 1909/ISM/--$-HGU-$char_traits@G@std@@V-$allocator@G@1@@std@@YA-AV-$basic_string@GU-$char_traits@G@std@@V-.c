/*
 * XREFs of ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEBGAEBV10@@Z @ 0x180087930
 * Callers:
 *     ?GetConstantNamesString@MPCConstantManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4InputType@@@Z @ 0x1800897D8 (-GetConstantNamesString@MPCConstantManager@@AEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$allo.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x18003787F (memcpy_0.c)
 *     std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_7f96eb1dcf99da5daec8c2467d2d5499___ @ 0x180088478 (std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_un_ea_180088478.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18008B600 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::operator+<unsigned short>(_QWORD *Src, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rbp
  void *v6; // rbx

  Src[2] = 0LL;
  Src[3] = 7LL;
  *(_WORD *)Src = 0;
  v4 = *(_QWORD *)(a3 + 16) + 1LL;
  v5 = Src[2];
  if ( v5 <= v4 && Src[3] != v4 )
  {
    if ( Src[3] >= v4 )
    {
      if ( v4 < 8 && Src[3] >= 8uLL )
      {
        v6 = (void *)*Src;
        memcpy_0(Src, (const void *)*Src, 2 * v5 + 2);
        std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)(2LL * Src[3] + 2));
        Src[3] = 7LL;
      }
    }
    else
    {
      std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_7f96eb1dcf99da5daec8c2467d2d5499___(Src);
      Src[2] = v5;
    }
  }
  std::wstring::append(Src);
  std::wstring::append(Src);
  return Src;
}
