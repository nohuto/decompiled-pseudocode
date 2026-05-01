/*
 * XREFs of ?GetDefaultKeyboardSize@PositionAndSizeOptionsHelper@KeyboardHosting@@QEAA?AUKeyboardSize@2@PEAUHMONITOR__@@URect@Foundation@Windows@@W4DEVICE_SCALE_FACTOR@@_NNPEAN@Z @ 0x18001F010
 * Callers:
 *     ?GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation@Windows@@0I_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@@Z @ 0x18001F280 (-GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation.c)
 * Callees:
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     sqrt @ 0x180087D4C (sqrt.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008BBC0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ceilf_0 @ 0x1800B0F27 (ceilf_0.c)
 *     ??$_Try_emplace@AEBQEAUHMONITOR__@@$$V@?$map@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@U?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@5@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@std@@@std@@@std@@_N@1@AEBQEAUHMONITOR__@@@Z @ 0x180330AD4 (--$_Try_emplace@AEBQEAUHMONITOR__@@$$V@-$map@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@.c)
 */

_DWORD *__fastcall KeyboardHosting::PositionAndSizeOptionsHelper::GetDefaultKeyboardSize(
        __int64 **a1,
        _DWORD *a2,
        HMONITOR a3,
        __int64 a4,
        int a5,
        char a6,
        double a7,
        double *a8)
{
  int v9; // r15d
  double v13; // xmm11_8
  const char *v14; // r9
  int v15; // edi
  int v16; // ebx
  __int64 *v17; // rcx
  __int64 *v18; // rax
  double v19; // xmm5_8
  double v20; // xmm4_8
  float v21; // xmm7_4
  float v22; // xmm2_4
  float v23; // xmm8_4
  float v24; // xmm1_4
  int v25; // eax
  float v26; // xmm1_4
  int v27; // ecx
  unsigned int v28; // eax
  double v30; // xmm7_8
  double v31; // xmm8_8
  bool v32; // cc
  __int128 v33; // xmm0
  double v34; // xmm3_8
  int v35; // eax
  float v36; // xmm3_4
  float v37; // xmm1_4
  double v38; // xmm1_8
  HMONITOR v39; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v40; // [rsp+28h] [rbp-D8h]
  _QWORD v41[2]; // [rsp+38h] [rbp-C8h] BYREF
  tagMONITORINFO mi; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v43[24]; // [rsp+70h] [rbp-90h] BYREF
  int v44; // [rsp+88h] [rbp-78h]
  int v45; // [rsp+8Ch] [rbp-74h]
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v9 = 96;
  v39 = a3;
  DWORD2(v40) = 96;
  mi.cbSize = 40;
  v13 = 0.0;
  memset_0(v43, 0, 0x60uLL);
  if ( GetMonitorInfoW(a3, &mi) )
  {
    if ( (unsigned int)GetCurrentDpiInfo(a3, v43) )
    {
      v15 = abs32(mi.rcMonitor.right - mi.rcMonitor.left);
      v16 = abs32(mi.rcMonitor.bottom - mi.rcMonitor.top);
      if ( v15 > 0 && v16 > 0 && v44 > 0 && v45 > 0 )
      {
        v30 = (double)(100 * v44) / 2540.0;
        v31 = (double)(100 * v45) / 2540.0;
        v32 = v15 < v16;
        if ( v15 > v16 )
        {
          if ( v31 > v30 )
          {
LABEL_33:
            v30 = (double)(100 * v45) / 2540.0;
            v31 = (double)(100 * v44) / 2540.0;
LABEL_34:
            v13 = sqrt(v31 * v31 + v30 * v30);
            DWORD2(v40) = (int)((double)v15 / v30);
            v9 = (int)((double)v16 / v31);
            HIDWORD(v40) = v9;
            std::map<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi>::_Try_emplace<HMONITOR__ * const &,>(a1, v41, &v39);
            *((_QWORD *)&v33 + 1) = *((_QWORD *)&v40 + 1);
            *(double *)&v33 = v13;
            *(_OWORD *)(v41[0] + 40LL) = v33;
            goto LABEL_7;
          }
          v32 = v15 < v16;
        }
        if ( !v32 || v30 <= v31 )
          goto LABEL_34;
        goto LABEL_33;
      }
    }
  }
  v17 = *a1;
  v18 = (__int64 *)(*a1)[1];
  if ( !*((_BYTE *)v18 + 25) )
  {
    do
    {
      if ( v18[4] >= (unsigned __int64)v39 )
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
    if ( v17 != *a1 && (unsigned __int64)v39 >= v17[4] )
    {
      std::map<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi>::_Try_emplace<HMONITOR__ * const &,>(a1, v41, &v39);
      v40 = *(_OWORD *)(v41[0] + 40LL);
      v9 = HIDWORD(v40);
      v13 = *(double *)&v40;
    }
  }
LABEL_7:
  if ( a6 )
  {
    v20 = a7;
    v19 = v13 / a7;
    if ( v13 / a7 <= 0.0 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x30,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionshelper.cpp",
        v14);
      __debugbreak();
    }
  }
  else
  {
    v19 = DOUBLE_1_0;
    v20 = v13;
  }
  v21 = *(float *)(a4 + 8);
  *a8 = v19;
  if ( a6 )
    v22 = v21 * v19;
  else
    v22 = v21;
  if ( v22 <= 0.0 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x33,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionshelper.cpp",
      v14);
    __debugbreak();
  }
  v23 = *(float *)(a4 + 12);
  if ( a6 )
    v24 = v23 * v19;
  else
    v24 = *(float *)(a4 + 12);
  if ( v24 <= 0.0 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x35,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionshelper.cpp",
      v14);
    __debugbreak();
  }
  if ( a6 )
    v25 = (int)((double)v9 * v19);
  else
    v25 = v9;
  if ( !v25 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x37,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionshelper.cpp",
      v14);
    __debugbreak();
  }
  if ( v20 != 0.0 && v20 >= 8.0 )
    v22 = v22 * 0.89999998;
  *a2 = (int)v22;
  if ( v20 == 0.0 || v20 < 8.0 )
  {
    v26 = v24 * 0.5;
    goto LABEL_21;
  }
  v34 = (double)v25;
  if ( v20 >= 23.5 )
  {
    if ( v20 >= 55.0 )
    {
      v37 = (float)(int)(v34 * 6.299212598425197);
      if ( !a5 )
        goto LABEL_62;
    }
    else
    {
      v37 = (float)(int)((v20 * 260.0 + 1700.0) / 2540.0 * v34);
      if ( !a5 )
      {
LABEL_62:
        v26 = ceilf_0(v37);
        goto LABEL_21;
      }
    }
    v37 = (float)(v37 * 100.0) / (float)a5;
    goto LABEL_62;
  }
  v35 = 1900;
  if ( v20 < 19.5 )
    v35 = 1600;
  v36 = (double)v35 / 2540.0 * 4.0 * v34 + v34 * 0.07874015748031496 + (double)v35 / 2540.0 * v34;
  if ( a5 )
    v36 = (float)(v36 * 100.0) / (float)a5;
  v26 = ceilf_0(v36);
LABEL_21:
  v27 = (int)v26;
  a2[1] = (int)v26;
  if ( (float)(int)v22 > v21 )
    *a2 = (int)v21;
  v28 = (int)(float)(v23 * 0.5);
  if ( v27 > v28 )
  {
    a2[1] = v28;
    v27 = (int)(float)(v23 * 0.5);
  }
  if ( v13 > 8.0 && v13 < 23.5 )
  {
    v38 = v23 * 0.43;
    if ( (double)v27 > v38 )
      a2[1] = (int)v38;
  }
  return a2;
}
