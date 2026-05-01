/*
 * XREFs of ShellPositionerManager::DoWorkForEachMonitor__lambda_4a41105171a7dcf0697434a48a681187___ @ 0x180095310
 * Callers:
 *     ?PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIObjectArray@@PEAUIImmersiveMonitor@@1W4SHELL_POSITIONER_TYPE@@2@Z @ 0x180334EAC (-PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIObjectArray@@PEAUIImmersiveMonitor@@.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18001C76C (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180080A50 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBKV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@PEAU32@@Z @ 0x18008F75C (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKV-$com_ptr_t@UIWindowGroup@@Uerr_exception_.c)
 *     wil::ResultFromException__lambda_8f06f521b4af2551e491113924647167___ @ 0x180095600 (wil--ResultFromException__lambda_8f06f521b4af2551e491113924647167___.c)
 *     _lambda_4a41105171a7dcf0697434a48a681187_::operator() @ 0x1800956EC (_lambda_4a41105171a7dcf0697434a48a681187_--operator().c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@PEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@XZ @ 0x1801EFDD8 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@PEAUHWND__@@V-$com_ptr_t@UISwitchItem@Multitask.c)
 *     ??1?$map@KV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@5@@std@@QEAA@XZ @ 0x180333ECC (--1-$map@KV-$ComPtr@UIObjectCollection@@@WRL@Microsoft@@U-$less@K@std@@V-$allocator@U-$pair@$$CB.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall ShellPositionerManager::DoWorkForEachMonitor__lambda_4a41105171a7dcf0697434a48a681187___(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  int v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // edi
  __int64 v12; // rbx
  __int64 *v13; // r9
  int v14; // ebx
  __int64 v15; // rbx
  wil::details::in1diag3 *v16; // rcx
  unsigned __int64 v17; // r9
  __int64 v18; // rdx
  int v19; // eax
  _QWORD *v20; // rbx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 *v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  _QWORD *i; // rax
  __int64 v28; // [rsp+30h] [rbp-50h] BYREF
  __int64 v29; // [rsp+38h] [rbp-48h] BYREF
  __int64 v30[2]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v31; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v32[4]; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  unsigned int v34; // [rsp+B8h] [rbp+38h] BYREF

  v30[1] = -2LL;
  v31 = 0LL;
  *(_QWORD *)&v31 = std::_Tree_comp_alloc<std::_Tmap_traits<HWND__ *,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>>>,0>>::_Buyheadnode();
  v9 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*a2 + 24))(a2, &v34);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x361,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_36;
  }
  v11 = 0;
  if ( v34 )
  {
    while ( 1 )
    {
      v30[0] = 0LL;
      v12 = *a2;
      v13 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IObjectCollection>>(v30);
      if ( (*(int (__fastcall **)(__int64 *, _QWORD, GUID *, __int64 *))(v12 + 32))(
             a2,
             v11,
             &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
             v13) >= 0 )
        break;
LABEL_15:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v30);
      if ( ++v11 >= v34 )
        goto LABEL_16;
    }
    v14 = 0;
    v29 = 0LL;
    if ( a4 )
    {
      Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(&v29, a4);
    }
    else
    {
      v15 = v30[0];
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
      v14 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 80LL))(v15, &v29);
    }
    v16 = retaddr;
    if ( v14 >= 0 )
    {
      if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v29 + 24LL))(v29, &v28) < 0 )
        goto LABEL_14;
      v32[0] = &v31;
      v32[1] = &v28;
      v32[2] = v30;
      v19 = wil::ResultFromException__lambda_8f06f521b4af2551e491113924647167___(v32);
      v16 = retaddr;
      if ( v19 >= 0 )
        goto LABEL_14;
      v17 = (unsigned int)v19;
      v18 = 901LL;
    }
    else
    {
      v17 = (unsigned int)v14;
      v18 = 882LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v16,
      v18,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)v17);
LABEL_14:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
    goto LABEL_15;
  }
LABEL_16:
  v20 = *(_QWORD **)v31;
  while ( v20 != (_QWORD *)v31 )
  {
    v21 = v20[5];
    v28 = v21;
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
    v30[0] = 0LL;
    v22 = *(_QWORD *)(a1 + 152);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v30);
    if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v22 + 56LL))(
           v22,
           *((unsigned int *)v20 + 8),
           v30) >= 0 )
    {
      v29 = 0LL;
      v23 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IObjectCollection>>(&v29);
      if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v21)(
             v21,
             &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
             v23) >= 0 )
      {
        v24 = a3;
        if ( !a3 )
          v24 = v30[0];
        lambda_4a41105171a7dcf0697434a48a681187_::operator()(a5, v24, v30[0], v29);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v30);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
    if ( !*((_BYTE *)v20 + 25) )
    {
      v25 = v20[2];
      if ( *(_BYTE *)(v25 + 25) )
      {
        for ( i = (_QWORD *)v20[1]; !*((_BYTE *)i + 25) && v20 == (_QWORD *)i[2]; i = (_QWORD *)i[1] )
          v20 = i;
      }
      else
      {
        i = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,wil::com_ptr_t<IWindowGroup,wil::err_exception_policy>>>>::_Min((_QWORD *)v25);
      }
      v20 = i;
    }
  }
  v10 = 0;
LABEL_36:
  std::map<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>>::~map<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>>(&v31);
  return v10;
}
