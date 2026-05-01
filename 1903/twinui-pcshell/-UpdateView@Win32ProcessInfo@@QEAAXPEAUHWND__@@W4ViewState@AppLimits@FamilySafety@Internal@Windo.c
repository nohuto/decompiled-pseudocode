/*
 * XREFs of ?UpdateView@Win32ProcessInfo@@QEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1800ADFAC
 * Callers:
 *     ?UpdateView@Win32AppInfo@@QEAAXIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1800ADED8 (-UpdateView@Win32AppInfo@@QEAAXIAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180036E68 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180087898 (--2@YAPEAX_K@Z.c)
 *     ??$_Buynode@AEAPEAUHWND__@@AEAV?$shared_ptr@VWin32AppViewInfo@@@std@@@?$_Tree_comp_alloc@V?$_Tmap_traits@PEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@U?$less@PEAUHWND__@@@3@V?$allocator@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@PEAX@1@AEAPEAUHWND__@@AEAV?$shared_ptr@VWin32AppViewInfo@@@1@@Z @ 0x1800AA75C (--$_Buynode@AEAPEAUHWND__@@AEAV-$shared_ptr@VWin32AppViewInfo@@@std@@@-$_Tree_comp_alloc@V-$_Tma.c)
 *     ??$_Insert_nohint@AEAU?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@U?$less@PEAUHWND__@@@3@V?$allocator@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@1@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@PEAX@1@@Z @ 0x1800AB838 (--$_Insert_nohint@AEAU-$pair@QEAUHWND__@@V-$shared_ptr@VWin32AppViewInfo@@@std@@@std@@PEAU-$_Tre.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Win32ProcessInfo::UpdateView(__int64 *a1, unsigned __int64 a2, int a3)
{
  __int64 v5; // rax
  __int64 *v6; // r9
  _QWORD *v7; // rax
  __int64 v8; // r8
  _DWORD *v9; // [rsp+38h] [rbp-30h] BYREF
  std::_Ref_count_base *v10; // [rsp+40h] [rbp-28h]
  char v11[32]; // [rsp+48h] [rbp-20h] BYREF
  std::_Ref_count_base *v12; // [rsp+70h] [rbp+8h]
  unsigned __int64 v13; // [rsp+78h] [rbp+10h] BYREF

  v13 = a2;
  v5 = *a1;
  v6 = *(__int64 **)(*a1 + 8);
  while ( !*((_BYTE *)v6 + 25) )
  {
    if ( v6[4] >= a2 )
    {
      v5 = (__int64)v6;
      v6 = (__int64 *)*v6;
    }
    else
    {
      v6 = (__int64 *)v6[2];
    }
  }
  if ( v5 == *a1 || a2 < *(_QWORD *)(v5 + 32) )
    v5 = *a1;
  if ( v5 == *a1 )
  {
    v12 = (std::_Ref_count_base *)operator new(0x18uLL);
    *((_DWORD *)v12 + 2) = 1;
    *((_DWORD *)v12 + 3) = 1;
    *(_QWORD *)v12 = &std::_Ref_count_obj<Win32AppViewInfo>::`vftable';
    *((_DWORD *)v12 + 4) = a3;
    v9 = (_DWORD *)((char *)v12 + 16);
    v10 = v12;
    v7 = std::_Tree_comp_alloc<std::_Tmap_traits<HWND__ *,std::shared_ptr<Win32AppViewInfo>,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,std::shared_ptr<Win32AppViewInfo>>>,0>>::_Buynode<HWND__ * &,std::shared_ptr<Win32AppViewInfo> &>(
           a1,
           &v13,
           &v9);
    std::_Tree<std::_Tmap_traits<HWND__ *,std::shared_ptr<Win32AppViewInfo>,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,std::shared_ptr<Win32AppViewInfo>>>,0>>::_Insert_nohint<std::pair<HWND__ * const,std::shared_ptr<Win32AppViewInfo>> &,std::_Tree_node<std::pair<HWND__ * const,std::shared_ptr<Win32AppViewInfo>>,void *> *>(
      a1,
      (__int64)v11,
      v8,
      v7 + 4,
      (__int64)v7);
    if ( v10 )
      std::_Ref_count_base::_Decref(v10);
  }
  else
  {
    **(_DWORD **)(v5 + 40) = a3;
  }
}
