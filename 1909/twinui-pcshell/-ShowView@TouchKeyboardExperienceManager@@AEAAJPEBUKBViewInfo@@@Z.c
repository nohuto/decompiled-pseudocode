/*
 * XREFs of ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEBUKBViewInfo@@@Z @ 0x180333D74
 * Callers:
 *     _lambda_4728da50fba771f61f09ce8410cf9c38_::operator() @ 0x1800AA730 (_lambda_4728da50fba771f61f09ce8410cf9c38_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?AnimateWindow@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUHWND__@@AEAVCExperienceManagerAnimationHelper@@_N@Z @ 0x18032D160 (-AnimateWindow@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUHWND__@@AE.c)
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z @ 0x18032E1E4 (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z.c)
 *     _anonymous_namespace_::IsAnimationEnabled @ 0x18032F820 (_anonymous_namespace_--IsAnimationEnabled.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_StabilizeInputAppActivation@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180333820 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_StabilizeInputAppActivation@@@wil@@C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::ShowView(
        TouchKeyboardExperienceManager *this,
        const struct KBViewInfo *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  int v12; // eax
  struct tagRECT v14; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v16; // [rsp+68h] [rbp+10h] BYREF
  HWND v17; // [rsp+70h] [rbp+18h] BYREF

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 1) + 112LL))(*((_QWORD *)a2 + 1));
  v5 = v4;
  if ( v4 >= 0 )
  {
    v16 = 0LL;
    v6 = *((_QWORD *)a2 + 1);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 32LL))(v6, &v16);
    v5 = v7;
    if ( v7 < 0 )
    {
      v11 = 2140LL;
LABEL_20:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
      goto LABEL_16;
    }
    wil::Feature<__WilFeatureTraits_Feature_StabilizeInputAppActivation>::ReportUsageToService(v9, v8, v10);
    if ( *((_DWORD *)a2 + 9) )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)a2 + 1) + 40LL))(*((_QWORD *)a2 + 1), 0LL);
      v5 = v7;
      if ( v7 < 0 )
      {
        v11 = 2161LL;
        goto LABEL_20;
      }
    }
    else
    {
      v7 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v16 + 24LL))(v16, &v17);
      v5 = v7;
      if ( v7 < 0 )
      {
        v11 = 2148LL;
        goto LABEL_20;
      }
      v7 = TouchKeyboardExperienceManager::AnimateWindow(
             this,
             *((struct IApplicationFrameWrapper **)a2 + 1),
             v17,
             (TouchKeyboardExperienceManager *)((char *)this + 760),
             1);
      v5 = v7;
      if ( v7 < 0 )
      {
        v11 = 2151LL;
        goto LABEL_20;
      }
      v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)a2 + 1) + 40LL))(*((_QWORD *)a2 + 1), 0LL);
      v5 = v7;
      if ( v7 < 0 )
      {
        v11 = 2152LL;
        goto LABEL_20;
      }
      if ( !anonymous_namespace_::IsAnimationEnabled() )
      {
        v14 = *(struct tagRECT *)((char *)this + 520);
        v12 = TouchKeyboardExperienceManager::FireInputPaneShowingEvent(
                (KeyboardHosting::TabTipAdapter **)this,
                0,
                &v14);
        if ( v12 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x86B,
            (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v12);
      }
    }
    v5 = 0;
LABEL_16:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    return v5;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x859,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
