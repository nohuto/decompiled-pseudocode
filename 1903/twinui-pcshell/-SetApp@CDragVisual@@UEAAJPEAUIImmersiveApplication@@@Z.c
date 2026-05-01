/*
 * XREFs of ?SetApp@CDragVisual@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x1803D8480
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x180067C28 (-GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPE.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?BuildSingleViewLayout@AppLayoutHelpers@@YAJPEAUIApplicationView@@PEAPEAUIAppLayout@@@Z @ 0x1803C1014 (-BuildSingleViewLayout@AppLayoutHelpers@@YAJPEAUIApplicationView@@PEAPEAUIAppLayout@@@Z.c)
 */

__int64 __fastcall CDragVisual::SetApp(CDragVisual *this, struct IUnknown *a2)
{
  IUnknown *v4; // rbx
  struct IApplicationView **v5; // r9
  int ViewForApplication; // ebx
  struct IAppLayout **v7; // r8
  AppLayoutHelpers *v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  v4 = (IUnknown *)*((_QWORD *)this - 1);
  v9 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
  ViewForApplication = ApplicationViewHelpers::GetViewForApplication(v4, a2, (struct IImmersiveApplication *)&v9, v5);
  if ( ViewForApplication >= 0 )
    ViewForApplication = AppLayoutHelpers::BuildSingleViewLayout(v9, (struct IApplicationView *)&v10, v7);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
  if ( ViewForApplication >= 0 )
    ViewForApplication = (*(__int64 (__fastcall **)(CDragVisual *, __int64, _QWORD))(*(_QWORD *)this + 72LL))(
                           this,
                           v10,
                           0LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  return (unsigned int)ViewForApplication;
}
