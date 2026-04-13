/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIContentManagementBroker@ContentManagement@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180011230
 * Callers:
 *     ?Release@PhoneShellNamespaceHelper@ContentManagement@@UEAAKXZ @ 0x18000BAE0 (-Release@PhoneShellNamespaceHelper@ContentManagement@@UEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIIdentityManager@ContentManagement@@@Details@WRL@Microsoft@@WDA@EAAKXZ @ 0x18001DDD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIIden.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIAppInstallInfoRecord@ContentManagement@@@Details@WRL@Microsoft@@WCI@EAAKXZ @ 0x18001DE30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIAppI.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICreativeEventReportedCache@ContentManagement@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x18001DFA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICrea.c)
 *     ?ActivateInstance@?$SimpleActivationFactory@VAppInstallInfoRecordImpl@ContentManagement@@$0A@@WRL@Microsoft@@UEAAJPEAPEAUIInspectable@@@Z @ 0x1800221D0 (-ActivateInstance@-$SimpleActivationFactory@VAppInstallInfoRecordImpl@ContentManagement@@$0A@@WR.c)
 *     ?ActivateInstance@?$SimpleActivationFactory@VContentManagementBrokerServer@ContentManagement@@$0A@@WRL@Microsoft@@UEAAJPEAPEAUIInspectable@@@Z @ 0x1800224D0 (-ActivateInstance@-$SimpleActivationFactory@VContentManagementBrokerServer@ContentManagement@@$0.c)
 *     ??1?$ComPtr@VAppInstallInfoRecordImpl@ContentManagement@@@WRL@Microsoft@@QEAA@XZ @ 0x180022F24 (--1-$ComPtr@VAppInstallInfoRecordImpl@ContentManagement@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VCreativeEventReportedCache@ContentManagement@@UICreativeEventReportedCache@2@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUICreativeEventReportedCache@ContentManagement@@AEAPEBG@Z @ 0x1800353E0 (--$MakeAndInitialize@VCreativeEventReportedCache@ContentManagement@@UICreativeEventReportedCache.c)
 *     ??$MakeAndInitialize@VNotificationsTargetedContentClient@ToastNotification@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18004AC6C (--$MakeAndInitialize@VNotificationsTargetedContentClient@ToastNotification@@UIUnknown@@$$V@Detai.c)
 *     ?CreateAction@TargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAUHSTRING__@@PEAU?$IMapView@PEAUHSTRING__@@PEAU1@@Collections@Foundation@5@PEAPEAUITargetedContentActionInternal@2345@@Z @ 0x18004D530 (-CreateAction@TargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAUH.c)
 *     ?ConvertFromStoreRecords@AppManager@ContentManagement@@AEAAJPEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x180056434 (-ConvertFromStoreRecords@AppManager@ContentManagement@@AEAAJPEAU-$IVectorView@PEAVInstallAppInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IContentManagementBroker>::Release(
        volatile signed __int64 *a1)
{
  signed __int64 v1; // rdx
  unsigned __int32 v2; // ebx
  bool v3; // zf
  __int64 v4; // rax
  signed __int32 v5; // r8d

  v1 = *((_QWORD *)a1 + 8);
  if ( v1 < 0 )
  {
    do
LABEL_8:
      v5 = *(_DWORD *)(2 * v1 + 0x10);
    while ( v5 != 0x7FFFFFFF && v5 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v1 + 16), v5 - 1, v5) );
    v2 = v5 - 1;
LABEL_10:
    if ( !v2 )
    {
      if ( a1 )
        (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*a1 + 48))(a1, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    }
  }
  else
  {
    while ( (_DWORD)v1 != 0x7FFFFFFF )
    {
      v2 = v1 - 1;
      v4 = _InterlockedCompareExchange64(a1 + 8, v1 - 1, v1);
      v3 = v1 == v4;
      v1 = v4;
      if ( v3 )
        goto LABEL_10;
      if ( v4 < 0 )
        goto LABEL_8;
    }
    return 2147483646;
  }
  return v2;
}
