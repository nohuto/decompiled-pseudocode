/*
 * XREFs of ?GetPosition@CDesktopPositioner@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x18004D220
 * Callers:
 *     ?GetPosition@CDesktopPositioner@@W7EAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x1800E2D60 (-GetPosition@CDesktopPositioner@@W7EAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetPosition@CDesktopPositioner@@WBA@EAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x1800E2D70 (-GetPosition@CDesktopPositioner@@WBA@EAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??$MakeAndInitialize@VCCommonApplicationViewArrangePositionSnapshot@@UIApplicationViewArrangePosition@@AEAPEAUHWND__@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewArrangePosition@@AEAPEAUHWND__@@@Z @ 0x18004B644 (--$MakeAndInitialize@VCCommonApplicationViewArrangePositionSnapshot@@UIApplicationViewArrangePos.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopPositioner::GetPosition(
        CDesktopPositioner *this,
        HWND a2,
        const struct _GUID *a3,
        void **a4)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v9; // rdx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HWND v12; // [rsp+38h] [rbp+10h] BYREF
  void *v13; // [rsp+48h] [rbp+20h] BYREF

  v12 = a2;
  *a4 = 0LL;
  v13 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  v6 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewArrangePositionSnapshot,IApplicationViewArrangePosition,HWND__ * &>(
         &v13,
         &v12);
  v7 = v6;
  if ( v6 < 0 )
  {
    v9 = 238LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v6,
      v10);
    goto LABEL_4;
  }
  v6 = (**(__int64 (__fastcall ***)(void *, const struct _GUID *, void **))v13)(v13, a3, a4);
  v7 = v6;
  if ( v6 < 0 )
  {
    v9 = 239LL;
    goto LABEL_7;
  }
  v7 = 0;
LABEL_4:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  return v7;
}
