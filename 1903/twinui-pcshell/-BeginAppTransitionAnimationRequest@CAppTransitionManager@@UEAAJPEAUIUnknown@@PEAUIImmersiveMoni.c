/*
 * XREFs of ?BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x180386560
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x180013C14 (-IsPPIEdition@@YA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180074070 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x18010E82C (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ?_BeginAnimationStage@CAppTransitionManager@@AEAAJW4AnimationPassStage@@PEAUIAppLayoutOperation@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1803875C4 (-_BeginAnimationStage@CAppTransitionManager@@AEAAJW4AnimationPassStage@@PEAUIAppLayoutOperation@.c)
 *     ?_BeginDWMTransitionRequest@CAppTransitionManager@@AEAAJKPEBU_GUID@@@Z @ 0x1803876A4 (-_BeginDWMTransitionRequest@CAppTransitionManager@@AEAAJKPEBU_GUID@@@Z.c)
 *     ?_ClearAnimationPassState@CAppTransitionManager@@AEAAXXZ @ 0x1803876DC (-_ClearAnimationPassState@CAppTransitionManager@@AEAAXXZ.c)
 *     ?_EndDWMTransitionRequest@CAppTransitionManager@@AEAAJ_N@Z @ 0x18038774C (-_EndDWMTransitionRequest@CAppTransitionManager@@AEAAJ_N@Z.c)
 *     ?_ExcludeAllPresentedApps@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x180387880 (-_ExcludeAllPresentedApps@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z.c)
 *     ?_ExcludeVisualType@CAppTransitionManager@@AEAAXW4TEMPORARY_APP_VISUAL_TYPE@@@Z @ 0x1803879C0 (-_ExcludeVisualType@CAppTransitionManager@@AEAAXW4TEMPORARY_APP_VISUAL_TYPE@@@Z.c)
 *     ?_FindPlaceModeVisual@CAppTransitionManager@@AEBAJPEAPEAUITemporaryAppVisual@@@Z @ 0x180387AA0 (-_FindPlaceModeVisual@CAppTransitionManager@@AEBAJPEAPEAUITemporaryAppVisual@@@Z.c)
 *     ?_IsImmersiveShellIdle@CAppTransitionManager@@AEAA_NXZ @ 0x180387D38 (-_IsImmersiveShellIdle@CAppTransitionManager@@AEAA_NXZ.c)
 *     ?_TagApps@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x180388200 (-_TagApps@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z.c)
 *     ?_TagDividerBitmap@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x180388548 (-_TagDividerBitmap@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z.c)
 *     ?_TagPlaceVisual@CAppTransitionManager@@AEAAJXZ @ 0x18038875C (-_TagPlaceVisual@CAppTransitionManager@@AEAAJXZ.c)
 *     ?s_GetImmediateStoryboardIDForAppArrangementAnimation@CAppTransitionManager@@CAKPEAUIAppLayoutOperation@@@Z @ 0x180388A24 (-s_GetImmediateStoryboardIDForAppArrangementAnimation@CAppTransitionManager@@CAKPEAUIAppLayoutOp.c)
 *     ?s_GetScenarioGUIDForAppArrangementAnimation@CAppTransitionManager@@CAXPEAUIAppLayoutOperation@@PEAU_GUID@@1@Z @ 0x180388B54 (-s_GetScenarioGUIDForAppArrangementAnimation@CAppTransitionManager@@CAXPEAUIAppLayoutOperation@@.c)
 */

