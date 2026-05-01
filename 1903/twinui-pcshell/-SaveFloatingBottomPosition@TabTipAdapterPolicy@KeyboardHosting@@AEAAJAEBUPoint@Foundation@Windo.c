/*
 * XREFs of ?SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUPoint@Foundation@Windows@@I@Z @ 0x18032C6F0
 * Callers:
 *     ?HandleFramePositionAndSizeUpdateCompleted@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIURect@Foundation@Windows@@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x18032B7D0 (-HandleFramePositionAndSizeUpdateCompleted@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIURect@Foun.c)
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IPEAIPEAURect@Foundation@8@PEAE@Z @ 0x18032CFB0 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ??$_Try_emplace@AEBI$$V@?$map@IPEBGU?$less@I@std@@V?$allocator@U?$pair@$$CBIPEBG@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIPEBG@std@@@std@@@std@@@std@@_N@1@AEBI@Z @ 0x1800682C4 (--$_Try_emplace@AEBI$$V@-$map@IPEBGU-$less@I@std@@V-$allocator@U-$pair@$$CBIPEBG@std@@@2@@std@@Q.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18015DD2C (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ??A?$map@IURelativePositionOnScreen@KeyboardHosting@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@4@@std@@QEAAAEAURelativePositionOnScreen@KeyboardHosting@@AEBI@Z @ 0x18032A9FC (--A-$map@IURelativePositionOnScreen@KeyboardHosting@@U-$less@I@std@@V-$allocator@U-$pair@$$CBIUR.c)
 *     ??A?$map@IUSize@Foundation@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@5@@std@@QEAAAEAUSize@Foundation@Windows@@AEBI@Z @ 0x18032AA80 (--A-$map@IUSize@Foundation@Windows@@U-$less@I@std@@V-$allocator@U-$pair@$$CBIUSize@Foundation@Wi.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::SaveFloatingBottomPosition(
        KeyboardHosting::TabTipAdapterPolicy *this,
        const struct Windows::Foundation::Point *a2,
        unsigned int a3)
{
  float v4; // xmm11_4
  float v5; // xmm12_4
  bool v6; // cf
  __int64 v7; // r8
  __m128 v8; // xmm6
  __m128 v9; // xmm5
  float v10; // xmm4_4
  float v11; // xmm11_4
  float v12; // xmm12_4
  float v13; // xmm1_4
  __m128 v14; // xmm8
  float *v15; // rax
  float v16; // xmm8_4
  float v17; // xmm10_4
  float v18; // xmm7_4
  float v19; // xmm8_4
  __int64 *v20; // rbx
  float v21; // xmm6_4
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned int v25; // [rsp+38h] [rbp-39h] BYREF
  __m128 v26; // [rsp+40h] [rbp-31h] BYREF
  int Data; // [rsp+50h] [rbp-21h] BYREF
  unsigned int lpData[29]; // [rsp+54h] [rbp-1Dh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v4 = *(float *)a2;
  v5 = *((float *)a2 + 1);
  v6 = *((_BYTE *)this + 484) != 0;
  v25 = a3;
  v7 = v6 ? 0x30 : 0;
  v8 = *(__m128 *)((char *)this + v7 + 216);
  v9 = *(__m128 *)((char *)this + v7 + 232);
  v10 = _mm_shuffle_ps(v8, v8, 170).m128_f32[0];
  v8.m128_f32[0] = _mm_shuffle_ps(v8, v8, 255).m128_f32[0];
  v11 = v4 - v10;
  v12 = v5 - v8.m128_f32[0];
  v13 = (float)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)((char *)this + v7 + 248), 8));
  v26.m128_f32[1] = (float)(v13 * v8.m128_f32[0]) / 100.0;
  v26.m128_f32[0] = (float)(v13 * v10) / 100.0;
  v26.m128_f32[3] = (float)(v13 * _mm_shuffle_ps(v9, v9, 85).m128_f32[0]) / 100.0;
  v26.m128_f32[2] = (float)(v13 * v9.m128_f32[0]) / 100.0;
  v14 = v26;
  v15 = (float *)std::map<unsigned int,Windows::Foundation::Size>::operator[]((__int64 *)this + 58, &v25);
  v16 = _mm_shuffle_ps(v14, v14, 170).m128_f32[0];
  v17 = v15[1];
  if ( v16 < *v15 || (v18 = v26.m128_f32[3], v26.m128_f32[3] < v17) )
  {
    v20 = (__int64 *)((char *)this + 448);
    *((_BYTE *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::operator[]((__int64 *)this + 56, &v25)
    + 8) = 0;
  }
  else
  {
    if ( v16 <= *v15 )
    {
      v20 = (__int64 *)((char *)this + 448);
      *std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::operator[]((__int64 *)this + 56, &v25) = 0;
    }
    else
    {
      v19 = fmaxf(0.0, v11 / (float)(v16 - *v15));
      if ( v19 >= 1.0 )
        v19 = FLOAT_1_0;
      v20 = (__int64 *)((char *)this + 448);
      *(float *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::operator[]((__int64 *)this + 56, &v25) = v19;
    }
    if ( v18 <= v17 )
    {
      std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::operator[](v20, &v25)[1] = 0;
    }
    else
    {
      v21 = fmaxf(0.0, v12 / (float)(v18 - v17));
      if ( v21 >= 1.0 )
        v21 = FLOAT_1_0;
      *((float *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::operator[](v20, &v25) + 1) = v21;
    }
    *((_BYTE *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::operator[](v20, &v25) + 8) = 1;
  }
  if ( *((_BYTE *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::operator[](v20, &v25) + 8) )
  {
    Data = (int)(float)((float)*((int *)this + 27)
                      * *(float *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::operator[](
                                    v20,
                                    &v25));
    std::map<unsigned int,unsigned short const *>::_Try_emplace<unsigned int const &,>(
      (__int64 **)this + 9,
      (__int64)&v26,
      &v25);
    v22 = RegSetKeyValueW(
            HKEY_CURRENT_USER,
            L"SOFTWARE\\Microsoft\\TabletTip\\1.7",
            *(LPCWSTR *)(v26.m128_u64[0] + 40),
            4u,
            &Data,
            4u);
    if ( v22 )
      wil::details::in1diag3::_Log_Win32(
        retaddr,
        1088LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
        (const char *)v22);
    lpData[0] = (int)(float)((float)*((int *)this + 27)
                           * *((float *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::operator[](
                                          v20,
                                          &v25)
                             + 1));
    std::map<unsigned int,unsigned short const *>::_Try_emplace<unsigned int const &,>(
      (__int64 **)this + 11,
      (__int64)&v26,
      &v25);
    v23 = RegSetKeyValueW(
            HKEY_CURRENT_USER,
            L"SOFTWARE\\Microsoft\\TabletTip\\1.7",
            *(LPCWSTR *)(v26.m128_u64[0] + 40),
            4u,
            lpData,
            4u);
    if ( v23 )
      wil::details::in1diag3::_Log_Win32(
        retaddr,
        1091LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
        (const char *)v23);
  }
  return 0LL;
}
