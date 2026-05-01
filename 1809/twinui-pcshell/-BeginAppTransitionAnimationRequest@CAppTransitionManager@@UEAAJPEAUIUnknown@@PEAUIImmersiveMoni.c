/*
 * XREFs of ?BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x180325FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x1800498D4 (-IsPPIEdition@@YA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18006F1FC (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x1800EBA10 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ?_BeginAnimationStage@CAppTransitionManager@@AEAAJW4AnimationPassStage@@PEAUIAppLayoutOperation@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x180327064 (-_BeginAnimationStage@CAppTransitionManager@@AEAAJW4AnimationPassStage@@PEAUIAppLayoutOperation@.c)
 *     ?_BeginDWMTransitionRequest@CAppTransitionManager@@AEAAJKPEBU_GUID@@@Z @ 0x180327144 (-_BeginDWMTransitionRequest@CAppTransitionManager@@AEAAJKPEBU_GUID@@@Z.c)
 *     ?_ClearAnimationPassState@CAppTransitionManager@@AEAAXXZ @ 0x18032717C (-_ClearAnimationPassState@CAppTransitionManager@@AEAAXXZ.c)
 *     ?_EndDWMTransitionRequest@CAppTransitionManager@@AEAAJ_N@Z @ 0x1803271EC (-_EndDWMTransitionRequest@CAppTransitionManager@@AEAAJ_N@Z.c)
 *     ?_ExcludeAllPresentedApps@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x180327320 (-_ExcludeAllPresentedApps@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z.c)
 *     ?_ExcludeVisualType@CAppTransitionManager@@AEAAXW4TEMPORARY_APP_VISUAL_TYPE@@@Z @ 0x180327460 (-_ExcludeVisualType@CAppTransitionManager@@AEAAXW4TEMPORARY_APP_VISUAL_TYPE@@@Z.c)
 *     ?_FindPlaceModeVisual@CAppTransitionManager@@AEBAJPEAPEAUITemporaryAppVisual@@@Z @ 0x180327540 (-_FindPlaceModeVisual@CAppTransitionManager@@AEBAJPEAPEAUITemporaryAppVisual@@@Z.c)
 *     ?_IsImmersiveShellIdle@CAppTransitionManager@@AEAA_NXZ @ 0x1803277D8 (-_IsImmersiveShellIdle@CAppTransitionManager@@AEAA_NXZ.c)
 *     ?_TagApps@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x180327CA0 (-_TagApps@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z.c)
 *     ?_TagDividerBitmap@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x180327FD4 (-_TagDividerBitmap@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z.c)
 *     ?_TagPlaceVisual@CAppTransitionManager@@AEAAJXZ @ 0x1803281E8 (-_TagPlaceVisual@CAppTransitionManager@@AEAAJXZ.c)
 *     ?s_GetImmediateStoryboardIDForAppArrangementAnimation@CAppTransitionManager@@CAKPEAUIAppLayoutOperation@@@Z @ 0x1803284B0 (-s_GetImmediateStoryboardIDForAppArrangementAnimation@CAppTransitionManager@@CAKPEAUIAppLayoutOp.c)
 *     ?s_GetScenarioGUIDForAppArrangementAnimation@CAppTransitionManager@@CAXPEAUIAppLayoutOperation@@PEAU_GUID@@1@Z @ 0x1803285E0 (-s_GetScenarioGUIDForAppArrangementAnimation@CAppTransitionManager@@CAXPEAUIAppLayoutOperation@@.c)
 */

