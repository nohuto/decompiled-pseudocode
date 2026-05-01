/*
 * XREFs of ?CVirtualDesktop_CreateInstance@@YAJAEBU_GUID@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@0PEAPEAX@Z @ 0x1803FEE24
 * Callers:
 *     ?CreateVirtualDesktop@CVirtualDesktopFactory@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1803E7670 (-CreateVirtualDesktop@CVirtualDesktopFactory@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktop@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktop@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1803FEAF4 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVi_ea_1803FEAF4.c)
 *     ??0CVirtualDesktop@@QEAA@AEBU_GUID@@@Z @ 0x1803FEC5C (--0CVirtualDesktop@@QEAA@AEBU_GUID@@@Z.c)
 *     ?Attach@?$ComPtr@VCVirtualDesktop@@@WRL@Microsoft@@QEAAXPEAVCVirtualDesktop@@@Z @ 0x1803FEDF0 (-Attach@-$ComPtr@VCVirtualDesktop@@@WRL@Microsoft@@QEAAXPEAVCVirtualDesktop@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktop@@@WRL@Microsoft@@IEAAKXZ @ 0x1803FF028 (-InternalRelease@-$ComPtr@VCVirtualDesktop@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@CVirtualDesktop@@QEAAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@@Z @ 0x1803FF04C (-RuntimeClassInitialize@CVirtualDesktop@@QEAAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualD.c)
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
  volatile signed __int64 *v11; // rax
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
    || (v11 = (volatile signed __int64 *)CVirtualDesktop::CVirtualDesktop(v10, a1),
        Microsoft::WRL::ComPtr<CVirtualDesktop>::Attach((volatile signed __int64 **)&a5, v11),
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
  Microsoft::WRL::ComPtr<CVirtualDesktop>::InternalRelease(&a5);
  return v14;
}
