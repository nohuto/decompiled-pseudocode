/*
 * XREFs of ?AddVirtualDesktop@CVirtualDesktopCollection@@UEAAJAEBU_GUID@@PEAPEAUIVirtualDesktop@@@Z @ 0x180383330
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_AddDesktop@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@@Z @ 0x180383F68 (-_AddDesktop@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopCollection::AddVirtualDesktop(
        CVirtualDesktopCollection *this,
        const struct _GUID *a2,
        struct IVirtualDesktop **a3)
{
  __int64 v6; // rbx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  struct IVirtualDesktop *v10; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IVirtualDesktop *v13; // [rsp+50h] [rbp+8h] BYREF

  if ( a3 )
    *a3 = 0LL;
  v13 = 0LL;
  v6 = *((_QWORD *)this + 3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  v7 = (*(__int64 (__fastcall **)(__int64, const struct _GUID *, GUID *, struct IVirtualDesktop **))(*(_QWORD *)v6 + 24LL))(
         v6,
         a2,
         &GUID_ff72ffdd_be7e_43fc_9c03_ad81681e88e4,
         &v13);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 66LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_11;
  }
  v7 = CVirtualDesktopCollection::_AddDesktop(this, v13);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 67LL;
    goto LABEL_7;
  }
  if ( a3 )
  {
    v10 = v13;
    v13 = 0LL;
    *a3 = v10;
  }
  v8 = 0;
LABEL_11:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  return v8;
}
