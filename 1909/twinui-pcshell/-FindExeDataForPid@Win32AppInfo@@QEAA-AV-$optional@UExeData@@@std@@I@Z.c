/*
 * XREFs of ?FindExeDataForPid@Win32AppInfo@@QEAA?AV?$optional@UExeData@@@std@@I@Z @ 0x1800BAD5C
 * Callers:
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x1800BC19C (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 * Callees:
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     ??0ExeData@@QEAA@IAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0@Z @ 0x1800BA4AC (--0ExeData@@QEAA@IAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@0@Z.c)
 *     ??1ExeData@@QEAA@XZ @ 0x1800BA798 (--1ExeData@@QEAA@XZ.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@IV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@AEBI@Z @ 0x1800BD2D0 (-find@-$_Tree@V-$_Tmap_traits@IV-$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_ex.c)
 */

_BYTE *__fastcall Win32AppInfo::FindExeDataForPid(__int64 a1, _BYTE *a2, int a3)
{
  int v5; // r11d
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  _BYTE *v11; // [rsp+20h] [rbp-29h] BYREF
  int v12; // [rsp+30h] [rbp-19h] BYREF
  __int128 v13; // [rsp+38h] [rbp-11h]
  __int128 v14; // [rsp+48h] [rbp-1h]
  __int128 v15; // [rsp+58h] [rbp+Fh]
  __int128 v16; // [rsp+68h] [rbp+1Fh]
  int v17; // [rsp+C0h] [rbp+77h] BYREF

  v17 = a3;
  v11 = a2;
  std::_Tree<std::_Tmap_traits<unsigned int,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>>>,0>>::find(
    a1 + 32,
    &v11,
    &v17);
  if ( v11 == *(_BYTE **)(a1 + 32) )
  {
    memset_0(a2, 0, 0x50uLL);
    *a2 = 0;
    a2[72] = 0;
  }
  else
  {
    ExeData::ExeData(&v12, v5);
    v6 = v14;
    v7 = v13;
    *(_DWORD *)a2 = v12;
    *(_QWORD *)&v14 = 0LL;
    *(_OWORD *)(a2 + 8) = v7;
    LOWORD(v13) = 0;
    v8 = v15;
    LOWORD(v15) = 0;
    *(_OWORD *)(a2 + 24) = v6;
    *((_QWORD *)&v14 + 1) = 7LL;
    v9 = v16;
    *((_QWORD *)&v16 + 1) = 7LL;
    *(_OWORD *)(a2 + 40) = v8;
    *(_QWORD *)&v16 = 0LL;
    *(_OWORD *)(a2 + 56) = v9;
    a2[72] = 1;
    ExeData::~ExeData((ExeData *)&v12);
  }
  return a2;
}
