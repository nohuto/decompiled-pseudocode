/*
 * XREFs of ?s_RunDirectorThread@LockScreenDirectorServiceProviderImpl@@CAKPEAX@Z @ 0x1801F95B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x1800142A0 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?s_RunMessageLoop@LockScreenDirectorServiceProviderImpl@@CAXPEAX@Z @ 0x1801F96F0 (-s_RunMessageLoop@LockScreenDirectorServiceProviderImpl@@CAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall LockScreenDirectorServiceProviderImpl::s_RunDirectorThread(CMarshaledInterface *Parameter)
{
  int v2; // esi
  char *v3; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  void *v6; // [rsp+60h] [rbp+8h] BYREF
  LPVOID ppv; // [rsp+68h] [rbp+10h] BYREF
  CMarshaledInterface *v8; // [rsp+70h] [rbp+18h]

  v8 = Parameter;
  ppv = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  v2 = CoCreateInstance(
         &GUID_637118f4_0e4e_4c90_bc39_161165f55b6e,
         0LL,
         0x17u,
         &GUID_6119bcc6_cac2_4d37_9bbf_76a34697e7fb,
         &ppv);
  if ( v2 >= 0 )
  {
    v6 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
    v2 = CMarshaledInterface::_Unmarshal(
           Parameter,
           &GUID_c853771a_f336_4cf8_9a27_1570293ab52d,
           (struct IInspectable **)&v6,
           0);
    if ( v2 >= 0 )
      v2 = (*(__int64 (__fastcall **)(void *, LPVOID))(*(_QWORD *)v6 + 24LL))(v6, ppv);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
  }
  v3 = (char *)*((_QWORD *)Parameter + 1);
  *((_QWORD *)Parameter + 1) = 0LL;
  if ( Parameter )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)Parameter);
    operator delete(Parameter, (const struct std::nothrow_t *)0x10);
  }
  if ( v2 >= 0 )
    LockScreenDirectorServiceProviderImpl::s_RunMessageLoop(v3);
  else
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xEF,
      (__int64)"pcshell\\twinui\\lockscreenservice\\lockscreendirectorserviceproviderimpl.cpp",
      (const char *)(unsigned int)v2);
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  return 0LL;
}
