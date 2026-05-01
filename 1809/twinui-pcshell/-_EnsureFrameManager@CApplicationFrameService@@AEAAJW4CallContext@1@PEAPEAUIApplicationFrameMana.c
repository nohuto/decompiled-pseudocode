/*
 * XREFs of ?_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameManager@@@Z @ 0x1800498F8
 * Callers:
 *     ?EnsureFramePool@CApplicationFrameService@@UEAAJXZ @ 0x180049010 (-EnsureFramePool@CApplicationFrameService@@UEAAJXZ.c)
 *     ?BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ @ 0x180114420 (-BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ.c)
 *     ?EndFrameRecovery@CApplicationFrameService@@UEAAXXZ @ 0x180114DB0 (-EndFrameRecovery@CApplicationFrameService@@UEAAXXZ.c)
 * Callees:
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18004EB5C (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_48e889414ef03e82c4820df79e4befb3__&___ptr64_ @ 0x1801138D8 (Windows--Internal--ComTaskPool--QueueTask__lambda_48e889414ef03e82c4820df79e4befb3__-___ptr64_.c)
 *     ??$WaitOnAddressNotEqualHelper@W4FrameManagerState@CApplicationFrameService@@@@YAXPEAW4FrameManagerState@CApplicationFrameService@@W401@@Z @ 0x180113A8C (--$WaitOnAddressNotEqualHelper@W4FrameManagerState@CApplicationFrameService@@@@YAXPEAW4FrameMana.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x1803A3408 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1803A347C (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationFrameService::_EnsureFrameManager(__int64 a1, int a2, _QWORD *a3)
{
  _DWORD *v5; // rdi
  int v6; // r14d
  int v7; // eax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int v11; // ebx
  unsigned int UniqueContext; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  CCriticalFailureHandler *v17; // rcx
  unsigned __int64 v18; // rcx
  unsigned __int64 *v19; // [rsp+20h] [rbp-48h]
  unsigned __int64 *v20; // [rsp+28h] [rbp-40h]
  _QWORD v21[6]; // [rsp+38h] [rbp-30h] BYREF
  CCriticalFailureHandler *v22; // [rsp+A0h] [rbp+38h] BYREF
  int v23; // [rsp+A8h] [rbp+40h] BYREF
  __int64 v24; // [rsp+B0h] [rbp+48h] BYREF
  __int64 v25; // [rsp+B8h] [rbp+50h] BYREF

  v23 = a2;
  *a3 = 0LL;
  LODWORD(v22) = -2147023728;
  v24 = 0LL;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v5 = (_DWORD *)(a1 + 196);
  v6 = *(_DWORD *)(a1 + 196);
  v7 = v6;
  if ( !v6 )
  {
    *v5 = 1;
    v7 = 1;
  }
  if ( v7 == 2 )
  {
    LODWORD(v22) = 0;
    v8 = *(_QWORD *)(a1 + 176);
    v9 = v24;
    if ( v24 != v8 )
    {
      if ( v8 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 8LL))(*(_QWORD *)(a1 + 176));
        v9 = v24;
      }
      v25 = v9;
      v24 = v8;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
    }
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v6 )
  {
    if ( v6 != 1 )
      goto LABEL_10;
    WaitOnAddressNotEqualHelper<enum CApplicationFrameService::FrameManagerState>((volatile void *)(a1 + 196));
    AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    v18 = *v5 != 2 ? 0x80070490 : 0;
    LODWORD(v22) = *v5 != 2 ? 0x80070490 : 0;
    if ( !v23 )
    {
      if ( !CRVPrivate::cfhImmersiveShellStartup )
      {
        CCriticalFailureHandler::GetFakeFailure((CCriticalFailureHandler *)v18, (int *)&v22);
        CRVPrivate::cfhImmersiveShellStartup = 1;
        v18 = (unsigned int)v22;
      }
      if ( (v18 & 0x80000000) == 0LL )
        goto LABEL_28;
      if ( (_DWORD)v18 != -2147024882 && (_DWORD)v18 != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          (CCriticalFailureHandler *)v18,
          (int *)&v22,
          L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
          0x515u,
          v19,
          v20);
        LODWORD(v18) = (_DWORD)v22;
      }
    }
    if ( (v18 & 0x80000000) != 0LL )
    {
LABEL_29:
      ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
      goto LABEL_10;
    }
LABEL_28:
    Microsoft::WRL::ComPtr<IUnknown>::operator=(&v24, a1 + 176);
    goto LABEL_29;
  }
  v25 = a1;
  v21[0] = &v22;
  v21[1] = a1;
  v21[2] = &v23;
  v21[3] = &v25;
  v21[4] = &v24;
  UniqueContext = SHTaskPoolGetUniqueContext();
  v16 = Windows::Internal::ComTaskPool::QueueTask__lambda_48e889414ef03e82c4820df79e4befb3______ptr64_(
          v15,
          v14,
          UniqueContext,
          v21);
  if ( v16 < 0 )
  {
    LODWORD(v22) = v16;
    if ( !v23 )
    {
      if ( !CRVPrivate::cfhImmersiveShellStartup )
      {
        CCriticalFailureHandler::GetFakeFailure(v17, (int *)&v22);
        CRVPrivate::cfhImmersiveShellStartup = 1;
        v16 = (int)v22;
      }
      if ( v16 < 0 && v16 != -2147024882 && v16 != -2144862209 )
        CCriticalFailureHandler::HandleFailure(
          v17,
          (int *)&v22,
          L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
          0x503u,
          v19,
          v20);
    }
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    *(_DWORD *)(v25 + 196) = 0;
    WakeByAddressAll((PVOID)(v25 + 196));
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  }
LABEL_10:
  v10 = v24;
  v24 = 0LL;
  *a3 = v10;
  v11 = (unsigned int)v22;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
  return v11;
}
