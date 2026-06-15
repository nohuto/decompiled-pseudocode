/*
 * XREFs of ?ParseStreamIDInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z @ 0x180144CBC
 * Callers:
 *     ?ParseConsumerInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z @ 0x18014414C (-ParseConsumerInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180053D70 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     memset_0 @ 0x180064BFE (memset_0.c)
 *     wcscmp_0 @ 0x18006B8DF (wcscmp_0.c)
 *     ?LogError@@YAXPEBGZZ @ 0x1801009F4 (-LogError@@YAXPEBGZZ.c)
 *     ??0StreamResourceConsumer@@QEAA@PEBG0KU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180141E58 (--0StreamResourceConsumer@@QEAA@PEBG0KU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_.c)
 *     ?FindEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG@Z @ 0x180143A68 (-FindEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG@Z.c)
 *     ?ParseSimpleElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBGPEAGI@Z @ 0x180144B60 (-ParseSimpleElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBGPEAGI@Z.c)
 */

__int64 __fastcall CConstraintModelXMLParser::ParseStreamIDInfo(
        CConstraintModelXMLParser *this,
        struct IXmlReader *a2,
        struct ResourceConsumer **a3)
{
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v6; // r14d
  int EndElement; // ebx
  unsigned int v8; // r15d
  wchar_t *v9; // rax
  struct ResourceConsumer *v10; // rax
  GUID pclsid; // [rsp+30h] [rbp-D0h] BYREF
  wchar_t *EndPtr[2]; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t String[16]; // [rsp+60h] [rbp-A0h] BYREF
  OLECHAR sz[40]; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int16 v16[208]; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int16 v17[264]; // [rsp+270h] [rbp+170h] BYREF

  memset_0(v16, 0, 0x192uLL);
  memset_0(v17, 0, 0x20AuLL);
  v6 = eConnectorCount;
  pclsid = GUID_00000000_0000_0000_0000_000000000000;
  EndElement = CConstraintModelXMLParser::ParseSimpleElement(this, a2, L"HWID", v16, 0xC9u);
  if ( EndElement >= 0 )
  {
    EndElement = CConstraintModelXMLParser::ParseSimpleElement(this, a2, L"TopologyName", v17, 0x105u);
    if ( EndElement >= 0 )
    {
      EndElement = CConstraintModelXMLParser::ParseSimpleElement(this, a2, L"PinId", String, 0xBu);
      if ( EndElement >= 0 )
      {
        v8 = wcstoul(String, EndPtr, 10);
        if ( *EndPtr[0] || EndPtr[0] == String )
          EndElement = -2147024809;
        if ( EndElement >= 0 )
        {
          EndElement = CConstraintModelXMLParser::ParseSimpleElement(this, a2, L"Mode", sz, 0x28u);
          if ( EndElement >= 0 )
          {
            EndElement = CLSIDFromString(sz, &pclsid);
            if ( EndElement >= 0 )
            {
              EndElement = CConstraintModelXMLParser::ParseSimpleElement(
                             this,
                             a2,
                             L"ConnectorType",
                             (unsigned __int16 *)EndPtr,
                             9u);
              if ( EndElement >= 0 )
              {
                if ( !wcscmp_0((const wchar_t *)EndPtr, L"Host") )
                {
                  v6 = eHostProcessConnector;
                }
                else if ( !wcscmp_0((const wchar_t *)EndPtr, L"Offload") )
                {
                  v6 = eOffloadConnector;
                }
                else if ( !wcscmp_0((const wchar_t *)EndPtr, L"Loopback") )
                {
                  v6 = eLoopbackConnector;
                }
                else
                {
                  EndElement = -2147024809;
                  LogError((size_t *)L"Invalid connector type %s", EndPtr);
                }
                if ( EndElement >= 0 )
                {
                  EndElement = CConstraintModelXMLParser::FindEndElement(this, a2, L"Stream");
                  if ( EndElement >= 0 )
                  {
                    v9 = (wchar_t *)operator new(0x3C8uLL);
                    EndPtr[0] = v9;
                    if ( v9 )
                    {
                      *(GUID *)EndPtr = pclsid;
                      v10 = StreamResourceConsumer::StreamResourceConsumer(
                              (StreamResourceConsumer *)v9,
                              (char *)v16,
                              (char *)v17,
                              v8,
                              (struct _GUID *)EndPtr,
                              v6);
                    }
                    else
                    {
                      v10 = 0LL;
                    }
                    *a3 = v10;
                    if ( !v10 )
                      return (unsigned int)-2147024882;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)EndElement;
}
