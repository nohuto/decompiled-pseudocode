/*
 * XREFs of ?erase@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA_KAEB_K@Z @ 0x1800CE250
 * Callers:
 *     ?DestroyCustomCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K@Z @ 0x1800CA1B0 (-DestroyCustomCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerSt.c)
 * Callees:
 *     ?equal_range@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@@std@@V12@@2@AEB_K@Z @ 0x1800567AC (-equal_range@-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x1800790C4 (-clear@-$_Hash@V-$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V-$_Uhash_compare@GU-$.c)
 *     ?erase@?$_Hash@V?$_Uset_traits@PEAUISystemContextObserver@@V?$_Uhash_compare@PEAUISystemContextObserver@@U?$hash@PEAUISystemContextObserver@@@std@@U?$equal_to@PEAUISystemContextObserver@@@3@@std@@V?$allocator@PEAUISystemContextObserver@@@3@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@@2@V32@@Z @ 0x18007B91C (-erase@-$_Hash@V-$_Uset_traits@PEAUISystemContextObserver@@V-$_Uhash_compare@PEAUISystemContextO.c)
 */

__int64 __fastcall std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::erase(
        _QWORD *a1,
        unsigned __int8 *a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rsi
  __int64 *v5; // rax
  __int64 *v6; // rax
  __int64 *v8; // r8
  __int64 *v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v10; // [rsp+28h] [rbp-10h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::equal_range(
    a1,
    &v9,
    a2);
  v3 = v9;
  v4 = 0LL;
  v5 = v9;
  while ( v5 != v10 )
  {
    v5 = (__int64 *)*v5;
    ++v4;
  }
  v6 = (__int64 *)a1[1];
  if ( v9 == (__int64 *)*v6 && v10 == v6 )
  {
    std::_Hash<std::_Umap_traits<unsigned short,ControllerProcessor::ActiveKeyProperties,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>,0>>::clear(a1);
  }
  else
  {
    while ( v3 != v10 )
    {
      v8 = v3;
      v3 = (__int64 *)*v3;
      std::_Hash<std::_Uset_traits<ISystemContextObserver *,std::_Uhash_compare<ISystemContextObserver *,std::hash<ISystemContextObserver *>,std::equal_to<ISystemContextObserver *>>,std::allocator<ISystemContextObserver *>,0>>::erase(
        a1,
        &v11,
        v8);
    }
  }
  return v4;
}
