/*
 * XREFs of ??$destroy@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UHolographicDisplaySnapshot@Holographic@Internal@Windows@@@std@@@?$_Default_allocator_traits@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UHolographicDisplaySnapshot@Holographic@Internal@Windows@@@std@@PEAX@std@@@std@@@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UHolographicDisplaySnapshot@Holographic@Internal@Windows@@@std@@PEAX@std@@@1@QEAU?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UHolographicDisplaySnapshot@Holographic@Internal@Windows@@@1@@Z @ 0x1800A4448
 * Callers:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UHolographicDisplaySnapshot@Holographic@Internal@Windows@@UCaseInsensitiveStringLess@456@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UHolographicDisplaySnapshot@Holographic@Internal@Windows@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UHolographicDisplaySnapshot@Holographic@Internal@Windows@@@std@@PEAX@2@@Z @ 0x1800A42D4 (-_Erase@-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocat_ea_1800A42D4.c)
 *     ??1?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UHolographicDisplaySnapshot@Holographic@Internal@Windows@@UCaseInsensitiveStringLess@456@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UHolographicDisplaySnapshot@Holographic@Internal@Windows@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x1800A4524 (--1-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@UHol.c)
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800278A4 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?_Erase@?$_Tree@V?$_Tset_traits@U?$TimestampedProperty@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Holographic@Internal@Windows@@U?$less@U?$TimestampedProperty@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Holographic@Internal@Windows@@@std@@V?$allocator@U?$TimestampedProperty@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Holographic@Internal@Windows@@@6@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$TimestampedProperty@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Holographic@Internal@Windows@@PEAX@2@@Z @ 0x180049B5C (-_Erase@-$_Tree@V-$_Tset_traits@U-$TimestampedProperty@V-$basic_string@_WU-$char_traits@_W@std@@.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18012C1D0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Default_allocator_traits<std::allocator<std::_Tree_node<std::pair<std::wstring const,Windows::Internal::Holographic::HolographicDisplaySnapshot>,void *>>>::destroy<std::pair<std::wstring const,Windows::Internal::Holographic::HolographicDisplaySnapshot>>(
        __int64 a1,
        _QWORD *a2)
{
  void **v3; // rbx
  _QWORD *v4; // rax
  void **v5; // rsi
  void **v6; // rdi

  `eh vector destructor iterator'(
    a2 + 27,
    0x170uLL,
    2uLL,
    (void (*)(void *))Windows::Internal::Holographic::HolographicDisplaySnapshot::EyeProperty::~EyeProperty);
  v3 = (void **)(a2 + 9);
  v4 = (_QWORD *)a2[9];
  v5 = (void **)v4[1];
  v6 = v5;
  if ( !*((_BYTE *)v5 + 25) )
  {
    do
    {
      std::_Tree<std::_Tset_traits<Windows::Internal::Holographic::TimestampedProperty<std::wstring>,std::less<Windows::Internal::Holographic::TimestampedProperty<std::wstring>>,std::allocator<Windows::Internal::Holographic::TimestampedProperty<std::wstring>>,0>>::_Erase(
        (__int64)(a2 + 9),
        v6[2]);
      v6 = (void **)*v6;
      std::wstring::~wstring((__int64)(v5 + 4));
      operator delete(v5, (const struct std::nothrow_t *)0x48);
      v5 = v6;
    }
    while ( !*((_BYTE *)v6 + 25) );
    v4 = *v3;
  }
  v4[1] = v4;
  *(_QWORD *)*v3 = *v3;
  *((_QWORD *)*v3 + 2) = *v3;
  a2[10] = 0LL;
  operator delete(*v3, (const struct std::nothrow_t *)0x48);
  std::wstring::~wstring((__int64)(a2 + 4));
  return std::wstring::~wstring((__int64)a2);
}
