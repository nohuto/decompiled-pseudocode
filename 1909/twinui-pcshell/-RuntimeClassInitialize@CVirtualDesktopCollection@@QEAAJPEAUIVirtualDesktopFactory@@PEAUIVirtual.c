/*
 * XREFs of ?RuntimeClassInitialize@CVirtualDesktopCollection@@QEAAJPEAUIVirtualDesktopFactory@@PEAUIVirtualDesktopPersistence@@_N@Z @ 0x1804094C0
 * Callers:
 *     ??$MakeAndInitialize@VCVirtualDesktopCollection@@V1@AEAPEAUIVirtualDesktopFactory@@AEAPEAUIVirtualDesktopPersistence@@AEA_N@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopCollection@@AEAPEAUIVirtualDesktopFactory@@AEAPEAUIVirtualDesktopPersistence@@AEA_N@Z @ 0x18040877C (--$MakeAndInitialize@VCVirtualDesktopCollection@@V1@AEAPEAUIVirtualDesktopFactory@@AEAPEAUIVirtu.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotification@@@Z @ 0x180160EF8 (--4-$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotific.c)
 *     ?AddVirtualDesktop@CVirtualDesktopCollection@@UEAAJPEAPEAUIVirtualDesktop@@@Z @ 0x180408A60 (-AddVirtualDesktop@CVirtualDesktopCollection@@UEAAJPEAPEAUIVirtualDesktop@@@Z.c)
 */

__int64 __fastcall CVirtualDesktopCollection::RuntimeClassInitialize(
        CVirtualDesktopCollection *this,
        struct IVirtualDesktopFactory *a2,
        struct IVirtualDesktopPersistence *a3,
        char a4)
{
  struct IVirtualDesktopFactory *v5; // rax
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v11; // rsi
  __int64 (__fastcall *v12)(__int64, __int64 *, GUID *, char *); // rdi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IVirtualDesktopFactory *v14; // [rsp+50h] [rbp+8h] BYREF

  *((_BYTE *)this + 16) = a4;
  v5 = (struct IVirtualDesktopFactory *)*((_QWORD *)this + 3);
  if ( v5 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(struct IVirtualDesktopFactory *))(*(_QWORD *)a2 + 8LL))(a2);
      v5 = (struct IVirtualDesktopFactory *)*((_QWORD *)this + 3);
    }
    v14 = v5;
    *((_QWORD *)this + 3) = a2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  }
  v8 = CVirtualDesktopCollection::AddVirtualDesktop(this, 0LL);
  if ( v8 < 0 )
  {
    v9 = 194LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  v11 = *((_QWORD *)this + 3);
  v12 = *(__int64 (__fastcall **)(__int64, __int64 *, GUID *, char *))(*(_QWORD *)v11 + 24LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 5);
  v8 = v12(v11, &qword_1805277D0, &GUID_ff72ffdd_be7e_43fc_9c03_ad81681e88e4, (char *)this + 40);
  if ( v8 < 0 )
  {
    v9 = 195LL;
    goto LABEL_7;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)this + 4, (__int64)a3);
  return 0LL;
}
