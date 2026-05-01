/*
 * XREFs of ?_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameManager@@@Z @ 0x180013C38
 * Callers:
 *     ?EnsureFramePool@CApplicationFrameService@@UEAAJXZ @ 0x180013670 (-EnsureFramePool@CApplicationFrameService@@UEAAJXZ.c)
 *     ?BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ @ 0x18013BAD0 (-BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ.c)
 *     ?EndFrameRecovery@CApplicationFrameService@@UEAAXXZ @ 0x18013C4A0 (-EndFrameRecovery@CApplicationFrameService@@UEAAXXZ.c)
 * Callees:
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800109AC (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_48e889414ef03e82c4820df79e4befb3__&_ @ 0x18013AF6C (Windows--Internal--ComTaskPool--QueueTask__lambda_48e889414ef03e82c4820df79e4befb3__-_.c)
 *     ??$WaitOnAddressNotEqualHelper@W4FrameManagerState@CApplicationFrameService@@@@YAXPEAW4FrameManagerState@CApplicationFrameService@@W401@@Z @ 0x18013B13C (--$WaitOnAddressNotEqualHelper@W4FrameManagerState@CApplicationFrameService@@@@YAXPEAW4FrameMana.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x180408E08 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x180408E7C (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationFrameService::_EnsureFrameManager(__int64 a1, int a2, __int64 *a3)
{
  _DWORD *v5; // rdi
  int v6; // r14d
  char v7; // r15
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // ebx
  unsigned int UniqueContext; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // eax
  CCriticalFailureHandler *v19; // rcx
  unsigned __int64 v20; // rcx
  unsigned __int64 *v21; // [rsp+20h] [rbp-40h]
  unsigned __int64 *v22; // [rsp+28h] [rbp-38h]
  _QWORD v23[5]; // [rsp+38h] [rbp-28h] BYREF
  CCriticalFailureHandler *v24; // [rsp+A0h] [rbp+40h] BYREF
  int v25; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v26; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v27; // [rsp+B8h] [rbp+58h] BYREF

  v25 = a2;
  *a3 = 0LL;
  LODWORD(v24) = -2147023728;
  v26 = 0LL;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v5 = (_DWORD *)(a1 + 196);
  v6 = *(_DWORD *)(a1 + 196);
  if ( v6 )
  {
    v7 = 0;
    v8 = *(_DWORD *)(a1 + 196);
  }
  else
  {
    v7 = 1;
    *v5 = 1;
    v8 = 1;
  }
  if ( v8 == 2 )
  {
    LODWORD(v24) = 0;
    v9 = *(_QWORD *)(a1 + 176);
    v10 = v26;
    if ( v26 != v9 )
    {
      if ( v9 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 8LL))(*(_QWORD *)(a1 + 176));
        v10 = v26;
      }
      v27 = v10;
      v26 = v9;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
    }
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( !v7 )
  {
    if ( v6 != 1 )
      goto LABEL_10;
    WaitOnAddressNotEqualHelper<enum CApplicationFrameService::FrameManagerState>((volatile void *)(a1 + 196));
    AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    v20 = *v5 != 2 ? 0x80070490 : 0;
    LODWORD(v24) = *v5 != 2 ? 0x80070490 : 0;
    if ( !v25 )
    {
      if ( !CRVPrivate::cfhImmersiveShellStartup )
      {
        CCriticalFailureHandler::GetFakeFailure((CCriticalFailureHandler *)v20, (int *)&v24);
        CRVPrivate::cfhImmersiveShellStartup = 1;
        v20 = (unsigned int)v24;
      }
      if ( (v20 & 0x80000000) == 0LL )
        goto LABEL_29;
      if ( (_DWORD)v20 != -2147024882 && (_DWORD)v20 != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          (CCriticalFailureHandler *)v20,
          (int *)&v24,
          L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
          0x515u,
          v21,
          v22);
        LODWORD(v20) = (_DWORD)v24;
      }
    }
    if ( (v20 & 0x80000000) != 0LL )
    {
LABEL_30:
      ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
      goto LABEL_10;
    }
LABEL_29:
    Microsoft::WRL::ComPtr<IUnknown>::operator=(&v26, (__int64 *)(a1 + 176));
    goto LABEL_30;
  }
  v27 = a1;
  v23[0] = &v24;
  v23[1] = a1;
  v23[2] = &v25;
  v23[3] = &v27;
  v23[4] = &v26;
  UniqueContext = SHTaskPoolGetUniqueContext(v11);
  v18 = Windows::Internal::ComTaskPool::QueueTask__lambda_48e889414ef03e82c4820df79e4befb3____(
          v17,
          v16,
          UniqueContext,
          v23);
  if ( v18 < 0 )
  {
    LODWORD(v24) = v18;
    if ( !v25 )
    {
      if ( !CRVPrivate::cfhImmersiveShellStartup )
      {
        CCriticalFailureHandler::GetFakeFailure(v19, (int *)&v24);
        CRVPrivate::cfhImmersiveShellStartup = 1;
        v18 = (int)v24;
      }
      if ( v18 < 0 && v18 != -2147024882 && v18 != -2144862209 )
        CCriticalFailureHandler::HandleFailure(
          v19,
          (int *)&v24,
          L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
          0x503u,
          v21,
          v22);
    }
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    *(_DWORD *)(v27 + 196) = 0;
    WakeByAddressAll((PVOID)(v27 + 196));
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  }
LABEL_10:
  v12 = v26;
  v26 = 0LL;
  *a3 = v12;
  v13 = (unsigned int)v24;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
  return v13;
}
