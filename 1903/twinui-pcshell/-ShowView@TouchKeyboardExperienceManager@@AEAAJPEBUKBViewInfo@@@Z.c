/*
 * XREFs of ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEBUKBViewInfo@@@Z @ 0x180314544
 * Callers:
 *     _lambda_a5314efdfe6b9f90147b5239d1654f63_::operator() @ 0x18009D48C (_lambda_a5314efdfe6b9f90147b5239d1654f63_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?AnimateWindow@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUHWND__@@AEAVCExperienceManagerAnimationHelper@@_N@Z @ 0x18030DCA0 (-AnimateWindow@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUHWND__@@AE.c)
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z @ 0x18030ED24 (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z.c)
 *     _anonymous_namespace_::IsAnimationEnabled @ 0x18031035C (_anonymous_namespace_--IsAnimationEnabled.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_StabilizeInputAppActivation@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180313FF8 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_StabilizeInputAppActivation@@@wil@@C.c)
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
      v11 = 2105LL;
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
        v11 = 2126LL;
        goto LABEL_20;
      }
    }
    else
    {
      v7 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v16 + 24LL))(v16, &v17);
      v5 = v7;
      if ( v7 < 0 )
      {
        v11 = 2113LL;
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
        v11 = 2116LL;
        goto LABEL_20;
      }
      v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)a2 + 1) + 40LL))(*((_QWORD *)a2 + 1), 0LL);
      v5 = v7;
      if ( v7 < 0 )
      {
        v11 = 2117LL;
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
            (void *)0x848,
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
    (void *)0x836,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
