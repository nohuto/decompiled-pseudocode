/*
 * XREFs of ?lower_bound@?$_Hash@V?$_Umap_traits@KPEAVInputInfoValidator@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800BF978
 * Callers:
 *     ?ProcessDeviceRemoval@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z @ 0x1800BD068 (-ProcessDeviceRemoval@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall std::_Hash<std::_Umap_traits<unsigned long,InputInfoValidator *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,InputInfoValidator *>>,0>>::lower_bound(
        _QWORD *a1,
        __int64 **a2,
        unsigned __int8 *a3)
{
  __int64 v4; // rax
  unsigned __int8 *v5; // r11
  unsigned __int64 v6; // rax
  __int64 v7; // r11
  __int64 *v8; // r9
  __int64 v9; // r10
  __int64 *i; // rax
  __int64 *v11; // rcx

  v4 = 0xCBF29CE484222325uLL;
  v5 = a3;
  if ( a3 < a3 + 4 )
  {
    do
    {
      v6 = *v5++ ^ (unsigned __int64)v4;
      v4 = 0x100000001B3LL * v6;
    }
    while ( v5 - a3 != (a3 + 4 >= a3 ? 4 : 0) );
  }
  v7 = a1[3];
  v8 = (__int64 *)a1[1];
  v9 = 2 * (v4 & a1[6]);
  for ( i = *(__int64 **)(v7 + 16 * (v4 & a1[6])); ; i = (__int64 *)*i )
  {
    v11 = *(__int64 **)(v7 + 8 * v9) == v8 ? (__int64 *)a1[1] : **(__int64 ***)(v7 + 8 * v9 + 8);
    if ( i == v11 )
      break;
    if ( *((_DWORD *)i + 4) == *(_DWORD *)a3 )
    {
      *a2 = i;
      return a2;
    }
  }
  *a2 = v8;
  return a2;
}
