/*
 * XREFs of ?_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ @ 0x1802D33C0
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_7eed9311b28c38034816bc372232e422___::Invoke @ 0x1802D2020 (CAsyncCallbackWithLambda__lambda_7eed9311b28c38034816bc372232e422___--Invoke.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017174 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_fbc78532fd0fd9b1042c65c7016d56c9___ @ 0x180094918 (Windows--Internal--ComTaskPool--QueueTask__lambda_fbc78532fd0fd9b1042c65c7016d56c9___.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?ExcludeWindowFromCapture@AccessibilityExperienceManager@@AEAA_NXZ @ 0x1802D19F4 (-ExcludeWindowFromCapture@AccessibilityExperienceManager@@AEAA_NXZ.c)
 *     ?SetNoActivate@AccessibilityExperienceManager@@UEAAX_N@Z @ 0x1802D2B50 (-SetNoActivate@AccessibilityExperienceManager@@UEAAX_N@Z.c)
 *     ?_ChangeExperiencePropertiesForView@AccessibilityExperienceManager@@AEAAJPEAUAccessibilityViewInfo@@@Z @ 0x1802D3340 (-_ChangeExperiencePropertiesForView@AccessibilityExperienceManager@@AEAAJPEAUAccessibilityViewIn.c)
 *     ?_GetMonitorScaleForWindow@AccessibilityExperienceManager@@CAJPEAUHWND__@@PEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x1802D3920 (-_GetMonitorScaleForWindow@AccessibilityExperienceManager@@CAJPEAUHWND__@@PEAW4DEVICE_SCALE_FACT.c)
 *     ?Initialize@EyeControlApp@@QEAAJPEAUIEyeControlManager@@@Z @ 0x1803B32E4 (-Initialize@EyeControlApp@@QEAAJPEAUIEyeControlManager@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall AccessibilityExperienceManager::_CreateModalExperienceAsync(AccessibilityExperienceManager *this)
{
  __int64 v2; // rbx
  HWND v3; // rcx
  unsigned int v4; // edi
  __int64 v5; // r9
  __int64 v6; // rdx
  int v7; // eax
  int MonitorScaleForWindow; // eax
  __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rbx
  __int64 v13; // rbx
  int v14; // eax
  int v15; // eax
  const unsigned __int16 *v16; // r8
  int v17; // eax
  int v18; // eax
  int v19; // eax
  _BYTE v21[8]; // [rsp+28h] [rbp-18h] BYREF
  AccessibilityExperienceManager *v22; // [rsp+30h] [rbp-10h]
  char v23; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v25; // [rsp+70h] [rbp+30h] BYREF
  __int64 v26; // [rsp+78h] [rbp+38h] BYREF
  __int64 v27; // [rsp+80h] [rbp+40h] BYREF
  __int64 v28; // [rsp+88h] [rbp+48h] BYREF

  v2 = *((_QWORD *)this + 51);
  v28 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v26 = 0LL;
  v25 = 0LL;
  v27 = 0LL;
  v3 = (HWND)*((_QWORD *)this + 52);
  if ( !v3 )
  {
    v4 = -2147024882;
    v5 = 2147942414LL;
    v6 = 616LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)v5);
    goto LABEL_42;
  }
  if ( !*((_BYTE *)v3 + 64) )
  {
    v7 = EyeControlApp::Initialize((EyeControlApp *)v3, (AccessibilityExperienceManager *)((char *)this + 152));
    v4 = v7;
    if ( v7 < 0 )
    {
      v5 = (unsigned int)v7;
      v6 = 620LL;
      goto LABEL_8;
    }
  }
  MonitorScaleForWindow = AccessibilityExperienceManager::_GetMonitorScaleForWindow(
                            v3,
                            (enum DEVICE_SCALE_FACTOR *)this + 101);
  if ( MonitorScaleForWindow < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      623LL,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)MonitorScaleForWindow);
  v22 = this;
  v23 = 1;
  *(_OWORD *)((char *)this + 440) = 0LL;
  if ( v2 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
    v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 24LL))(v2, &v26);
    v4 = v11;
    if ( v11 >= 0 )
    {
      Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)this + 48, &v26);
      v12 = v26;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
      v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 32LL))(v12, &v25);
      v4 = v11;
      if ( v11 >= 0 )
      {
        v11 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v25 + 24LL))(v25, v21);
        v4 = v11;
        if ( v11 >= 0 )
        {
          AccessibilityExperienceManager::ExcludeWindowFromCapture(this);
          AccessibilityExperienceManager::SetNoActivate(
            (AccessibilityExperienceManager *)((char *)this + 152),
            *((_DWORD *)this + 119) == 0x8000000);
          v13 = v25;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
          v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 144LL))(v13, &v27);
          v4 = v11;
          if ( v11 >= 0 )
          {
            v14 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v27 + 104LL))(v27, 255LL, 0LL);
            if ( v14 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                648LL,
                (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
                (const char *)(unsigned int)v14);
            v15 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v27 + 64LL))(v27, 1LL, 1LL);
            if ( v15 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                649LL,
                (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
                (const char *)(unsigned int)v15);
            v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v25 + 112LL))(v25, 255LL, 16LL);
            v4 = v11;
            if ( v11 >= 0 )
            {
              v11 = AccessibilityExperienceManager::_ChangeExperiencePropertiesForView(
                      this,
                      (struct IApplicationFrameWrapper **)this + 47,
                      v16);
              v4 = v11;
              if ( v11 >= 0 )
              {
                v17 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v27 + 32LL))(v27, 0LL);
                if ( v17 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    657LL,
                    (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
                    (const char *)(unsigned int)v17);
                v18 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v25 + 72LL))(
                        v25,
                        qword_18050F1B8,
                        0LL);
                if ( v18 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    660LL,
                    (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
                    (const char *)(unsigned int)v18);
                v11 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v26 + 48LL))(v26, 3LL);
                v4 = v11;
                if ( v11 >= 0 )
                {
                  v19 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v26 + 128LL))(v26, 1LL);
                  if ( v19 < 0 )
                    wil::details::in1diag3::_Log_Hr(
                      retaddr,
                      665LL,
                      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
                      (const char *)(unsigned int)v19);
                  v11 = Windows::Internal::ComTaskPool::QueueTask__lambda_fbc78532fd0fd9b1042c65c7016d56c9___();
                  v4 = v11;
                  if ( v11 >= 0 )
                  {
                    v4 = 0;
                    goto LABEL_42;
                  }
                  v10 = 675LL;
                }
                else
                {
                  v10 = 663LL;
                }
              }
              else
              {
                v10 = 655LL;
              }
            }
            else
            {
              v10 = 651LL;
            }
          }
          else
          {
            v10 = 646LL;
          }
        }
        else
        {
          v10 = 639LL;
        }
      }
      else
      {
        v10 = 636LL;
      }
    }
    else
    {
      v10 = 633LL;
    }
    v9 = (unsigned int)v11;
  }
  else
  {
    v4 = -2144927145;
    v9 = 2150040151LL;
    v10 = 632LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
    (const char *)v9);
LABEL_42:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
  return v4;
}
