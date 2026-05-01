/*
 * XREFs of ?GetFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXPEAUPoint@Foundation@Windows@@I@Z @ 0x1802CA7B8
 * Callers:
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x180054554 (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU-$IVectorView@UCoreK.c)
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IPEAIPEAURect@Foundation@8@PEAE@Z @ 0x1802CCA50 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ??$_Insert_hint@AEAU?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@@7@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@1@PEAU?$_Tree_node@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@PEAX@1@@Z @ 0x1801D21D8 (--$_Insert_hint@AEAU-$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@PE.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@IURelativePositionOnScreen@KeyboardHosting@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1802C979C (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_Tree_comp_alloc@V-.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IUSize@Foundation@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@5@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@std@@@std@@@std@@_N@1@AEBI@Z @ 0x1802C9F54 (--$_Try_emplace@AEBI$$V@-$map@IUSize@Foundation@Windows@@U-$less@I@std@@V-$allocator@U-$pair@$$C.c)
 */

void __fastcall KeyboardHosting::TabTipAdapterPolicy::GetFloatingBottomPosition(
        KeyboardHosting::TabTipAdapterPolicy *this,
        struct Windows::Foundation::Point *a2,
        unsigned int a3)
{
  __int64 *v3; // rdi
  bool v7; // cf
  __int64 v8; // r8
  __m128 v9; // xmm8
  __m128i v10; // xmm0
  __m128 v11; // xmm4
  __int64 *v12; // rcx
  __int64 *v13; // rbx
  float v14; // xmm7_4
  float v15; // xmm8_4
  __int64 *v16; // rax
  bool v17; // zf
  float v18; // xmm1_4
  unsigned int *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  float v22; // xmm6_4
  __int64 v23; // rbx
  unsigned int *v24; // rax
  float v25; // xmm0_4
  unsigned int v26; // [rsp+38h] [rbp-29h] BYREF
  __int128 v27; // [rsp+40h] [rbp-21h] BYREF
  __int128 v28; // [rsp+50h] [rbp-11h]

  v3 = (__int64 *)((char *)this + 448);
  v7 = *((_BYTE *)this + 480) != 0;
  v26 = a3;
  v8 = v7 ? 0x30 : 0;
  v9 = *(__m128 *)((char *)this + v8 + 216);
  v10 = *(__m128i *)((char *)this + v8 + 248);
  v11 = *(__m128 *)((char *)this + v8 + 232);
  v12 = (__int64 *)*((_QWORD *)this + 56);
  v13 = v12;
  v14 = _mm_shuffle_ps(v9, v9, 170).m128_f32[0];
  v15 = _mm_shuffle_ps(v9, v9, 255).m128_f32[0];
  v16 = (__int64 *)v12[1];
  v17 = *((_BYTE *)v16 + 25) == 0;
  v18 = (float)_mm_cvtsi128_si32(_mm_srli_si128(v10, 8));
  *((float *)&v27 + 1) = (float)(v18 * v15) / 100.0;
  *(float *)&v27 = (float)(v18 * v14) / 100.0;
  *((float *)&v27 + 3) = (float)(v18 * _mm_shuffle_ps(v11, v11, 85).m128_f32[0]) / 100.0;
  *((float *)&v27 + 2) = (float)(v18 * v11.m128_f32[0]) / 100.0;
  v28 = v27;
  if ( !v17 )
    goto LABEL_8;
  do
  {
    if ( *((_DWORD *)v16 + 7) >= a3 )
    {
      v13 = v16;
      v16 = (__int64 *)*v16;
    }
    else
    {
      v16 = (__int64 *)v16[2];
    }
  }
  while ( !*((_BYTE *)v16 + 25) );
  if ( v13 == v12 || a3 < *((_DWORD *)v13 + 7) )
  {
LABEL_8:
    *(_QWORD *)&v27 = &v26;
    v19 = (unsigned int *)std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,KeyboardHosting::RelativePositionOnScreen,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
                            v3,
                            (__int64)a2,
                            (_DWORD **)&v27);
    std::_Tree<std::_Tmap_traits<unsigned long,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>>,0>>::_Insert_hint<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId> &,std::_Tree_node<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>,void *> *>(
      v3,
      &v27,
      v13,
      v19 + 7,
      v19);
    v13 = (__int64 *)v27;
  }
  std::map<unsigned int,Windows::Foundation::Size>::_Try_emplace<unsigned int const &,>(
    (__int64 *)this + 58,
    (__int64)&v27,
    &v26);
  v21 = *(_QWORD *)(*v3 + 8);
  v22 = (float)(*((float *)&v28 + 2) - *(float *)(v27 + 32)) * *((float *)v13 + 8);
  v23 = *v3;
  if ( *(_BYTE *)(v21 + 25) )
    goto LABEL_17;
  v20 = v26;
  do
  {
    if ( *(_DWORD *)(v21 + 28) >= v26 )
    {
      v23 = v21;
      v21 = *(_QWORD *)v21;
    }
    else
    {
      v21 = *(_QWORD *)(v21 + 16);
    }
  }
  while ( !*(_BYTE *)(v21 + 25) );
  if ( v23 == *v3 || v26 < *(_DWORD *)(v23 + 28) )
  {
LABEL_17:
    *(_QWORD *)&v27 = &v26;
    v24 = (unsigned int *)std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,KeyboardHosting::RelativePositionOnScreen,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
                            v3,
                            v20,
                            (_DWORD **)&v27);
    std::_Tree<std::_Tmap_traits<unsigned long,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>>,0>>::_Insert_hint<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId> &,std::_Tree_node<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>,void *> *>(
      v3,
      &v27,
      (__int64 *)v23,
      v24 + 7,
      v24);
    v23 = v27;
  }
  std::map<unsigned int,Windows::Foundation::Size>::_Try_emplace<unsigned int const &,>(
    (__int64 *)this + 58,
    (__int64)&v27,
    &v26);
  v25 = (float)(*((float *)&v28 + 3) - *(float *)(v27 + 36)) * *(float *)(v23 + 36);
  *(float *)a2 = v14 + v22;
  *((float *)a2 + 1) = v25 + v15;
}
