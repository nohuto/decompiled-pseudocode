/*
 * XREFs of ?FindXmlFileEOF@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@@Z @ 0x180143798
 * Callers:
 *     ?ParseXML@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4RmResourceType@@PEAV?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmResourceType@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@W4RmResourceType@@@2@@ATL@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@5@PEAV?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@5@PEAV?$CAtlArray@PEAV?$CAtlArray@PEAVExclusiveEndpointInfo@@V?$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlArray@PEAVExclusiveEndpointInfo@@V?$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@ATL@@@2@@5@@Z @ 0x180144B5C (-ParseXML@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4RmResourceType@@PEAV-$CAtlMap@V-$.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?LogError@@YAXPEBGZZ @ 0x180100554 (-LogError@@YAXPEBGZZ.c)
 */

__int64 __fastcall CConstraintModelXMLParser::FindXmlFileEOF(CConstraintModelXMLParser *this, struct IXmlReader *a2)
{
  int v3; // ebx
  CConstraintModelXMLParser *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = this;
  v3 = 0;
  while ( !((unsigned int (__fastcall *)(struct IXmlReader *))a2->lpVtbl->IsEOF)(a2) && v3 >= 0 )
  {
    v3 = ((__int64 (__fastcall *)(struct IXmlReader *, CConstraintModelXMLParser **))a2->lpVtbl->Read)(a2, &v5);
    if ( !v3 && (_DWORD)v5 != 8 && (_DWORD)v5 != 13 )
    {
      v3 = -2147024809;
      LogError((size_t *)L"EOF expected but got other blocks");
      return (unsigned int)v3;
    }
  }
  return (unsigned int)v3;
}
