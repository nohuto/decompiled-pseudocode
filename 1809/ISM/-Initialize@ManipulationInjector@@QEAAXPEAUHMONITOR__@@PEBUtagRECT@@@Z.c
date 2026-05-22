/*
 * XREFs of ?Initialize@ManipulationInjector@@QEAAXPEAUHMONITOR__@@PEBUtagRECT@@@Z @ 0x1800B8980
 * Callers:
 *     ?TransitionToEnabled@ControllerProcessor@@AEAAJPEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x1800346C0 (-TransitionToEnabled@ControllerProcessor@@AEAAJPEAUtagRECT@@PEAUtagPOINT@@@Z.c)
 *     ??0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z @ 0x18004CFF4 (--0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1800056F0 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1800B87A0 (-_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?CreateOverlapEvent@ManipulationInjector@@AEAAXXZ @ 0x1800B88C0 (-CreateOverlapEvent@ManipulationInjector@@AEAAXXZ.c)
 *     ?DeskToDigiPt@ManipulationInjector@@AEAA?AUtagPOINT@@U2@@Z @ 0x1800B9CB4 (-DeskToDigiPt@ManipulationInjector@@AEAA-AUtagPOINT@@U2@@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     ceilf_0 @ 0x18012DB0B (ceilf_0.c)
 */

