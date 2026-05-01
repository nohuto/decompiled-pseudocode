/*
 * XREFs of _lambda_bb299bb733d931796faa9380238be063_::operator() @ 0x18012E0E0
 * Callers:
 *     CDelayIAMOperations::CDelayedOperation__lambda_bb299bb733d931796faa9380238be063___::operator() @ 0x18012E2F0 (CDelayIAMOperations--CDelayedOperation__lambda_bb299bb733d931796faa9380238be063___--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$As@UIImmersiveApplicationInternal@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x18007CAC8 (--$As@UIImmersiveApplicationInternal@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$PendingActivation@AEBQEAUHWND__@@@IamTraceLogging@@SAXAEBQEAUHWND__@@@Z @ 0x18012AD9C (--$PendingActivation@AEBQEAUHWND__@@@IamTraceLogging@@SAXAEBQEAUHWND__@@@Z.c)
 *     CIAMGlobals::QueueViewManagementTask__lambda_db2c8f4e35f08913841ac1af46aea9ac___ @ 0x18012B14C (CIAMGlobals--QueueViewManagementTask__lambda_db2c8f4e35f08913841ac1af46aea9ac___.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_bb299bb733d931796faa9380238be063_::operator()(__int64 a1)
{
  HWND ForegroundWindow; // rax
  HWND *v3; // rdi
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplicationInternal>(
    (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 24),
    &v8);
  ForegroundWindow = GetForegroundWindow();
  v3 = (HWND *)(a1 + 8);
  if ( !ForegroundWindow
    || ForegroundWindow == *v3
    && ForegroundWindow == *(HWND *)(a1 + 16)
    && *(HWND *)(*(_QWORD *)a1 + 768LL) != *v3
    && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v8 + 416LL))(v8) )
  {
    v7 = *(_QWORD *)(a1 + 24);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v7);
    CIAMGlobals::QueueViewManagementTask__lambda_db2c8f4e35f08913841ac1af46aea9ac___(v4, &v7);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
    IamTraceLogging::PendingActivation<HWND__ * const &>((HWND *)(a1 + 8), v5);
  }
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
}
