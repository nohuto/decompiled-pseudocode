/*
 * XREFs of ?SplitView@CAppViewManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplication@@PEAPEAU3@@Z @ 0x18010C1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18003EA40 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ??0CAutoApplicationCreationResourceGuarantee@@QEAA@PEAUIIAMServiceProvider@@@Z @ 0x18004806C (--0CAutoApplicationCreationResourceGuarantee@@QEAA@PEAUIIAMServiceProvider@@@Z.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18004E4A0 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18004E6A4 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide_ea_18004E6A4.c)
 *     ??1CAutoApplicationCreationResourceGuarantee@@QEAA@XZ @ 0x18004E74C (--1CAutoApplicationCreationResourceGuarantee@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180052830 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?StartActivity@SplitView@CAppViewManagerTelemetry@@QEAAXXZ @ 0x18010CDE4 (-StartActivity@SplitView@CAppViewManagerTelemetry@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAppViewManager::SplitView(
        CAppViewManager *this,
        HWND a2,
        struct IImmersiveApplication *a3,
        struct IImmersiveApplication **a4)
{
  RTL_SRWLOCK *v8; // rbx
  int v9; // edi
  __int64 v10; // rdi
  __int64 v12; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v13; // [rsp+38h] [rbp-C8h] BYREF
  struct IIAMServiceProvider *v14[3]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v15[24]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v16[40]; // [rsp+70h] [rbp-90h] BYREF

  v14[1] = (struct IIAMServiceProvider *)-2LL;
  *a4 = 0LL;
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v16,
    (__int64)"SplitView");
  v16[0] = &CAppViewManagerTelemetry::SplitView::`vftable';
  CAppViewManagerTelemetry::SplitView::StartActivity((CAppViewManagerTelemetry::SplitView *)v16);
  v14[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v14);
  (***((void (__fastcall ****)(_QWORD, GUID *, struct IIAMServiceProvider **))this + 10))(
    *((_QWORD *)this + 10),
    &GUID_5f75d642_3fd3_46f6_86d3_a4aee3c0ffee,
    v14);
  CAutoApplicationCreationResourceGuarantee::CAutoApplicationCreationResourceGuarantee(
    (CAutoApplicationCreationResourceGuarantee *)v15,
    v14[0]);
  v12 = 0LL;
  v8 = CApplicationManagerUtility::g_pIAMGlobals;
  v14[2] = (struct IIAMServiceProvider *)CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v13 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
  v9 = (**(__int64 (__fastcall ***)(struct IImmersiveApplication *, GUID *, __int64 *))a3)(
         a3,
         &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
         &v13);
  if ( v9 >= 0 )
  {
    v10 = *((_QWORD *)this + 10);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
    v9 = (*(__int64 (__fastcall **)(__int64, HWND, __int64, _QWORD, __int64 *))(*(_QWORD *)v10 + 88LL))(
           v10,
           a2,
           v13,
           0LL,
           &v12);
    if ( v9 >= 0 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 368LL))(v12, 2LL);
      v9 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IImmersiveApplication **))v12)(
             v12,
             &GUID_8b14e88b_5663_4caf_b196_c31479262831,
             a4);
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
  if ( v8 )
    ReleaseSRWLockExclusive(v8);
  if ( v9 >= 0 )
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 10) + 152LL))(
           *((_QWORD *)this + 10),
           v12,
           0LL);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v16, v9);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
  CAutoApplicationCreationResourceGuarantee::~CAutoApplicationCreationResourceGuarantee((CAutoApplicationCreationResourceGuarantee *)v15);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v14);
  v16[0] = &CAppViewManagerTelemetry::SplitView::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v16);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v16);
  return (unsigned int)v9;
}
