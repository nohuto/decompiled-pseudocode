/*
 * XREFs of ?CreateAction@TargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAUHSTRING__@@PEAU?$IMapView@PEAUHSTRING__@@PEAU1@@Collections@Foundation@5@PEAPEAUITargetedContentActionInternal@2345@@Z @ 0x18004E7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18000488C (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIContentManagementBroker@ContentManagement@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180011750 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICont.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x180014E7C (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?_Buyheadnode@?$_Tree_alloc@$0A@U?$_Tree_base_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@2@XZ @ 0x180042E54 (-_Buyheadnode@-$_Tree_alloc@$0A@U-$_Tree_base_types@U-$pair@$$CBV-$basic_string@GU-_ea_180042E54.c)
 *     ?RuntimeClassInitialize@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@QEAAJW4ActionServices@Actions@CreativeFramework@@AEBUActionContext@78@PEAU?$IMapView@PEAUHSTRING__@@PEAU1@@Collections@Foundation@5@@Z @ 0x18004EA68 (-RuntimeClassInitialize@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Wind.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UITargetedContentActionInternal@Internal@TargetedContent@Services@Windows@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800513E0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1800513E0.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CABF4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentActionStatics::CreateAction(
        __int64 a1,
        HSTRING a2,
        __int64 a3,
        void **a4)
{
  PCWSTR StringRawBuffer; // rax
  const WCHAR *v7; // rdi
  wchar_t **v8; // rbx
  unsigned int v9; // r14d
  _QWORD *v10; // rax
  const char *v11; // r9
  _QWORD *v12; // rbx
  int Interface; // edi
  _QWORD *v14; // rdi
  _QWORD *v15; // rax
  _QWORD *v16; // rcx
  volatile signed __int64 *v17; // rcx
  __int64 result; // rax
  unsigned int v19; // eax
  _QWORD *v20; // [rsp+30h] [rbp-88h]
  unsigned int v21; // [rsp+30h] [rbp-88h]
  __int64 v22; // [rsp+58h] [rbp-60h] BYREF
  void *v23; // [rsp+60h] [rbp-58h]
  __int64 v24; // [rsp+70h] [rbp-48h]
  unsigned __int64 v25; // [rsp+78h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  *a4 = 0LL;
  v22 = 0LL;
  v25 = 7LL;
  v24 = 0LL;
  LOWORD(v23) = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  v7 = StringRawBuffer;
  v8 = &off_18018D5C0;
  try
  {
    while ( 1 )
    {
      if ( v8 == &off_18018D6D0 )
        goto LABEL_21;
      if ( CompareStringOrdinal(*v8, -1, v7, -1, 1) == 2 )
        break;
      v8 += 2;
    }
    v9 = *((_DWORD *)v8 + 2);
    *a4 = 0LL;
    v10 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
    v12 = v10;
    v20 = v10;
    if ( v10 )
    {
      v14 = v10 + 1;
      Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v10 + 1));
      v12[8] = 1LL;
      *v12 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>::`vftable'{for `IInspectable'};
      *v14 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>'};
      v15 = v12 + 5;
      v12[5] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>::`vftable'{for `IWeakReferenceSource'};
      v16 = v12 + 6;
      v12[6] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>'};
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
      {
        _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
        v12 = v20;
      }
      *v12 = &Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::`vftable'{for `IInspectable'};
      *v14 = &Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>'};
      *v15 = &Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::`vftable'{for `IWeakReferenceSource'};
      *v16 = &Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>'};
      v12[9] = 0LL;
      v12[10] = 0LL;
      v12[11] = 0LL;
      v12[12] = 0LL;
      v12[11] = std::_Tree_alloc<0,std::_Tree_base_types<std::pair<std::wstring const,std::wstring>>>::_Buyheadnode();
      Interface = Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::RuntimeClassInitialize(
                    v12,
                    v9,
                    &v22,
                    a3);
      v17 = v12;
      if ( Interface >= 0 )
      {
        Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>::QueryInterface(
                      (Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl *)v12,
                      &GUID_e762b6be_f3b7_4977_bc20_4388a551b5b4,
                      a4);
        v17 = v12;
      }
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IContentManagementBroker>::Release(v17);
    }
    else
    {
      Interface = -2147024882;
    }
    if ( Interface < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x34,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\targetedcontentactions.cpp",
        (const char *)(unsigned int)Interface);
LABEL_21:
      v19 = wil::verify_hresult<long>(0x80070490);
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5E,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\actionfactory.h",
        (const char *)v19);
      JUMPOUT(0x18004EA25LL);
    }
    if ( v25 >= 8 )
      operator delete(v23);
    result = 0LL;
  }
  catch ( ... )
  {
    v21 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x36,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\targetedcontentactions.cpp",
            v11);
    if ( v25 >= 8 )
      operator delete(v23);
    return v21;
  }
  return result;
}
