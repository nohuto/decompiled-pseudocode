/*
 * XREFs of ??$MakeAndInitialize@VCreativeEventReportedCache@ContentManagement@@UICreativeEventReportedCache@2@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUICreativeEventReportedCache@ContentManagement@@AEAPEBG@Z @ 0x180035FE8
 * Callers:
 *     ?ProcessCreativeEventAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUICreativeEventReportedCache@2@PEAPEAUIAsyncAction@67@@Z @ 0x180029160 (-ProcessCreativeEventAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@.c)
 *     ?ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@W4EventNotificationType@2@@Z @ 0x180029AC0 (-ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18000488C (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIContentManagementBroker@ContentManagement@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180011750 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICont.c)
 *     ?GetCreativeEventCacheRegPath@CreativeEventReportedCache@ContentManagement@@CAJPEBGPEAPEAG@Z @ 0x18002C080 (-GetCreativeEventCacheRegPath@CreativeEventReportedCache@ContentManagement@@CAJPEBGPEAPEAG@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICreativeEventReportedCache@ContentManagement@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002D590 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_18002D590.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CABF4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ContentManagement::CreativeEventReportedCache,ContentManagement::ICreativeEventReportedCache,unsigned short const * &>(
        _QWORD *a1,
        const unsigned __int16 **a2)
{
  char *v4; // rax
  __int64 v5; // rbx
  int Interface; // edi
  _QWORD *v7; // rdi
  bool v8; // zf
  void *v9; // rcx
  const unsigned __int16 *v10; // rbp
  int CreativeEventCacheRegPath; // eax
  __int64 v12; // rdx
  void *v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a1 = 0LL;
  v4 = (char *)operator new(0x78uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = (__int64)v4;
  if ( !v4 )
    return (unsigned int)-2147024882;
  v7 = v4 + 8;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v4 + 8));
  v8 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
  *(_QWORD *)v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::ICreativeEventReportedCache>::`vftable'{for `IInspectable'};
  *v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::ICreativeEventReportedCache>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,ContentManagement::ICreativeEventReportedCache>'};
  *(_QWORD *)(v5 + 40) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::ICreativeEventReportedCache>::`vftable'{for `IWeakReferenceSource'};
  *(_QWORD *)(v5 + 48) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::ICreativeEventReportedCache>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ContentManagement::ICreativeEventReportedCache>'};
  *(_QWORD *)(v5 + 64) = 1LL;
  if ( !v8 )
    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  *(_QWORD *)v5 = &ContentManagement::CreativeEventReportedCache::`vftable'{for `IInspectable'};
  *v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::ICreativeEventReportedCache>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,ContentManagement::ICreativeEventReportedCache>'};
  *(_QWORD *)(v5 + 40) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::ICreativeEventReportedCache>::`vftable'{for `IWeakReferenceSource'};
  *(_QWORD *)(v5 + 48) = &ContentManagement::CreativeEventReportedCache::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ContentManagement::ICreativeEventReportedCache>'};
  *(_QWORD *)(v5 + 72) = 0LL;
  *(_QWORD *)(v5 + 80) = 0LL;
  *(_QWORD *)(v5 + 88) = 0LL;
  *(_QWORD *)(v5 + 96) = 0LL;
  *(_QWORD *)(v5 + 104) = 0LL;
  *(_QWORD *)(v5 + 112) = 0LL;
  v9 = *(void **)(v5 + 72);
  v10 = *a2;
  if ( v9 )
  {
    CoTaskMemFree(v9);
    *(_QWORD *)(v5 + 72) = 0LL;
  }
  *(_QWORD *)(v5 + 80) = -1LL;
  *(_QWORD *)(v5 + 88) = -1LL;
  CreativeEventCacheRegPath = ContentManagement::CreativeEventReportedCache::GetCreativeEventCacheRegPath(
                                v10,
                                (unsigned __int16 **)(v5 + 72));
  Interface = CreativeEventCacheRegPath;
  if ( CreativeEventCacheRegPath >= 0 )
  {
    v13 = *(void **)(v5 + 96);
    if ( v13 )
    {
      CoTaskMemFree(v13);
      *(_QWORD *)(v5 + 96) = 0LL;
    }
    *(_QWORD *)(v5 + 104) = -1LL;
    *(_QWORD *)(v5 + 112) = -1LL;
    CreativeEventCacheRegPath = ContentManagement::CreativeEventReportedCache::GetCreativeEventCacheRegPath(
                                  v10,
                                  (unsigned __int16 **)(v5 + 96));
    Interface = CreativeEventCacheRegPath;
    if ( CreativeEventCacheRegPath >= 0 )
    {
      Interface = 0;
      goto LABEL_15;
    }
    v12 = 208LL;
  }
  else
  {
    v12 = 207LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
    (const char *)(unsigned int)CreativeEventCacheRegPath);
LABEL_15:
  if ( Interface >= 0 )
    Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::ICreativeEventReportedCache>::QueryInterface(
                  v5,
                  &GUID_d78a1df0_8b05_4341_bb0a_c4447a03a912,
                  a1);
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IContentManagementBroker>::Release((volatile signed __int64 *)v5);
  return (unsigned int)Interface;
}
