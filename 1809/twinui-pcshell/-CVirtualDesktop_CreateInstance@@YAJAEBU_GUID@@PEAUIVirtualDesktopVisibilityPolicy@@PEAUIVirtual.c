/*
 * XREFs of ?CVirtualDesktop_CreateInstance@@YAJAEBU_GUID@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@0PEAPEAX@Z @ 0x180399470
 * Callers:
 *     ?CreateVirtualDesktop@CVirtualDesktopFactory@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1803816B0 (-CreateVirtualDesktop@CVirtualDesktopFactory@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Attach@?$ComPtr@VPresentationReadyChangedEventArgs@@@WRL@Microsoft@@QEAAXPEAVPresentationReadyChangedEventArgs@@@Z @ 0x1801BD3E4 (-Attach@-$ComPtr@VPresentationReadyChangedEventArgs@@@WRL@Microsoft@@QEAAXPEAVPresentationReadyC.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktop@@@WRL@Microsoft@@IEAAKXZ @ 0x1801BE650 (-InternalRelease@-$ComPtr@VCVirtualDesktop@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktop@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktop@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180399164 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVi_ea_180399164.c)
 *     ??0CVirtualDesktop@@QEAA@AEBU_GUID@@@Z @ 0x1803992D8 (--0CVirtualDesktop@@QEAA@AEBU_GUID@@@Z.c)
 *     ?RuntimeClassInitialize@CVirtualDesktop@@QEAAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@@Z @ 0x180399678 (-RuntimeClassInitialize@CVirtualDesktop@@QEAAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualD.c)
 */

__int64 __fastcall CVirtualDesktop_CreateInstance(
        const struct _GUID *a1,
        struct IVirtualDesktopVisibilityPolicy *a2,
        struct IVirtualDesktopLock *a3,
        struct _GUID *a4,
        void **a5)
{
  void **v5; // rsi
  CVirtualDesktop *v10; // rax
  CVirtualDesktop *v11; // rax
  void **v12; // rbx
  int v13; // eax
  unsigned int v14; // edi
  __int64 v15; // r9
  __int64 v16; // rdx
  int v17; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = a5;
  a5 = 0LL;
  *v5 = 0LL;
  v10 = (CVirtualDesktop *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v10
    || (v11 = CVirtualDesktop::CVirtualDesktop(v10, a1),
        Microsoft::WRL::ComPtr<PresentationReadyChangedEventArgs>::Attach((__int64 *)&a5, (__int64)v11),
        (v12 = a5) == 0LL) )
  {
    v14 = -2147024882;
    v16 = 99LL;
    v15 = 2147942414LL;
    goto LABEL_8;
  }
  v13 = CVirtualDesktop::RuntimeClassInitialize((CVirtualDesktop *)a5, a2, a3);
  v14 = v13;
  if ( v13 < 0 )
  {
    v15 = (unsigned int)v13;
    v16 = 100LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktop.cpp",
      (const char *)v15);
    goto LABEL_9;
  }
  v17 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IVirtualDesktop,Microsoft::WRL::FtmBase>>(
          (__int64)v12,
          a4,
          v5);
  v14 = v17;
  if ( v17 < 0 )
  {
    v15 = (unsigned int)v17;
    v16 = 101LL;
    goto LABEL_8;
  }
LABEL_9:
  Microsoft::WRL::ComPtr<CVirtualDesktop>::InternalRelease((__int64 *)&a5);
  return v14;
}
