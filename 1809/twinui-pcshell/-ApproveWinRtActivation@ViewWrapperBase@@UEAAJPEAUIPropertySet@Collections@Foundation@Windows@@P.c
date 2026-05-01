/*
 * XREFs of ?ApproveWinRtActivation@ViewWrapperBase@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@5@@Z @ 0x180240BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180022984 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180053B90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?QueuePendingActivation@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x180216AEC (-QueuePendingActivation@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@PEAUIPropertySet@Col.c)
 *     ?GetAppActivationPolicy@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHelper@ShellHelpers@45@PEAE@Z @ 0x1802276BC (-GetAppActivationPolicy@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHel.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a454b71a2548c162ba69e30212a6224f_____lambda_a454b71a2548c162ba69e30212a6224f___ @ 0x18023EB78 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a454b71a2548c.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewWrapperBase::ApproveWinRtActivation(
        signed __int64 this,
        struct Windows::Foundation::Collections::IPropertySet *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *a3)
{
  RTL_SRWLOCK *v6; // r15
  unsigned __int8 *v7; // r8
  unsigned int v8; // esi
  __int64 *v9; // rax
  volatile int *v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rcx
  DWORD CurrentThreadId; // eax
  int v14; // r14d
  int v15; // eax
  __int64 v16; // r8
  __int64 v17; // rdx
  unsigned int v19; // r14d
  unsigned int v20; // ebx
  __int64 v21; // r8
  __int64 *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  struct Windows::Foundation::Collections::IPropertySet *v28; // [rsp+30h] [rbp-30h] BYREF
  __int64 v29[3]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v30[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  char v32; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v33; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v34; // [rsp+B8h] [rbp+58h] BYREF

  v29[1] = -2LL;
  v32 = 0;
  v6 = (RTL_SRWLOCK *)(*(_QWORD *)(this + 160) + 296LL);
  AcquireSRWLockExclusive(v6);
  v29[2] = (__int64)v6;
  v28 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v28);
  Windows::Internal::Shell::Desktop::ViewManagerInterop::GetAppActivationPolicy(
    (Windows::Internal::Shell::Desktop::ViewManagerInterop *)&v28,
    (struct Windows::Internal::ShellHelpers::PropertySetHelper *)&v32,
    v7);
  v8 = *(_DWORD *)(this + 284);
  if ( v8 - 4 > 1 && v8 )
  {
    if ( (*(_BYTE *)(this + 88) & 4) != 0 )
    {
      v8 = 4 - (v32 != 0);
    }
    else if ( v8 == 1 )
    {
      v8 = 2;
    }
    v33 = this - 8;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v33);
    v30[0] = this - 8;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v30);
    v30[1] = this - 8;
    v9 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a454b71a2548c162ba69e30212a6224f_____lambda_a454b71a2548c162ba69e30212a6224f___(
           v29,
           v30);
    v11 = *v9;
    *v9 = 0LL;
    v12 = v29[0];
    if ( v29[0] )
    {
      v29[0] = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
        v12,
        v10);
    }
    CurrentThreadId = GetCurrentThreadId();
    v14 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId, 16000LL, v11, 0LL);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v30);
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x12E,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
        (const char *)(unsigned int)v14);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v33);
LABEL_20:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28);
      if ( v6 )
        ReleaseSRWLockExclusive(v6);
      return (unsigned int)v14;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v33);
  }
  v34 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
  if ( (**(int (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, __int64 *))a3)(
         a3,
         &GUID_a8d2a90c_a403_4593_95ff_012516ae9351,
         &v34) >= 0 )
  {
    LOBYTE(v33) = 0;
    v15 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v34 + 64LL))(v34, &v33);
    v14 = v15;
    if ( v15 < 0 )
    {
      v17 = 310LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
        (const char *)(unsigned int)v15);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
      goto LABEL_20;
    }
    LOBYTE(v16) = (_BYTE)v33 != 0;
    v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(this + 160) + 520LL) + 224LL))(
            *(_QWORD *)(*(_QWORD *)(this + 160) + 520LL),
            *(unsigned int *)(this + 336),
            v16);
    v14 = v15;
    if ( v15 < 0 )
    {
      v17 = 311LL;
      goto LABEL_19;
    }
  }
  v19 = *(_DWORD *)(this + 336);
  v20 = *(_DWORD *)(this + 140);
  if ( v8 )
  {
    v22 = *(__int64 **)(*(_QWORD *)(this + 160) + 520LL);
    v23 = *v22;
    v25 = v20;
    if ( v19 != v20 )
    {
      (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(v23 + 40))(v22, v20, v19, v8);
      goto LABEL_33;
    }
    v24 = v8;
  }
  else
  {
    if ( v19 == v20 )
      v21 = *(_QWORD *)(this + 184);
    else
      v21 = 0LL;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(**(_QWORD **)(*(_QWORD *)(this + 160) + 520LL) + 48LL))(
      *(_QWORD *)(*(_QWORD *)(this + 160) + 520LL),
      v19,
      v21,
      0LL);
    if ( v19 == v20 )
      goto LABEL_33;
    v22 = *(__int64 **)(*(_QWORD *)(this + 160) + 520LL);
    v23 = *v22;
    v24 = 0LL;
    v25 = *(unsigned int *)(this + 140);
  }
  (*(void (__fastcall **)(__int64 *, __int64, __int64))(v23 + 32))(v22, v25, v24);
LABEL_33:
  *(_DWORD *)(this + 336) = 0;
  *(_DWORD *)(this + 88) |= 4u;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28);
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(v26, 3u, v27);
  if ( v32 )
    ViewEventDispatcher::QueuePendingActivation(
      *(ViewEventDispatcher **)(this + 160),
      (struct IViewWrapperInternal *)(this & ((unsigned __int128)-(__int128)(unsigned __int64)(this - 8) >> 64)),
      a2,
      1);
  return 0LL;
}
