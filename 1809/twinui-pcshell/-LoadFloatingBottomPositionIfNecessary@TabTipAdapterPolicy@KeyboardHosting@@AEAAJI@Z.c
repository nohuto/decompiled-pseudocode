/*
 * XREFs of ?LoadFloatingBottomPositionIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAJI@Z @ 0x180055024
 * Callers:
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x180054554 (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU-$IVectorView@UCoreK.c)
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IPEAIPEAURect@Foundation@8@PEAE@Z @ 0x1802CCA50 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@@7@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@1@PEAU?$_Tree_node@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@PEAX@1@@Z @ 0x1801D21D8 (--$_Insert_hint@AEAU-$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@PE.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBIPEBG@std@@PEAU?$_Tree_node@U?$pair@$$CBIPEBG@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IPEBGU?$less@I@std@@V?$allocator@U?$pair@$$CBIPEBG@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIPEBG@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIPEBG@std@@@std@@@std@@@1@AEAU?$pair@$$CBIPEBG@1@PEAU?$_Tree_node@U?$pair@$$CBIPEBG@std@@PEAX@1@@Z @ 0x1802BF32C (--$_Insert_hint@AEAU-$pair@$$CBIPEBG@std@@PEAU-$_Tree_node@U-$pair@$$CBIPEBG@std@@PEAX@2@@-$_Tre.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@KV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1802C9734 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$_Tree__ea_1802C9734.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@IURelativePositionOnScreen@KeyboardHosting@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1802C979C (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_Tree_comp_alloc@V-.c)
 */

