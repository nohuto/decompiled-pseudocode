/*
 * XREFs of ?SubscribeToServices@CPerMonitorDesktopVisibilityService@@UEAAJPEAUIServiceProvider@@@Z @ 0x18032EDD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPerMonitorDesktopVisibilityService::SubscribeToServices(
        CPerMonitorDesktopVisibilityService *this,
        struct IServiceProvider *a2)
{
  _QWORD *v2; // rsi
  int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (_QWORD *)((char *)this + 192);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 24);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, _QWORD *))a2->lpVtbl->QueryService)(
         a2,
         &GUID_88ed940d_d632_4b84_9529_a3110b5af527,
         &GUID_b6b9bca5_a1ad_4216_ab1f_4de46296eac8,
         v2);
  if ( v5 < 0 )
  {
    v6 = 48LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\apppositioner\\lib\\desktopvisibility.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)*v2 + 24LL))(
         *v2,
         ((unsigned __int64)this + 72) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 40) >> 64),
         (char *)this + 168);
  if ( v5 < 0 )
  {
    v6 = 49LL;
    goto LABEL_3;
  }
  return 0LL;
}
