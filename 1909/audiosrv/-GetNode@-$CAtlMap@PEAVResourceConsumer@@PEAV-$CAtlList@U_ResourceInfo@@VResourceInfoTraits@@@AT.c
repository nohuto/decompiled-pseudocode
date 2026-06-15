/*
 * XREFs of ?GetNode@?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@AEBAPEAVCNode@12@AEBQEAVResourceConsumer@@AEAI1AEAPEAV312@@Z @ 0x1801423C4
 * Callers:
 *     ?Lookup@?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@QEBA_NAEBQEAVResourceConsumer@@AEAPEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@2@@Z @ 0x18014292C (-Lookup@-$CAtlMap@PEAVResourceConsumer@@PEAV-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL.c)
 *     ?SetAt@?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@QEAAPEAU__POSITION@@AEBQEAVResourceConsumer@@AEBQEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@2@@Z @ 0x1801430F4 (-SetAt@-$CAtlMap@PEAVResourceConsumer@@PEAV-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@.c)
 * Callees:
 *     ??8StreamResourceConsumer@@QEAA_NAEBV0@@Z @ 0x180141B2C (--8StreamResourceConsumer@@QEAA_NAEBV0@@Z.c)
 */

__int64 __fastcall ATL::CAtlMap<ResourceConsumer *,ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *,ResourceConsumerTraits,ATL::CElementTraits<ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *>>::GetNode(
        __int64 a1,
        __int64 *a2,
        unsigned int *a3,
        unsigned int *a4,
        _QWORD *a5)
{
  unsigned int v7; // eax
  __int64 v8; // rsi
  __int64 i; // rbx
  __int64 v10; // rcx
  int v11; // r8d
  char v12; // al

  v7 = *(_DWORD *)(*a2 + 8);
  if ( v7 == 1 )
    v7 = (*(_DWORD *)(*a2 + 940) << 16) | (4 * *(_DWORD *)(*a2 + 960)) | 1;
  *a4 = v7;
  *a3 = v7 % *(_DWORD *)(a1 + 16);
  if ( *(_QWORD *)a1 )
  {
    v8 = 0LL;
    *a5 = 0LL;
    for ( i = *(_QWORD *)(*(_QWORD *)a1 + 8LL * *a3); ; i = *(_QWORD *)(i + 16) )
    {
      if ( !i )
        return 0LL;
      if ( *(_DWORD *)(i + 24) == *a4 )
        break;
LABEL_15:
      v8 = i;
    }
    v10 = *(_QWORD *)i;
    v11 = *(_DWORD *)(*(_QWORD *)i + 8LL);
    if ( v11 == 1 )
    {
      if ( *(_DWORD *)(*a2 + 8) == 1 )
      {
        v12 = StreamResourceConsumer::operator==(v10, *a2);
        goto LABEL_14;
      }
    }
    else if ( !v11 && !*(_DWORD *)(*a2 + 8) )
    {
      v12 = *(_DWORD *)(v10 + 16) == *(_DWORD *)(*a2 + 16);
LABEL_14:
      if ( v12 )
      {
LABEL_18:
        *a5 = v8;
        return i;
      }
      goto LABEL_15;
    }
    if ( v11 == *(_DWORD *)(*a2 + 8) )
      goto LABEL_18;
    v12 = 0;
    goto LABEL_14;
  }
  return 0LL;
}
