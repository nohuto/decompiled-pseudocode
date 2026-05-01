/*
 * XREFs of ?QueuePendingActivation@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x18028C62C
 * Callers:
 *     ?ApproveWinRtActivation@ViewWrapperBase@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@5@@Z @ 0x1802B6240 (-ApproveWinRtActivation@ViewWrapperBase@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@P.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18001A930 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$PendingActivationAdd@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z @ 0x180082788 (--$PendingActivationAdd@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z.c)
 *     ?SetActivationVirtualDesktopId@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHelper@ShellHelpers@45@AEBU_GUID@@@Z @ 0x1800845FC (-SetActivationVirtualDesktopId@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropert.c)
 *     ?GetActivationId@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHelper@ShellHelpers@45@PEA_K@Z @ 0x180084770 (-GetActivationId@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHelper@She.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??4?$ComPtr@UISwitchItemFilteredCollection@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800A481C (--4-$ComPtr@UISwitchItemFilteredCollection@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_8b8102a789654bc38db8b1e79dbee23f___ @ 0x180286F94 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_8b8102a789654bc38db8b1e79dbee23f___.c)
 *     ??_G?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@QEAAPEAXI@Z @ 0x180289324 (--_G-$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ViewEventDispatcher::QueuePendingActivation(
        ViewEventDispatcher *this,
        struct IViewWrapperInternal *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3,
        char a4)
{
  _QWORD *v8; // rax
  __int64 v9; // rsi
  unsigned int v10; // ebx
  unsigned __int64 *v11; // r8
  int ActivationId; // eax
  __int64 v13; // rdx
  __int64 v14; // rdi
  int (__fastcall *v15)(__int64, __int64 *); // rbx
  const struct _GUID *v16; // r8
  HWND v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r9
  __int64 *v22; // rcx
  __int64 *i; // rdx
  LPVOID *ppv; // [rsp+20h] [rbp-60h]
  LPVOID StringRawBuffer; // [rsp+30h] [rbp-50h] BYREF
  DWORD dwProcessId; // [rsp+38h] [rbp-48h] BYREF
  __int64 v28; // [rsp+40h] [rbp-40h] BYREF
  __int64 v29[3]; // [rsp+48h] [rbp-38h] BYREF
  GUID v30; // [rsp+60h] [rbp-20h] BYREF
  __int64 v31; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v29[1] = -2LL;
  v8 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = (__int64)v8;
  if ( v8 )
  {
    *v8 = 0LL;
    v8[1] = 0LL;
    v8[2] = 0LL;
    v8[3] = 0LL;
    v8[4] = 0LL;
  }
  else
  {
    v9 = 0LL;
  }
  v29[2] = v9;
  if ( !v9 )
  {
    v10 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB70,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_28;
  }
  *(_QWORD *)v9 = 0LL;
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(v9 + 32), (__int64)a3);
  v29[0] = *(_QWORD *)(v9 + 32);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v29);
  ActivationId = Windows::Internal::Shell::Desktop::ViewManagerInterop::GetActivationId(
                   (Windows::Internal::Shell::Desktop::ViewManagerInterop *)v29,
                   (struct Windows::Internal::ShellHelpers::PropertySetHelper *)(v9 + 8),
                   v11);
  v10 = ActivationId;
  if ( ActivationId >= 0 )
  {
    ActivationId = (*(__int64 (__fastcall **)(struct IViewWrapperInternal *, __int64))(*(_QWORD *)a2 + 56LL))(
                     a2,
                     v9 + 16);
    v10 = ActivationId;
    if ( ActivationId >= 0 )
    {
      v28 = 0LL;
      v14 = *((_QWORD *)this + 61);
      v15 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 48LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
      if ( v15(v14, &v28) >= 0 )
      {
        v30 = GUID_NULL;
        if ( (*(int (__fastcall **)(__int64, GUID *))(*(_QWORD *)v28 + 32LL))(v28, &v30) >= 0 )
          Windows::Internal::Shell::Desktop::ViewManagerInterop::SetActivationVirtualDesktopId(
            (Windows::Internal::Shell::Desktop::ViewManagerInterop *)v29,
            (struct Windows::Internal::ShellHelpers::PropertySetHelper *)&v30,
            v16);
      }
      if ( a4 )
      {
        AcquireSRWLockShared((PSRWLOCK)this + 35);
        *(_QWORD *)&v30.Data1 = (char *)this + 280;
        v17 = (HWND)(*(__int64 (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)a2 + 736LL))(a2);
        if ( this != (ViewEventDispatcher *)-280LL )
          ReleaseSRWLockShared((PSRWLOCK)this + 35);
        StringRawBuffer = 0LL;
        dwProcessId = 0;
        if ( GetWindowThreadProcessId(v17, &dwProcessId) )
        {
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&StringRawBuffer);
          if ( CoCreateInstance(
                 &CLSID_OSTaskCompletion,
                 0LL,
                 1u,
                 &GUID_c7e40572_c36a_43ea_9a40_f3b168da5558,
                 &StringRawBuffer) >= 0
            && (*(int (__fastcall **)(LPVOID, _QWORD, __int64))(*(_QWORD *)StringRawBuffer + 24LL))(
                 StringRawBuffer,
                 dwProcessId,
                 0x100000LL) >= 0 )
          {
            Microsoft::WRL::ComPtr<ISwitchItemFilteredCollection>::operator=(
              (__int64 *)(v9 + 24),
              (__int64 *)&StringRawBuffer);
          }
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&StringRawBuffer);
      }
      StringRawBuffer = this;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&StringRawBuffer);
      v18 = *(_QWORD *)(v9 + 8);
      *(_QWORD *)&v30.Data1 = this;
      *(_QWORD *)v30.Data4 = this;
      StringRawBuffer = 0LL;
      v31 = v18;
      Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_8b8102a789654bc38db8b1e79dbee23f___(
        v20,
        v19,
        *((_DWORD *)this + 68),
        v21,
        (__int64)ppv,
        &v30);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v30.Data4);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&StringRawBuffer);
      AcquireSRWLockExclusive((PSRWLOCK)this + 35);
      v22 = (__int64 *)((char *)this + 528);
      for ( i = (__int64 *)*((_QWORD *)this + 66); i; i = (__int64 *)*i )
        v22 = i;
      *v22 = v9;
      StringRawBuffer = (LPVOID)WindowsGetStringRawBuffer(*(HSTRING *)(v9 + 16), 0LL);
      ViewManagerInteropTraceLogging::PendingActivationAdd<unsigned __int64 &,unsigned short const *>(
        v9 + 8,
        (const WCHAR **)&StringRawBuffer);
      if ( this != (ViewEventDispatcher *)-280LL )
        ReleaseSRWLockExclusive((PSRWLOCK)this + 35);
      v10 = 0;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
      v9 = 0LL;
      goto LABEL_27;
    }
    v13 = 2940LL;
  }
  else
  {
    v13 = 2937LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
    (const char *)(unsigned int)ActivationId);
LABEL_27:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v29);
LABEL_28:
  if ( v9 )
    CLinkedNode<ViewEventDispatcher::PendingActivationData>::`scalar deleting destructor'((__int64 *)v9);
  return v10;
}
