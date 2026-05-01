/*
 * XREFs of ?GetLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x180183AC0
 * Callers:
 *     ?CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z @ 0x180182CD0 (-CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z.c)
 *     ?PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x180184DE0 (-PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@U.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$GetActivationFactory@V?$ComPtr@UICuratedCollectionInitializationStatics@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UICuratedCollectionInitializationStatics@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180181DBC (--$GetActivationFactory@V-$ComPtr@UICuratedCollectionInitializationStatics@CuratedTileCollection.c)
 *     ?XMLDocFromStream@TaskbarLayoutPolicyManager@@AEAAJPEAUIRandomAccessStream@Streams@Storage@Windows@@PEAPEAUIXMLDOMDocument2@@@Z @ 0x180186638 (-XMLDocFromStream@TaskbarLayoutPolicyManager@@AEAAJPEAUIRandomAccessStream@Streams@Storage@Windo.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TaskbarLayoutPolicyManager::GetLayoutModificationXML(
        TaskbarLayoutPolicyManager *this,
        struct IXMLDOMDocument2 **a2)
{
  int v3; // eax
  int v4; // ebx
  __int64 v5; // rbx
  TaskbarLayoutPolicyManager *v6; // rcx
  struct Windows::Storage::Streams::IRandomAccessStream *v8; // [rsp+20h] [rbp-40h] BYREF
  __int64 v9[2]; // [rsp+28h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-28h] BYREF
  __int64 v11; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v9[1] = -2LL;
  *a2 = 0LL;
  v9[0] = 0LL;
  v11 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"WindowsInternal.Shell.UnifiedTile.CuratedTileCollections.CuratedCollectionInitializationStatics",
    0x60u,
    0x5Fu);
  v3 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedCollectionInitializationStatics>>(
         v11,
         v9);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v8 = 0LL;
    v5 = v9[0];
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
    v4 = (*(__int64 (__fastcall **)(__int64, struct Windows::Storage::Streams::IRandomAccessStream **))(*(_QWORD *)v5 + 56LL))(
           v5,
           &v8);
    if ( (unsigned int)(v4 + 2147024894) > 1 )
    {
      if ( v4 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x161,
          (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
          (const char *)(unsigned int)v4);
LABEL_8:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
        goto LABEL_9;
      }
      TaskbarLayoutPolicyManager::XMLDocFromStream(v6, v8, a2);
    }
    v4 = 0;
    goto LABEL_8;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x15A,
    (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
    (const char *)(unsigned int)v3);
LABEL_9:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v9);
  return (unsigned int)v4;
}
