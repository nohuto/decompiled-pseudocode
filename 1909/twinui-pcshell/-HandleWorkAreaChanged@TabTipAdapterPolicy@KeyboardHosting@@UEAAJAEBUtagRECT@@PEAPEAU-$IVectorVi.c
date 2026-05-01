/*
 * XREFs of ?HandleWorkAreaChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJAEBUtagRECT@@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@7@@Z @ 0x18034B600
 * Callers:
 *     ?SetWorkAreaRect@TabTipAdapter@KeyboardHosting@@QEAAJPEBUtagRECT@@@Z @ 0x180344860 (-SetWorkAreaRect@TabTipAdapter@KeyboardHosting@@QEAAJPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x180059ED4 (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU-$IVectorView@UCoreK.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentMonitorWithRect@TabTipAdapterPolicy@KeyboardHosting@@CAPEAUHMONITOR__@@URect@Foundation@Windows@@@Z @ 0x18034A6B4 (-GetCurrentMonitorWithRect@TabTipAdapterPolicy@KeyboardHosting@@CAPEAUHMONITOR__@@URect@Foundati.c)
 *     ?UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ @ 0x18034D2D0 (-UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleWorkAreaChanged(
        __int64 a1,
        __m128i *a2,
        _QWORD *a3,
        _DWORD *a4)
{
  __m128i v6; // xmm1
  KeyboardHosting::MonitorInformation *v8; // rbx
  __int64 v9; // rdx
  int PositionAndSizeOptions; // eax
  unsigned int v11; // ebx
  __m128i v13; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a3 = 0LL;
  *a4 = 0;
  v6 = *a2;
  v8 = (KeyboardHosting::MonitorInformation *)(a1 + 200);
  v9 = a2->m128i_i64[0];
  v6.m128i_i64[0] = _mm_srli_si128(v6, 8).m128i_u64[0];
  *(float *)v13.m128i_i32 = (float)(int)v9;
  *(float *)&v13.m128i_i32[1] = (float)SHIDWORD(v9);
  *(float *)&v13.m128i_i32[2] = (float)(v6.m128i_i32[0] - v9 + 1);
  *(float *)&v13.m128i_i32[3] = (float)(v6.m128i_i32[1] - HIDWORD(v9) + 1);
  *(_QWORD *)(a1 + 200) = KeyboardHosting::TabTipAdapterPolicy::GetCurrentMonitorWithRect(&v13);
  KeyboardHosting::MonitorInformation::UpdateMonitorInfo(v8);
  PositionAndSizeOptions = KeyboardHosting::TabTipAdapterPolicy::GetPositionAndSizeOptions(
                             (KeyboardHosting::TabTipAdapterPolicy *)(a1 - 16),
                             a3);
  v11 = PositionAndSizeOptions;
  if ( PositionAndSizeOptions >= 0 )
  {
    *a4 = 3;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x291,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)(unsigned int)PositionAndSizeOptions);
    return v11;
  }
}
