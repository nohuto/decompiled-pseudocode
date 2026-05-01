/*
 * XREFs of ?SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXAEBUPoint@Foundation@Windows@@I@Z @ 0x1802CBEE0
 * Callers:
 *     ?HandleFramePositionAndSizeUpdateCompleted@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIURect@Foundation@Windows@@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x1802CB090 (-HandleFramePositionAndSizeUpdateCompleted@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIURect@Foun.c)
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IPEAIPEAURect@Foundation@8@PEAE@Z @ 0x1802CCA50 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ??$_Try_emplace@AEBI$$V@?$map@IURelativePositionOnScreen@KeyboardHosting@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@4@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@std@@@std@@@std@@_N@1@AEBI@Z @ 0x18005FFD4 (--$_Try_emplace@AEBI$$V@-$map@IURelativePositionOnScreen@KeyboardHosting@@U-$less@I@std@@V-$allo.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IPEBGU?$less@I@std@@V?$allocator@U?$pair@$$CBIPEBG@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIPEBG@std@@@std@@@std@@@std@@_N@1@AEBI@Z @ 0x180066820 (--$_Try_emplace@AEBI$$V@-$map@IPEBGU-$less@I@std@@V-$allocator@U-$pair@$$CBIPEBG@std@@@2@@std@@Q.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18013434C (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@@7@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@1@PEAU?$_Tree_node@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@PEAX@1@@Z @ 0x1801D21D8 (--$_Insert_hint@AEAU-$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@PE.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@IURelativePositionOnScreen@KeyboardHosting@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1802C979C (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_Tree_comp_alloc@V-.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IUSize@Foundation@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@5@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@std@@@std@@@std@@_N@1@AEBI@Z @ 0x1802C9F54 (--$_Try_emplace@AEBI$$V@-$map@IUSize@Foundation@Windows@@U-$less@I@std@@V-$allocator@U-$pair@$$C.c)
 */

