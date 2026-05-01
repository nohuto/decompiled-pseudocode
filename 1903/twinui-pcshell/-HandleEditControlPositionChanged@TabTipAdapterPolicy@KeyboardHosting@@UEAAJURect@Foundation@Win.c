/*
 * XREFs of ?HandleEditControlPositionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x18032B600
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x18005AEC4 (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU-$IVectorView@UCoreK.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     ?GetCurrentMonitorWithRect@TabTipAdapterPolicy@KeyboardHosting@@CAPEAUHMONITOR__@@URect@Foundation@Windows@@@Z @ 0x18032AE34 (-GetCurrentMonitorWithRect@TabTipAdapterPolicy@KeyboardHosting@@CAPEAUHMONITOR__@@URect@Foundati.c)
 *     ?PhysicalRectToRelative@ScalingHelper@KeyboardHosting@@SA?AURect@Foundation@Windows@@AEBU345@W4DEVICE_SCALE_FACTOR@@@Z @ 0x18032C420 (-PhysicalRectToRelative@ScalingHelper@KeyboardHosting@@SA-AURect@Foundation@Windows@@AEBU345@W4D.c)
 *     ?UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ @ 0x18032DAC0 (-UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleEditControlPositionChanged(
        __m128i *this,
        __m128i *a2,
        _QWORD *a3,
        _DWORD *a4)
{
  __m128i v4; // xmm0
  HMONITOR CurrentMonitorWithRect; // rbx
  __m128 v10; // xmm1
  int PositionAndSizeOptions; // eax
  unsigned int v12; // ebx
  __m128i v14; // [rsp+20h] [rbp-58h] BYREF
  HMONITOR v15; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v16[32]; // [rsp+38h] [rbp-40h] BYREF
  unsigned int v17; // [rsp+58h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+30h]

  v4 = *a2;
  *a4 = 0;
  *a3 = 0LL;
  v14 = v4;
  CurrentMonitorWithRect = KeyboardHosting::TabTipAdapterPolicy::GetCurrentMonitorWithRect(&v14);
  memset_0(v16, 0, sizeof(v16));
  v17 = 100;
  v15 = CurrentMonitorWithRect;
  KeyboardHosting::MonitorInformation::UpdateMonitorInfo((KeyboardHosting::MonitorInformation *)&v15);
  v10 = (__m128)_mm_loadu_si128((const __m128i *)KeyboardHosting::ScalingHelper::PhysicalRectToRelative(&v14, a2, v17));
  v14 = _mm_loadu_si128(this + 11);
  if ( v10.m128_f32[0] != *(float *)v14.m128i_i32
    || _mm_shuffle_ps(v10, v10, 85).m128_f32[0] != *(float *)&v14.m128i_i32[1]
    || _mm_shuffle_ps(v10, v10, 170).m128_f32[0] != *(float *)&v14.m128i_i32[2]
    || _mm_shuffle_ps(v10, v10, 255).m128_f32[0] != *(float *)&v14.m128i_i32[3] )
  {
    this[11] = (__m128i)v10;
    PositionAndSizeOptions = KeyboardHosting::TabTipAdapterPolicy::GetPositionAndSizeOptions(
                               (KeyboardHosting::TabTipAdapterPolicy *)this,
                               a3);
    v12 = PositionAndSizeOptions;
    if ( PositionAndSizeOptions < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x52,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
        (const char *)(unsigned int)PositionAndSizeOptions);
      return v12;
    }
    *a4 = 3;
    this[27].m128i_i8[12] = 0;
  }
  return 0LL;
}
