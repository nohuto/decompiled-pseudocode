/*
 * XREFs of ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18019E9EC
 * Callers:
 *     ?PackageFamilyNameToAppId@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1800A8408 (-PackageFamilyNameToAppId@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$basic_string@GU-$char_.c)
 *     ?EnsureActivationArgs@CJumpViewExperienceManager@@AEAAJXZ @ 0x18019BCE0 (-EnsureActivationArgs@CJumpViewExperienceManager@@AEAAJXZ.c)
 *     ?_GenerateAumIdForView@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@CA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUIWin32ApplicationView@@@Z @ 0x180215510 (-_GenerateAumIdForView@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@CA-AV-$basic_.c)
 *     _lambda_961dfd5ca30ced7f152f1faecc2cc684_::operator() @ 0x180250E9C (_lambda_961dfd5ca30ced7f152f1faecc2cc684_--operator().c)
 *     ?OnInputAppChangeApproved@TouchKeyboardExperienceManager@@QEAAJPEBG@Z @ 0x180311BE4 (-OnInputAppChangeApproved@TouchKeyboardExperienceManager@@QEAAJPEBG@Z.c)
 *     ?GetDefaultInputAppId@TabTipAdapter@KeyboardHosting@@SAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180320310 (-GetDefaultInputAppId@TabTipAdapter@KeyboardHosting@@SAJAEAV-$basic_string@GU-$char_traits@G@std.c)
 * Callees:
 *     memmove_0 @ 0x1800B0F63 (memmove_0.c)
 *     std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_7030d12a21dba11210293044e97fe9c7__unsigned_short_const___unsigned___int64_ @ 0x18019A7B4 (std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_un_ea_18019A7B4.c)
 */

void **__fastcall std::wstring::append(void **Src, const void *a2, unsigned __int64 a3)
{
  void *v4; // rcx
  bool v5; // cf
  __int64 v6; // rsi
  _QWORD *v7; // rdi

  v4 = Src[2];
  if ( a3 > (_BYTE *)Src[3] - (_BYTE *)v4 )
    return std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_7030d12a21dba11210293044e97fe9c7__unsigned_short_const___unsigned___int64_(
             Src,
             a3,
             a3,
             a2,
             a3);
  v5 = (unsigned __int64)Src[3] < 8;
  v6 = (__int64)v4 + a3;
  Src[2] = (char *)v4 + a3;
  v7 = Src;
  if ( !v5 )
    v7 = *Src;
  memmove_0((char *)v7 + 2 * (_QWORD)v4, a2, 2 * a3);
  *((_WORD *)v7 + v6) = 0;
  return Src;
}
