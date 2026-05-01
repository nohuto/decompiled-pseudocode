/*
 * XREFs of ?_CreatePerMonitorComponents@CApplicationManager@@AEAAJPEAUIServiceProvider@@PEAUIImmersiveMonitor@@@Z @ 0x1800F6544
 * Callers:
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800F3F40 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18006F1FC (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x1803A3408 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1803A347C (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationManager::_CreatePerMonitorComponents(
        CApplicationManager *this,
        struct IServiceProvider *a2,
        struct IImmersiveMonitor *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // r14
  int v7; // r15d
  CCriticalFailureHandler *v8; // rcx
  int v9; // ebx
  CCriticalFailureHandler *v10; // rcx
  CCriticalFailureHandler *v11; // rcx
  unsigned int i; // edi
  __int64 v13; // rbx
  CCriticalFailureHandler *v14; // rcx
  unsigned __int64 *v16; // [rsp+20h] [rbp-40h]
  unsigned __int64 *v17; // [rsp+28h] [rbp-38h]
  unsigned __int64 v18; // [rsp+30h] [rbp-30h] BYREF
  __int64 v19[3]; // [rsp+38h] [rbp-28h] BYREF
  int v20; // [rsp+50h] [rbp-10h]
  int v21; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v22; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v23; // [rsp+B8h] [rbp+58h] BYREF

  v19[1] = -2LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 392) & -(__int64)(this != 0LL));
  v19[2] = (__int64)v6;
  v7 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v6, 1);
  v20 = v7;
  v19[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v19);
  (*(void (__fastcall **)(_QWORD, _QWORD, GUID *, __int64 *))(**((_QWORD **)this + 72) + 32LL))(
    *((_QWORD *)this + 72),
    0LL,
    &GUID_611aa8fe_b694_4129_86af_2c2553fff785,
    v19);
  v9 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, __int64))(*(_QWORD *)a3 + 32LL))(a3, v19[0]);
  v21 = v9;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v8, &v21);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    v9 = v21;
  }
  if ( v9 >= 0 )
    goto LABEL_8;
  if ( v9 != -2147024882 && v9 != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v8,
      &v21,
      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      0x1392u,
      v16,
      v17);
    v9 = v21;
  }
  if ( v9 >= 0 )
  {
LABEL_8:
    v23 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
    v9 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
           a2,
           &IID_IImmersiveShellCreationBehavior,
           &GUID_ac46f07f_3544_48d9_b2d3_f57b388ae361,
           &v23);
    v21 = v9;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v10, &v21);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v9 = v21;
    }
    if ( v9 >= 0 )
      goto LABEL_15;
    if ( v9 != -2147024882 && v9 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v10,
        &v21,
        L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        0x1396u,
        v16,
        v17);
      v9 = v21;
    }
    if ( v9 >= 0 )
    {
LABEL_15:
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *))(*(_QWORD *)v23 + 72LL))(v23, 0LL, &v22);
      v21 = v9;
      for ( i = 0; ; ++i )
      {
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v11, &v21);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          v9 = v21;
        }
        if ( v9 < 0 )
        {
          if ( v9 != -2147024882 && v9 != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v11,
              &v21,
              L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
              0x139Bu,
              v16,
              v17);
            v9 = v21;
          }
          if ( v9 < 0 )
            break;
        }
        if ( i >= v22 )
          break;
        v18 = 0LL;
        v13 = v23;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v18);
        v16 = &v18;
        v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, GUID *))(*(_QWORD *)v13 + 80LL))(
               v13,
               0LL,
               i,
               &GUID_00000000_0000_0000_c000_000000000046);
        v21 = v9;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v14, &v21);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          v9 = v21;
        }
        if ( v9 >= 0 )
          goto LABEL_31;
        if ( v9 != -2147024882 && v9 != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v14,
            &v21,
            L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            0x13A4u,
            &v18,
            v17);
          v9 = v21;
        }
        if ( v9 >= 0 )
        {
LABEL_31:
          v9 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, unsigned __int64))(*(_QWORD *)a3 + 32LL))(a3, v18);
          v21 = v9;
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v18);
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v19);
  if ( v7 >= 0 )
    LeaveCriticalSection(v6);
  return (unsigned int)v9;
}
