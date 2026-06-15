/*
 * XREFs of ??1?$_Hash@V?$_Umap_traits@_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x18001778C
 * Callers:
 *     ??_GAudioStateMonitorManager@@UEAAPEAXI@Z @ 0x180017210 (--_GAudioStateMonitorManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@QEAA@XZ @ 0x180017690 (--1-$unique_ptr@UAudioStateMonitor@@U-$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@QEAA@X.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800349C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>,0>>::~_Hash<std::_Umap_traits<unsigned __int64,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>,0>>(
        _QWORD *a1)
{
  char *v2; // rcx
  const struct std::nothrow_t *v3; // rdx
  char *v4; // r8
  char *v5; // rcx
  void **v6; // rax
  void **v7; // rsi
  void **v8; // rcx
  void **v9; // rbx

  v2 = (char *)a1[3];
  if ( v2 )
  {
    v3 = (const struct std::nothrow_t *)((a1[5] - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (unsigned __int64)v3 >= 0x1000 )
    {
      v4 = (char *)*((_QWORD *)v2 - 1);
      v3 = (const struct std::nothrow_t *)((char *)v3 + 39);
      v5 = (char *)(v2 - v4);
      if ( (unsigned __int64)(v5 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v5, v3);
        JUMPOUT(0x180017849LL);
      }
      v2 = v4;
    }
    operator delete(v2, v3);
    a1[3] = 0LL;
    a1[4] = 0LL;
    a1[5] = 0LL;
  }
  v6 = (void **)a1[1];
  v7 = (void **)*v6;
  *v6 = v6;
  *(_QWORD *)(a1[1] + 8LL) = a1[1];
  a1[2] = 0LL;
  v8 = (void **)a1[1];
  if ( v7 != v8 )
  {
    do
    {
      v9 = (void **)*v7;
      wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>::~unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>(v7 + 3);
      operator delete(v7, (const struct std::nothrow_t *)0x20);
      v8 = (void **)a1[1];
      v7 = v9;
    }
    while ( v9 != v8 );
  }
  operator delete(v8, (const struct std::nothrow_t *)0x20);
}
