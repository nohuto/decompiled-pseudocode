/*
 * XREFs of ?UpdateLightweightFullScreenMode@FullScreenPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x18007AEF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@Z @ 0x18016DA70 (-PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall FullScreenPositioner::UpdateLightweightFullScreenMode(
        FullScreenPositioner *this,
        struct IApplicationView *a2)
{
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v5);
  if ( (*(int (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 264LL))(a2, &v5) >= 0
    && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5) == 3 )
  {
    FullScreenPositioner::PositionView((char *)this - 104, a2, 0LL);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v5);
  return 0LL;
}