void __fastcall ManipulationInjector::Initialize(ManipulationInjector *this, HMONITOR a2, const struct tagRECT *a3)
{
  const char *v5; // r9
  BOOL MonitorInfoW; // eax
  RECT *p_rcMonitor; // rcx
  HANDLE v8; // rax
  int v9; // ecx
  float v10; // xmm8_4
  int v11; // ecx
  const char *v12; // r9
  __int64 v13; // rsi
  DWORD v14; // eax
  __int64 v15; // r8
  int v16; // eax
  float v17; // xmm0_4
  LONG x; // ecx
  LONG v19; // ecx
  int v20; // r9d
  int v21; // eax
  DWORD v22; // eax
  __int64 v23; // r8
  DWORD LastError; // eax
  __int64 v25; // r8
  _DWORD *v26; // rcx
  unsigned int v27; // eax
  struct tagPOINT v28; // [rsp+48h] [rbp-9h] BYREF
  struct tagMONITORINFO mi; // [rsp+50h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  memset_0(&mi, 0, sizeof(mi));
  *((_QWORD *)this + 7) = 0LL;
  if ( !a3 )
  {
    mi.cbSize = 40;
    MonitorInfoW = GetMonitorInfoW(0LL, &mi);
    p_rcMonitor = &mi.rcMonitor;
    if ( !MonitorInfoW )
      p_rcMonitor = 0LL;
    a3 = p_rcMonitor;
  }
  if ( *((_QWORD *)this + 98) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x3E,
      (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
      v5);
    __debugbreak();
  }
  v8 = OpenEventA(0x1F0003u, 0, "ManipulationInjectorEnableOverlapEvent");
  *((_QWORD *)this + 98) = v8;
  if ( !v8 )
    ManipulationInjector::CreateOverlapEvent(this);
  if ( a3 )
  {
    v9 = 2 * *((_DWORD *)this + 4);
    if ( a3->right - a3->left < v9 || a3->bottom - a3->top < v9 )
    {
      v27 = wil::verify_hresult<long>(0x80070057);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x8D,
        (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
        (const char *)v27);
      __debugbreak();
    }
    *((struct tagRECT *)this + 4) = *a3;
    if ( GetSystemMetrics(4096)
      || !(unsigned int)GetDpiForMonitorInternal(0LL, 2LL, (char *)this + 772, (char *)this + 776) )
    {
      *((_DWORD *)this + 193) = (int)(float)((float)((float)((float)(*((_DWORD *)this + 18) - *((_DWORD *)this + 16))
                                                           * 2540.0)
                                                   / 20320.0)
                                           + 0.5);
      *((_DWORD *)this + 194) = (int)(float)((float)((float)((float)(*((_DWORD *)this + 19) - *((_DWORD *)this + 17))
                                                           * 2540.0)
                                                   / 15240.0)
                                           + 0.5);
    }
  }
  v10 = (float)*((int *)this + 194);
  *((_DWORD *)this + 184) = (int)ceilf_0((float)(v10 * 270.0) / 2540.0);
  v11 = (int)ceilf_0((float)(v10 * 400.0) / 2540.0);
  *((_DWORD *)this + 183) = v11;
  if ( (v11 & 1) != 0 )
    *((_DWORD *)this + 183) = v11 + ((v11 >> 31) & 0xFFFFFFFE) + 1;
  v13 = 4LL;
  switch ( *(_DWORD *)this )
  {
    case 1:
      if ( !(unsigned int)InitializePointerDeviceInjectionEx(2LL, 4LL, 0LL) )
      {
        LastError = GetLastError();
        if ( LastError )
        {
          wil::details::in1diag3::_FailFast_Win32(retaddr, (void *)0xB7, v25, (const char *)LastError);
          JUMPOUT(0x1800B8E40LL);
        }
      }
      break;
    case 2:
      if ( !a3 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0xBD,
          (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
          v12);
        __debugbreak();
      }
      v16 = *((_DWORD *)this + 18) - *((_DWORD *)this + 16);
      v28.y = 0;
      v17 = (float)((float)((float)(*((_DWORD *)this + 19) - *((_DWORD *)this + 17)) * 100.0) / v10) + 0.5;
      dword_18019292C = (int)(float)((float)((float)((float)v16 * 100.0) / (float)*((int *)this + 193)) + 0.5);
      dword_18019294C = (int)v17;
      v28.x = *((_DWORD *)this + 5);
      v28 = **(struct tagPOINT **)&ManipulationInjector::DeskToDigiPt(this, (struct tagPOINT)&v28);
      x = v28.x;
      v28.x = *((_DWORD *)this + 7);
      *((_DWORD *)this + 186) = x;
      v28 = **(struct tagPOINT **)&ManipulationInjector::DeskToDigiPt(this, (struct tagPOINT)&v28);
      v19 = v28.x;
      v28.x = *((_DWORD *)this + 9);
      *((_DWORD *)this + 187) = v19;
      *((_DWORD *)this + 188) = *(_DWORD *)ManipulationInjector::DeskToDigiPt(this, (struct tagPOINT)&v28).x;
      *(_QWORD *)((char *)this + 756) = **(_QWORD **)&ManipulationInjector::DeskToDigiPt(this, (struct tagPOINT)&v28);
      *(_QWORD *)((char *)this + 764) = **(_QWORD **)&ManipulationInjector::DeskToDigiPt(this, (struct tagPOINT)&v28);
      v21 = (int)(float)((float)(503937.0 / (float)v20) + 0.5);
      *((_DWORD *)this + 182) = v21;
      if ( (v21 & 1) != 0 )
        *((_DWORD *)this + 182) = v21 + 1;
      if ( !(unsigned int)InitializeInputDeviceInjection(13LL, 4LL, &gTouchUsages, 11LL, 0LL, 3, (char *)this + 96) )
      {
        v22 = GetLastError();
        if ( v22 )
        {
          wil::details::in1diag3::_FailFast_Win32(retaddr, (void *)0xEC, v23, (const char *)v22);
          __debugbreak();
        }
      }
      break;
    case 3:
      if ( !(unsigned int)InitializeTouchInjection(4LL, 3LL) )
      {
        v14 = GetLastError();
        if ( v14 )
        {
          wil::details::in1diag3::_FailFast_Win32(retaddr, (void *)0xF5, v15, (const char *)v14);
          __debugbreak();
        }
      }
      break;
    case 4:
      break;
    default:
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xFD,
        (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
        v12);
      __debugbreak();
  }
  v26 = (_DWORD *)((char *)this + 112);
  do
  {
    *(v26 - 2) = 2;
    *v26 = 2;
    v26 += 38;
    *((_QWORD *)v26 - 17) = *((_QWORD *)this + 12);
    --v13;
  }
  while ( v13 );
}
