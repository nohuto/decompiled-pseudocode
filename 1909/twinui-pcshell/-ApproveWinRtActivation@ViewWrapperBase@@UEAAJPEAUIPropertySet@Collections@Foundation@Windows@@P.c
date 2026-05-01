/*
 * XREFs of ?ApproveWinRtActivation@ViewWrapperBase@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@5@@Z @ 0x1802B6240
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800247D0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180059100 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?QueuePendingActivation@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x18028C62C (-QueuePendingActivation@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@PEAUIPropertySet@Col.c)
 *     ?GetAppActivationPolicy@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHelper@ShellHelpers@45@PEAE@Z @ 0x18029CA6C (-GetAppActivationPolicy@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHel.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a454b71a2548c162ba69e30212a6224f_____lambda_a454b71a2548c162ba69e30212a6224f___ @ 0x1802B4134 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a454b71a2548c.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewWrapperBase::ApproveWinRtActivation(
        signed __int64 this,
        struct Windows::Foundation::Collections::IPropertySet *a2,
        int (__fastcall ***a3)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, __int64 *))
{
  RTL_SRWLOCK *v6; // r14
  unsigned __int8 *v7; // r8
  unsigned int v8; // esi
  __int64 *v9; // rax
  volatile int *v10; // rdx
  __int64 v11; // r15
  __int64 v12; // rcx
  DWORD CurrentThreadId; // eax
  int v14; // ebx
  int (__fastcall *v15)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, __int64 *); // rbx
  int v16; // eax
  __int64 v17; // r8
  __int64 v18; // rdx
  unsigned int v20; // r15d
  unsigned int v21; // ebx
  __int64 *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28[2]; // [rsp+20h] [rbp-40h]
  __int64 v29; // [rsp+28h] [rbp-38h]
  struct Windows::Foundation::Collections::IPropertySet *v30; // [rsp+30h] [rbp-30h] BYREF
  __int64 v31[3]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v32[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  char v34; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v35; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v36; // [rsp+B8h] [rbp+58h] BYREF

  v31[1] = -2LL;
  v34 = 0;
  v6 = (RTL_SRWLOCK *)(*(_QWORD *)(this + 160) + 280LL);
  AcquireSRWLockExclusive(v6);
  v31[2] = (__int64)v6;
  v30 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v30);
  Windows::Internal::Shell::Desktop::ViewManagerInterop::GetAppActivationPolicy(
    (Windows::Internal::Shell::Desktop::ViewManagerInterop *)&v30,
    (struct Windows::Internal::ShellHelpers::PropertySetHelper *)&v34,
    v7);
  v8 = *(_DWORD *)(this + 284);
  if ( v8 - 4 > 1 && v8 )
  {
    if ( (*(_BYTE *)(this + 88) & 4) != 0 )
    {
      v8 = 4 - (v34 != 0);
    }
    else if ( v8 == 1 )
    {
      v8 = 2;
    }
    v35 = this - 8;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v35);
    v32[0] = this - 8;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v32);
    v32[1] = this - 8;
    v9 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a454b71a2548c162ba69e30212a6224f_____lambda_a454b71a2548c162ba69e30212a6224f___(
           v31,
           v32);
    v11 = *v9;
    *v9 = 0LL;
    v12 = v31[0];
    if ( v31[0] )
    {
      v31[0] = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
        v12,
        v10);
    }
    CurrentThreadId = GetCurrentThreadId();
    v29 = 0LL;
    *(_QWORD *)v28 = v11;
    v14 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v32);
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x12E,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
        (const char *)(unsigned int)v14);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v35);
LABEL_20:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v30);
      if ( v6 )
        ReleaseSRWLockExclusive(v6);
      return (unsigned int)v14;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v35);
  }
  v36 = 0LL;
  v15 = **a3;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v36);
  if ( v15(
         (struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)a3,
         &GUID_a8d2a90c_a403_4593_95ff_012516ae9351,
         &v36) >= 0 )
  {
    LOBYTE(v35) = 0;
    v16 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v36 + 64LL))(v36, &v35);
    v14 = v16;
    if ( v16 < 0 )
    {
      v18 = 310LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
        (const char *)(unsigned int)v16);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v36);
      goto LABEL_20;
    }
    LOBYTE(v17) = (_BYTE)v35 != 0;
    v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(this + 160) + 504LL) + 224LL))(
            *(_QWORD *)(*(_QWORD *)(this + 160) + 504LL),
            *(unsigned int *)(this + 336),
            v17);
    v14 = v16;
    if ( v16 < 0 )
    {
      v18 = 311LL;
      goto LABEL_19;
    }
  }
  v20 = *(_DWORD *)(this + 336);
  v21 = *(_DWORD *)(this + 140);
  v22 = *(__int64 **)(*(_QWORD *)(this + 160) + 504LL);
  v23 = *v22;
  if ( v8 )
  {
    v26 = v21;
    if ( v20 != v21 )
    {
      (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, int *, __int64))(v23 + 40))(
        v22,
        v21,
        v20,
        v8,
        *(int **)v28,
        v29);
      goto LABEL_33;
    }
    v25 = v8;
  }
  else
  {
    if ( v20 == v21 )
      v24 = *(_QWORD *)(this + 184);
    else
      v24 = 0LL;
    (*(void (__fastcall **)(__int64 *, _QWORD, __int64, _QWORD, int *, __int64))(v23 + 48))(
      v22,
      v20,
      v24,
      0LL,
      *(int **)v28,
      v29);
    if ( v20 == v21 )
      goto LABEL_33;
    v22 = *(__int64 **)(*(_QWORD *)(this + 160) + 504LL);
    v23 = *v22;
    v25 = 0LL;
    v26 = *(unsigned int *)(this + 140);
  }
  (*(void (__fastcall **)(__int64 *, __int64, __int64))(v23 + 32))(v22, v26, v25);
LABEL_33:
  *(_DWORD *)(this + 336) = 0;
  *(_DWORD *)(this + 88) |= 4u;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v36);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v30);
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(v27, 3u);
  if ( v34 )
    ViewEventDispatcher::QueuePendingActivation(
      *(ViewEventDispatcher **)(this + 160),
      (struct IViewWrapperInternal *)(this & ((unsigned __int128)-(__int128)(unsigned __int64)(this - 8) >> 64)),
      a2,
      1);
  return 0LL;
}
