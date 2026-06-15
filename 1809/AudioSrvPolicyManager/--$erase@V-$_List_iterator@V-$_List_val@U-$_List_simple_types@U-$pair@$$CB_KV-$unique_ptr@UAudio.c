/*
 * XREFs of ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@std@@@std@@@std@@X@?$_Hash@V?$_Umap_traits@_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@std@@@std@@@1@V21@@Z @ 0x180030410
 * Callers:
 *     ?UnregisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEA_K@Z @ 0x18003011C (-UnregisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEA_K@Z.c)
 *     _std::_Hash_std::_Umap_traits_unsigned___int64_wistd::unique_ptr_AudioStateMonitor_wistd::default_delete_AudioStateMonitor____std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__wistd::unique_ptr_AudioStateMonitor_wistd::default_delete_AudioStateMonitor________0___::_Insert_std::pair_unsigned___int64_const__wistd::unique_ptr_AudioStateMonitor_wistd::default_delete_AudioStateMonitor______&___ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned___int64_const__wistd::unique_ptr_AudioStateMonitor_wistd::default_delete_AudioStateMonitor______________::_1_::catch$1 @ 0x180039DB9 (_std--_Hash_std--_Umap_traits_unsigned___int64_wistd--unique_ptr_AudioStateMonitor__ea_180039DB9.c)
 * Callees:
 *     ??1?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@QEAA@XZ @ 0x18001A780 (--1-$unique_ptr@UAudioStateMonitor@@U-$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@QEAA@X.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800370D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 *__fastcall std::_Hash<std::_Umap_traits<unsigned __int64,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>>>,void>(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3)
{
  unsigned __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rbx

  v5 = 0LL;
  v6 = 0xCBF29CE484222325uLL;
  do
  {
    v8 = *((unsigned __int8 *)a3 + v5++ + 16);
    v6 = 0x100000001B3LL * (v8 ^ v6);
  }
  while ( v5 < 8 );
  v9 = a1[3];
  v10 = 2 * (v6 & a1[6]);
  if ( *(__int64 **)(v9 + 16 * (v6 & a1[6]) + 8) == a3 )
  {
    if ( *(__int64 **)(v9 + 16 * (v6 & a1[6])) == a3 )
    {
      *(_QWORD *)(v9 + 16 * (v6 & a1[6])) = a1[1];
      v9 = a1[3];
      v11 = a1[1];
    }
    else
    {
      v11 = a3[1];
    }
    *(_QWORD *)(v9 + 8 * v10 + 8) = v11;
  }
  else if ( *(__int64 **)(v9 + 16 * (v6 & a1[6])) == a3 )
  {
    *(_QWORD *)(v9 + 16 * (v6 & a1[6])) = *a3;
  }
  v12 = *a3;
  *(_QWORD *)a3[1] = *a3;
  *(_QWORD *)(*a3 + 8) = a3[1];
  --a1[2];
  wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>::~unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>(a3 + 3);
  operator delete(a3, (const struct std::nothrow_t *)0x20);
  *a2 = v12;
  return a2;
}
