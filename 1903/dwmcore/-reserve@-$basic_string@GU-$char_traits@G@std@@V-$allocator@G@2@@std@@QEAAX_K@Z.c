/*
 * XREFs of ?reserve@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K@Z @ 0x18015A028
 * Callers:
 *     ?GetContainerAddress@CCommonRegistryData@@SA?AU_GUID@@XZ @ 0x180159EB0 (-GetContainerAddress@CCommonRegistryData@@SA-AU_GUID@@XZ.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@AEBV10@0@Z @ 0x180173BC4 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800EC54B (memcpy_0.c)
 *     std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_7f96eb1dcf99da5daec8c2467d2d5499___ @ 0x180159DDC (std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_un_ea_180159DDC.c)
 */

void __fastcall std::wstring::reserve(void **a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rsi
  void *v4; // rbx

  v2 = (unsigned __int64)a1[2];
  if ( v2 <= a2 && a1[3] != (void *)a2 )
  {
    if ( (unsigned __int64)a1[3] >= a2 )
    {
      if ( a2 < 8 && (unsigned __int64)a1[3] >= 8 )
      {
        v4 = *a1;
        memcpy_0(a1, *a1, 2 * v2 + 2);
        std::_Deallocate<16,0>(v4, 2LL * (_QWORD)a1[3] + 2);
        a1[3] = (void *)7;
      }
    }
    else
    {
      std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_7f96eb1dcf99da5daec8c2467d2d5499___(
        (char *)a1,
        a2 - v2);
      a1[2] = (void *)v2;
    }
  }
}
