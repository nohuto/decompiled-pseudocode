/*
 * XREFs of ?QueuePendingActivation@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x180216AEC
 * Callers:
 *     ?ApproveWinRtActivation@ViewWrapperBase@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@5@@Z @ 0x180240BF0 (-ApproveWinRtActivation@ViewWrapperBase@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@P.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18001C76C (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$PendingActivationAdd@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z @ 0x18007E3D8 (--$PendingActivationAdd@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z.c)
 *     ?SetActivationVirtualDesktopId@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHelper@ShellHelpers@45@AEBU_GUID@@@Z @ 0x18007F9A0 (-SetActivationVirtualDesktopId@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropert.c)
 *     ?GetActivationId@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHelper@ShellHelpers@45@PEA_K@Z @ 0x18007FA58 (-GetActivationId@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHelper@She.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_8b8102a789654bc38db8b1e79dbee23f___ @ 0x180210230 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_8b8102a789654bc38db8b1e79dbee23f___.c)
 *     ??4?$ComPtr@UISwitchItemFilteredCollection@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1802121B8 (--4-$ComPtr@UISwitchItemFilteredCollection@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??_G?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@QEAAPEAXI@Z @ 0x180212D3C (--_G-$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ViewEventDispatcher::QueuePendingActivation(
        ViewEventDispatcher *this,
        struct IViewWrapperInternal *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3,
        char a4)
{
  char *v8; // rbx
  unsigned int v9; // edi
  unsigned __int64 *v10; // r8
  int ActivationId; // eax
  __int64 v12; // rdx
  __int64 v13; // rdi
  const struct _GUID *v14; // r8
  HWND v15; // r15
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r9
  _QWORD *v20; // rcx
  _QWORD *i; // rdx
  LPVOID *ppv; // [rsp+20h] [rbp-60h]
  LPVOID StringRawBuffer; // [rsp+30h] [rbp-50h] BYREF
  DWORD dwProcessId; // [rsp+38h] [rbp-48h] BYREF
  __int64 v26; // [rsp+40h] [rbp-40h] BYREF
  __int64 v27[3]; // [rsp+48h] [rbp-38h] BYREF
  GUID v28; // [rsp+60h] [rbp-20h] BYREF
  __int64 v29; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v27[1] = -2LL;
  v8 = (char *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    *(_QWORD *)v8 = 0LL;
    *((_QWORD *)v8 + 1) = 0LL;
    *((_QWORD *)v8 + 2) = 0LL;
    *((_QWORD *)v8 + 3) = 0LL;
    *((_QWORD *)v8 + 4) = 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  v27[2] = (__int64)v8;
  if ( !v8 )
  {
    v9 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCA4,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_28;
  }
  *(_QWORD *)v8 = 0LL;
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)v8 + 4, (__int64)a3);
  v27[0] = *((_QWORD *)v8 + 4);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v27);
  ActivationId = Windows::Internal::Shell::Desktop::ViewManagerInterop::GetActivationId(
                   (Windows::Internal::Shell::Desktop::ViewManagerInterop *)v27,
                   (struct Windows::Internal::ShellHelpers::PropertySetHelper *)(v8 + 8),
                   v10);
  v9 = ActivationId;
  if ( ActivationId >= 0 )
  {
    ActivationId = (*(__int64 (__fastcall **)(struct IViewWrapperInternal *, char *))(*(_QWORD *)a2 + 56LL))(
                     a2,
                     v8 + 16);
    v9 = ActivationId;
    if ( ActivationId >= 0 )
    {
      v26 = 0LL;
      v13 = *((_QWORD *)this + 63);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
      if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 48LL))(v13, &v26) >= 0 )
      {
        v28 = GUID_NULL;
        if ( (*(int (__fastcall **)(__int64, GUID *))(*(_QWORD *)v26 + 32LL))(v26, &v28) >= 0 )
          Windows::Internal::Shell::Desktop::ViewManagerInterop::SetActivationVirtualDesktopId(
            (Windows::Internal::Shell::Desktop::ViewManagerInterop *)v27,
            (struct Windows::Internal::ShellHelpers::PropertySetHelper *)&v28,
            v14);
      }
      if ( a4 )
      {
        AcquireSRWLockShared((PSRWLOCK)this + 37);
        *(_QWORD *)&v28.Data1 = (char *)this + 296;
        v15 = (HWND)(*(__int64 (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)a2 + 728LL))(a2);
        if ( this != (ViewEventDispatcher *)-296LL )
          ReleaseSRWLockShared((PSRWLOCK)this + 37);
        StringRawBuffer = 0LL;
        dwProcessId = 0;
        if ( GetWindowThreadProcessId(v15, &dwProcessId) )
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
              (__int64 *)v8 + 3,
              (__int64 *)&StringRawBuffer);
          }
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&StringRawBuffer);
      }
      StringRawBuffer = this;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&StringRawBuffer);
      v16 = *((_QWORD *)v8 + 1);
      *(_QWORD *)&v28.Data1 = this;
      *(_QWORD *)v28.Data4 = this;
      StringRawBuffer = 0LL;
      v29 = v16;
      Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_8b8102a789654bc38db8b1e79dbee23f___(
        v18,
        v17,
        *((_DWORD *)this + 72),
        v19,
        (__int64)ppv,
        &v28);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v28.Data4);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&StringRawBuffer);
      AcquireSRWLockExclusive((PSRWLOCK)this + 37);
      v20 = (_QWORD *)((char *)this + 552);
      for ( i = (_QWORD *)*((_QWORD *)this + 69); i; i = (_QWORD *)*i )
        v20 = i;
      *v20 = v8;
      StringRawBuffer = (LPVOID)WindowsGetStringRawBuffer(*((HSTRING *)v8 + 2), 0LL);
      ViewManagerInteropTraceLogging::PendingActivationAdd<unsigned __int64 &,unsigned short const *>(
        (__int64)(v8 + 8),
        (const WCHAR **)&StringRawBuffer);
      v8 = 0LL;
      if ( this != (ViewEventDispatcher *)-296LL )
        ReleaseSRWLockExclusive((PSRWLOCK)this + 37);
      v9 = 0;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
      goto LABEL_27;
    }
    v12 = 3248LL;
  }
  else
  {
    v12 = 3245LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
    (const char *)(unsigned int)ActivationId);
LABEL_27:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v27);
LABEL_28:
  if ( v8 )
    CLinkedNode<ViewEventDispatcher::PendingActivationData>::`scalar deleting destructor'((__int64 *)v8);
  return v9;
}
