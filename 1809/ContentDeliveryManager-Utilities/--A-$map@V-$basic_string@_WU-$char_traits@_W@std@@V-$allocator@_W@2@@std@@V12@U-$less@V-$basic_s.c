/*
 * XREFs of ??A?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@QEAAAEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@$$QEAV21@@Z @ 0x180098C6C
 * Callers:
 *     ?InitializeNotificationTemplate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ @ 0x180096E54 (-InitializeNotificationTemplate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ.c)
 *     ?EnforceSchemaAndValidate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ @ 0x180097880 (-EnforceSchemaAndValidate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ.c)
 *     ?ExpandRatingParameters@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXPEB_W@Z @ 0x180098420 (-ExpandRatingParameters@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXPEB_W@Z.c)
 *     ?ResolveRatingImage@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXPEB_W@Z @ 0x180098A9C (-ResolveRatingImage@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXPEB_W@Z.c)
 * Callees:
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x18003148C (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ??R?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@QEBA_NAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@0@Z @ 0x180037328 (--R-$less@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@std@@QEBA_NAEBV-$bas.c)
 *     ??$_Buynode@U?$pair@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@?$_Tree_buy@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@PEAX@1@$$QEAU?$pair@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@1@@Z @ 0x1800990E8 (--$_Buynode@U-$pair@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V12@@std@@@.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@std@@@std@@@1@AEAU?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@PEAX@1@@Z @ 0x180099178 (--$_Insert_hint@AEAU-$pair@$$CBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocato_ea_180099178.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall std::map<std::wstring,std::wstring>::operator[](__int64 a1, _QWORD *a2)
{
  __int64 *v4; // rbx
  __int64 *v5; // rdi
  __int64 *v6; // rax
  __int64 v7; // rax
  _QWORD v9[2]; // [rsp+38h] [rbp-49h] BYREF
  void *v10[3]; // [rsp+48h] [rbp-39h] BYREF
  unsigned __int64 v11; // [rsp+60h] [rbp-21h]
  void *v12[3]; // [rsp+68h] [rbp-19h] BYREF
  unsigned __int64 v13; // [rsp+80h] [rbp-1h]
  void *v14[3]; // [rsp+88h] [rbp+7h] BYREF
  unsigned __int64 v15; // [rsp+A0h] [rbp+1Fh]

  v9[1] = -2LL;
  v4 = *(__int64 **)a1;
  v5 = *(__int64 **)(*(_QWORD *)a1 + 8LL);
  v6 = *(__int64 **)a1;
  if ( !*((_BYTE *)v5 + 25) )
  {
    do
    {
      if ( (unsigned __int8)std::less<std::wstring>::operator()(a1, v5 + 4, a2) )
      {
        v5 = (__int64 *)v5[2];
      }
      else
      {
        v4 = v5;
        v5 = (__int64 *)*v5;
      }
    }
    while ( !*((_BYTE *)v5 + 25) );
    v6 = *(__int64 **)a1;
  }
  if ( v4 == v6 || (unsigned __int8)std::less<std::wstring>::operator()(a1, a2, v4 + 4) )
  {
    v15 = 7LL;
    v14[2] = 0LL;
    LOWORD(v14[0]) = 0;
    v11 = 7LL;
    v10[2] = 0LL;
    LOWORD(v10[0]) = 0;
    std::wstring::_Assign_rv(v10, a2);
    v13 = 7LL;
    v12[2] = 0LL;
    LOWORD(v12[0]) = 0;
    std::wstring::_Assign_rv(v12, v14);
    v7 = std::_Tree_buy<std::pair<std::wstring const,std::wstring>>::_Buynode<std::pair<std::wstring,std::wstring>>(
           a1,
           v10);
    std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::_Insert_hint<std::pair<std::wstring const,std::wstring> &,std::_Tree_node<std::pair<std::wstring const,std::wstring>,void *> *>(
      a1,
      (unsigned int)v9,
      (_DWORD)v4,
      v7 + 32,
      v7);
    v4 = (__int64 *)v9[0];
    if ( v13 >= 8 )
      operator delete(v12[0]);
    if ( v11 >= 8 )
      operator delete(v10[0]);
    if ( v15 >= 8 )
      operator delete(v14[0]);
  }
  return v4 + 8;
}
