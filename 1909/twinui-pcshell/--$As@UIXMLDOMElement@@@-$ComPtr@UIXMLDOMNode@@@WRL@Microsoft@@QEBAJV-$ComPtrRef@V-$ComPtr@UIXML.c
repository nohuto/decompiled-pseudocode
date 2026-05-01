/*
 * XREFs of ??$As@UIXMLDOMElement@@@?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIXMLDOMElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x180181CB0
 * Callers:
 *     ?PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x180184DE0 (-PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@U.c)
 *     ?ParseTaskbarLayoutNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@AEAUParsedTaskbarLayout@@@Z @ 0x180188DB0 (-ParseTaskbarLayoutNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@AEAUParsedTaskbarLayout@@@Z.c)
 *     ?ParseSelectionAttributes@SelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAUSelectionData@2345@@Z @ 0x180425D20 (-ParseSelectionAttributes@SelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsIn.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IXMLDOMNode>::As<IXMLDOMElement>(_QWORD *a1, __int64 *a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
           *a1,
           &GUID_2933bf86_7b36_11d2_b20e_00c04f983e60,
           a2);
}
