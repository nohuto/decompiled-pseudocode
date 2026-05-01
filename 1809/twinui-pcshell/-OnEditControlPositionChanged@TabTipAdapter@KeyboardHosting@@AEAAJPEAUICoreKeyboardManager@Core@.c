/*
 * XREFs of ?OnEditControlPositionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlPositionChangedEventArgs@45678@@Z @ 0x1800540E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x180054554 (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU-$IVectorView@UCoreK.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?RequestShellStateChange@TabTipAdapter@KeyboardHosting@@AEAAJV?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@W4CoreKeyboardRequestType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardViewType@789UI@Windows@@W4CoreKeyboardModality@789UI@Windows@@@Z @ 0x1800940C8 (-RequestShellStateChange@TabTipAdapter@KeyboardHosting@@AEAAJV-$ComPtr@U-$IVectorView@UCoreKeybo.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x1800DD820 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@AEBV012@@Z @ 0x18010784C (--0-$ComPtr@U-$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Co.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnEditControlPositionChanged(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlPositionChangedEventArgs *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  float v6; // xmm7_4
  float v7; // xmm6_4
  float v8; // xmm8_4
  float v9; // xmm9_4
  __int64 v10; // rdi
  int v11; // r14d
  HMONITOR v12; // rax
  int ScaleFactorForMonitor; // eax
  int v14; // ecx
  float v15; // xmm3_4
  float top; // xmm2_4
  float v17; // xmm0_4
  float v18; // xmm1_4
  int v19; // eax
  float v20; // xmm4_4
  __m128 v21; // xmm0
  int PositionAndSizeOptions; // eax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rbx
  RTL_SRWLOCK *v26; // rdi
  int v27; // ebx
  int v28; // eax
  int v29; // eax
  int v31; // [rsp+28h] [rbp-E0h]
  __m128 v32; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v33; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v34; // [rsp+58h] [rbp-B0h]
  __int64 v35; // [rsp+68h] [rbp-A0h]
  _BYTE v36[24]; // [rsp+70h] [rbp-98h]
  RECT rcMonitor; // [rsp+88h] [rbp-80h]
  int v38; // [rsp+98h] [rbp-70h] BYREF
  __int64 v39; // [rsp+A0h] [rbp-68h] BYREF
  float v40[4]; // [rsp+A8h] [rbp-60h]
  RECT rc; // [rsp+B8h] [rbp-50h] BYREF
  struct tagMONITORINFO mi; // [rsp+C8h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+160h] [rbp+58h]

  v35 = -2LL;
  v39 = 0LL;
  *(_QWORD *)v40 = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlPositionChangedEventArgs *, __int64 *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v39);
  v5 = v4;
  if ( v4 >= 0 )
  {
    LODWORD(v6) = v39;
    v7 = *((float *)&v39 + 1);
    v8 = v40[0];
    v9 = v40[1];
    v10 = *((_QWORD *)this + 12);
    v11 = 0;
    v33 = 0LL;
    v32.m128_i32[0] = (int)*(float *)&v39;
    v32.m128_i32[1] = (int)*((float *)&v39 + 1);
    v32.m128_i32[2] = (int)(float)(v40[0] + *(float *)&v39);
    v32.m128_i32[3] = (int)(float)(*((float *)&v39 + 1) + v40[1]);
    rc = (RECT)v32;
    v12 = MonitorFromRect(&rc, 2u);
    *(_QWORD *)&v36[16] = 0LL;
    rcMonitor = (RECT)0LL;
    v38 = 100;
    *(_OWORD *)v36 = (unsigned __int64)v12;
    memset(&mi.rcMonitor, 0, 36);
    mi.cbSize = 40;
    if ( GetMonitorInfoW(v12, &mi) )
    {
      ScaleFactorForMonitor = GetScaleFactorForMonitor(*(_QWORD *)v36, &v38);
      if ( ScaleFactorForMonitor < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x20,
          (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\monitorinformation.cpp",
          (const char *)(unsigned int)ScaleFactorForMonitor,
          v31);
      rcMonitor = mi.rcMonitor;
      v14 = _mm_cvtsi128_si32((__m128i)mi.rcMonitor);
      v15 = (float)v14;
      top = (float)mi.rcMonitor.top;
      v17 = (float)(_mm_cvtsi128_si32(_mm_srli_si128((__m128i)mi.rcMonitor, 8)) - v14 + 1);
      v18 = (float)(_mm_srli_si128(*(__m128i *)(&mi + 4), 8).m128i_i32[1] - mi.rcMonitor.top + 1);
      v19 = v38;
      if ( v38 )
      {
        v20 = (float)v38;
        v15 = (float)(v15 * 100.0) / (float)v38;
      }
      else
      {
        v20 = 0.0;
      }
      v32.m128_f32[0] = v15;
      if ( v38 )
        top = (float)(top * 100.0) / v20;
      v32.m128_f32[1] = top;
      if ( v38 )
        v17 = (float)(v17 * 100.0) / v20;
      v32.m128_f32[2] = v17;
      if ( v38 )
        v18 = (float)(v18 * 100.0) / v20;
      v21 = _mm_shuffle_ps(v32, v32, 147);
      v21.m128_f32[0] = v18;
      *(__m128 *)&v36[8] = _mm_shuffle_ps(v21, v21, 57);
    }
    else
    {
      v19 = v38;
    }
    if ( v19 )
    {
      v6 = (float)(v6 * 100.0) / (float)v19;
      v7 = (float)(v7 * 100.0) / (float)v19;
      v8 = (float)(v8 * 100.0) / (float)v19;
      v9 = (float)(v9 * 100.0) / (float)v19;
    }
    v32.m128_u64[0] = __PAIR64__(LODWORD(v7), LODWORD(v6));
    v32.m128_u64[1] = __PAIR64__(LODWORD(v9), LODWORD(v8));
    v34 = *(_OWORD *)(v10 + 176);
    if ( v6 != *(float *)&v34 || v7 != *((float *)&v34 + 1) || v8 != *((float *)&v34 + 2) || v9 != *((float *)&v34 + 3) )
    {
      *(__m128 *)(v10 + 176) = v32;
      PositionAndSizeOptions = KeyboardHosting::TabTipAdapterPolicy::GetPositionAndSizeOptions((KeyboardHosting::TabTipAdapterPolicy *)v10);
      v5 = PositionAndSizeOptions;
      if ( PositionAndSizeOptions < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x56,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
          (const char *)(unsigned int)PositionAndSizeOptions);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x15C,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)v5);
LABEL_36:
        Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)&v33);
        return v5;
      }
      v11 = 3;
      *(_BYTE *)(v10 + 444) = 0;
    }
    v23 = *((_QWORD *)this + 5);
    if ( v23
      && (v32.m128_i32[0] = (int)*(float *)&v39,
          v32.m128_i32[1] = (int)*((float *)&v39 + 1),
          v32.m128_i32[2] = (int)(float)(v40[0] + *(float *)&v39),
          v32.m128_i32[3] = (int)(float)(*((float *)&v39 + 1) + v40[1]),
          rc = (RECT)v32,
          v24 = (*(__int64 (__fastcall **)(__int64, RECT *))(*(_QWORD *)v23 + 48LL))(v23, &rc),
          v5 = v24,
          v24 < 0) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x160,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v24);
    }
    else
    {
      if ( v11 != 3 )
        goto LABEL_35;
      v25 = *((_QWORD *)this + 7);
      v26 = (RTL_SRWLOCK *)(v25 + 688);
      AcquireSRWLockExclusive((PSRWLOCK)(v25 + 688));
      v27 = *(_DWORD *)(v25 + 680);
      if ( v26 )
        ReleaseSRWLockExclusive(v26);
      if ( v27 == 1
        && (v28 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>(
                    &v32,
                    &v33),
            v29 = KeyboardHosting::TabTipAdapter::RequestShellStateChange(
                    (_DWORD)this,
                    v28,
                    3,
                    9,
                    *(_DWORD *)(*((_QWORD *)this + 12) + 496LL)),
            v5 = v29,
            v29 < 0) )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x16C,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)v29);
      }
      else
      {
LABEL_35:
        v5 = 0;
      }
    }
    goto LABEL_36;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x157,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
