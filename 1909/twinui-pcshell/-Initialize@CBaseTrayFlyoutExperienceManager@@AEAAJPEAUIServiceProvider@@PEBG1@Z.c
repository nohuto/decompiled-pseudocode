/*
 * XREFs of ?Initialize@CBaseTrayFlyoutExperienceManager@@AEAAJPEAUIServiceProvider@@PEBG1@Z @ 0x180098344
 * Callers:
 *     ?RuntimeClassInitialize@CBaseTrayFlyoutExperienceManager@@UEAAJPEAUIServiceProvider@@PEBG1@Z @ 0x180099F50 (-RuntimeClassInitialize@CBaseTrayFlyoutExperienceManager@@UEAAJPEAUIServiceProvider@@PEBG1@Z.c)
 *     ?RuntimeClassInitialize@CBaseTrayFlyoutExperienceManager@@UEAAJPEAUIServiceProvider@@PEBG@Z @ 0x18009A000 (-RuntimeClassInitialize@CBaseTrayFlyoutExperienceManager@@UEAAJPEAUIServiceProvider@@PEBG@Z.c)
 *     ?RuntimeClassInitialize@CBaseTrayFlyoutExperienceManager@@UEAAJPEAUIServiceProvider@@PEBGW4LIGHT_DISMISS_FLAGS@@1@Z @ 0x18009A0C0 (-RuntimeClassInitialize@CBaseTrayFlyoutExperienceManager@@UEAAJPEAUIServiceProvider@@PEBGW4LIGHT.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18001A930 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180043620 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??_G?$ComPtr@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x18014DC08 (--_G-$ComPtr@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x180430EE8 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ?GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIServiceProvider@@PEAPEAUIExperienceManagerPriorityManipulator@Experience@Shell@Internal@Windows@@@Z @ 0x1804325A4 (-GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIServiceProvider@@PEAPEAUIE.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CBaseTrayFlyoutExperienceManager::Initialize(
        CBaseTrayFlyoutExperienceManager *this,
        struct IServiceProvider *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  HSTRING_HEADER *v6; // rbx
  HSTRING Reserved1; // r9
  int HostExperiencePriorityManipulator; // ebx
  __int64 v9; // rdx
  struct Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator **v10; // r8
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  __int64 v12; // rax
  const WCHAR *v14; // [rsp+30h] [rbp-88h] BYREF
  const WCHAR *v15[2]; // [rsp+38h] [rbp-80h] BYREF
  HSTRING_HEADER v16; // [rsp+48h] [rbp-70h] BYREF
  HSTRING_HEADER v17; // [rsp+68h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v15[1] = (const WCHAR *)-2LL;
  v15[0] = a3;
  v14 = a4;
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 45, (__int64)a2);
  v6 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v16, &v14);
  Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v17, v15)[1].Reserved.Reserved1;
  HostExperiencePriorityManipulator = CSingleViewShellExperience::RuntimeClassInitialize(
                                        (CBaseTrayFlyoutExperienceManager *)((char *)this + 72),
                                        (struct IWeakReferenceSource *)(((unsigned __int64)this + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
                                        a2,
                                        Reserved1,
                                        (HSTRING)v6[1].Reserved.Reserved1);
  if ( HostExperiencePriorityManipulator < 0 )
  {
    v9 = 83LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"internal\\shell\\private\\inc\\basetrayflyoutexperience.cpp",
      (const char *)(unsigned int)HostExperiencePriorityManipulator);
    return (unsigned int)HostExperiencePriorityManipulator;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 7);
  HostExperiencePriorityManipulator = ExperienceManagerUtils::GetHostExperiencePriorityManipulator(
                                        (ExperienceManagerUtils *)a2,
                                        (struct IServiceProvider *)this + 7,
                                        v10);
  if ( HostExperiencePriorityManipulator < 0 )
  {
    v9 = 87LL;
    goto LABEL_7;
  }
  QueryService = a2->lpVtbl->QueryService;
  v12 = Microsoft::WRL::ComPtr<IObservablePropertyCallback>::`scalar deleting destructor'((char *)this + 64);
  HostExperiencePriorityManipulator = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64))QueryService)(
                                        a2,
                                        &SID_InputHostLayout,
                                        &GUID_3a67c20b_df2d_4437_a761_0c41b441ac25,
                                        v12);
  if ( HostExperiencePriorityManipulator < 0 )
  {
    v9 = 88LL;
    goto LABEL_7;
  }
  return (unsigned int)HostExperiencePriorityManipulator;
}
