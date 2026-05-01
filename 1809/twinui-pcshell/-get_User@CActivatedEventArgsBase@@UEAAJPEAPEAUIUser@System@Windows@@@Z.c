/*
 * XREFs of ?get_User@CActivatedEventArgsBase@@UEAAJPEAPEAUIUser@System@Windows@@@Z @ 0x1803BF5C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18007F754 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@U?$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800DD450 (--1-$ComPtr@U-$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collectio.c)
 *     ??1CAutoSRWSharedLock@@QEAA@XZ @ 0x1800DE21C (--1CAutoSRWSharedLock@@QEAA@XZ.c)
 */

__int64 __fastcall CActivatedEventArgsBase::get_User(RTL_SRWLOCK *this, struct Windows::System::IUser **a2)
{
  PVOID Ptr; // rsi
  __int64 v6; // rbx
  int ActivationFactory; // eax
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // [rsp+20h] [rbp-40h] BYREF
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-38h] BYREF
  RTL_SRWLOCK *v13; // [rsp+30h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-28h] BYREF
  __int64 v15; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  Microsoft::WRL::Wrappers::SRWLock::LockShared(this + 14, &v13);
  Ptr = this[12].Ptr;
  CAutoSRWSharedLock::~CAutoSRWSharedLock(&v13);
  *a2 = 0LL;
  if ( !Ptr )
    return 0LL;
  v12 = 0LL;
  v15 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.System.Internal.UserManager",
    0x24u,
    0x23u);
  v6 = v15;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  ActivationFactory = RoGetActivationFactory(v6, &GUID_252e7f79_acfa_4ea2_9a7e_fa27a8a4d3d9, &v12);
  v8 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    v11 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    v9 = (**v12)(v12, &GUID_100eb64b_b24c_4c38_8964_720d926d05a4, &v11);
    v8 = v9;
    if ( v9 >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, PVOID, struct Windows::System::IUser **))(*(_QWORD *)v11 + 160LL))(
             v11,
             Ptr,
             a2);
      v8 = v9;
      if ( v9 >= 0 )
      {
        v8 = 0;
        goto LABEL_11;
      }
      v10 = 409LL;
    }
    else
    {
      v10 = 407LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\shell\\lib\\activationevents\\activatedeventargsbase.cpp",
      (const char *)(unsigned int)v9);
LABEL_11:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(&v11);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x194,
    (__int64)"onecoreuap\\shell\\lib\\activationevents\\activatedeventargsbase.cpp",
    (const char *)(unsigned int)ActivationFactory);
LABEL_12:
  v15 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>((__int64 *)&v12);
  return v8;
}
