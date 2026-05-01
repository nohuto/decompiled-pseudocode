/*
 * XREFs of ?IsWindowManaged@HolographicPositioner@@UEAAJPEAUHWND__@@PEAH@Z @ 0x180220610
 * Callers:
 *     ?_IsPropertySetContextHolographic@HolographicPositioner@@AEAA?AW4HolographicDetermination@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180025900 (-_IsPropertySetContextHolographic@HolographicPositioner@@AEAA-AW4HolographicDetermination@@PEAUI.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsViewManaged@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x180080760 (-IsViewManaged@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HolographicPositioner::IsWindowManaged(HolographicPositioner *this, HWND a2, int *a3)
{
  __int64 v6; // r14
  int (__fastcall *v7)(__int64, HWND, struct IApplicationView **); // rbx
  int IsViewManaged; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IApplicationView *v12; // [rsp+50h] [rbp+8h] BYREF

  *a3 = 0;
  v12 = 0LL;
  v6 = *((_QWORD *)this + 11);
  if ( v6
    && (v7 = *(int (__fastcall **)(__int64, HWND, struct IApplicationView **))(*(_QWORD *)v6 + 48LL),
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12),
        v7(v6, a2, &v12) >= 0)
    && (IsViewManaged = HolographicPositioner::IsViewManaged(this, v12, a3), v9 = IsViewManaged, IsViewManaged < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x445,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)IsViewManaged);
  }
  else
  {
    v9 = 0;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  return v9;
}