LSTATUS __fastcall KeyboardHosting::TabTipAdapterPolicy::LoadFloatingBottomPositionIfNecessary(
        KeyboardHosting::TabTipAdapterPolicy *this,
        __int64 a2)
{
  char *v2; // rdi
  __int64 *v3; // r8
  __int64 *v5; // rbx
  __int64 *v6; // rax
  __int64 *v7; // rcx
  __int64 *v8; // rbx
  __int64 *v9; // rax
  LSTATUS result; // eax
  __int64 v11; // rdx
  bool v12; // cc
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 *v16; // rcx
  __int64 *v17; // rbx
  __int64 *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 *v21; // rbx
  __int64 *v22; // rax
  __int64 v23; // rax
  __int64 *v24; // rdx
  __int64 *v25; // rbx
  __int64 *v26; // rax
  __int64 v27; // rax
  __int64 *v28; // rdx
  __int64 *v29; // rbx
  __int64 *v30; // rax
  __int64 v31; // rax
  DWORD v32; // [rsp+40h] [rbp-18h] BYREF
  _QWORD v33[2]; // [rsp+48h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+30h]
  int pvData; // [rsp+90h] [rbp+38h] BYREF
  unsigned int v36; // [rsp+98h] [rbp+40h] BYREF
  int v37; // [rsp+A0h] [rbp+48h] BYREF
  DWORD pcbData; // [rsp+A8h] [rbp+50h] BYREF

  v36 = a2;
  v2 = (char *)this + 448;
  v3 = (__int64 *)*((_QWORD *)this + 56);
  v5 = v3;
  v6 = (__int64 *)v3[1];
  if ( *((_BYTE *)v6 + 25) )
    goto LABEL_20;
  do
  {
    if ( *((_DWORD *)v6 + 7) < (unsigned int)a2 )
    {
      v6 = (__int64 *)v6[2];
    }
    else
    {
      v5 = v6;
      v6 = (__int64 *)*v6;
    }
  }
  while ( !*((_BYTE *)v6 + 25) );
  if ( v5 == v3 || (unsigned int)a2 < *((_DWORD *)v5 + 7) )
  {
LABEL_20:
    v33[0] = &v36;
    v13 = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,KeyboardHosting::RelativePositionOnScreen,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
            v2,
            a2,
            v33);
    std::_Tree<std::_Tmap_traits<unsigned long,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>>,0>>::_Insert_hint<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId> &,std::_Tree_node<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>,void *> *>(
      (_DWORD)v2,
      (unsigned int)v33,
      (_DWORD)v5,
      v13 + 28,
      v13);
    a2 = v36;
    v5 = (__int64 *)v33[0];
  }
  if ( *((_BYTE *)v5 + 40) )
    return 0;
  pcbData = 4;
  v7 = (__int64 *)*((_QWORD *)this + 9);
  v8 = v7;
  v9 = (__int64 *)v7[1];
  if ( *((_BYTE *)v9 + 25) )
    goto LABEL_22;
  do
  {
    if ( *((_DWORD *)v9 + 8) < (unsigned int)a2 )
    {
      v9 = (__int64 *)v9[2];
    }
    else
    {
      v8 = v9;
      v9 = (__int64 *)*v9;
    }
  }
  while ( !*((_BYTE *)v9 + 25) );
  if ( v8 == v7 || (unsigned int)a2 < *((_DWORD *)v8 + 8) )
  {
LABEL_22:
    v33[0] = &v36;
    v14 = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
            (char *)this + 72,
            a2,
            v33);
    std::_Tree<std::_Tmap_traits<unsigned int,unsigned short const *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned short const *>>,0>>::_Insert_hint<std::pair<unsigned int const,unsigned short const *> &,std::_Tree_node<std::pair<unsigned int const,unsigned short const *>,void *> *>(
      (_DWORD)this + 72,
      (unsigned int)v33,
      (_DWORD)v8,
      v14 + 32,
      v14);
    v8 = (__int64 *)v33[0];
  }
  result = RegGetValueW(
             HKEY_CURRENT_USER,
             L"SOFTWARE\\Microsoft\\TabletTip\\1.7",
             (LPCWSTR)v8[5],
             0x10u,
             0LL,
             &pvData,
             &pcbData);
  v12 = result <= 0;
  if ( result )
    goto LABEL_15;
  if ( (unsigned int)pvData > *((_DWORD *)this + 27) )
  {
    v15 = 1076LL;
LABEL_26:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)0x80004005LL);
    return -2147467259;
  }
  v32 = 4;
  v16 = (__int64 *)*((_QWORD *)this + 11);
  v17 = v16;
  v18 = (__int64 *)v16[1];
  if ( *((_BYTE *)v18 + 25) )
    goto LABEL_35;
  v11 = v36;
  do
  {
    if ( *((_DWORD *)v18 + 8) >= v36 )
    {
      v17 = v18;
      v18 = (__int64 *)*v18;
    }
    else
    {
      v18 = (__int64 *)v18[2];
    }
  }
  while ( !*((_BYTE *)v18 + 25) );
  if ( v17 == v16 || v36 < *((_DWORD *)v17 + 8) )
  {
LABEL_35:
    v33[0] = &v36;
    v19 = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
            (char *)this + 88,
            v11,
            v33);
    std::_Tree<std::_Tmap_traits<unsigned int,unsigned short const *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned short const *>>,0>>::_Insert_hint<std::pair<unsigned int const,unsigned short const *> &,std::_Tree_node<std::pair<unsigned int const,unsigned short const *>,void *> *>(
      (_DWORD)this + 88,
      (unsigned int)v33,
      (_DWORD)v17,
      v19 + 32,
      v19);
    v17 = (__int64 *)v33[0];
  }
  result = RegGetValueW(
             HKEY_CURRENT_USER,
             L"SOFTWARE\\Microsoft\\TabletTip\\1.7",
             (LPCWSTR)v17[5],
             0x10u,
             0LL,
             &v37,
             &v32);
  v12 = result <= 0;
  if ( !result )
  {
    if ( (unsigned int)v37 > *((_DWORD *)this + 27) )
    {
      v15 = 1081LL;
      goto LABEL_26;
    }
    v21 = *(__int64 **)v2;
    v22 = *(__int64 **)(*(_QWORD *)v2 + 8LL);
    if ( *((_BYTE *)v22 + 25) )
      goto LABEL_46;
    v20 = v36;
    do
    {
      if ( *((_DWORD *)v22 + 7) >= v36 )
      {
        v21 = v22;
        v22 = (__int64 *)*v22;
      }
      else
      {
        v22 = (__int64 *)v22[2];
      }
    }
    while ( !*((_BYTE *)v22 + 25) );
    if ( v21 == *(__int64 **)v2 || v36 < *((_DWORD *)v21 + 7) )
    {
LABEL_46:
      v33[0] = &v36;
      v23 = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,KeyboardHosting::RelativePositionOnScreen,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
              v2,
              v20,
              v33);
      std::_Tree<std::_Tmap_traits<unsigned long,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>>,0>>::_Insert_hint<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId> &,std::_Tree_node<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>,void *> *>(
        (_DWORD)v2,
        (unsigned int)v33,
        (_DWORD)v21,
        v23 + 28,
        v23);
      v21 = (__int64 *)v33[0];
    }
    *((float *)v21 + 8) = (float)pvData / (float)*((int *)this + 27);
    v24 = *(__int64 **)v2;
    v25 = *(__int64 **)v2;
    v26 = *(__int64 **)(*(_QWORD *)v2 + 8LL);
    if ( *((_BYTE *)v26 + 25) )
      goto LABEL_54;
    do
    {
      if ( *((_DWORD *)v26 + 7) >= v36 )
      {
        v25 = v26;
        v26 = (__int64 *)*v26;
      }
      else
      {
        v26 = (__int64 *)v26[2];
      }
    }
    while ( !*((_BYTE *)v26 + 25) );
    if ( v25 == v24 || v36 < *((_DWORD *)v25 + 7) )
    {
LABEL_54:
      v33[0] = &v36;
      v27 = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,KeyboardHosting::RelativePositionOnScreen,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
              v2,
              v24,
              v33);
      std::_Tree<std::_Tmap_traits<unsigned long,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>>,0>>::_Insert_hint<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId> &,std::_Tree_node<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>,void *> *>(
        (_DWORD)v2,
        (unsigned int)v33,
        (_DWORD)v25,
        v27 + 28,
        v27);
      v25 = (__int64 *)v33[0];
    }
    *((float *)v25 + 9) = (float)v37 / (float)*((int *)this + 27);
    v28 = *(__int64 **)v2;
    v29 = *(__int64 **)v2;
    v30 = *(__int64 **)(*(_QWORD *)v2 + 8LL);
    if ( *((_BYTE *)v30 + 25) )
      goto LABEL_62;
    do
    {
      if ( *((_DWORD *)v30 + 7) >= v36 )
      {
        v29 = v30;
        v30 = (__int64 *)*v30;
      }
      else
      {
        v30 = (__int64 *)v30[2];
      }
    }
    while ( !*((_BYTE *)v30 + 25) );
    if ( v29 == v28 || v36 < *((_DWORD *)v29 + 7) )
    {
LABEL_62:
      v33[0] = &v36;
      v31 = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,KeyboardHosting::RelativePositionOnScreen,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
              v2,
              v28,
              v33);
      std::_Tree<std::_Tmap_traits<unsigned long,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>>,0>>::_Insert_hint<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId> &,std::_Tree_node<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>,void *> *>(
        (_DWORD)v2,
        (unsigned int)v33,
        (_DWORD)v29,
        v31 + 28,
        v31);
      v29 = (__int64 *)v33[0];
    }
    *((_BYTE *)v29 + 40) = 1;
    return 0;
  }
LABEL_15:
  if ( !v12 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
