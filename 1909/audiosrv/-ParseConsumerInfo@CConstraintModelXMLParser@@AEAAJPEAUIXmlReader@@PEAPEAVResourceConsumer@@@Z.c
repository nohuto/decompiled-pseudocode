/*
 * XREFs of ?ParseConsumerInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z @ 0x180143C9C
 * Callers:
 *     ?ParseResourceConsumer@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAV?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmResourceType@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@W4RmResourceType@@@2@@ATL@@PEAV?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@4@@Z @ 0x180144394 (-ParseResourceConsumer@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAV-$CAtlMap@V-$CStringT.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180057130 (--2@YAPEAX_K@Z.c)
 *     wcscmp_0 @ 0x18006C93F (wcscmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?LogError@@YAXPEBGZZ @ 0x180100554 (-LogError@@YAXPEBGZZ.c)
 *     ?FindEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG@Z @ 0x1801435B8 (-FindEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG@Z.c)
 *     ?GetNodeType@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4XmlNodeType@@@Z @ 0x180143998 (-GetNodeType@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4XmlNodeType@@@Z.c)
 *     ?ParsePhoneCallInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z @ 0x180144274 (-ParsePhoneCallInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z.c)
 *     ?ParseStreamIDInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z @ 0x18014480C (-ParseStreamIDInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z.c)
 */

__int64 __fastcall CConstraintModelXMLParser::ParseConsumerInfo(
        enum XmlNodeType *this,
        struct IXmlReader *a2,
        struct ResourceConsumer **a3)
{
  int NodeType; // ebx
  struct IXmlReaderVtbl *lpVtbl; // rax
  int v8; // eax
  wchar_t *v9; // rax
  wchar_t *String1; // [rsp+20h] [rbp-18h] BYREF
  int v12; // [rsp+58h] [rbp+20h] BYREF

  NodeType = CConstraintModelXMLParser::GetNodeType(this, a2, (enum XmlNodeType *)&v12);
  if ( NodeType < 0 )
    return (unsigned int)NodeType;
  if ( v12 == 1 )
  {
    lpVtbl = a2->lpVtbl;
    String1 = 0LL;
    NodeType = ((__int64 (__fastcall *)(struct IXmlReader *, wchar_t **, _QWORD))lpVtbl->GetLocalName)(
                 a2,
                 &String1,
                 0LL);
    if ( NodeType )
      goto LABEL_16;
    if ( !wcscmp_0(String1, L"PhoneCall") )
    {
      v8 = CConstraintModelXMLParser::ParsePhoneCallInfo((CConstraintModelXMLParser *)this, a2, a3);
LABEL_8:
      NodeType = v8;
      goto LABEL_16;
    }
    if ( !wcscmp_0(String1, L"Stream") )
    {
      v8 = CConstraintModelXMLParser::ParseStreamIDInfo((CConstraintModelXMLParser *)this, a2, a3);
      goto LABEL_8;
    }
    if ( !wcscmp_0(String1, L"KeywordDetector") )
    {
      v9 = (wchar_t *)operator new(0x10uLL);
      String1 = v9;
      if ( v9 )
      {
        *((_DWORD *)v9 + 2) = 2;
        *(_QWORD *)v9 = &KeywordDetectorResourceConsumer::`vftable';
      }
      *a3 = (struct ResourceConsumer *)v9;
      if ( v9 )
        return (unsigned int)CConstraintModelXMLParser::FindEndElement(
                               (CConstraintModelXMLParser *)this,
                               a2,
                               L"ConsumerInfo");
      return (unsigned int)-2147024882;
    }
    NodeType = -2147024809;
    LogError((size_t *)L"Invalid resource consumer type %s", String1);
  }
  else
  {
    NodeType = -2147024809;
  }
LABEL_16:
  if ( NodeType >= 0 )
    return (unsigned int)CConstraintModelXMLParser::FindEndElement(
                           (CConstraintModelXMLParser *)this,
                           a2,
                           L"ConsumerInfo");
  return (unsigned int)NodeType;
}
