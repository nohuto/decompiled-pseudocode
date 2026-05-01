/*
 * XREFs of ?GetPosition@HolographicPositioner@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x1802007B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize@VCCommonApplicationViewArrangePositionSnapshot@@UIApplicationViewArrangePosition@@AEAPEAUHWND__@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewArrangePosition@@AEAPEAUHWND__@@@Z @ 0x1800539D4 (--$MakeAndInitialize@VCCommonApplicationViewArrangePositionSnapshot@@UIApplicationViewArrangePos.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HolographicPositioner::GetPosition(
        HolographicPositioner *this,
        HWND a2,
        const struct _GUID *a3,
        void **a4)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HWND v11; // [rsp+38h] [rbp+10h] BYREF
  void *v12; // [rsp+48h] [rbp+20h] BYREF

  v11 = a2;
  *a4 = 0LL;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  v6 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewArrangePositionSnapshot,IApplicationViewArrangePosition,HWND__ * &>(
         &v12,
         &v11);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v6 = (**(__int64 (__fastcall ***)(void *, const struct _GUID *, void **))v12)(v12, a3, a4);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v7 = 0;
      goto LABEL_7;
    }
    v8 = 561LL;
  }
  else
  {
    v8 = 560LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)(unsigned int)v6);
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  return v7;
}
