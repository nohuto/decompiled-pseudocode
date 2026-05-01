/*
 * XREFs of ?_UsePreferredSizeForStandaloneWindows@CDesktopPositioner@@AEBA_NPEAUIApplicationView@@@Z @ 0x180055600
 * Callers:
 *     ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x180054EE4 (-_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@Posi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall CDesktopPositioner::_UsePreferredSizeForStandaloneWindows(
        CDesktopPositioner *this,
        int (__fastcall ***a2)(struct IApplicationView *, GUID *, __int64 *))
{
  bool v3; // si
  int (__fastcall *v4)(struct IApplicationView *, GUID *, __int64 *); // rbx
  __int64 v5; // rbx
  int (__fastcall *v6)(__int64, CDesktopPositioner **); // rdi
  CDesktopPositioner *v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v8 = this;
  v3 = 0;
  v9 = 0LL;
  v4 = **a2;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  if ( v4((struct IApplicationView *)a2, &GUID_3e46ed27_6707_4c99_aff4_ad6824b65aa2, &v9) >= 0 )
  {
    v8 = 0LL;
    v5 = v9;
    v6 = *(int (__fastcall **)(__int64, CDesktopPositioner **))(*(_QWORD *)v9 + 24LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
    if ( v6(v5, &v8) >= 0 )
      v3 = (*(unsigned int (__fastcall **)(CDesktopPositioner *, __int64))(*(_QWORD *)v8 + 328LL))(v8, 7LL) != 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  return v3;
}
