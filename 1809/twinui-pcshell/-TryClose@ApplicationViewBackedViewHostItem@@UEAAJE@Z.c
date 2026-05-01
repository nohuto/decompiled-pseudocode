/*
 * XREFs of ?TryClose@ApplicationViewBackedViewHostItem@@UEAAJE@Z @ 0x1801C4640
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSHER_INPUT@@W4APPCRUSHER_SOURCE@@W4APPCRUSHER_CLOSE_OPTIONS@@@Z @ 0x1803ACBA0 (-CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSH.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ApplicationViewBackedViewHostItem::TryClose(ApplicationViewBackedViewHostItem *this)
{
  HRESULT v2; // eax
  unsigned int v3; // ebx
  LPVOID v4; // rbx
  int v5; // eax
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF
  LPVOID ppv; // [rsp+68h] [rbp+20h] BYREF

  ppv = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  v2 = CoCreateInstance(&CLSID_ImmersiveShell, 0LL, 0x404u, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, &ppv);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v9 = 0LL;
    v4 = ppv;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
    v5 = (*(__int64 (__fastcall **)(LPVOID, void *, GUID *, __int64 *))(*(_QWORD *)v4 + 24LL))(
           v4,
           &unk_180476658,
           &GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a,
           &v9);
    v3 = v5;
    if ( v5 >= 0 )
    {
      v5 = ApplicationViewHelpers::CloseView(*((_QWORD *)this + 13), v9, 0LL);
      v3 = v5;
      if ( v5 >= 0 )
      {
        v3 = 0;
        goto LABEL_9;
      }
      v6 = 300LL;
    }
    else
    {
      v6 = 282LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
      (const char *)(unsigned int)v5);
LABEL_9:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x117,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
    (const char *)(unsigned int)v2);
LABEL_10:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  return v3;
}