void __fastcall KeyboardHosting::TabTipAdapterPolicy::SaveFloatingBottomPosition(
        KeyboardHosting::TabTipAdapterPolicy *this,
        const struct Windows::Foundation::Point *a2,
        unsigned int a3)
{
  __int64 *v3; // r14
  float v5; // xmm8_4
  float v6; // xmm9_4
  bool v7; // cf
  unsigned int v8; // r8d
  __m128 v9; // xmm6
  __m128 v10; // xmm5
  float v11; // xmm4_4
  float v12; // xmm8_4
  float v13; // xmm9_4
  float v14; // xmm1_4
  __m128 v15; // xmm7
  __int64 v16; // rdx
  float v17; // xmm7_4
  float v18; // xmm6_4
  __int64 v19; // rdx
  __int64 *v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // r12
  __int64 v23; // rbx
  __int64 *v24; // rax
  unsigned int *v25; // rax
  __int64 v26; // rbx
  __int64 *v27; // rax
  unsigned int *v28; // rax
  __int64 v29; // r14
  __int64 v30; // rbx
  __int64 *v31; // rax
  unsigned int *v32; // rax
  __int64 v33; // rbx
  __int64 *v34; // rax
  unsigned int *v35; // rax
  __int64 v36; // rbx
  __int64 *v37; // rax
  unsigned int *v38; // rax
  __int64 *v39; // rcx
  __int64 *v40; // rbx
  __int64 *v41; // rax
  unsigned int *v42; // rax
  __int64 v43; // rbx
  __int64 *v44; // rax
  unsigned int *v45; // rax
  unsigned int v46; // eax
  unsigned int v47; // eax
  unsigned int v48; // [rsp+38h] [rbp-39h] BYREF
  unsigned int lpData[4]; // [rsp+40h] [rbp-31h] BYREF
  __int128 v50; // [rsp+50h] [rbp-21h] BYREF
  int Data[18]; // [rsp+60h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v3 = (__int64 *)((char *)this + 464);
  v5 = *(float *)a2;
  v6 = *((float *)a2 + 1);
  v7 = *((_BYTE *)this + 480) != 0;
  v48 = a3;
  v8 = v7 ? 0x30 : 0;
  v9 = *(__m128 *)((char *)this + v8 + 216);
  v10 = *(__m128 *)((char *)this + v8 + 232);
  v11 = _mm_shuffle_ps(v9, v9, 170).m128_f32[0];
  v9.m128_f32[0] = _mm_shuffle_ps(v9, v9, 255).m128_f32[0];
  v12 = v5 - v11;
  v13 = v6 - v9.m128_f32[0];
  v14 = (float)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)((char *)this + v8 + 248), 8));
  *(float *)&lpData[1] = (float)(v14 * v9.m128_f32[0]) / 100.0;
  *(float *)lpData = (float)(v14 * v11) / 100.0;
  *(float *)&lpData[3] = (float)(v14 * _mm_shuffle_ps(v10, v10, 85).m128_f32[0]) / 100.0;
  *(float *)&lpData[2] = (float)(v14 * v10.m128_f32[0]) / 100.0;
  v15 = *(__m128 *)lpData;
  v50 = *(_OWORD *)lpData;
  std::map<unsigned int,Windows::Foundation::Size>::_Try_emplace<unsigned int const &,>(
    (__int64 *)this + 58,
    (__int64)lpData,
    &v48);
  v17 = _mm_shuffle_ps(v15, v15, 170).m128_f32[0];
  if ( v17 < *(float *)(*(_QWORD *)lpData + 32LL)
    || (std::map<unsigned int,Windows::Foundation::Size>::_Try_emplace<unsigned int const &,>(v3, (__int64)lpData, &v48),
        v18 = *((float *)&v50 + 3),
        *((float *)&v50 + 3) < *(float *)(*(_QWORD *)lpData + 36LL)) )
  {
    v20 = (__int64 *)((char *)this + 448);
    v39 = (__int64 *)*((_QWORD *)this + 56);
    v40 = v39;
    v41 = (__int64 *)v39[1];
    if ( *((_BYTE *)v41 + 25) )
      goto LABEL_63;
    v16 = v48;
    do
    {
      if ( *((_DWORD *)v41 + 7) >= v48 )
      {
        v40 = v41;
        v41 = (__int64 *)*v41;
      }
      else
      {
        v41 = (__int64 *)v41[2];
      }
    }
    while ( !*((_BYTE *)v41 + 25) );
    if ( v40 == v39 || v48 < *((_DWORD *)v40 + 7) )
    {
LABEL_63:
      *(_QWORD *)lpData = &v48;
      v42 = (unsigned int *)std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,KeyboardHosting::RelativePositionOnScreen,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
                              (_QWORD *)this + 56,
                              v16,
                              (_DWORD **)lpData);
      std::_Tree<std::_Tmap_traits<unsigned long,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>>,0>>::_Insert_hint<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId> &,std::_Tree_node<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>,void *> *>(
        (__int64 *)this + 56,
        lpData,
        v40,
        v42 + 7,
        v42);
      v40 = *(__int64 **)lpData;
    }
    *((_BYTE *)v40 + 40) = 0;
  }
  else
  {
    std::map<unsigned int,Windows::Foundation::Size>::_Try_emplace<unsigned int const &,>(v3, (__int64)&v50, &v48);
    v20 = (__int64 *)((char *)this + 448);
    if ( v17 <= *(float *)(v50 + 32) )
    {
      v26 = *v20;
      v27 = *(__int64 **)(*v20 + 8);
      if ( *((_BYTE *)v27 + 25) )
        goto LABEL_22;
      v19 = v48;
      do
      {
        if ( *((_DWORD *)v27 + 7) >= v48 )
        {
          v26 = (__int64)v27;
          v27 = (__int64 *)*v27;
        }
        else
        {
          v27 = (__int64 *)v27[2];
        }
      }
      while ( !*((_BYTE *)v27 + 25) );
      if ( v26 == *v20 || v48 < *(_DWORD *)(v26 + 28) )
      {
LABEL_22:
        *(_QWORD *)lpData = &v48;
        v28 = (unsigned int *)std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,KeyboardHosting::RelativePositionOnScreen,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
                                (_QWORD *)this + 56,
                                v19,
                                (_DWORD **)lpData);
        std::_Tree<std::_Tmap_traits<unsigned long,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>>,0>>::_Insert_hint<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId> &,std::_Tree_node<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>,void *> *>(
          (__int64 *)this + 56,
          lpData,
          (__int64 *)v26,
          v28 + 7,
          v28);
        v26 = *(_QWORD *)lpData;
      }
      *(_DWORD *)(v26 + 32) = 0;
    }
    else
    {
      std::map<unsigned int,Windows::Foundation::Size>::_Try_emplace<unsigned int const &,>(v3, (__int64)&v50, &v48);
      v22 = v50;
      v23 = *v20;
      v24 = *(__int64 **)(*v20 + 8);
      if ( *((_BYTE *)v24 + 25) )
        goto LABEL_12;
      v21 = v48;
      do
      {
        if ( *((_DWORD *)v24 + 7) >= v48 )
        {
          v23 = (__int64)v24;
          v24 = (__int64 *)*v24;
        }
        else
        {
          v24 = (__int64 *)v24[2];
        }
      }
      while ( !*((_BYTE *)v24 + 25) );
      if ( v23 == *v20 || v48 < *(_DWORD *)(v23 + 28) )
      {
LABEL_12:
        *(_QWORD *)lpData = &v48;
        v25 = (unsigned int *)std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,KeyboardHosting::RelativePositionOnScreen,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
                                (_QWORD *)this + 56,
                                v21,
                                (_DWORD **)lpData);
        std::_Tree<std::_Tmap_traits<unsigned long,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>>,0>>::_Insert_hint<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId> &,std::_Tree_node<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>,void *> *>(
          (__int64 *)this + 56,
          lpData,
          (__int64 *)v23,
          v25 + 7,
          v25);
        v23 = *(_QWORD *)lpData;
      }
      *(float *)(v23 + 32) = v12 / (float)(v17 - *(float *)(v22 + 32));
    }
    std::map<unsigned int,Windows::Foundation::Size>::_Try_emplace<unsigned int const &,>(v3, (__int64)&v50, &v48);
    if ( v18 <= *(float *)(v50 + 36) )
    {
      v33 = *v20;
      v34 = *(__int64 **)(*v20 + 8);
      if ( *((_BYTE *)v34 + 25) )
        goto LABEL_43;
      v16 = v48;
      do
      {
        if ( *((_DWORD *)v34 + 7) >= v48 )
        {
          v33 = (__int64)v34;
          v34 = (__int64 *)*v34;
        }
        else
        {
          v34 = (__int64 *)v34[2];
        }
      }
      while ( !*((_BYTE *)v34 + 25) );
      if ( v33 == *v20 || v48 < *(_DWORD *)(v33 + 28) )
      {
LABEL_43:
        *(_QWORD *)lpData = &v48;
        v35 = (unsigned int *)std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,KeyboardHosting::RelativePositionOnScreen,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
                                (_QWORD *)this + 56,
                                v16,
                                (_DWORD **)lpData);
        std::_Tree<std::_Tmap_traits<unsigned long,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>>,0>>::_Insert_hint<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId> &,std::_Tree_node<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>,void *> *>(
          (__int64 *)this + 56,
          lpData,
          (__int64 *)v33,
          v35 + 7,
          v35);
        v33 = *(_QWORD *)lpData;
      }
      *(_DWORD *)(v33 + 36) = 0;
    }
    else
    {
      std::map<unsigned int,Windows::Foundation::Size>::_Try_emplace<unsigned int const &,>(v3, (__int64)&v50, &v48);
      v29 = v50;
      v30 = *v20;
      v31 = *(__int64 **)(*v20 + 8);
      if ( *((_BYTE *)v31 + 25) )
        goto LABEL_33;
      v16 = v48;
      do
      {
        if ( *((_DWORD *)v31 + 7) >= v48 )
        {
          v30 = (__int64)v31;
          v31 = (__int64 *)*v31;
        }
        else
        {
          v31 = (__int64 *)v31[2];
        }
      }
      while ( !*((_BYTE *)v31 + 25) );
      if ( v30 == *v20 || v48 < *(_DWORD *)(v30 + 28) )
      {
LABEL_33:
        *(_QWORD *)lpData = &v48;
        v32 = (unsigned int *)std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,KeyboardHosting::RelativePositionOnScreen,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
                                (_QWORD *)this + 56,
                                v16,
                                (_DWORD **)lpData);
        std::_Tree<std::_Tmap_traits<unsigned long,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>>,0>>::_Insert_hint<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId> &,std::_Tree_node<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>,void *> *>(
          (__int64 *)this + 56,
          lpData,
          (__int64 *)v30,
          v32 + 7,
          v32);
        v30 = *(_QWORD *)lpData;
      }
      *(float *)(v30 + 36) = v13 / (float)(v18 - *(float *)(v29 + 36));
    }
    v36 = *v20;
    v37 = *(__int64 **)(*v20 + 8);
    if ( *((_BYTE *)v37 + 25) )
      goto LABEL_53;
    v16 = v48;
    do
    {
      if ( *((_DWORD *)v37 + 7) >= v48 )
      {
        v36 = (__int64)v37;
        v37 = (__int64 *)*v37;
      }
      else
      {
        v37 = (__int64 *)v37[2];
      }
    }
    while ( !*((_BYTE *)v37 + 25) );
    if ( v36 == *v20 || v48 < *(_DWORD *)(v36 + 28) )
    {
LABEL_53:
      *(_QWORD *)lpData = &v48;
      v38 = (unsigned int *)std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,KeyboardHosting::RelativePositionOnScreen,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
                              (_QWORD *)this + 56,
                              v16,
                              (_DWORD **)lpData);
      std::_Tree<std::_Tmap_traits<unsigned long,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>>,0>>::_Insert_hint<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId> &,std::_Tree_node<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>,void *> *>(
        (__int64 *)this + 56,
        lpData,
        (__int64 *)v36,
        v38 + 7,
        v38);
      v36 = *(_QWORD *)lpData;
    }
    *(_BYTE *)(v36 + 40) = 1;
  }
  v43 = *v20;
  v44 = *(__int64 **)(*v20 + 8);
  if ( *((_BYTE *)v44 + 25) )
    goto LABEL_73;
  v16 = v48;
  do
  {
    if ( *((_DWORD *)v44 + 7) >= v48 )
    {
      v43 = (__int64)v44;
      v44 = (__int64 *)*v44;
    }
    else
    {
      v44 = (__int64 *)v44[2];
    }
  }
  while ( !*((_BYTE *)v44 + 25) );
  if ( v43 == *v20 || v48 < *(_DWORD *)(v43 + 28) )
  {
LABEL_73:
    *(_QWORD *)lpData = &v48;
    v45 = (unsigned int *)std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,KeyboardHosting::RelativePositionOnScreen,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
                            v20,
                            v16,
                            (_DWORD **)lpData);
    std::_Tree<std::_Tmap_traits<unsigned long,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>>,0>>::_Insert_hint<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId> &,std::_Tree_node<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>,void *> *>(
      v20,
      lpData,
      (__int64 *)v43,
      v45 + 7,
      v45);
    v43 = *(_QWORD *)lpData;
  }
  if ( *(_BYTE *)(v43 + 40) )
  {
    std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
      v20,
      (__int64)&v50,
      &v48);
    Data[0] = (int)(float)((float)*((int *)this + 27) * *(float *)(v50 + 32));
    std::map<unsigned int,unsigned short const *>::_Try_emplace<unsigned int const &,>(
      (__int64 *)this + 9,
      (__int64)&v50,
      &v48);
    v46 = RegSetKeyValueW(
            HKEY_CURRENT_USER,
            L"SOFTWARE\\Microsoft\\TabletTip\\1.7",
            *(LPCWSTR *)(v50 + 40),
            4u,
            Data,
            4u);
    if ( v46 )
      wil::details::in1diag3::_Log_Win32(
        retaddr,
        1044LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
        (const char *)v46);
    std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
      v20,
      (__int64)&v50,
      &v48);
    lpData[0] = (int)(float)((float)*((int *)this + 27) * *(float *)(v50 + 36));
    std::map<unsigned int,unsigned short const *>::_Try_emplace<unsigned int const &,>(
      (__int64 *)this + 11,
      (__int64)&v50,
      &v48);
    v47 = RegSetKeyValueW(
            HKEY_CURRENT_USER,
            L"SOFTWARE\\Microsoft\\TabletTip\\1.7",
            *(LPCWSTR *)(v50 + 40),
            4u,
            lpData,
            4u);
    if ( v47 )
      wil::details::in1diag3::_Log_Win32(
        retaddr,
        1047LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
        (const char *)v47);
  }
}
