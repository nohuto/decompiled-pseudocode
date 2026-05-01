/*
 * XREFs of ?PrepareForAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1803A6980
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x180048AF4 (-IsPPIEdition@@YA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180076FD0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x18012DA54 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ?IsLayoutOperationCrossFadeOnly@CAppTransitionManager@@AEAA_NPEAUIAppLayoutOperationItem@@@Z @ 0x1803A661C (-IsLayoutOperationCrossFadeOnly@CAppTransitionManager@@AEAA_NPEAUIAppLayoutOperationItem@@@Z.c)
 *     ?PrepareAppLayoutOperationForTransition@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperationItem@@PEAUIAppLayout@@1@Z @ 0x1803A681C (-PrepareAppLayoutOperationForTransition@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperationItem@.c)
 *     ?_BeginAnimationStage@CAppTransitionManager@@AEAAJW4AnimationPassStage@@PEAUIAppLayoutOperation@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1803A6F54 (-_BeginAnimationStage@CAppTransitionManager@@AEAAJW4AnimationPassStage@@PEAUIAppLayoutOperation@.c)
 *     ?_ClearAnimationPassState@CAppTransitionManager@@AEAAXXZ @ 0x1803A706C (-_ClearAnimationPassState@CAppTransitionManager@@AEAAXXZ.c)
 *     ?_IsImmersiveShellIdle@CAppTransitionManager@@AEAA_NXZ @ 0x1803A76C8 (-_IsImmersiveShellIdle@CAppTransitionManager@@AEAA_NXZ.c)
 */

__int64 __fastcall CAppTransitionManager::PrepareForAppTransitionAnimationRequest(
        CAppTransitionManager *this,
        struct IUnknown *a2,
        struct IImmersiveMonitor *a3,
        struct IImmersiveApplicationManagerSafeForSyncCallouts *a4)
{
  CAppTransitionManager *v5; // rdi
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rbx
  char IsLayoutOperationCrossFadeOnly; // si
  unsigned int i; // r14d
  __int64 v19; // rbx
  int v20; // eax
  unsigned int v21; // [rsp+30h] [rbp-40h] BYREF
  __int64 v22; // [rsp+38h] [rbp-38h] BYREF
  struct IAppLayoutOperationItem *v23; // [rsp+40h] [rbp-30h] BYREF
  struct IAppLayout *v24; // [rsp+48h] [rbp-28h] BYREF
  struct IAppLayout *v25; // [rsp+50h] [rbp-20h] BYREF
  signed __int64 v26; // [rsp+58h] [rbp-18h] BYREF
  int v27; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v5 = (CAppTransitionManager *)((char *)this - 88);
  if ( IsPPIEdition() && CAppTransitionManager::_IsImmersiveShellIdle(v5) )
    return 0LL;
  v26 = ((unsigned __int64)this + 32) & -(__int64)(v5 != 0LL);
  v22 = 0LL;
  v27 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v26, 1);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
  v10 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
          a2,
          &GUID_c28f3b94_b47f_4211_8f2c_88d0b2d975bb,
          &v22);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v10 = CAppTransitionManager::_BeginAnimationStage(v5, 1LL, v22, a3, a4);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 81LL;
      goto LABEL_10;
    }
    v10 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v22 + 24LL))(v22, &v21);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 84LL;
      goto LABEL_10;
    }
    v25 = 0LL;
    v24 = 0LL;
    v13 = v22;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
    v14 = (*(__int64 (__fastcall **)(__int64, struct IAppLayout **))(*(_QWORD *)v13 + 40LL))(v13, &v25);
    v11 = v14;
    if ( v14 >= 0 )
    {
      v16 = v22;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
      v14 = (*(__int64 (__fastcall **)(__int64, struct IAppLayout **))(*(_QWORD *)v16 + 48LL))(v16, &v24);
      v11 = v14;
      if ( v14 >= 0 )
      {
        IsLayoutOperationCrossFadeOnly = *((_DWORD *)this + 49) == 1;
        for ( i = 0; i < v21; ++i )
        {
          v23 = 0LL;
          v19 = v22;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
          if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, struct IAppLayoutOperationItem **))(*(_QWORD *)v19 + 32LL))(
                 v19,
                 i,
                 &GUID_f1e97d9c_cb12_4e92_88d4_cfbda2f4f34e,
                 &v23) >= 0 )
          {
            v20 = CAppTransitionManager::PrepareAppLayoutOperationForTransition(v5, v23, v25, v24);
            if ( v20 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x63,
                (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
                (const char *)(unsigned int)v20);
            if ( IsLayoutOperationCrossFadeOnly )
              IsLayoutOperationCrossFadeOnly = CAppTransitionManager::IsLayoutOperationCrossFadeOnly(v5, v23);
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
        }
        if ( IsLayoutOperationCrossFadeOnly )
          *((_BYTE *)this + 194) = 0;
        if ( *((_DWORD *)v5 + 73) == 2 )
          CAppTransitionManager::_ClearAnimationPassState(v5);
        v11 = 0;
        goto LABEL_28;
      }
      v15 = 89LL;
    }
    else
    {
      v15 = 88LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
      (const char *)(unsigned int)v14);
LABEL_28:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
    goto LABEL_29;
  }
  v12 = 79LL;
LABEL_10:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
    (const char *)(unsigned int)v10);
LABEL_29:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v26);
  return v11;
}
