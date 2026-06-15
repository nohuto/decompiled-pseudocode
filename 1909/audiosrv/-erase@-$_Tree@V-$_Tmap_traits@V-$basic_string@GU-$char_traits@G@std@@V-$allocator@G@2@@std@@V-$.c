/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@std@@@std@@@2@0@Z @ 0x1800F1418
 * Callers:
 *     ??_ECDeviceGraphStore@@UEAAPEAXI@Z @ 0x1800ED9B0 (--_ECDeviceGraphStore@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180048E78 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@Z @ 0x1800D91D8 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@2@PEAU32@@Z @ 0x1800D94F0 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ??_G?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@QEAAPEAXI@Z @ 0x1800ED878 (--_G-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$ComPtr@UIDeviceG.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x1800F1124 (-_Erase@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::_Tree<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>,0>>::erase(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 *v5; // rbx
  __int64 *v8; // rsi
  __int64 *v9; // r8
  __int64 v10; // r9
  __int64 *i; // rax
  __int64 *v12; // rax
  __int64 j; // rcx
  __int64 *v14; // rsi

  v5 = a3;
  v8 = *a1;
  if ( a3 == (__int64 *)**a1 && a4 == v8 )
  {
    std::_Tree<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>,0>>::_Erase(
      (__int64)a1,
      (void *)v8[1]);
    (*a1)[1] = (__int64)v8;
    **a1 = (__int64)v8;
    (*a1)[2] = (__int64)v8;
    a1[1] = 0LL;
    *a2 = **a1;
  }
  else
  {
    while ( v5 != a4 )
    {
      v9 = v5;
      v10 = v5[2];
      if ( *(_BYTE *)(v10 + 25) )
      {
        for ( i = (__int64 *)v5[1]; !*((_BYTE *)i + 25) && v5 == (__int64 *)i[2]; i = (__int64 *)i[1] )
          v5 = i;
      }
      else
      {
        i = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::wstring>>>::_Min((_QWORD *)v5[2]);
      }
      v5 = i;
      v12 = v9;
      if ( *(_BYTE *)(v10 + 25) )
      {
        for ( j = v9[1]; !*(_BYTE *)(j + 25) && v12 == *(__int64 **)(j + 16); j = *(_QWORD *)(j + 8) )
          v12 = (__int64 *)j;
      }
      v14 = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>>::_Extract(
              a1,
              v9);
      std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>::`scalar deleting destructor'((__int64)(v14 + 4));
      std::_Deallocate<16,0>(v14, (const struct std::nothrow_t *)0x48);
    }
    *a2 = (__int64)v5;
  }
  return a2;
}
