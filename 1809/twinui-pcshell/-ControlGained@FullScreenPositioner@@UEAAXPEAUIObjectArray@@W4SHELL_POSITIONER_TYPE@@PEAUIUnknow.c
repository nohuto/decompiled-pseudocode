/*
 * XREFs of ?ControlGained@FullScreenPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x180140AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x180140C94 (-ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall FullScreenPositioner::ControlGained(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF

  v7 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
  (*(void (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)a2 + 32LL))(
    a2,
    0LL,
    &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
    &v7);
  FullScreenPositioner::ControlGainedHelper(a1 - 128, v7, a3);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
}
