/*
 * XREFs of ?UpdateKeyModifierArray@KeyboardModifierState@@QEAAJW4KeyboardModifier@@_N@Z @ 0x1801419EC
 * Callers:
 *     ?InvalidateKeyboardModifiers@KeyboardProcessor@@AEAAJXZ @ 0x18012AF48 (-InvalidateKeyboardModifiers@KeyboardProcessor@@AEAAJXZ.c)
 *     ?OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18012B140 (-OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@KKV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@AEBK@Z @ 0x180026630 (-lower_bound@-$_Hash@V-$_Umap_traits@KKV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@V.c)
 */

__int64 __fastcall KeyboardModifierState::UpdateKeyModifierArray(__int64 a1, int a2, char a3)
{
  __int64 *v6; // rax
  int v8; // ecx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 *v10; // [rsp+30h] [rbp+8h] BYREF
  int v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = a2;
  std::_Hash<std::_Umap_traits<unsigned long,unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::lower_bound(
    (_QWORD *)(a1 + 16),
    &v10,
    (unsigned __int8 *)&v11);
  v6 = v10;
  if ( v10 == *(__int64 **)(a1 + 24) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x92,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\utilities\\keyboardmodifierstate\\lib\\keyboar"
               "dmodifierstate.cpp",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
  else
  {
    v8 = *((_DWORD *)v10 + 5);
    if ( a3 )
    {
      ++v8;
      *(_DWORD *)(a1 + 80) |= a2;
    }
    else if ( v8 )
    {
      if ( !--v8 )
        *(_DWORD *)(a1 + 80) &= ~a2;
    }
    *((_DWORD *)v6 + 5) = v8;
    return 0LL;
  }
}
