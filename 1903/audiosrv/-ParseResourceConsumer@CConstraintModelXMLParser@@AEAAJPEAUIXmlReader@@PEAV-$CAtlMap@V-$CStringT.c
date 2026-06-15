/*
 * XREFs of ?ParseResourceConsumer@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAV?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmResourceType@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@W4RmResourceType@@@2@@ATL@@PEAV?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@4@@Z @ 0x180144844
 * Callers:
 *     ?ParseConstraintModel@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4RmResourceType@@PEAV?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmResourceType@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@W4RmResourceType@@@2@@ATL@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@5@PEAV?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@5@PEAV?$CAtlArray@PEAV?$CAtlArray@PEAVExclusiveEndpointInfo@@V?$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlArray@PEAVExclusiveEndpointInfo@@V?$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@ATL@@@2@@5@@Z @ 0x180143F44 (-ParseConstraintModel@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4RmResourceType@@PEAV-.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180053D70 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     memset_0 @ 0x180064BFE (memset_0.c)
 *     ?LogError@@YAXPEBGZZ @ 0x1801009F4 (-LogError@@YAXPEBGZZ.c)
 *     ?LogOutput@@YAXPEBGZZ @ 0x180100AAC (-LogOutput@@YAXPEBGZZ.c)
 *     ?AddTail@?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAPEAU__POSITION@@AEBU_ResourceInfo@@@Z @ 0x180142174 (-AddTail@-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAPEAU__POSITION@@AEBU_Resource.c)
 *     ?Lookup@?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@QEBA_NAEBQEAVResourceConsumer@@AEAPEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@2@@Z @ 0x180142DDC (-Lookup@-$CAtlMap@PEAVResourceConsumer@@PEAV-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL.c)
 *     ?Lookup@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmResourceType@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@W4RmResourceType@@@2@@ATL@@QEBA_NPEBGAEAW4RmResourceType@@@Z @ 0x180142E18 (-Lookup@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmResourceTyp.c)
 *     ?SetAt@?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@QEAAPEAU__POSITION@@AEBQEAVResourceConsumer@@AEBQEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@2@@Z @ 0x1801435A4 (-SetAt@-$CAtlMap@PEAVResourceConsumer@@PEAV-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@.c)
 *     ?FindStartElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG@Z @ 0x180143AE4 (-FindStartElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG@Z.c)
 *     ?FindStartOrEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG1HPEAH@Z @ 0x180143B78 (-FindStartOrEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG1HPEAH@Z.c)
 *     ?ParseConsumerInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z @ 0x18014414C (-ParseConsumerInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z.c)
 *     ?ParseSingleResource@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAGKPEAK@Z @ 0x180144BCC (-ParseSingleResource@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAGKPEAK@Z.c)
 */

