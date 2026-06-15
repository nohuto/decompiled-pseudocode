/*
 * XREFs of ?FindEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG@Z @ 0x180143A68
 * Callers:
 *     ?ParseConsumerInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z @ 0x18014414C (-ParseConsumerInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z.c)
 *     ?ParseExclusiveEndpoint@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAVExclusiveEndpointInfo@@@Z @ 0x180144298 (-ParseExclusiveEndpoint@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAVExclusiveEndpointInf.c)
 *     ?ParsePhoneCallInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z @ 0x180144724 (-ParsePhoneCallInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z.c)
 *     ?ParseSimpleElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBGPEAGI@Z @ 0x180144B60 (-ParseSimpleElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBGPEAGI@Z.c)
 *     ?ParseSingleResource@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAGKPEAK@Z @ 0x180144BCC (-ParseSingleResource@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAGKPEAK@Z.c)
 *     ?ParseStreamIDInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z @ 0x180144CBC (-ParseStreamIDInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z.c)
 * Callees:
 *     ?LogError@@YAXPEBGZZ @ 0x1801009F4 (-LogError@@YAXPEBGZZ.c)
 *     ?GetNodeType@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4XmlNodeType@@@Z @ 0x180143E48 (-GetNodeType@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4XmlNodeType@@@Z.c)
 *     ?IsElement@CConstraintModelXMLParser@@AEAA_NPEAUIXmlReader@@PEBG@Z @ 0x180143ED4 (-IsElement@CConstraintModelXMLParser@@AEAA_NPEAUIXmlReader@@PEBG@Z.c)
 */

__int64 __fastcall CConstraintModelXMLParser::FindEndElement(
        CConstraintModelXMLParser *this,
        struct IXmlReader *a2,
        const unsigned __int16 *a3)
{
  CConstraintModelXMLParser *v6; // rcx
  int NodeType; // ebx
  int v9; // [rsp+30h] [rbp+8h] BYREF

  NodeType = CConstraintModelXMLParser::GetNodeType(this, a2, (enum XmlNodeType *)&v9);
  if ( NodeType >= 0 && (v9 != 15 || !CConstraintModelXMLParser::IsElement(v6, a2, a3)) )
  {
    NodeType = -2147024809;
    LogError((size_t *)L"Did not find end element for %s", a3);
  }
  *(_DWORD *)this = (unsigned int)NodeType >> 31;
  return (unsigned int)NodeType;
}
