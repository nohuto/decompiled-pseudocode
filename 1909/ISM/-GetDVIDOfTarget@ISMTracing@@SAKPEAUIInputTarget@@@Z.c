/*
 * XREFs of ?GetDVIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x180053968
 * Callers:
 *     ?MPCInputRouter_UpdateFocusedInputTarget_@ISMTracing@@QEAAXPEAUIInputTarget@@_NPEAUIMPCInputPostProcessor@@@Z @ 0x1800551E0 (-MPCInputRouter_UpdateFocusedInputTarget_@ISMTracing@@QEAAXPEAUIInputTarget@@_NPEAUIMPCInputPost.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x1800081B0 (-InternalRelease@-$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIFocusInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800531B8 (--$As@UIFocusInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ISMTracing::GetDVIDOfTarget(struct IInputTarget *a1)
{
  unsigned int v2; // ebx
  unsigned int v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  v4 = 0;
  if ( a1 )
  {
    v6 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a1;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v6);
    v5 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IFocusInputTarget>(&v6, &v5) >= 0 && v5 )
      (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v5 + 56LL))(v5, &v4);
    Microsoft::WRL::ComPtr<IFocusInputTarget>::InternalRelease(&v5);
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a1 + 16LL))(a1);
    return v4;
  }
  return v2;
}
