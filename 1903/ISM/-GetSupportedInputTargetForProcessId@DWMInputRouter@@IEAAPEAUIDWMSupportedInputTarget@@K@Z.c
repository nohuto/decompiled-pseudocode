/*
 * XREFs of ?GetSupportedInputTargetForProcessId@DWMInputRouter@@IEAAPEAUIDWMSupportedInputTarget@@K@Z @ 0x1800C37F4
 * Callers:
 *     ?ResendGamepadIsSupportedForProcess@MPCInputRouter@@UEAAJK@Z @ 0x180055C30 (-ResendGamepadIsSupportedForProcess@MPCInputRouter@@UEAAJK@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIDWMSupportedInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDWMSupportedInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800C1978 (--$As@UIDWMSupportedInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$C.c)
 *     ?GetInputHostTargetForProcessId@DWMInputRouter@@IEAAPEAUIInputTarget@@K@Z @ 0x1800C36A8 (-GetInputHostTargetForProcessId@DWMInputRouter@@IEAAPEAUIInputTarget@@K@Z.c)
 */

struct IDWMSupportedInputTarget *__fastcall DWMInputRouter::GetSupportedInputTargetForProcessId(
        DWMInputRouter *this,
        int a2)
{
  struct IInputTarget *v2; // rbx
  __int64 v3; // rdi
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF
  struct IInputTarget *InputHostTargetForProcessId; // [rsp+48h] [rbp+20h] BYREF

  InputHostTargetForProcessId = DWMInputRouter::GetInputHostTargetForProcessId(this, a2);
  v2 = InputHostTargetForProcessId;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&InputHostTargetForProcessId);
  v3 = 0LL;
  v7 = 0LL;
  if ( v2 )
  {
    v4 = Microsoft::WRL::ComPtr<IInputTarget>::As<IDWMSupportedInputTarget>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&InputHostTargetForProcessId,
           &v7);
    if ( v4 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        2259LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v4);
      __debugbreak();
    }
    v3 = v7;
  }
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v7);
  if ( v2 )
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v2 + 16LL))(v2);
  return (struct IDWMSupportedInputTarget *)v3;
}
