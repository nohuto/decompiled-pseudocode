/*
 * XREFs of ?OnEditControlPositionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlPositionChangedEventArgs@45678@@Z @ 0x180059AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x180059ED4 (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU-$IVectorView@UCoreK.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?GetForegroundAppId@TouchKeyboardExperienceManager@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18032EEE4 (-GetForegroundAppId@TouchKeyboardExperienceManager@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$r.c)
 *     ??$EditControlPositionChanged@PEAGAEAURect@Foundation@Windows@@AEAU123@@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEAGAEAURect@Foundation@Windows@@1@Z @ 0x18033B374 (--$EditControlPositionChanged@PEAGAEAURect@Foundation@Windows@@AEAU123@@TouchKeyboardExperienceT.c)
 *     ?RequestShellStateChange@TabTipAdapter@KeyboardHosting@@AEAAJV?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@W4CoreKeyboardRequestType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardViewType@789UI@Windows@@W4CoreKeyboardModality@789UI@Windows@@@Z @ 0x180343E94 (-RequestShellStateChange@TabTipAdapter@KeyboardHosting@@AEAAJV-$ComPtr@U-$IVectorView@UCoreKeybo.c)
 *     ?GetPrimaryViewDisplayMode@TabTipAdapterPolicy@KeyboardHosting@@QEAA?AW4IHM_DISPLAY_MODE@@XZ @ 0x18034AB4C (-GetPrimaryViewDisplayMode@TabTipAdapterPolicy@KeyboardHosting@@QEAA-AW4IHM_DISPLAY_MODE@@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnEditControlPositionChanged(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlPositionChangedEventArgs *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  RTL_SRWLOCK *v6; // rbx
  RTL_SRWLOCK *v7; // rdi
  __int64 v8; // rax
  LPVOID *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  _QWORD *Ptr; // r8
  _DWORD *v13; // rdx
  __int64 v14; // r9
  _DWORD *v15; // rcx
  _DWORD *v16; // rax
  float v17; // xmm7_4
  float v18; // xmm8_4
  float v19; // xmm9_4
  float v20; // xmm10_4
  __int64 v21; // rdi
  int v22; // r14d
  HMONITOR v23; // rbx
  int ScaleFactorForMonitor; // eax
  int v25; // ecx
  float v26; // xmm3_4
  float top; // xmm2_4
  float v28; // xmm0_4
  float v29; // xmm1_4
  int v30; // eax
  float v31; // xmm4_4
  __m128 v32; // xmm0
  __int64 v33; // rcx
  void *v34; // rcx
  int PositionAndSizeOptions; // eax
  __int64 v37; // rbx
  RTL_SRWLOCK *v38; // rdi
  int v39; // ebx
  char v40; // bl
  __int64 v41; // rcx
  int v42; // eax
  int v43; // eax
  int v44; // [rsp+28h] [rbp-E0h]
  int v45; // [rsp+28h] [rbp-E0h]
  int v46; // [rsp+28h] [rbp-E0h]
  __m128 v47; // [rsp+38h] [rbp-D0h] BYREF
  LPVOID pv_8[2]; // [rsp+48h] [rbp-C0h] BYREF
  void *v49; // [rsp+58h] [rbp-B0h]
  __int64 v50; // [rsp+60h] [rbp-A8h]
  HMONITOR v51; // [rsp+68h] [rbp-A0h]
  _OWORD v52[2]; // [rsp+70h] [rbp-98h] BYREF
  int v53; // [rsp+90h] [rbp-78h] BYREF
  __int64 v54; // [rsp+98h] [rbp-70h] BYREF
  __int64 v55; // [rsp+A0h] [rbp-68h]
  RECT rc; // [rsp+A8h] [rbp-60h] BYREF
  struct tagMONITORINFO mi; // [rsp+B8h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+160h] [rbp+58h]

  v50 = -2LL;
  v54 = 0LL;
  v55 = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlPositionChangedEventArgs *, __int64 *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v54);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15E,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v4,
      v44);
    return v5;
  }
  v6 = (RTL_SRWLOCK *)*((_QWORD *)this + 12);
  LODWORD(pv_8[0]) = 0;
  v7 = v6 + 53;
  AcquireSRWLockShared(v6 + 53);
  v8 = 0xCBF29CE484222325uLL;
  v9 = pv_8;
  v10 = 4LL;
  do
  {
    v8 = 0x100000001B3LL * (*(unsigned __int8 *)v9 ^ (unsigned __int64)v8);
    v9 = (LPVOID *)((char *)v9 + 1);
    --v10;
  }
  while ( v10 );
  Ptr = v6[48].Ptr;
  v11 = v8 & (__int64)v6[51].Ptr;
  v13 = (_DWORD *)Ptr[2 * v11];
  v14 = 2 * v11;
  v15 = v6[46].Ptr;
  while ( 1 )
  {
    v16 = (_DWORD *)Ptr[v14] == v15 ? v6[46].Ptr : *(_DWORD **)Ptr[v14 + 1];
    if ( v13 == v16 )
      break;
    if ( !v13[4] )
      goto LABEL_9;
    v13 = *(_DWORD **)v13;
  }
  v13 = v6[46].Ptr;
LABEL_9:
  if ( v13 == v15 )
  {
    if ( v6 != (RTL_SRWLOCK *)-424LL )
      ReleaseSRWLockShared(v6 + 53);
  }
  else
  {
    v40 = *((_BYTE *)v13 + 20);
    if ( v7 )
      ReleaseSRWLockShared(v7);
    if ( v40 )
    {
      if ( (unsigned int)KeyboardHosting::TabTipAdapterPolicy::GetPrimaryViewDisplayMode(*((_QWORD *)this + 12)) == 3 )
      {
        TouchKeyboardExperienceManager::GetForegroundAppId(v41, pv_8);
        v47.m128_u64[0] = (unsigned __int64)pv_8[0];
        TouchKeyboardExperienceTelemetryLogger::EditControlPositionChanged<unsigned short *,Windows::Foundation::Rect &,Windows::Foundation::Rect &>(
          &v47,
          *((_QWORD *)this + 12) + 580LL,
          &v54);
        if ( pv_8[0] )
          CoTaskMemFree(pv_8[0]);
      }
    }
  }
  LODWORD(v17) = v54;
  v18 = *((float *)&v54 + 1);
  LODWORD(v19) = v55;
  v20 = *((float *)&v55 + 1);
  v21 = *((_QWORD *)this + 12);
  v22 = 0;
  v49 = 0LL;
  v47.m128_i32[0] = (int)*(float *)&v54;
  v47.m128_i32[1] = (int)*((float *)&v54 + 1);
  v47.m128_i32[2] = (int)(float)(*(float *)&v55 + *(float *)&v54);
  v47.m128_i32[3] = (int)(float)(*((float *)&v54 + 1) + *((float *)&v55 + 1));
  rc = (RECT)v47;
  v23 = MonitorFromRect(&rc, 2u);
  memset_0(v52, 0, sizeof(v52));
  v53 = 100;
  v51 = v23;
  memset_0(&mi, 0, sizeof(mi));
  mi.cbSize = 40;
  if ( GetMonitorInfoW(v23, &mi) )
  {
    ScaleFactorForMonitor = GetScaleFactorForMonitor(v51, &v53);
    if ( ScaleFactorForMonitor < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x20,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\monitorinformation.cpp",
        (const char *)(unsigned int)ScaleFactorForMonitor,
        v44);
    v52[1] = mi.rcMonitor;
    v25 = _mm_cvtsi128_si32((__m128i)mi.rcMonitor);
    v26 = (float)v25;
    top = (float)mi.rcMonitor.top;
    v28 = (float)(_mm_cvtsi128_si32(_mm_srli_si128((__m128i)mi.rcMonitor, 8)) - v25 + 1);
    v29 = (float)(_mm_srli_si128(*(__m128i *)(&mi + 4), 8).m128i_i32[1] - mi.rcMonitor.top + 1);
    v30 = v53;
    if ( v53 )
    {
      v31 = (float)v53;
      v26 = (float)(v26 * 100.0) / (float)v53;
    }
    else
    {
      v31 = 0.0;
    }
    v47.m128_f32[0] = v26;
    if ( v53 )
      top = (float)(top * 100.0) / v31;
    v47.m128_f32[1] = top;
    if ( v53 )
      v28 = (float)(v28 * 100.0) / v31;
    v47.m128_f32[2] = v28;
    if ( v53 )
      v29 = (float)(v29 * 100.0) / v31;
    v32 = _mm_shuffle_ps(v47, v47, 147);
    v32.m128_f32[0] = v29;
    v47 = _mm_shuffle_ps(v32, v32, 57);
    v52[0] = v47;
  }
  else
  {
    v30 = v53;
  }
  if ( v30 )
  {
    v17 = (float)(v17 * 100.0) / (float)v30;
    v18 = (float)(v18 * 100.0) / (float)v30;
    v19 = (float)(v19 * 100.0) / (float)v30;
    v20 = (float)(v20 * 100.0) / (float)v30;
  }
  v47.m128_u64[0] = __PAIR64__(LODWORD(v18), LODWORD(v17));
  v47.m128_u64[1] = __PAIR64__(LODWORD(v20), LODWORD(v19));
  *(_OWORD *)pv_8 = *(_OWORD *)(v21 + 176);
  if ( v17 == *(float *)pv_8
    && v18 == *((float *)pv_8 + 1)
    && v19 == *(float *)&pv_8[1]
    && v20 == *((float *)&pv_8[1] + 1) )
  {
    goto LABEL_30;
  }
  *(__m128 *)(v21 + 176) = v47;
  PositionAndSizeOptions = KeyboardHosting::TabTipAdapterPolicy::GetPositionAndSizeOptions((KeyboardHosting::TabTipAdapterPolicy *)v21);
  v5 = PositionAndSizeOptions;
  if ( PositionAndSizeOptions >= 0 )
  {
    v22 = 3;
    *(_BYTE *)(v21 + 444) = 0;
LABEL_30:
    v33 = *((_QWORD *)this + 5);
    if ( v33
      && (v47.m128_i32[0] = (int)*(float *)&v54,
          v47.m128_i32[1] = (int)*((float *)&v54 + 1),
          v47.m128_i32[2] = (int)(float)(*(float *)&v55 + *(float *)&v54),
          v47.m128_i32[3] = (int)(float)(*((float *)&v54 + 1) + *((float *)&v55 + 1)),
          rc = (RECT)v47,
          v42 = (*(__int64 (__fastcall **)(__int64, RECT *))(*(_QWORD *)v33 + 48LL))(v33, &rc),
          v5 = v42,
          v42 < 0) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x171,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v42,
        v44);
    }
    else
    {
      if ( v22 != 3 )
        goto LABEL_32;
      v37 = *((_QWORD *)this + 7);
      v38 = (RTL_SRWLOCK *)(v37 + 720);
      AcquireSRWLockExclusive((PSRWLOCK)(v37 + 720));
      v39 = *(_DWORD *)(v37 + 712);
      if ( v38 )
        ReleaseSRWLockExclusive(v38);
      if ( v39 == 1
        && (pv_8[0] = v49,
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(pv_8),
            v43 = KeyboardHosting::TabTipAdapter::RequestShellStateChange(
                    (_DWORD)this,
                    (unsigned int)pv_8,
                    3,
                    9,
                    *(_DWORD *)(*((_QWORD *)this + 12) + 500LL)),
            v5 = v43,
            v43 < 0) )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x17D,
          (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)v43,
          v46);
      }
      else
      {
LABEL_32:
        v5 = 0;
      }
    }
    goto LABEL_33;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x52,
    (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
    (const char *)(unsigned int)PositionAndSizeOptions,
    v44);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x16D,
    (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)v5,
    v45);
LABEL_33:
  v34 = v49;
  if ( v49 )
  {
    v49 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v34 + 16LL))(v34);
  }
  return v5;
}
