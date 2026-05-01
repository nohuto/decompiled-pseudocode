/*
 * XREFs of ?RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs@1@@Z @ 0x1802E9564
 * Callers:
 *     ??$MakeAndInitialize@VCMultitaskingViewManager@@V1@UMultitaskingViewManagerInitializeArgs@1@@Details@WRL@Microsoft@@YAJPEAPEAVCMultitaskingViewManager@@$$QEAUMultitaskingViewManagerInitializeArgs@3@@Z @ 0x1802E8640 (--$MakeAndInitialize@VCMultitaskingViewManager@@V1@UMultitaskingViewManagerInitializeArgs@1@@Det.c)
 * Callees:
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x18000E50C (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18001C76C (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x1800EF640 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 *     ??4?$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotification@@@Z @ 0x180119A90 (--4-$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotific.c)
 *     ?Initialize@ForegroundStaging@@QEAAJXZ @ 0x1802DEFF8 (-Initialize@ForegroundStaging@@QEAAJXZ.c)
 */

__int64 __fastcall CMultitaskingViewManager::RuntimeClassInitialize(
        CMultitaskingViewManager *this,
        const struct CMultitaskingViewManager::MultitaskingViewManagerInitializeArgs *a2)
{
  int inited; // edi
  __int64 v5; // rdx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  inited = CObjectWithThreadUseDetection::InitApartmentId((CMultitaskingViewManager *)((char *)this + 40));
  if ( inited < 0 )
  {
    v5 = 131LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
      (const char *)(unsigned int)inited);
    return (unsigned int)inited;
  }
  inited = ForegroundStaging::Initialize((CMultitaskingViewManager *)((char *)this + 304));
  if ( inited < 0 )
  {
    v5 = 135LL;
    goto LABEL_3;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 39);
  inited = CoCreateInstance(
             &CLSID_SwitchThumbnailDeviceManager,
             0LL,
             1u,
             &GUID_c08ee93c_e5a6_46f2_bdac_416ef1731a41,
             (LPVOID *)this + 39);
  if ( inited < 0 )
  {
    v5 = 138LL;
    goto LABEL_3;
  }
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 39) + 176LL))(*((_QWORD *)this + 39));
  v7 = *((_QWORD *)this + 11);
  v8 = *(_QWORD *)a2;
  if ( v7 != *(_QWORD *)a2 )
  {
    if ( v8 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 8LL))(*(_QWORD *)a2);
      v7 = *((_QWORD *)this + 11);
    }
    v11 = v7;
    *((_QWORD *)this + 11) = v8;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  }
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 12, *((_QWORD *)a2 + 1));
  Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)this + 13, *((_QWORD *)a2 + 2));
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 14, *((_QWORD *)a2 + 3));
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 15, *((_QWORD *)a2 + 4));
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 16, *((_QWORD *)a2 + 5));
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 17, *((_QWORD *)a2 + 6));
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 18, *((_QWORD *)a2 + 7));
  Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)this + 19, *((_QWORD *)a2 + 8));
  Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)this + 20, *((_QWORD *)a2 + 9));
  Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)this + 21, *((_QWORD *)a2 + 10));
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 22, *((_QWORD *)a2 + 11));
  Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)this + 23, *((_QWORD *)a2 + 12));
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 24, *((_QWORD *)a2 + 13));
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 25, *((_QWORD *)a2 + 14));
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 26, *((_QWORD *)a2 + 15));
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 27, *((_QWORD *)a2 + 18));
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 28, *((_QWORD *)a2 + 19));
  Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)this + 30, *((_QWORD *)a2 + 17));
  Microsoft::WRL::ComPtr<IUnknown>::operator=((__int64 *)this + 29, *((_QWORD *)a2 + 16));
  Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)this + 32, *((_QWORD *)a2 + 21));
  v9 = *((_QWORD *)a2 + 20);
  if ( *((_QWORD *)this + 31) != v9 )
  {
    if ( v9 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 8LL))(*((_QWORD *)a2 + 20));
    v11 = *((_QWORD *)this + 31);
    *((_QWORD *)this + 31) = v9;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  }
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 33, *((_QWORD *)a2 + 22));
  return 0LL;
}
