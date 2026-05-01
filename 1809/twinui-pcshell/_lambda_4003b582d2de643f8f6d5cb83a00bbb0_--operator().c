/*
 * XREFs of _lambda_4003b582d2de643f8f6d5cb83a00bbb0_::operator() @ 0x180177D90
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4003b582d2de643f8f6d5cb83a00bbb0___::Run @ 0x18017A1F0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4003b582d2de643f8f6d5cb83a00bbb0___--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?ComputeDesiredSizeForMonitor@CVirtualTouchpadExperienceManager@@AEAAJPEAUHMONITOR__@@@Z @ 0x180178AB4 (-ComputeDesiredSizeForMonitor@CVirtualTouchpadExperienceManager@@AEAAJPEAUHMONITOR__@@@Z.c)
 *     ?GetFramePosition@CVirtualTouchpadExperienceManager@@AEAAJPEAUtagRECT@@@Z @ 0x180178F44 (-GetFramePosition@CVirtualTouchpadExperienceManager@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?UpdateFramePositionAndSize@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x18017B51C (-UpdateFramePositionAndSize@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_4003b582d2de643f8f6d5cb83a00bbb0_::operator()(CVirtualTouchpadExperienceManager **a1)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  HMONITOR v4; // rdx
  int FramePosition; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v9[2]; // [rsp+28h] [rbp-48h] BYREF
  __int64 v10; // [rsp+38h] [rbp-38h] BYREF
  char v11; // [rsp+40h] [rbp-30h]
  __int64 v12; // [rsp+48h] [rbp-28h]
  struct tagRECT v13; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v12 = -2LL;
  v2 = (__int64)*a1;
  v9[0] = (__int64)a1[1];
  v3 = v9[0];
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v9);
  v9[1] = v2;
  v10 = v3;
  v9[0] = 0LL;
  v11 = 1;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v9);
  if ( *((_DWORD *)*a1 + 184) != 2 )
    goto LABEL_9;
  v4 = MonitorFromWindow(*((HWND *)*a1 + 42), 2u);
  FramePosition = CVirtualTouchpadExperienceManager::ComputeDesiredSizeForMonitor(*a1, v4);
  v6 = FramePosition;
  if ( FramePosition >= 0 )
  {
    FramePosition = CVirtualTouchpadExperienceManager::GetFramePosition(*a1, &v13);
    v6 = FramePosition;
    if ( FramePosition < 0 )
    {
      v7 = 752LL;
      goto LABEL_8;
    }
    *((_DWORD *)*a1 + 76) = v13.left + *((_DWORD *)*a1 + 71) / 2;
    *((_DWORD *)*a1 + 77) = v13.top + *((_DWORD *)*a1 + 72) / 2;
    FramePosition = CVirtualTouchpadExperienceManager::UpdateFramePositionAndSize(*a1);
    v6 = FramePosition;
    if ( FramePosition < 0 )
    {
      v7 = 755LL;
      goto LABEL_8;
    }
LABEL_9:
    v6 = 0;
    goto LABEL_10;
  }
  v7 = 750LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
    (const char *)(unsigned int)FramePosition);
LABEL_10:
  v11 = 0;
  *(_BYTE *)(v2 + 784) = 0;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  return v6;
}
