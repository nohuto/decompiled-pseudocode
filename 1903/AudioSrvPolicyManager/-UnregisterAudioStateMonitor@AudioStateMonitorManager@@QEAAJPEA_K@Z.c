/*
 * XREFs of ?UnregisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEA_K@Z @ 0x18002D048
 * Callers:
 *     ?UnregisterAudioStateMonitor@CProcess@@UEAAJPEA_K@Z @ 0x180014520 (-UnregisterAudioStateMonitor@CProcess@@UEAAJPEA_K@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@std@@@std@@@std@@X@?$_Hash@V?$_Umap_traits@_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@std@@@std@@@1@V21@@Z @ 0x18002D34C (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CB_KV-$unique_ptr@UAudio.c)
 */

__int64 __fastcall AudioStateMonitorManager::UnregisterAudioStateMonitor(
        AudioStateMonitorManager *this,
        unsigned __int64 *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 v5; // rax
  unsigned __int64 *v6; // r9
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r9
  _QWORD *v10; // rcx
  _QWORD *i; // r8
  _QWORD *v12; // rax
  unsigned int v13; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v16; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v5 = 0xCBF29CE484222325uLL;
  v6 = a2;
  if ( a2 < a2 + 1 )
  {
    do
    {
      v7 = *(unsigned __int8 *)v6 ^ (unsigned __int64)v5;
      v6 = (unsigned __int64 *)((char *)v6 + 1);
      v5 = 0x100000001B3LL * v7;
    }
    while ( (char *)v6 - (char *)a2 != (a2 + 1 >= a2 ? 8 : 0) );
  }
  v8 = *((_QWORD *)this + 10);
  v9 = 2 * (v5 & *((_QWORD *)this + 13));
  v10 = (_QWORD *)*((_QWORD *)this + 8);
  for ( i = *(_QWORD **)(v8 + 16 * (v5 & *((_QWORD *)this + 13))); ; i = (_QWORD *)*i )
  {
    v12 = *(_QWORD **)(v8 + 8 * v9) == v10 ? (_QWORD *)*((_QWORD *)this + 8) : **(_QWORD ***)(v8 + 8 * v9 + 8);
    if ( i == v12 )
      break;
    if ( i[2] == *a2 )
      goto LABEL_11;
  }
  i = (_QWORD *)*((_QWORD *)this + 8);
LABEL_11:
  if ( i == v10 )
  {
    v13 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x74,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\audiostatemonitormanager\\audiostatemonitormanager.cpp",
      (const char *)0x80070490LL);
  }
  else
  {
    std::_Hash<std::_Umap_traits<unsigned __int64,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>>>,void>(
      (char *)this + 56,
      &v16);
    *a2 = 0LL;
    v13 = 0;
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return v13;
}
