/*
 * XREFs of ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@std@@@std@@@std@@X@?$_Hash@V?$_Umap_traits@_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@std@@@std@@@1@V21@@Z @ 0x18002D24C
 * Callers:
 *     ?UnregisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEA_K@Z @ 0x18002CF48 (-UnregisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEA_K@Z.c)
 *     _std::_Hash_std::_Umap_traits_unsigned___int64_wistd::unique_ptr_AudioStateMonitor_wistd::default_delete_AudioStateMonitor____std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__wistd::unique_ptr_AudioStateMonitor_wistd::default_delete_AudioStateMonitor________0___::_Insert_std::pair_unsigned___int64_const__wistd::unique_ptr_AudioStateMonitor_wistd::default_delete_AudioStateMonitor______&_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned___int64_const__wistd::unique_ptr_AudioStateMonitor_wistd::default_delete_AudioStateMonitor______________::_1_::catch$1 @ 0x180037710 (_std--_Hash_std--_Umap_traits_unsigned___int64_wistd--unique_ptr_AudioStateMonitor__ea_180037710.c)
 * Callees:
 *     ??1?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@QEAA@XZ @ 0x180017690 (--1-$unique_ptr@UAudioStateMonitor@@U-$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@QEAA@X.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800349C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<unsigned __int64,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>>>,void>(
        _QWORD *a1,
        _QWORD *a2,
        unsigned __int8 *a3)
{
  unsigned __int8 *v3; // r11
  unsigned __int8 *v5; // r8
  __int64 v8; // rax
  unsigned __int8 *v9; // rbx
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rbx

  v3 = a3 + 16;
  v5 = a3 + 24;
  v8 = 0xCBF29CE484222325uLL;
  v9 = v3;
  if ( v3 <= v5 )
  {
    do
    {
      v10 = *v9++ ^ (unsigned __int64)v8;
      v8 = 0x100000001B3LL * v10;
    }
    while ( v9 - v3 != (v5 >= v3 ? 8 : 0) );
  }
  v11 = a1[3];
  v12 = 2 * (v8 & a1[6]);
  if ( *(unsigned __int8 **)(v11 + 16 * (v8 & a1[6]) + 8) == a3 )
  {
    if ( *(unsigned __int8 **)(v11 + 16 * (v8 & a1[6])) == a3 )
    {
      *(_QWORD *)(v11 + 16 * (v8 & a1[6])) = a1[1];
      v11 = a1[3];
      v13 = a1[1];
    }
    else
    {
      v13 = *((_QWORD *)a3 + 1);
    }
    *(_QWORD *)(v11 + 8 * v12 + 8) = v13;
  }
  else if ( *(unsigned __int8 **)(v11 + 16 * (v8 & a1[6])) == a3 )
  {
    *(_QWORD *)(v11 + 16 * (v8 & a1[6])) = *(_QWORD *)a3;
  }
  v14 = *(_QWORD *)a3;
  **((_QWORD **)a3 + 1) = *(_QWORD *)a3;
  *(_QWORD *)(*(_QWORD *)a3 + 8LL) = *((_QWORD *)a3 + 1);
  --a1[2];
  wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>::~unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>((void **)v3 + 1);
  operator delete(a3, (const struct std::nothrow_t *)0x20);
  *a2 = v14;
  return a2;
}
