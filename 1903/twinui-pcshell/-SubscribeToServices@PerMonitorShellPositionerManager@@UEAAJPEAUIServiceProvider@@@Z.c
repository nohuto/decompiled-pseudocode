/*
 * XREFs of ?SubscribeToServices@PerMonitorShellPositionerManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180397DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PerMonitorShellPositionerManager::SubscribeToServices(
        PerMonitorShellPositionerManager *this,
        struct IServiceProvider *a2)
{
  int v4; // ebp
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rsi
  __int64 *v6; // rbx
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = 0;
  while ( 1 )
  {
    QueryService = a2->lpVtbl->QueryService;
    v6 = (__int64 *)((char *)this + 8 * v4);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v6 + 10);
    v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))QueryService)(
           a2,
           &c_positionersSIDs + v4,
           &GUID_ee010e17_919a_4068_868b_675acf787303,
           v6 + 10);
    v8 = v7;
    if ( v7 < 0 )
      break;
    if ( ++v4 >= 8 )
      return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2A,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\permonitorshellpositionermanager.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
