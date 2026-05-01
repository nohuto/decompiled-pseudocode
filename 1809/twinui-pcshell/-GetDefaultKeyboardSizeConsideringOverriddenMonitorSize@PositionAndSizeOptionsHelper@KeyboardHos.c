/*
 * XREFs of ?GetDefaultKeyboardSizeConsideringOverriddenMonitorSize@PositionAndSizeOptionsHelper@KeyboardHosting@@QEAA?AUKeyboardSize@2@PEAUHMONITOR__@@URect@Foundation@Windows@@W4DEVICE_SCALE_FACTOR@@_NNPEAN@Z @ 0x1800945A0
 * Callers:
 *     ?GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation@Windows@@0I_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@@Z @ 0x1800547B0 (-GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation.c)
 * Callees:
 *     ?TryGetScreenSizeAndDpi@PositionAndSizeOptionsHelper@KeyboardHosting@@CA_NPEAUHMONITOR__@@PEAUScreenSizeAndDpi@2@@Z @ 0x1800607E0 (-TryGetScreenSizeAndDpi@PositionAndSizeOptionsHelper@KeyboardHosting@@CA_NPEAUHMONITOR__@@PEAUSc.c)
 *     ?GetDefaultKeyboardHeight@PositionAndSizeOptionsHelper@KeyboardHosting@@CAINMW4DEVICE_SCALE_FACTOR@@I@Z @ 0x18006E9AC (-GetDefaultKeyboardHeight@PositionAndSizeOptionsHelper@KeyboardHosting@@CAINMW4DEVICE_SCALE_FACT.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800DF27C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??A?$map@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@U?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@5@@std@@QEAAAEAUScreenSizeAndDpi@KeyboardHosting@@AEBQEAUHMONITOR__@@@Z @ 0x1802D0294 (--A-$map@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@U-$less@PEAUHMONITOR__@@@std@@V-$all.c)
 */

__int64 __fastcall KeyboardHosting::PositionAndSizeOptionsHelper::GetDefaultKeyboardSizeConsideringOverriddenMonitorSize(
        __int64 *a1,
        __int64 a2,
        HMONITOR a3,
        __int64 a4,
        DEVICE_SCALE_FACTOR a5,
        char a6,
        double a7,
        double *a8)
{
  __int64 v11; // r8
  const char *v12; // r9
  _OWORD *v13; // rax
  __int64 *v14; // rax
  __int64 *v15; // rdx
  __int64 *v16; // rcx
  char v17; // cl
  double v18; // xmm6_8
  double v19; // xmm3_8
  double v20; // xmm1_8
  float v21; // xmm2_4
  float v22; // xmm5_4
  int v23; // eax
  enum DEVICE_SCALE_FACTOR v24; // r8d
  int DefaultKeyboardHeight; // eax
  unsigned int v26; // ecx
  double v27; // xmm1_8
  __int128 v29; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  HMONITOR v31; // [rsp+80h] [rbp+18h] BYREF

  v31 = a3;
  if ( KeyboardHosting::PositionAndSizeOptionsHelper::TryGetScreenSizeAndDpi(
         a3,
         (struct KeyboardHosting::ScreenSizeAndDpi *)&v29) )
  {
    v13 = (_OWORD *)std::map<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi>::operator[](a1, &v31, v11);
    *v13 = v29;
  }
  else
  {
    v14 = (__int64 *)*a1;
    v15 = (__int64 *)*a1;
    v16 = *(__int64 **)(*a1 + 8);
    while ( !*((_BYTE *)v16 + 25) )
    {
      if ( v16[4] >= (unsigned __int64)v31 )
      {
        v15 = v16;
        v16 = (__int64 *)*v16;
      }
      else
      {
        v16 = (__int64 *)v16[2];
      }
    }
    if ( v15 == v14 || (unsigned __int64)v31 < v15[4] )
      v15 = (__int64 *)*a1;
    if ( v15 != v14 )
      v29 = *(_OWORD *)std::map<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi>::operator[](a1, &v31, v31);
  }
  v17 = a6;
  v18 = *(double *)&v29;
  if ( a6 )
    v19 = a7;
  else
    v19 = *(double *)&v29;
  if ( a6 )
    v20 = *(double *)&v29 / a7;
  else
    v20 = DOUBLE_1_0;
  if ( v20 <= 0.0 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x45,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionshelper.cpp",
      v12);
    __debugbreak();
  }
  *a8 = v20;
  if ( v17 )
    v21 = *(float *)(a4 + 8) * v20;
  else
    v21 = *(float *)(a4 + 8);
  if ( v21 <= 0.0 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x48,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionshelper.cpp",
      v12);
    __debugbreak();
  }
  if ( v17 )
    v22 = *(float *)(a4 + 12) * v20;
  else
    v22 = *(float *)(a4 + 12);
  if ( v22 <= 0.0 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x4A,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionshelper.cpp",
      v12);
    JUMPOUT(0x180094849LL);
  }
  if ( v17 )
    v23 = (int)((double)SHIDWORD(v29) * v20);
  else
    v23 = HIDWORD(v29);
  if ( !v23 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x4C,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionshelper.cpp",
      v12);
    __debugbreak();
  }
  *(_QWORD *)a2 = 0LL;
  if ( v19 != 0.0 && v19 >= 8.0 )
    v21 = v21 * 0.89999998;
  v24 = a5;
  *(_DWORD *)a2 = (int)v21;
  DefaultKeyboardHeight = KeyboardHosting::PositionAndSizeOptionsHelper::GetDefaultKeyboardHeight(v19, v22, v24, v23);
  *(_DWORD *)(a2 + 4) = DefaultKeyboardHeight;
  if ( (float)(int)v21 > *(float *)(a4 + 8) )
    *(_DWORD *)a2 = (int)*(float *)(a4 + 8);
  v26 = (int)(float)(*(float *)(a4 + 12) * 0.5);
  if ( DefaultKeyboardHeight > v26 )
  {
    *(_DWORD *)(a2 + 4) = v26;
    DefaultKeyboardHeight = v26;
  }
  if ( v18 > 8.0 && v18 < 23.5 )
  {
    v27 = *(float *)(a4 + 12) * 0.43;
    if ( (double)DefaultKeyboardHeight > v27 )
      *(_DWORD *)(a2 + 4) = (int)v27;
  }
  return a2;
}
