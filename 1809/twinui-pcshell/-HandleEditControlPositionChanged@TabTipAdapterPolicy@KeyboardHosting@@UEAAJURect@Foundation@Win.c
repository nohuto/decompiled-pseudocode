/*
 * XREFs of ?HandleEditControlPositionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x1802CAEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x180054554 (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU-$IVectorView@UCoreK.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     ?GetCurrentMonitorWithRect@TabTipAdapterPolicy@KeyboardHosting@@CAPEAUHMONITOR__@@URect@Foundation@Windows@@@Z @ 0x1802CA734 (-GetCurrentMonitorWithRect@TabTipAdapterPolicy@KeyboardHosting@@CAPEAUHMONITOR__@@URect@Foundati.c)
 *     ?PhysicalRectToRelative@ScalingHelper@KeyboardHosting@@SA?AURect@Foundation@Windows@@AEBU345@W4DEVICE_SCALE_FACTOR@@@Z @ 0x1802CBC84 (-PhysicalRectToRelative@ScalingHelper@KeyboardHosting@@SA-AURect@Foundation@Windows@@AEBU345@W4D.c)
 *     ?UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ @ 0x1802CD380 (-UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleEditControlPositionChanged(
        __m128i *this,
        __m128i *a2,
        _QWORD *a3,
        _DWORD *a4)
{
  HMONITOR CurrentMonitorWithRect; // rbx
  __m128 v9; // xmm1
  int PositionAndSizeOptions; // eax
  unsigned int v11; // ebx
  __m128i v13; // [rsp+20h] [rbp-58h] BYREF
  HMONITOR v14; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v15[32]; // [rsp+38h] [rbp-40h] BYREF
  unsigned int v16; // [rsp+58h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+30h]

  *a4 = 0;
  *a3 = 0LL;
  v13 = *a2;
  CurrentMonitorWithRect = KeyboardHosting::TabTipAdapterPolicy::GetCurrentMonitorWithRect(&v13);
  memset_0(v15, 0, sizeof(v15));
  v16 = 100;
  v14 = CurrentMonitorWithRect;
  KeyboardHosting::MonitorInformation::UpdateMonitorInfo((KeyboardHosting::MonitorInformation *)&v14);
  v9 = (__m128)_mm_loadu_si128((const __m128i *)KeyboardHosting::ScalingHelper::PhysicalRectToRelative(&v13, a2, v16));
  v13 = _mm_loadu_si128(this + 11);
  if ( v9.m128_f32[0] != *(float *)v13.m128i_i32
    || _mm_shuffle_ps(v9, v9, 85).m128_f32[0] != *(float *)&v13.m128i_i32[1]
    || _mm_shuffle_ps(v9, v9, 170).m128_f32[0] != *(float *)&v13.m128i_i32[2]
    || _mm_shuffle_ps(v9, v9, 255).m128_f32[0] != *(float *)&v13.m128i_i32[3] )
  {
    this[11] = (__m128i)v9;
    PositionAndSizeOptions = KeyboardHosting::TabTipAdapterPolicy::GetPositionAndSizeOptions(
                               (KeyboardHosting::TabTipAdapterPolicy *)this,
                               a3);
    v11 = PositionAndSizeOptions;
    if ( PositionAndSizeOptions < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x56,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
        (const char *)(unsigned int)PositionAndSizeOptions);
      return v11;
    }
    *a4 = 3;
    this[27].m128i_i8[12] = 0;
  }
  return 0LL;
}
