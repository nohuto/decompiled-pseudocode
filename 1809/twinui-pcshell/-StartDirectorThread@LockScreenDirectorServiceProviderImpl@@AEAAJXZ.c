/*
 * XREFs of ?StartDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAJXZ @ 0x180192450
 * Callers:
 *     ?EnsureChildServices@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@Z @ 0x180191464 (-EnsureChildServices@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@Z.c)
 *     ?PerformDelayedInitialization@LockScreenDirectorServiceProviderImpl@@UEAAJXZ @ 0x180191B00 (-PerformDelayedInitialization@LockScreenDirectorServiceProviderImpl@@UEAAJXZ.c)
 * Callees:
 *     ??$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Details@WRL@Microsoft@@YAJPEAPEAVCMarshalStream@CMarshaledInterface@@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Z @ 0x1800194EC (--$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4M.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180077188 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800FAA4C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??0?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180190F08 (--0-$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     ??1LockScreenDirectorServiceProviderImpl_StartDirectorThread_Activity@LockScreenServiceTelemetry@@QEAA@XZ @ 0x180191214 (--1LockScreenDirectorServiceProviderImpl_StartDirectorThread_Activity@LockScreenServiceTelemetry.c)
 *     ?StartActivity@LockScreenDirectorServiceProviderImpl_StartDirectorThread_Activity@LockScreenServiceTelemetry@@QEAAXXZ @ 0x180192394 (-StartActivity@LockScreenDirectorServiceProviderImpl_StartDirectorThread_Activity@LockScreenServ.c)
 *     ?Stop@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801926BC (-Stop@-$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType.c)
 */

__int64 __fastcall LockScreenDirectorServiceProviderImpl::StartDirectorThread(void **this)
{
  _QWORD *v2; // rbx
  unsigned int LastError; // edi
  int v4; // eax
  HANDLE EventW; // rax
  const char *v6; // r9
  __int64 v7; // rdx
  void *v8; // rsi
  HANDLE CurrentProcess; // rdi
  HANDLE v10; // rax
  char *v11; // rcx
  __int64 v13; // [rsp+48h] [rbp-C0h] BYREF
  void **v14; // [rsp+50h] [rbp-B8h] BYREF
  void **v15; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v16[40]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  wil::ActivityBase<LockScreenServiceLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LockScreenServiceLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v16,
    (__int64)"LockScreenDirectorServiceProviderImpl_StartDirectorThread_Activity");
  v16[0] = &LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_StartDirectorThread_Activity::`vftable';
  LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_StartDirectorThread_Activity::StartActivity((LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_StartDirectorThread_Activity *)v16);
  v2 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    *v2 = 0LL;
    v2[1] = 0LL;
    *v2 = 0LL;
    v2[1] = 0LL;
  }
  else
  {
    v2 = 0LL;
  }
  if ( !v2 )
  {
    LastError = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBB,
      (__int64)"pcshell\\twinui\\lockscreenservice\\lockscreendirectorserviceproviderimpl.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_19;
  }
  v15 = this;
  if ( this )
    (*((void (__fastcall **)(void **))*this + 1))(this);
  LODWORD(v13) = 2;
  v14 = this;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v2);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v2);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
         v2,
         (__int64)&GUID_c853771a_f336_4cf8_9a27_1570293ab52d,
         &v14,
         (unsigned int *)&v13);
  LastError = v4;
  if ( v4 >= 0 )
  {
    EventW = CreateEventW(0LL, 1, 0, 0LL);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      this + 16,
      EventW);
    if ( this[16] )
    {
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        (void **)v2 + 1,
        0LL);
      v8 = this[16];
      CurrentProcess = GetCurrentProcess();
      v10 = GetCurrentProcess();
      if ( DuplicateHandle(v10, v8, CurrentProcess, (LPHANDLE)v2 + 1, 0, 0, 2u) )
      {
        if ( SHCreateThread(LockScreenDirectorServiceProviderImpl::s_RunDirectorThread, v2, 8u, 0LL) )
        {
          *((_BYTE *)this + 160) = 1;
          v2 = 0LL;
          wil::ActivityBase<LockScreenServiceLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v16);
          LastError = 0;
          goto LABEL_18;
        }
        v7 = 199LL;
      }
      else
      {
        v7 = 196LL;
      }
    }
    else
    {
      v7 = 195LL;
    }
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)v7,
                  (__int64)"pcshell\\twinui\\lockscreenservice\\lockscreendirectorserviceproviderimpl.cpp",
                  v6);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBE,
      (__int64)"pcshell\\twinui\\lockscreenservice\\lockscreendirectorserviceproviderimpl.cpp",
      (const char *)(unsigned int)v4);
  }
LABEL_18:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
LABEL_19:
  if ( v2 )
  {
    v11 = (char *)v2[1];
    if ( (unsigned __int64)(v11 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v11);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v2);
    operator delete(v2, (const struct std::nothrow_t *)0x10);
  }
  LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_StartDirectorThread_Activity::~LockScreenDirectorServiceProviderImpl_StartDirectorThread_Activity((LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_StartDirectorThread_Activity *)v16);
  return LastError;
}
