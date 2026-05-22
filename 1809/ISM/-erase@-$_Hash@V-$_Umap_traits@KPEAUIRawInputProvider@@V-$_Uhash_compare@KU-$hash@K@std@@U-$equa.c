/*
 * XREFs of ?erase@?$_Hash@V?$_Umap_traits@KPEAUIRawInputProvider@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@std@@@std@@@2@@Z @ 0x180025FFC
 * Callers:
 *     ?erase@?$_Hash@V?$_Umap_traits@K_KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBK_K@std@@@2@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x180025B0C (-erase@-$_Hash@V-$_Umap_traits@K_KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@V-$all.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@std@@@std@@@std@@X@?$_Hash@V?$_Umap_traits@KPEAUDeviceInfo@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@std@@@std@@@1@V21@@Z @ 0x180026978 (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBKPEAUDeviceInfo@@@std@.c)
 *     ??1ControllerProcessor@@MEAA@XZ @ 0x180032D9C (--1ControllerProcessor@@MEAA@XZ.c)
 *     ?OnDeviceRemoval@InputStateManager@@UEAAJPEAUDeviceInfo@@@Z @ 0x180053640 (-OnDeviceRemoval@InputStateManager@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?ProcessDeviceRemoval@Win32kInterop@@AEAAXK@Z @ 0x18008262C (-ProcessDeviceRemoval@Win32kInterop@@AEAAXK@Z.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_long_InputInfoValidator_____ptr64_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__InputInfoValidator_____ptr64____0___::_Insert_std::pair_unsigned_long_const__InputInfoValidator_____ptr64__&___ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_long_const__InputInfoValidator_____ptr64__________::_1_::catch$0 @ 0x180131E1D (_std--_Hash_std--_Umap_traits_unsigned_long_InputInfoValidator_____ptr64_std--_Uhas_ea_180131E1D.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_long_InputInfoValidator::PointerState_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__InputInfoValidator::PointerState____0___::_Insert_std::pair_unsigned_long_const__InputInfoValidator::PointerState__&___ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_long_const__InputInfoValidator::PointerState__________::_1_::catch$0 @ 0x180135777 (_std--_Hash_std--_Umap_traits_unsigned_long_InputInfoValidator--PointerState_std--__ea_180135777.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>::erase(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v5; // rcx
  unsigned __int64 i; // r10
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rbx

  v5 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
  {
    v7 = *((unsigned __int8 *)a3 + i + 16);
    v5 = 0x100000001B3LL * (v7 ^ v5);
  }
  v8 = v5 & a1[6];
  v9 = a1[3];
  v10 = 2 * v8;
  if ( *(_QWORD **)(v9 + 8 * v10 + 8) == a3 )
  {
    if ( *(_QWORD **)(v9 + 8 * v10) == a3 )
    {
      *(_QWORD *)(v9 + 8 * v10) = a1[1];
      v9 = a1[3];
      v11 = a1[1];
    }
    else
    {
      v11 = a3[1];
    }
    *(_QWORD *)(v9 + 8 * v10 + 8) = v11;
  }
  else if ( *(_QWORD **)(v9 + 8 * v10) == a3 )
  {
    *(_QWORD *)(v9 + 8 * v10) = *a3;
  }
  v12 = *a3;
  *(_QWORD *)a3[1] = *a3;
  *(_QWORD *)(*a3 + 8LL) = a3[1];
  --a1[2];
  operator delete(a3, (const struct std::nothrow_t *)0x20);
  *a2 = v12;
  return a2;
}
