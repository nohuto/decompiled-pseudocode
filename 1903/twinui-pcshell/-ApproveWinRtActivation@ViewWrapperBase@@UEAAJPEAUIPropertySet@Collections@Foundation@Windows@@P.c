/*
 * XREFs of ?ApproveWinRtActivation@ViewWrapperBase@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@5@@Z @ 0x180296D60
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18003B30C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005A170 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?QueuePendingActivation@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x18026D12C (-QueuePendingActivation@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@PEAUIPropertySet@Col.c)
 *     ?GetAppActivationPolicy@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHelper@ShellHelpers@45@PEAE@Z @ 0x18027D59C (-GetAppActivationPolicy@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHel.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a454b71a2548c162ba69e30212a6224f_____lambda_a454b71a2548c162ba69e30212a6224f___ @ 0x180294C70 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a454b71a2548c.c)
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
  volatile signed __int32 **v9; // rax
  volatile signed __int32 *v10; // r15
  volatile signed __int32 *v11; // rcx
  DWORD CurrentThreadId; // eax
  int v13; // ebx
  int (__fastcall *v14)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, __int64 *); // rbx
  int v15; // eax
  __int64 v16; // r8
  __int64 v17; // rdx
  unsigned int v19; // r15d
  unsigned int v20; // ebx
  __int64 *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v27; // [rsp+30h] [rbp-30h] BYREF
  volatile signed __int32 *v28[3]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v29[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  char v31; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v32; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v33; // [rsp+B8h] [rbp+58h] BYREF

  v28[1] = (volatile signed __int32 *)-2LL;
  v31 = 0;
  v6 = (RTL_SRWLOCK *)(*(_QWORD *)(this + 160) + 280LL);
  AcquireSRWLockExclusive(v6);
  v28[2] = (volatile signed __int32 *)v6;
  v27 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v27);
  Windows::Internal::Shell::Desktop::ViewManagerInterop::GetAppActivationPolicy(
    (Windows::Internal::Shell::Desktop::ViewManagerInterop *)&v27,
    (struct Windows::Internal::ShellHelpers::PropertySetHelper *)&v31,
    v7);
  v8 = *(_DWORD *)(this + 284);
  if ( v8 - 4 > 1 && v8 )
  {
    if ( (*(_BYTE *)(this + 88) & 4) != 0 )
    {
      v8 = 4 - (v31 != 0);
    }
    else if ( v8 == 1 )
    {
      v8 = 2;
    }
    v32 = this - 8;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v32);
    v29[0] = this - 8;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v29);
    v29[1] = this - 8;
    v9 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a454b71a2548c162ba69e30212a6224f_____lambda_a454b71a2548c162ba69e30212a6224f___(
           v28,
           (volatile signed __int32 *)v29);
    v10 = *v9;
    *v9 = 0LL;
    v11 = v28[0];
    if ( v28[0] )
    {
      v28[0] = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(v11);
    }
    CurrentThreadId = GetCurrentThreadId();
    v13 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId, 16000LL, v10, 0LL);
    if ( v10 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 16LL))(v10);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v29);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x12E,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
        (const char *)(unsigned int)v13);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v32);
LABEL_20:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v27);
      if ( v6 )
        ReleaseSRWLockExclusive(v6);
      return (unsigned int)v13;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v32);
  }
  v33 = 0LL;
  v14 = **a3;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
  if ( v14(
         (struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)a3,
         &GUID_a8d2a90c_a403_4593_95ff_012516ae9351,
         &v33) >= 0 )
  {
    LOBYTE(v32) = 0;
    v15 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v33 + 64LL))(v33, &v32);
    v13 = v15;
    if ( v15 < 0 )
    {
      v17 = 310LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
        (const char *)(unsigned int)v15);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
      goto LABEL_20;
    }
    LOBYTE(v16) = (_BYTE)v32 != 0;
    v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(this + 160) + 504LL) + 224LL))(
            *(_QWORD *)(*(_QWORD *)(this + 160) + 504LL),
            *(unsigned int *)(this + 336),
            v16);
    v13 = v15;
    if ( v15 < 0 )
    {
      v17 = 311LL;
      goto LABEL_19;
    }
  }
  v19 = *(_DWORD *)(this + 336);
  v20 = *(_DWORD *)(this + 140);
  v21 = *(__int64 **)(*(_QWORD *)(this + 160) + 504LL);
  v22 = *v21;
  if ( v8 )
  {
    v25 = v20;
    if ( v19 != v20 )
    {
      (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(v22 + 40))(v21, v20, v19, v8);
      goto LABEL_33;
    }
    v24 = v8;
  }
  else
  {
    if ( v19 == v20 )
      v23 = *(_QWORD *)(this + 184);
    else
      v23 = 0LL;
    (*(void (__fastcall **)(__int64 *, _QWORD, __int64, _QWORD))(v22 + 48))(v21, v19, v23, 0LL);
    if ( v19 == v20 )
      goto LABEL_33;
    v21 = *(__int64 **)(*(_QWORD *)(this + 160) + 504LL);
    v22 = *v21;
    v24 = 0LL;
    v25 = *(unsigned int *)(this + 140);
  }
  (*(void (__fastcall **)(__int64 *, __int64, __int64))(v22 + 32))(v21, v25, v24);
LABEL_33:
  *(_DWORD *)(this + 336) = 0;
  *(_DWORD *)(this + 88) |= 4u;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v27);
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(v26, 3u);
  if ( v31 )
    ViewEventDispatcher::QueuePendingActivation(
      *(ViewEventDispatcher **)(this + 160),
      (struct IViewWrapperInternal *)(this & ((unsigned __int128)-(__int128)(unsigned __int64)(this - 8) >> 64)),
      a2,
      1);
  return 0LL;
}
