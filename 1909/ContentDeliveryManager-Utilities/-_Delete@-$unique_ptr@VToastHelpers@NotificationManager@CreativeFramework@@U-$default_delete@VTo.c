/*
 * XREFs of ?_Delete@?$unique_ptr@VToastHelpers@NotificationManager@CreativeFramework@@U?$default_delete@VToastHelpers@NotificationManager@CreativeFramework@@@std@@@std@@AEAAXXZ @ 0x18009158C
 * Callers:
 *     ??0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@@Z @ 0x180090794 (--0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV-$map@V-$.c)
 *     ??_ENotificationManagerService@Actions@CreativeFramework@@UEAAPEAXI@Z @ 0x180091130 (--_ENotificationManagerService@Actions@CreativeFramework@@UEAAPEAXI@Z.c)
 *     ??1?$unique_ptr@VToastHelpers@NotificationManager@CreativeFramework@@U?$default_delete@VToastHelpers@NotificationManager@CreativeFramework@@@std@@@std@@QEAA@XZ @ 0x1800912C8 (--1-$unique_ptr@VToastHelpers@NotificationManager@CreativeFramework@@U-$default_delete@VToastHel.c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@PEAX@2@@Z @ 0x180042EC0 (-_Erase@-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::unique_ptr<CreativeFramework::NotificationManager::ToastHelpers>::_Delete(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rbx
  void *v5; // rcx

  v1 = *a1;
  if ( *a1 )
  {
    v2 = *(_QWORD *)(v1 + 64);
    if ( v2 )
    {
      *(_QWORD *)(v1 + 64) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    }
    v3 = *(_QWORD *)(v1 + 56);
    if ( v3 )
    {
      *(_QWORD *)(v1 + 56) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    v4 = v1 + 32;
    std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::_Erase(
      v1 + 32,
      *(__int64 **)(*(_QWORD *)(v1 + 32) + 8LL));
    *(_QWORD *)(*(_QWORD *)v4 + 8LL) = *(_QWORD *)v4;
    **(_QWORD **)v4 = *(_QWORD *)v4;
    *(_QWORD *)(*(_QWORD *)v4 + 16LL) = *(_QWORD *)v4;
    v5 = *(void **)(v1 + 32);
    *(_QWORD *)(v1 + 40) = 0LL;
    operator delete(v5);
    if ( *(_QWORD *)(v1 + 24) >= 8uLL )
      operator delete(*(void **)v1);
    *(_QWORD *)(v1 + 24) = 7LL;
    *(_QWORD *)(v1 + 16) = 0LL;
    *(_WORD *)v1 = 0;
    operator delete((void *)v1);
  }
}
