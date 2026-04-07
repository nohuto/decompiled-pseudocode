/*
 * XREFs of ?ReleaseDXGIAdapter@CDesktopManager@@AEAAJXZ @ 0x1800796B4
 * Callers:
 *     ??1CDesktopManager@@EEAA@XZ @ 0x18007839C (--1CDesktopManager@@EEAA@XZ.c)
 *     ?HandleInteropDeviceLost@CDesktopManager@@SAXXZ @ 0x180079328 (-HandleInteropDeviceLost@CDesktopManager@@SAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003852C (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180071634 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x180073834 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 */

__int64 __fastcall CDesktopManager::ReleaseDXGIAdapter(CDesktopManager *this)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // edi
  wil::details *v6; // rcx
  void *v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 28);
  if ( v2 )
  {
    if ( *((_DWORD *)this + 70) )
    {
      v9 = 0LL;
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v9);
      v3 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64 *))(**((_QWORD **)this + 28) + 48LL))(
             *((_QWORD *)this + 28),
             &GUID_a4966eed_76db_44da_84c1_ee9a7afb20a8,
             &v9);
      v4 = v3;
      if ( v3 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x557,
          (__int64)"windows\\dwm\\udwm\\desktopmanager.cpp",
          (const char *)(unsigned int)v3);
        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v9);
        return v4;
      }
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 248LL))(v9, *((unsigned int *)this + 70));
      v6 = (wil::details *)*((_QWORD *)this + 34);
      *((_DWORD *)this + 70) = 0;
      wil::details::ResetEvent(v6, v7);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v9);
      v2 = *((_QWORD *)this + 28);
    }
    if ( v2 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
      *((_QWORD *)this + 28) = 0LL;
    }
  }
  return 0LL;
}