__int64 __fastcall CAppTransitionManager::BeginAppTransitionAnimationRequest(
        CAppTransitionManager *this,
        struct IUnknown *a2,
        struct IImmersiveMonitor *a3,
        struct IImmersiveApplicationManagerSafeForSyncCallouts *a4)
{
  CAppTransitionManager *v5; // r14
  int v10; // eax
  int v11; // ebx
  __int64 v12; // rdx
  int v13; // eax
  char v14; // r14
  char v15; // r15
  unsigned int ImmediateStoryboardIDForAppArrangementAnimation; // ebx
  struct _GUID *v17; // r8
  CAppTransitionManager *v18; // rcx
  struct ITemporaryAppVisual **v19; // rdx
  CAppTransitionManager *v20; // rcx
  CAppTransitionManager *v21; // rcx
  struct IAppLayoutOperation *v22; // [rsp+30h] [rbp-39h] BYREF
  int v23; // [rsp+38h] [rbp-31h] BYREF
  signed __int64 v24; // [rsp+40h] [rbp-29h] BYREF
  int v25; // [rsp+48h] [rbp-21h]
  struct _GUID v26; // [rsp+50h] [rbp-19h] BYREF
  struct _GUID v27; // [rsp+60h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v5 = (CAppTransitionManager *)((char *)this - 88);
  if ( IsPPIEdition() && CAppTransitionManager::_IsImmersiveShellIdle(v5) )
    return 0LL;
  v24 = ((unsigned __int64)this + 32) & -(__int64)(this != (CAppTransitionManager *)88);
  v25 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v24, 1);
  v22 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
  v10 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, struct IAppLayoutOperation **))a2->lpVtbl->QueryInterface)(
          a2,
          &GUID_c28f3b94_b47f_4211_8f2c_88d0b2d975bb,
          &v22);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v10 = CAppTransitionManager::_BeginAnimationStage(v5, 2LL, v22, a3, a4);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 230LL;
      goto LABEL_11;
    }
    if ( !*((_BYTE *)this + 194) )
      goto LABEL_37;
    v10 = (*(__int64 (__fastcall **)(struct IAppLayoutOperation *, int *))(*(_QWORD *)v22 + 24LL))(v22, &v23);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 235LL;
      goto LABEL_11;
    }
    if ( !v23 )
    {
LABEL_37:
      if ( *((_DWORD *)this + 51) == 2 )
        CAppTransitionManager::_ClearAnimationPassState((CAppTransitionManager *)((char *)this - 88));
      v11 = -2147019873;
      if ( *((_DWORD *)this + 53) )
        v11 = 0;
      goto LABEL_41;
    }
    v13 = *((_DWORD *)this + 49);
    if ( v13 == 2 )
    {
      v14 = 1;
    }
    else
    {
      v14 = 0;
      if ( v13 != 3 )
      {
        v15 = 1;
        if ( ((*(__int64 (__fastcall **)(struct IAppLayoutOperation *))(*(_QWORD *)v22 + 80LL))(v22) & 0x200000) == 0 )
        {
LABEL_18:
          ImmediateStoryboardIDForAppArrangementAnimation = CAppTransitionManager::s_GetImmediateStoryboardIDForAppArrangementAnimation(v22);
          CAppTransitionManager::s_GetScenarioGUIDForAppArrangementAnimation(v22, &v26, &v27);
          if ( ((*(__int64 (__fastcall **)(struct IAppLayoutOperation *))(*(_QWORD *)v22 + 80LL))(v22) & 0x400000) == 0 )
          {
            v17 = &v26;
            if ( v14 )
              v17 = 0LL;
            v11 = CAppTransitionManager::_BeginDWMTransitionRequest(
                    (CAppTransitionManager *)((char *)this - 88),
                    ImmediateStoryboardIDForAppArrangementAnimation,
                    v17);
            if ( v11 < 0 )
              goto LABEL_41;
            if ( !v14 && !*((_BYTE *)this + 193) )
            {
              CAppTransitionManager::_TagDividerBitmap(v18, v22);
              CAppTransitionManager::_ExcludeVisualType((char *)this - 88, 7LL);
            }
            CAppTransitionManager::_ExcludeVisualType((char *)this - 88, 4LL);
            CAppTransitionManager::_ExcludeVisualType((char *)this - 88, 2LL);
            CAppTransitionManager::_TagApps((CAppTransitionManager *)((char *)this - 88), v22);
            if ( !v15 )
            {
LABEL_35:
              if ( !v14 )
                DwmFlush();
              goto LABEL_37;
            }
            CAppTransitionManager::_EndDWMTransitionRequest((CAppTransitionManager *)((char *)this - 88), 0);
          }
          if ( v15 )
          {
            v11 = CAppTransitionManager::_BeginDWMTransitionRequest(
                    (CAppTransitionManager *)((char *)this - 88),
                    0x44u,
                    &v27);
            if ( v11 < 0 )
              goto LABEL_41;
            if ( (*((_BYTE *)this + 200) & 4) != 0
              && (int)CAppTransitionManager::_FindPlaceModeVisual((CAppTransitionManager *)((char *)this - 88), v19) >= 0 )
            {
              CAppTransitionManager::_TagPlaceVisual((CAppTransitionManager *)((char *)this - 88));
              CAppTransitionManager::_ExcludeAllPresentedApps(v21, v22);
            }
            else
            {
              CAppTransitionManager::_TagDividerBitmap(v20, v22);
              CAppTransitionManager::_ExcludeVisualType((char *)this - 88, 7LL);
              CAppTransitionManager::_TagApps((CAppTransitionManager *)((char *)this - 88), v22);
            }
            if ( ((*(__int64 (__fastcall **)(struct IAppLayoutOperation *))(*(_QWORD *)v22 + 80LL))(v22) & 0x400000) != 0 )
              CAppTransitionManager::_EndDWMTransitionRequest((CAppTransitionManager *)((char *)this - 88), 1);
          }
          goto LABEL_35;
        }
      }
    }
    v15 = 0;
    goto LABEL_18;
  }
  v12 = 228LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
    (const char *)(unsigned int)v10);
LABEL_41:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v24);
  return (unsigned int)v11;
}
