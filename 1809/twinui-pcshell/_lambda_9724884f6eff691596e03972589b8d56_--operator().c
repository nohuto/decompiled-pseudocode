/*
 * XREFs of _lambda_9724884f6eff691596e03972589b8d56_::operator() @ 0x180093044
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9724884f6eff691596e03972589b8d56___::Run @ 0x180093B30 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9724884f6eff691596e03972589b8d56___--Run.c)
 * Callees:
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x180017738 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV?$ComPtr@UIApplicationFrameWrapper@@@WRL@Microsoft@@@Z @ 0x1802B5BBC (-FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV-$ComPtr@UIApp.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@AEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x1802B5D6C (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@AEAV-$shared_pt.c)
 *     ?IsFrameReady@TouchKeyboardExperienceManager@@AEBA_NPEAUIApplicationFrame@@@Z @ 0x1802B707C (-IsFrameReady@TouchKeyboardExperienceManager@@AEBA_NPEAUIApplicationFrame@@@Z.c)
 *     ?MoveFrameWithinScreenIfNecessary@TouchKeyboardExperienceManager@@CAJPEAUIApplicationFrame@@PEAUIApplicationFrameWrapper@@_N@Z @ 0x1802B7254 (-MoveFrameWithinScreenIfNecessary@TouchKeyboardExperienceManager@@CAJPEAUIApplicationFrame@@PEAU.c)
 *     ?NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@@Z @ 0x1802B7AA8 (-NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_XAMLLanguageBar@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1802BA274 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_XAMLLanguageBar@@@wil@@CAX_NW4Report.c)
 *     ?SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z @ 0x1803B3254 (-SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_9724884f6eff691596e03972589b8d56_::operator()(_QWORD *a1)
{
  int v2; // eax
  TouchKeyboardExperienceManager *v3; // rcx
  int FrameWrapper; // ebx
  _QWORD *v5; // rcx
  int v6; // eax
  bool v7; // r8
  int ViewInfo; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  std::_Ref_count_base *v13[2]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct IApplicationFrameWrapper *v15; // [rsp+60h] [rbp+20h] BYREF
  struct IInspectable *v16; // [rsp+68h] [rbp+28h] BYREF

  v16 = 0LL;
  v2 = Microsoft::WRL::WeakRef::As<IInspectable>((Microsoft::WRL::WeakRef *)(a1 + 2), &v16);
  v3 = retaddr;
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      1355LL,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  if ( !v16 || !TouchKeyboardExperienceManager::IsFrameReady(v3, (struct IApplicationFrame *)*a1) )
  {
    FrameWrapper = 0;
    goto LABEL_26;
  }
  v15 = 0LL;
  FrameWrapper = TouchKeyboardExperienceManager::FindFrameWrapper(a1[3], *a1, &v15);
  if ( FrameWrapper >= 0 )
  {
    v5 = (_QWORD *)a1[1];
    if ( *v5 == ApplicationFrameCloseCommand && v5[1] == 0x575B26E93947F081LL )
    {
      v6 = (*(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, __int64))(*(_QWORD *)v15 + 40LL))(v15, 1LL);
      FrameWrapper = v6;
      if ( v6 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x55D,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v6);
        goto LABEL_24;
      }
      IhmNotification::SendKeyboardSetVisible(0LL, 1, v7);
    }
    else if ( *v5 == ApplicationFrameExitedSizeMoveCommand && v5[1] == 0x789E03E893229A8ALL )
    {
      *(_OWORD *)v13 = 0LL;
      ViewInfo = TouchKeyboardExperienceManager::FindViewInfo(a1[3], v15, v13);
      FrameWrapper = ViewInfo;
      if ( ViewInfo >= 0 )
      {
        wil::Feature<__WilFeatureTraits_Feature_XAMLLanguageBar>::ReportUsageToService(v10, v9);
        ViewInfo = TouchKeyboardExperienceManager::MoveFrameWithinScreenIfNecessary(
                     (struct IApplicationFrame *)*a1,
                     v15,
                     0);
        FrameWrapper = ViewInfo;
        if ( ViewInfo >= 0 )
        {
          ViewInfo = TouchKeyboardExperienceManager::NotifyPositionAndSizeUpdateCompleted(
                       (TouchKeyboardExperienceManager *)a1[3],
                       (struct IApplicationFrame *)*a1);
          FrameWrapper = ViewInfo;
          if ( ViewInfo >= 0 )
          {
            if ( v13[1] )
              std::_Ref_count_base::_Decref(v13[1]);
            goto LABEL_23;
          }
          v11 = 1383LL;
        }
        else
        {
          v11 = 1382LL;
        }
      }
      else
      {
        v11 = 1379LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)ViewInfo);
      if ( v13[1] )
        std::_Ref_count_base::_Decref(v13[1]);
      goto LABEL_24;
    }
LABEL_23:
    FrameWrapper = 0;
  }
LABEL_24:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
LABEL_26:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  return (unsigned int)FrameWrapper;
}
