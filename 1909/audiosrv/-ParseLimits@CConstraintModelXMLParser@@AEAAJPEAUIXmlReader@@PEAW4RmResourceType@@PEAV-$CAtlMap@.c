/*
 * XREFs of ?ParseLimits@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4RmResourceType@@PEAV?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmResourceType@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@W4RmResourceType@@@2@@ATL@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@5@@Z @ 0x18014403C
 * Callers:
 *     ?ParseConstraintModel@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4RmResourceType@@PEAV?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmResourceType@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@W4RmResourceType@@@2@@ATL@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@5@PEAV?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@5@PEAV?$CAtlArray@PEAV?$CAtlArray@PEAVExclusiveEndpointInfo@@V?$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlArray@PEAVExclusiveEndpointInfo@@V?$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@ATL@@@2@@5@@Z @ 0x180143A94 (-ParseConstraintModel@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4RmResourceType@@PEAV-.c)
 * Callees:
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     ?LogError@@YAXPEBGZZ @ 0x180100554 (-LogError@@YAXPEBGZZ.c)
 *     ?LogOutput@@YAXPEBGZZ @ 0x18010060C (-LogOutput@@YAXPEBGZZ.c)
 *     ?AddTail@?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAPEAU__POSITION@@AEBU_ResourceInfo@@@Z @ 0x180141CC4 (-AddTail@-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAPEAU__POSITION@@AEBU_Resource.c)
 *     ?Lookup@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmResourceType@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@W4RmResourceType@@@2@@ATL@@QEBA_NPEBGAEAW4RmResourceType@@@Z @ 0x180142968 (-Lookup@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmResourceTyp.c)
 *     ?SetAt@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmResourceType@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@W4RmResourceType@@@2@@ATL@@QEAAPEAU__POSITION@@PEBGAEBW4RmResourceType@@@Z @ 0x1801431A0 (-SetAt@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmResourceType.c)
 *     ?FindStartOrEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG1HPEAH@Z @ 0x1801436C8 (-FindStartOrEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG1HPEAH@Z.c)
 *     ?ParseSingleResource@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAGKPEAK@Z @ 0x18014471C (-ParseSingleResource@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAGKPEAK@Z.c)
 */

__int64 __fastcall CConstraintModelXMLParser::ParseLimits(
        CConstraintModelXMLParser *a1,
        struct IXmlReader *a2,
        int *a3,
        __int64 a4,
        __int64 *a5)
{
  int *v5; // rdi
  int StartOrEndElement; // ebx
  unsigned int v7; // r9d
  ATL::CAtlException *v9; // rbx
  ATL::CAtlException *v10; // rbx
  int v11; // [rsp+30h] [rbp-298h] BYREF
  int v12; // [rsp+34h] [rbp-294h] BYREF
  int v13; // [rsp+38h] [rbp-290h]
  int *v14; // [rsp+40h] [rbp-288h]
  struct IXmlReader *v15; // [rsp+48h] [rbp-280h]
  CConstraintModelXMLParser *v16; // [rsp+50h] [rbp-278h]
  __int64 v17; // [rsp+60h] [rbp-268h]
  __int64 *v18; // [rsp+70h] [rbp-258h]
  __int64 v19; // [rsp+78h] [rbp-250h]
  ATL::CAtlException *v20; // [rsp+80h] [rbp-248h] BYREF
  ATL::CAtlException *v21; // [rsp+88h] [rbp-240h] BYREF
  int v22; // [rsp+90h] [rbp-238h] BYREF
  unsigned int v23; // [rsp+94h] [rbp-234h] BYREF
  unsigned __int16 v24[260]; // [rsp+98h] [rbp-230h] BYREF

  v19 = -2LL;
  v5 = a3;
  v16 = a1;
  v15 = a2;
  v14 = a3;
  v17 = a4;
  v18 = a5;
  StartOrEndElement = 0;
  LogOutput((size_t *)L"Parsing resource IDs and limits");
  v13 = 0;
  v12 = 1;
  while ( 2 )
  {
    if ( StartOrEndElement >= 0 )
    {
      if ( !v12 )
      {
        if ( (unsigned int)(v13 - 1) > 0xE )
          return (unsigned int)-2147024809;
        return (unsigned int)StartOrEndElement;
      }
      StartOrEndElement = CConstraintModelXMLParser::FindStartOrEndElement(v16, v15, L"Resource", L"Limits", 0, &v12);
      if ( StartOrEndElement < 0 )
        continue;
      if ( !v12 )
        continue;
      StartOrEndElement = CConstraintModelXMLParser::ParseSingleResource(v16, v15, v24, v7, &v23);
      if ( StartOrEndElement < 0 )
        continue;
      if ( ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,enum RmResourceType,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<enum RmResourceType>>::Lookup(
             v17,
             v24,
             &v11) )
      {
        StartOrEndElement = -2147024713;
        LogError((size_t *)L"Repeated resource type limit declaration for resource ID %s in XML not allowed", v24);
        continue;
      }
      try
      {
        ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,enum RmResourceType,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<enum RmResourceType>>::SetAt(
          v17,
          v24,
          v5);
      }
      catch ( ATL::CAtlException *v20 )
      {
        v9 = v20;
        if ( *(_DWORD *)v20 == -1073741571 )
          _o__resetstkoflw();
        v11 = *(_DWORD *)v9;
        StartOrEndElement = v11;
        if ( v11 >= 0 )
        {
          v5 = v14;
          goto LABEL_29;
        }
LABEL_12:
        v5 = v14;
        continue;
      }
LABEL_29:
      try
      {
        v22 = *v5;
        StartOrEndElement = 0;
        ATL::CAtlList<_ResourceInfo,ResourceInfoTraits>::AddTail(v18, (__int64)&v22);
      }
      catch ( ATL::CAtlException *v21 )
      {
        v10 = v21;
        if ( *(_DWORD *)v21 == -1073741571 )
          _o__resetstkoflw();
        v11 = *(_DWORD *)v10;
        StartOrEndElement = v11;
        if ( v11 < 0 )
          goto LABEL_12;
        v5 = v14;
      }
      ++*v5;
      ++v13;
      LogOutput((size_t *)L"Resource ID %s found with limit %d", v24, v23);
      continue;
    }
    return (unsigned int)StartOrEndElement;
  }
}
