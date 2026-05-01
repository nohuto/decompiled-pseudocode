/*
 * XREFs of ?AddVirtualDesktop@CVirtualDesktopCollection@@UEAAJPEAPEAUIVirtualDesktop@@@Z @ 0x180383420
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopCollection@@QEAAJPEAUIVirtualDesktopFactory@@PEAUIVirtualDesktopPersistence@@_N@Z @ 0x180383E80 (-RuntimeClassInitialize@CVirtualDesktopCollection@@QEAAJPEAUIVirtualDesktopFactory@@PEAUIVirtual.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_AddDesktop@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@@Z @ 0x180383F68 (-_AddDesktop@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopCollection::AddVirtualDesktop(
        CVirtualDesktopCollection *this,
        struct IVirtualDesktop **a2)
{
  __int64 v4; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  struct IVirtualDesktop *v8; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IVirtualDesktop *v11; // [rsp+40h] [rbp+8h] BYREF

  if ( a2 )
    *a2 = 0LL;
  v11 = 0LL;
  v4 = *((_QWORD *)this + 3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  v5 = (*(__int64 (__fastcall **)(__int64, GUID *, struct IVirtualDesktop **))(*(_QWORD *)v4 + 32LL))(
         v4,
         &GUID_ff72ffdd_be7e_43fc_9c03_ad81681e88e4,
         &v11);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 56LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_11;
  }
  v5 = CVirtualDesktopCollection::_AddDesktop(this, v11);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 57LL;
    goto LABEL_7;
  }
  if ( a2 )
  {
    v8 = v11;
    v11 = 0LL;
    *a2 = v8;
  }
  v6 = 0;
LABEL_11:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  return v6;
}