__int64 __fastcall CAppTransitionManager::BeginAppTransitionAnimationRequest(
        CAppTransitionManager *this,
        struct IUnknown *a2,
        struct IImmersiveMonitor *a3,
        struct IImmersiveApplicationManagerSafeForSyncCallouts *a4)
{
  int v9; // eax
  int v10; // ebx
  __int64 v11; // rdx
  int v12; // r14d
  char v13; // r15
  unsigned int ImmediateStoryboardIDForAppArrangementAnimation; // ebx
  struct _GUID *v15; // r8
  CAppTransitionManager *v16; // rcx
  struct ITemporaryAppVisual **v17; // rdx
  CAppTransitionManager *v18; // rcx
  CAppTransitionManager *v19; // rcx
  struct IAppLayoutOperation *v20; // [rsp+30h] [rbp-39h] BYREF
  int v21; // [rsp+38h] [rbp-31h] BYREF
  signed __int64 v22; // [rsp+40h] [rbp-29h] BYREF
  int v23; // [rsp+48h] [rbp-21h]
  struct _GUID v24; // [rsp+50h] [rbp-19h] BYREF
  struct _GUID v25; // [rsp+60h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  if ( IsPPIEdition() && CAppTransitionManager::_IsImmersiveShellIdle((CAppTransitionManager *)((char *)this - 88)) )
    return 0LL;
  v22 = ((unsigned __int64)this + 32) & -(__int64)(this != (CAppTransitionManager *)88);
  v23 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v22, 1);
  v20 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
  v9 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, struct IAppLayoutOperation **))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_c28f3b94_b47f_4211_8f2c_88d0b2d975bb,
         &v20);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v9 = CAppTransitionManager::_BeginAnimationStage((char *)this - 88, 2LL, v20, a3, a4);
    v10 = v9;
    if ( v9 < 0 )
    {
      v11 = 230LL;
      goto LABEL_11;
    }
    if ( !*((_BYTE *)this + 194) )
      goto LABEL_35;
    v9 = (*(__int64 (__fastcall **)(struct IAppLayoutOperation *, int *))(*(_QWORD *)v20 + 24LL))(v20, &v21);
    v10 = v9;
    if ( v9 < 0 )
    {
      v11 = 235LL;
      goto LABEL_11;
    }
    if ( !v21 )
    {
LABEL_35:
      if ( *((_DWORD *)this + 51) == 2 )
        CAppTransitionManager::_ClearAnimationPassState((CAppTransitionManager *)((char *)this - 88));
      v10 = -2147019873;
      if ( *((_DWORD *)this + 53) )
        v10 = 0;
      goto LABEL_39;
    }
    v12 = *((_DWORD *)this + 49);
    if ( (unsigned int)(v12 - 2) <= 1
      || (v13 = 1,
          ((*(__int64 (__fastcall **)(struct IAppLayoutOperation *))(*(_QWORD *)v20 + 80LL))(v20) & 0x200000) != 0) )
    {
      v13 = 0;
    }
    ImmediateStoryboardIDForAppArrangementAnimation = CAppTransitionManager::s_GetImmediateStoryboardIDForAppArrangementAnimation(v20);
    CAppTransitionManager::s_GetScenarioGUIDForAppArrangementAnimation(v20, &v24, &v25);
    if ( ((*(__int64 (__fastcall **)(struct IAppLayoutOperation *))(*(_QWORD *)v20 + 80LL))(v20) & 0x400000) == 0 )
    {
      v15 = &v24;
      if ( v12 == 2 )
        v15 = 0LL;
      v10 = CAppTransitionManager::_BeginDWMTransitionRequest(
              (CAppTransitionManager *)((char *)this - 88),
              ImmediateStoryboardIDForAppArrangementAnimation,
              v15);
      if ( v10 < 0 )
        goto LABEL_39;
      if ( v12 != 2 && !*((_BYTE *)this + 193) )
      {
        CAppTransitionManager::_TagDividerBitmap(v16, v20);
        CAppTransitionManager::_ExcludeVisualType((char *)this - 88, 7LL);
      }
      CAppTransitionManager::_ExcludeVisualType((char *)this - 88, 4LL);
      CAppTransitionManager::_ExcludeVisualType((char *)this - 88, 2LL);
      CAppTransitionManager::_TagApps((CAppTransitionManager *)((char *)this - 88), v20);
      if ( !v13 )
      {
LABEL_33:
        if ( v12 != 2 )
          DwmFlush();
        goto LABEL_35;
      }
      CAppTransitionManager::_EndDWMTransitionRequest((CAppTransitionManager *)((char *)this - 88), 0);
    }
    if ( v13 )
    {
      v10 = CAppTransitionManager::_BeginDWMTransitionRequest((CAppTransitionManager *)((char *)this - 88), 0x44u, &v25);
      if ( v10 < 0 )
        goto LABEL_39;
      if ( (*((_BYTE *)this + 200) & 4) != 0
        && (int)CAppTransitionManager::_FindPlaceModeVisual((CAppTransitionManager *)((char *)this - 88), v17) >= 0 )
      {
        CAppTransitionManager::_TagPlaceVisual((CAppTransitionManager *)((char *)this - 88));
        CAppTransitionManager::_ExcludeAllPresentedApps(v19, v20);
      }
      else
      {
        CAppTransitionManager::_TagDividerBitmap(v18, v20);
        CAppTransitionManager::_ExcludeVisualType((char *)this - 88, 7LL);
        CAppTransitionManager::_TagApps((CAppTransitionManager *)((char *)this - 88), v20);
      }
      if ( ((*(__int64 (__fastcall **)(struct IAppLayoutOperation *))(*(_QWORD *)v20 + 80LL))(v20) & 0x400000) != 0 )
        CAppTransitionManager::_EndDWMTransitionRequest((CAppTransitionManager *)((char *)this - 88), 1);
    }
    goto LABEL_33;
  }
  v11 = 228LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
    (const char *)(unsigned int)v9);
LABEL_39:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v22);
  return (unsigned int)v10;
}
