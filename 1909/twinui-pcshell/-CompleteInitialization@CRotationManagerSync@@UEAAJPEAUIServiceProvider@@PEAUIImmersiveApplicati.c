/*
 * XREFs of ?CompleteInitialization@CRotationManagerSync@@UEAAJPEAUIServiceProvider@@PEAUIImmersiveApplicationManagerInternal@@@Z @ 0x18014A2C0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@@@Z @ 0x180015428 (--4-$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_CheckForInitialSuppression@CRotationManagerSync@@AEAAXXZ @ 0x18014A7B4 (-_CheckForInitialSuppression@CRotationManagerSync@@AEAAXXZ.c)
 */

__int64 __fastcall CRotationManagerSync::CompleteInitialization(
        CRotationManagerSync *this,
        struct IServiceProvider *a2,
        struct IImmersiveApplicationManagerInternal *a3)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Microsoft::WRL::ComPtr<IImmersiveMonitorManager>::operator=((__int64 *)this + 9, (__int64)a3);
  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 8);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))QueryService)(
         a2,
         &SID_IImmersiveMonitorService,
         &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
         (char *)this + 64);
  v7 = v6;
  if ( v6 >= 0 )
  {
    CRotationManagerSync::_CheckForInitialSuppression((CRotationManagerSync *)((char *)this - 72));
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBD,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\rotationmanager.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
}