__int64 __fastcall CConstraintModelXMLParser::ParseResourceConsumer(
        CConstraintModelXMLParser *this,
        struct IXmlReader *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r12
  struct IXmlReader *v5; // r15
  CConstraintModelXMLParser *v6; // r14
  int v7; // r13d
  __int64 *v8; // rax
  __int64 *v9; // rsi
  int StartElement; // edi
  unsigned int v11; // r9d
  wchar_t *v12; // rcx
  __int64 i; // rax
  ATL::CAtlException *v15; // rbx
  ATL::CAtlException *v16; // rbx
  int v17; // [rsp+30h] [rbp-2D8h] BYREF
  int v18; // [rsp+34h] [rbp-2D4h] BYREF
  __int64 *v19; // [rsp+38h] [rbp-2D0h] BYREF
  struct ResourceConsumer *v20; // [rsp+40h] [rbp-2C8h] BYREF
  __int64 v21; // [rsp+48h] [rbp-2C0h] BYREF
  __int64 v22; // [rsp+50h] [rbp-2B8h]
  CConstraintModelXMLParser *v23; // [rsp+58h] [rbp-2B0h]
  struct IXmlReader *v24; // [rsp+60h] [rbp-2A8h]
  __int64 v25; // [rsp+70h] [rbp-298h]
  __int64 v26; // [rsp+80h] [rbp-288h]
  __int64 v27; // [rsp+90h] [rbp-278h]
  ATL::CAtlException *v28; // [rsp+98h] [rbp-270h] BYREF
  ATL::CAtlException *v29; // [rsp+A0h] [rbp-268h] BYREF
  int v30; // [rsp+B0h] [rbp-258h] BYREF
  unsigned int v31; // [rsp+B4h] [rbp-254h] BYREF
  unsigned __int16 v32[260]; // [rsp+B8h] [rbp-250h] BYREF

  v27 = -2LL;
  v4 = a4;
  v22 = a3;
  v5 = a2;
  v6 = this;
  v23 = this;
  v24 = a2;
  v25 = a3;
  v26 = a4;
  LogOutput((size_t *)L"Parsing resource consumer");
  v18 = 1;
  v7 = 0;
  v20 = 0LL;
  v8 = (__int64 *)operator new(0x30uLL);
  v9 = v8;
  if ( v8 )
  {
    *v8 = 0LL;
    v8[1] = 0LL;
    v8[2] = 0LL;
    v8[3] = 0LL;
    v8[4] = 0LL;
    *((_DWORD *)v8 + 10) = 10;
    v19 = v8;
  }
  else
  {
    v9 = 0LL;
    v19 = 0LL;
    v8 = 0LL;
  }
  if ( v8 )
  {
    StartElement = CConstraintModelXMLParser::FindStartElement(v6, v5, L"ConsumerInfo");
    if ( StartElement >= 0 )
    {
      StartElement = CConstraintModelXMLParser::ParseConsumerInfo((enum XmlNodeType *)v6, v5, &v20);
      if ( StartElement >= 0 )
      {
        if ( ATL::CAtlMap<ResourceConsumer *,ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *,ResourceConsumerTraits,ATL::CElementTraits<ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *>>::Lookup(
               v4,
               (__int64 *)&v20,
               &v21) )
        {
          StartElement = -2147024713;
          LogError((size_t *)L"Repeated resource consumer declaration in XML not allowed");
        }
        else
        {
          StartElement = 0;
        }
      }
    }
  }
  else
  {
    StartElement = -2147024882;
  }
  while ( StartElement >= 0 )
  {
    if ( !v18 )
    {
      if ( v7 )
      {
        try
        {
          StartElement = 0;
          ATL::CAtlMap<ResourceConsumer *,ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *,ResourceConsumerTraits,ATL::CElementTraits<ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *>>::SetAt(
            v4,
            (__int64 *)&v20,
            &v19);
        }
        catch ( ATL::CAtlException *v29 )
        {
          v16 = v29;
          if ( *(_DWORD *)v29 == -1073741571 )
            _o__resetstkoflw();
          return *(unsigned int *)v16;
        }
      }
      else
      {
        return (unsigned int)-2147024809;
      }
      return (unsigned int)StartElement;
    }
    StartElement = CConstraintModelXMLParser::FindStartOrEndElement(v6, v5, L"Resource", L"ResourceConsumer", 0, &v18);
    if ( StartElement >= 0 )
    {
      if ( v18 )
      {
        v7 = 1;
        LODWORD(v21) = 1;
        v17 = -1;
        memset_0(&v30, 0, 0x20CuLL);
        StartElement = CConstraintModelXMLParser::ParseSingleResource(v6, v5, v32, v11, &v31);
        if ( StartElement >= 0 )
        {
          if ( !ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,enum RmResourceType,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<enum RmResourceType>>::Lookup(
                  v22,
                  v32,
                  &v17) )
          {
            v12 = L"Resource ID %s referenced in consumer but limits not declared";
            goto LABEL_25;
          }
          v30 = v17;
          for ( i = *v9; i; i = *(_QWORD *)i )
          {
            if ( *(_DWORD *)(i + 16) == v17 )
              goto LABEL_23;
          }
          i = 0LL;
LABEL_23:
          if ( i )
          {
            v12 = (wchar_t *)L"Resource ID %s referenced in consumer has multiple consumptions declared";
LABEL_25:
            StartElement = -2147467259;
            LogError((size_t *)v12, v32);
          }
          else
          {
            StartElement = 0;
            try
            {
              ATL::CAtlList<_ResourceInfo,ResourceInfoTraits>::AddTail(v9, (__int64)&v30);
            }
            catch ( ATL::CAtlException *v28 )
            {
              v15 = v28;
              if ( *(_DWORD *)v28 == -1073741571 )
                _o__resetstkoflw();
              v17 = *(_DWORD *)v15;
              StartElement = v17;
              v7 = v21;
              v9 = v19;
              v6 = v23;
              v5 = v24;
              v22 = v25;
              v4 = v26;
              continue;
            }
          }
        }
      }
    }
  }
  return (unsigned int)StartElement;
}
