/*
 * XREFs of ?OnDeviceRemoval@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800C4900
 * Callers:
 *     <none>
 * Callees:
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@KUInputContext@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUInputContext@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInputContext@@@std@@@std@@@std@@@2@AEBK@Z @ 0x180005D90 (-lower_bound@-$_Hash@V-$_Umap_traits@KUInputContext@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_.c)
 *     ??R?$_Func_class@XPEAUInputContext@@@std@@QEBAXPEAUInputContext@@@Z @ 0x1800BB404 (--R-$_Func_class@XPEAUInputContext@@@std@@QEBAXPEAUInputContext@@@Z.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KUInputContext@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUInputContext@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInputContext@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInputContext@@@std@@@std@@@std@@@2@@Z @ 0x1800C583C (-erase@-$_Hash@V-$_Umap_traits@KUInputContext@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2.c)
 */

__int64 __fastcall DWMInputRouter::OnDeviceRemoval(DWMInputRouter *this, struct DeviceInfo *a2)
{
  __int64 v2; // rbx
  __int64 *v3; // rdi
  unsigned __int64 v6; // rbp
  __int64 *v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0LL;
  v3 = (__int64 *)*((_QWORD *)this + 98);
  v6 = (unsigned __int64)(*((_QWORD *)this + 99) - (_QWORD)v3 + 7LL) >> 3;
  if ( (unsigned __int64)v3 > *((_QWORD *)this + 99) )
    v6 = 0LL;
  if ( v6 )
  {
    do
    {
      std::_Func_class<void,InputContext *>::operator()(*v3, (__int64)a2);
      ++v2;
      ++v3;
    }
    while ( v2 != v6 );
  }
  std::_Hash<std::_Umap_traits<unsigned long,InputContext,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,InputContext>>,0>>::lower_bound(
    (_QWORD *)this + 84,
    &v8,
    (unsigned __int8 *)a2);
  if ( v8 != *((__int64 **)this + 85) )
    std::_Hash<std::_Umap_traits<unsigned long,InputContext,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,InputContext>>,0>>::erase(
      (char *)this + 672,
      &v8,
      v8);
  return DWMInputRouter::OnDeviceChange(this, a2, 0);
}
