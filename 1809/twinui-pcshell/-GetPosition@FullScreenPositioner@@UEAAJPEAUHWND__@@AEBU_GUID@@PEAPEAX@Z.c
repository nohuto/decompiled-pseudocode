/*
 * XREFs of ?GetPosition@FullScreenPositioner@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x1801416E0
 * Callers:
 *     ?GetPosition@FullScreenPositioner@@W7EAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x18009DB40 (-GetPosition@FullScreenPositioner@@W7EAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180077188 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@@Z @ 0x180122F48 (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 */

__int64 __fastcall FullScreenPositioner::GetPosition(
        FullScreenPositioner *this,
        HWND a2,
        const struct _GUID *a3,
        void **a4)
{
  const char *v6; // r9
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  void *v11; // [rsp+20h] [rbp-38h] BYREF
  struct tagRECT Rect; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *a4 = 0LL;
  if ( !GetWindowRect(a2, &Rect) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x33A,
             (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
             v6);
  v11 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  v8 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(
         &v11,
         &Rect);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v8 = (**(__int64 (__fastcall ***)(void *, const struct _GUID *, void **))v11)(v11, a3, a4);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v9 = 0;
      goto LABEL_9;
    }
    v10 = 830LL;
  }
  else
  {
    v10 = 829LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
    (const char *)(unsigned int)v8);
LABEL_9:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  return v9;
}
