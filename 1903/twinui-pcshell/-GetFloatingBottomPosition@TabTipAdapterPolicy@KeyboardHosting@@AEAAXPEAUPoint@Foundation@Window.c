/*
 * XREFs of ?GetFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXPEAUPoint@Foundation@Windows@@I@Z @ 0x18032AEB8
 * Callers:
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x18005AEC4 (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU-$IVectorView@UCoreK.c)
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IPEAIPEAURect@Foundation@8@PEAE@Z @ 0x18032CFB0 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@IURelativePositionOnScreen@KeyboardHosting@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180329BC0 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_Tree_comp_alloc@V-.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IURelativePositionOnScreen@KeyboardHosting@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@1@PEAU?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@1@@Z @ 0x180329FC8 (--$_Insert_hint@AEAU-$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAU-$_Tree_nod.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IUSize@Foundation@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@5@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@std@@@std@@@std@@_N@1@AEBI@Z @ 0x18032A60C (--$_Try_emplace@AEBI$$V@-$map@IUSize@Foundation@Windows@@U-$less@I@std@@V-$allocator@U-$pair@$$C.c)
 */

void __fastcall KeyboardHosting::TabTipAdapterPolicy::GetFloatingBottomPosition(
        KeyboardHosting::TabTipAdapterPolicy *this,
        struct Windows::Foundation::Point *a2,
        unsigned int a3)
{
  __int64 *v3; // rdi
  __int64 v4; // rbx
  bool v8; // cf
  __int64 v9; // r8
  __m128 v10; // xmm8
  __m128 v11; // xmm4
  float v12; // xmm7_4
  float v13; // xmm8_4
  __int64 v14; // rax
  float v15; // xmm3_4
  bool v16; // zf
  unsigned int *v17; // rax
  __int64 v18; // rdx
  float v19; // xmm6_4
  __int64 v20; // rbx
  __int64 v21; // rax
  unsigned int *v22; // rax
  float v23; // xmm0_4
  unsigned int v24; // [rsp+38h] [rbp-29h] BYREF
  __int128 v25; // [rsp+40h] [rbp-21h] BYREF
  __int128 v26; // [rsp+50h] [rbp-11h]

  v3 = (__int64 *)((char *)this + 448);
  v4 = *((_QWORD *)this + 56);
  v8 = *((_BYTE *)this + 484) != 0;
  v24 = a3;
  v9 = v8 ? 0x30 : 0;
  v10 = *(__m128 *)((char *)this + v9 + 216);
  v11 = *(__m128 *)((char *)this + v9 + 232);
  v12 = _mm_shuffle_ps(v10, v10, 170).m128_f32[0];
  v13 = _mm_shuffle_ps(v10, v10, 255).m128_f32[0];
  v14 = *(_QWORD *)(v4 + 8);
  v15 = (float)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)((char *)this + v9 + 248), 8));
  v16 = *(_BYTE *)(v14 + 25) == 0;
  *((float *)&v25 + 1) = (float)(v15 * v13) / 100.0;
  *(float *)&v25 = (float)(v15 * v12) / 100.0;
  *((float *)&v25 + 3) = (float)(v15 * _mm_shuffle_ps(v11, v11, 85).m128_f32[0]) / 100.0;
  *((float *)&v25 + 2) = (float)(v15 * v11.m128_f32[0]) / 100.0;
  v26 = v25;
  if ( !v16 )
    goto LABEL_8;
  do
  {
    if ( *(_DWORD *)(v14 + 28) >= a3 )
    {
      v4 = v14;
      v14 = *(_QWORD *)v14;
    }
    else
    {
      v14 = *(_QWORD *)(v14 + 16);
    }
  }
  while ( !*(_BYTE *)(v14 + 25) );
  if ( v4 == *v3 || a3 < *(_DWORD *)(v4 + 28) )
  {
LABEL_8:
    *(_QWORD *)&v25 = &v24;
    v17 = (unsigned int *)std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,KeyboardHosting::RelativePositionOnScreen,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
                            v3,
                            (__int64)a2,
                            (_DWORD **)&v25);
    std::_Tree<std::_Tmap_traits<unsigned int,KeyboardHosting::RelativePositionOnScreen,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>,0>>::_Insert_hint<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen> &,std::_Tree_node<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>,void *> *>(
      v3,
      &v25,
      v4,
      v17 + 7,
      v17);
    v4 = v25;
  }
  std::map<unsigned int,Windows::Foundation::Size>::_Try_emplace<unsigned int const &,>(
    (__int64 *)this + 58,
    (__int64)&v25,
    &v24);
  v19 = (float)(*((float *)&v26 + 2) - *(float *)(v25 + 32)) * *(float *)(v4 + 32);
  v20 = *v3;
  v21 = *(_QWORD *)(*v3 + 8);
  if ( *(_BYTE *)(v21 + 25) )
    goto LABEL_16;
  do
  {
    if ( *(_DWORD *)(v21 + 28) >= v24 )
    {
      v20 = v21;
      v21 = *(_QWORD *)v21;
    }
    else
    {
      v21 = *(_QWORD *)(v21 + 16);
    }
  }
  while ( !*(_BYTE *)(v21 + 25) );
  if ( v20 == *v3 || v24 < *(_DWORD *)(v20 + 28) )
  {
LABEL_16:
    *(_QWORD *)&v25 = &v24;
    v22 = (unsigned int *)std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,KeyboardHosting::RelativePositionOnScreen,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
                            v3,
                            v18,
                            (_DWORD **)&v25);
    std::_Tree<std::_Tmap_traits<unsigned int,KeyboardHosting::RelativePositionOnScreen,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>,0>>::_Insert_hint<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen> &,std::_Tree_node<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>,void *> *>(
      v3,
      &v25,
      v20,
      v22 + 7,
      v22);
    v20 = v25;
  }
  std::map<unsigned int,Windows::Foundation::Size>::_Try_emplace<unsigned int const &,>(
    (__int64 *)this + 58,
    (__int64)&v25,
    &v24);
  v23 = (float)(*((float *)&v26 + 3) - *(float *)(v25 + 36)) * *(float *)(v20 + 36);
  *(float *)a2 = v12 + v19;
  *((float *)a2 + 1) = v23 + v13;
}
