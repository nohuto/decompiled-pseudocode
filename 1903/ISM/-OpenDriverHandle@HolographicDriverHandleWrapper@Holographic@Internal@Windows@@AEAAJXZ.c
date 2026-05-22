/*
 * XREFs of ?OpenDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAJXZ @ 0x18015AE58
 * Callers:
 *     ??0HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAA@W4TraceDriverType@@AEBU_GUID@@PEAUHSTRING__@@W4HandleWrapperDesiredAccess@123@_NPEAX@Z @ 0x180150C6C (--0HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAA@W4TraceDriverType@@AEBU_GUI.c)
 *     ?DeviceHandleCallback@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXW4_CM_NOTIFY_ACTION@@@Z @ 0x180154B58 (-DeviceHandleCallback@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXW4_CM_NO.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18002C79C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800519D4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x1800806B8 (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 *     ??4?$unique_ptr@UCmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@U?$default_delete@UCmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18015229C (--4-$unique_ptr@UCmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@U-$.c)
 *     ??_GCmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAPEAXI@Z @ 0x180152B68 (--_GCmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAPEAXI@Z.c)
 *     ?IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z @ 0x18015988C (-IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z.c)
 *     ?Log_Error_@HolographicDriverClientTrace@@QEAAXKPEB_W@Z @ 0x1801599D8 (-Log_Error_@HolographicDriverClientTrace@@QEAAXKPEB_W@Z.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180161814 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 *     ?reset@?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1801619B8 (-reset@-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@detai.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHCMNOTIFICATION__@@P6AKPEAU1@@Z$1?CM_Unregister_Notification@@YAK0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHCMNOTIFICATION__@@@Z @ 0x180161A18 (-reset@-$unique_storage@U-$resource_policy@PEAUHCMNOTIFICATION__@@P6AKPEAU1@@Z$1-CM_Unregister_N.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::OpenDriverHandle(
        Windows::Internal::Holographic::HolographicDriverHandleWrapper *this)
{
  RTL_SRWLOCK *v2; // r12
  const char *v3; // r9
  HANDLE *v4; // r15
  int v5; // ebx
  DWORD dwFlagsAndAttributes; // esi
  const WCHAR *StringRawBuffer; // rax
  DWORD v8; // r8d
  DWORD v9; // edx
  HANDLE FileW; // rax
  const char *v11; // r9
  const WCHAR *v12; // rax
  HANDLE v13; // rax
  __int64 v14; // rdx
  void *v15; // rdx
  unsigned int LastError; // ebx
  const char *v17; // r9
  struct _RTL_CRITICAL_SECTION *v18; // r13
  __int64 v19; // rcx
  int v20; // ebx
  __int64 v21; // rcx
  HolographicDriverClientTrace *v22; // rcx
  int v23; // eax
  __int64 *v24; // rsi
  __int64 v25; // r15
  unsigned __int64 v26; // rbx
  Windows::Internal::Holographic::HolographicDriverHandleWrapper::CmNotifContext *v28; // [rsp+48h] [rbp-C0h] BYREF
  struct _RTL_CRITICAL_SECTION *v29; // [rsp+50h] [rbp-B8h]
  __int64 v30; // [rsp+58h] [rbp-B0h]
  RTL_SRWLOCK *v31; // [rsp+60h] [rbp-A8h]
  _DWORD v32[4]; // [rsp+68h] [rbp-A0h] BYREF
  HANDLE v33; // [rsp+78h] [rbp-90h]
  wil::details::in1diag3 *retaddr; // [rsp+240h] [rbp+138h]

  v30 = -2LL;
  v2 = (RTL_SRWLOCK *)((char *)this + 112);
  AcquireSRWLockExclusive((PSRWLOCK)this + 14);
  v31 = v2;
  AcquireSRWLockExclusive((PSRWLOCK)this + 15);
  v28 = (Windows::Internal::Holographic::HolographicDriverHandleWrapper *)((char *)this + 120);
  v4 = (HANDLE *)((char *)this + 136);
  if ( *((_QWORD *)this + 17) != -1LL )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      497LL,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
      v3);
    __debugbreak();
  }
  if ( *((int *)this + 32) >= 0 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      498LL,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
      v3);
    __debugbreak();
  }
  v5 = *((_DWORD *)this + 10);
  dwFlagsAndAttributes = *((_BYTE *)this + 169) != 0 ? 0x40000000 : 0;
  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 4), 0LL);
  v8 = 3;
  if ( v5 == 2 )
    v8 = 1;
  v9 = -1073741824;
  if ( v5 == 2 )
    v9 = 0x80000000;
  FileW = CreateFileW(StringRawBuffer, v9, v8, 0LL, 3u, dwFlagsAndAttributes, 0LL);
  wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (char *)this + 136,
    FileW);
  if ( *v4 == (HANDLE)-1LL )
  {
    if ( *((_DWORD *)this + 10) == 1 && GetLastError() == 5 )
    {
      v12 = WindowsGetStringRawBuffer(*((HSTRING *)this + 4), 0LL);
      v13 = CreateFileW(v12, 0x80000000, 1u, 0LL, 3u, dwFlagsAndAttributes, 0LL);
      wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        (char *)this + 136,
        v13);
    }
    if ( *v4 == (HANDLE)-1LL )
    {
      v14 = 542LL;
LABEL_18:
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)v14,
                    (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
                    v11);
LABEL_26:
      if ( this != (Windows::Internal::Holographic::HolographicDriverHandleWrapper *)-120LL )
        ReleaseSRWLockExclusive((PSRWLOCK)this + 15);
      goto LABEL_43;
    }
  }
  v15 = (void *)*((_QWORD *)this + 6);
  if ( v15 && !CreateIoCompletionPort(*v4, v15, 0LL, 0) )
  {
    v14 = 546LL;
    goto LABEL_18;
  }
  *((_DWORD *)this + 32) = 0;
  AcquireSRWLockExclusive((PSRWLOCK)this + 18);
  v29 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 144);
  if ( *((_QWORD *)this + 19) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      554LL,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
      v17);
    __debugbreak();
  }
  v18 = (struct _RTL_CRITICAL_SECTION *)operator new(0x40uLL);
  v29 = v18;
  InitializeCriticalSectionEx(v18, 0, 0);
  v18[1].DebugInfo = 0LL;
  *(_QWORD *)&v18[1].LockCount = CreateThreadpoolWork(
                                   Windows::Internal::Holographic::HolographicDriverHandleWrapper::CmNotifContext::UnregisterAsyncCallback,
                                   v18,
                                   0LL);
  v18[1].OwningThread = 0LL;
  v28 = (Windows::Internal::Holographic::HolographicDriverHandleWrapper::CmNotifContext *)v18;
  EnterCriticalSection(v18);
  v18[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)this;
  memset_0(v32, 0, 0x1A0uLL);
  v32[0] = 416;
  v32[2] = 1;
  v33 = *v4;
  wil::details::unique_storage<wil::details::resource_policy<HCMNOTIFICATION__ *,unsigned long (*)(HCMNOTIFICATION__ *),&unsigned long CM_Unregister_Notification(HCMNOTIFICATION__ *),wistd::integral_constant<unsigned __int64,0>,HCMNOTIFICATION__ *,HCMNOTIFICATION__ *,0,std::nullptr_t>>::reset(
    &v18[1].OwningThread,
    0LL);
  v20 = CM_Register_Notification(
          v32,
          v18,
          Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceHandleCallbackStatic,
          &v18[1].OwningThread);
  if ( v20 )
  {
    if ( HolographicDriverClientTrace::IsEnabled(v19) )
    {
      wil::details::static_lazy<HolographicDriverClientTrace>::get(
        v21,
        lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
      HolographicDriverClientTrace::Log_Error_(
        v22,
        v20,
        L"CM_MapCrToWin32Err() failed, hresult is actually a CONFIGRET value");
    }
    LastError = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x248,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
      (const char *)0x8000FFFFLL);
    LeaveCriticalSection(v18);
    Windows::Internal::Holographic::HolographicDriverHandleWrapper::CmNotifContext::`scalar deleting destructor'(v18);
    if ( this != (Windows::Internal::Holographic::HolographicDriverHandleWrapper *)-144LL )
      ReleaseSRWLockExclusive((PSRWLOCK)this + 18);
    goto LABEL_26;
  }
  std::unique_ptr<Windows::Internal::Holographic::HolographicDriverHandleWrapper::CmNotifContext>::operator=(
    (Windows::Internal::Holographic::HolographicDriverHandleWrapper::CmNotifContext **)this + 19,
    &v28);
  LeaveCriticalSection(v18);
  if ( v28 )
    Windows::Internal::Holographic::HolographicDriverHandleWrapper::CmNotifContext::`scalar deleting destructor'((struct _RTL_CRITICAL_SECTION *)v28);
  if ( this != (Windows::Internal::Holographic::HolographicDriverHandleWrapper *)-144LL )
    ReleaseSRWLockExclusive((PSRWLOCK)this + 18);
  if ( this != (Windows::Internal::Holographic::HolographicDriverHandleWrapper *)-120LL )
    ReleaseSRWLockExclusive((PSRWLOCK)this + 15);
  v23 = (*(__int64 (__fastcall **)(Windows::Internal::Holographic::HolographicDriverHandleWrapper *))(*(_QWORD *)this + 8LL))(this);
  LastError = v23;
  if ( v23 >= 0 )
  {
    AcquireSRWLockShared((PSRWLOCK)this + 7);
    v29 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
    v24 = (__int64 *)*((_QWORD *)this + 11);
    v25 = 0LL;
    v26 = (unsigned __int64)(*((_QWORD *)this + 12) - (_QWORD)v24 + 7LL) >> 3;
    if ( (unsigned __int64)v24 > *((_QWORD *)this + 12) )
      v26 = 0LL;
    if ( v26 )
    {
      do
      {
        std::_Func_class<void,>::operator()(*v24++);
        ++v25;
      }
      while ( v25 != v26 );
    }
    if ( this != (Windows::Internal::Holographic::HolographicDriverHandleWrapper *)-56LL )
      ReleaseSRWLockShared((PSRWLOCK)this + 7);
    LastError = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x24F,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
      (const char *)(unsigned int)v23);
  }
LABEL_43:
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return LastError;
}
