/*
 * XREFs of ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180019450
 * Callers:
 *     ??$Unmarshal@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@CMarshaledInterface@@QEAAJV?$ComPtrRef@V?$ComPtr@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019410 (--$Unmarshal@U-$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Wind.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_532f1f640b749836e78f2398ba6696dd__&___ptr64_::Run @ 0x18001C390 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_532f1f640b749836e78f2398ba6696dd__-___ptr64.c)
 *     _lambda_5b180c0ca92e82d68f6c8a12cad9fd8b_::operator() @ 0x18005DD10 (_lambda_5b180c0ca92e82d68f6c8a12cad9fd8b_--operator().c)
 *     _lambda_2e0244ef9261dbf38e5b91bc065380ce_::operator() @ 0x180094BAC (_lambda_2e0244ef9261dbf38e5b91bc065380ce_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_639d6738ffd80580db82ce4ed229ae7f___::Run @ 0x180129800 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_639d6738ffd80580db82ce4ed229ae7f___--Run.c)
 *     _lambda_310d65855535ebb84357f8406c294214_::operator() @ 0x18014039C (_lambda_310d65855535ebb84357f8406c294214_--operator().c)
 *     ?s_RunDirectorThread@LockScreenDirectorServiceProviderImpl@@CAKPEAX@Z @ 0x180193410 (-s_RunDirectorThread@LockScreenDirectorServiceProviderImpl@@CAKPEAX@Z.c)
 *     ?Get@?$CMarshaledInterfaceResult@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Internal@Windows@@QEAAJPEAPEAUIGetCurrentActivityForViewOperationResults@Activities@Data@23@@Z @ 0x1801A9394 (-Get@-$CMarshaledInterfaceResult@UIGetCurrentActivityForViewOperationResults@Activities@Data@Int.c)
 *     ?GetBarFlyoutExperienceManager@PeoplePaneViewManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801C8FD0 (-GetBarFlyoutExperienceManager@PeoplePaneViewManager@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetJumpListExperienceManager@PeoplePaneViewManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801C91E0 (-GetJumpListExperienceManager@PeoplePaneViewManager@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetShoulderTapExperienceManager@PeoplePaneViewManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801C9770 (-GetShoulderTapExperienceManager@PeoplePaneViewManager@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _lambda_c3db0f6e124d4bdd06e778fc848dc2f1_::operator() @ 0x18029A0E8 (_lambda_c3db0f6e124d4bdd06e778fc848dc2f1_--operator().c)
 *     _lambda_f11545691eb1c18d1795497ebae59dd5_::operator() @ 0x18029A1B0 (_lambda_f11545691eb1c18d1795497ebae59dd5_--operator().c)
 *     _lambda_1b237cfa226cb7a358646b393456f6b8_::operator() @ 0x1802DEAC4 (_lambda_1b237cfa226cb7a358646b393456f6b8_--operator().c)
 *     ?s_CreateMTVManager@CMultitaskingViewServiceProvider@@CAJPEAUINIT_THREAD_DATA@1@@Z @ 0x1802E0EB0 (-s_CreateMTVManager@CMultitaskingViewServiceProvider@@CAJPEAUINIT_THREAD_DATA@1@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_625ab5e37b66b38d06a79fa4ea4f4743___::Run @ 0x1802FE330 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_625ab5e37b66b38d06a79fa4ea4f4743___--Run.c)
 *     _lambda_3e36c0c19c22f9cf4c6b211da264d239_::operator() @ 0x1803ACA38 (_lambda_3e36c0c19c22f9cf4c6b211da264d239_--operator().c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017174 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180025E48 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Attach@?$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@QEAAXPEAVSizeConversionViewInfo@@@Z @ 0x1800E5FEC (-Attach@-$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@QEAAXPEAVSizeConversionViewInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMarshaledInterface::_Unmarshal(
        CMarshaledInterface *this,
        const struct _GUID *a2,
        void **a3,
        char a4)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  HRESULT InterfaceAndReleaseStream; // eax
  IStream *v10; // rcx
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0LL;
  v6 = -2147467259;
  v7 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    v11 = 0LL;
    if ( a4 || *(_DWORD *)(v7 + 24) != 2 )
    {
      *(_QWORD *)this = 0LL;
      Microsoft::WRL::ComPtr<SizeConversionViewInfo>::Attach(&v11);
    }
    else
    {
      Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v11, (__int64 *)this);
    }
    *a3 = 0LL;
    if ( *(_DWORD *)(v11 + 24) == 2 )
    {
      InterfaceAndReleaseStream = AgileGitPtr::CopyLocal((AgileGitPtr *)(v11 + 32), a2, a3);
    }
    else
    {
      v10 = *(IStream **)(v11 + 16);
      *(_QWORD *)(v11 + 16) = 0LL;
      InterfaceAndReleaseStream = CoGetInterfaceAndReleaseStream(v10, a2, a3);
    }
    v6 = InterfaceAndReleaseStream;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  }
  return v6;
}
