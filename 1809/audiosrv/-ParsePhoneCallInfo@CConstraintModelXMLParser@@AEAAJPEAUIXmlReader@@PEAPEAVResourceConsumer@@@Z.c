/*
 * XREFs of ?ParsePhoneCallInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z @ 0x1801406A0
 * Callers:
 *     ?ParseConsumerInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z @ 0x1801400C8 (-ParseConsumerInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000CFC0 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     wcscmp_0 @ 0x18006887F (wcscmp_0.c)
 *     ?LogError@@YAXPEBGZZ @ 0x1800F4B2C (-LogError@@YAXPEBGZZ.c)
 *     ?FindEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG@Z @ 0x18013F9E4 (-FindEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG@Z.c)
 *     ?ParseSimpleElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBGPEAGI@Z @ 0x180140B04 (-ParseSimpleElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBGPEAGI@Z.c)
 */

__int64 __fastcall CConstraintModelXMLParser::ParsePhoneCallInfo(
        CConstraintModelXMLParser *this,
        struct IXmlReader *a2,
        struct ResourceConsumer **a3)
{
  int v6; // edi
  int EndElement; // ebx
  struct ResourceConsumer *v8; // rax
  wchar_t String1[264]; // [rsp+40h] [rbp-248h] BYREF

  memset_0(String1, 0, 0x20AuLL);
  v6 = 0;
  EndElement = CConstraintModelXMLParser::ParseSimpleElement(this, a2, L"CallState", String1, 0x105u);
  if ( EndElement >= 0 )
  {
    if ( wcscmp_0(String1, L"Active") )
    {
      if ( !wcscmp_0(String1, L"Hold") )
      {
        v6 = 1;
      }
      else
      {
        EndElement = -2147024809;
        LogError((size_t *)L"Invalid call state %s", String1);
      }
    }
    if ( EndElement >= 0 )
    {
      EndElement = CConstraintModelXMLParser::FindEndElement(this, a2, L"PhoneCall");
      if ( EndElement >= 0 )
      {
        v8 = (struct ResourceConsumer *)operator new(0x18uLL);
        if ( v8 )
        {
          *((_DWORD *)v8 + 2) = 0;
          *(_QWORD *)v8 = &PhoneCallResourceConsumer::`vftable';
          *((_DWORD *)v8 + 4) = v6;
        }
        *a3 = v8;
        if ( !v8 )
          return (unsigned int)-2147024882;
      }
    }
  }
  return (unsigned int)EndElement;
}
