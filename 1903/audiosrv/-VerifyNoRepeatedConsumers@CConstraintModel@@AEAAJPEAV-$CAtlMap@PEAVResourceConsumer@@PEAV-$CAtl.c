/*
 * XREFs of ?VerifyNoRepeatedConsumers@CConstraintModel@@AEAAJPEAV?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@0@Z @ 0x18014376C
 * Callers:
 *     ?VerifyNoRepeatedResourcesOrConsumers@CConstraintModel@@AEAAJPEAV?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmResourceType@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@W4RmResourceType@@@2@@ATL@@0PEAV?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@3@1@Z @ 0x1801438C4 (-VerifyNoRepeatedResourcesOrConsumers@CConstraintModel@@AEAAJPEAV-$CAtlMap@V-$CStringT@GV-$StrTr.c)
 * Callees:
 *     ?GetStartPosition@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmResourceType@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@W4RmResourceType@@@2@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x180142C08 (-GetStartPosition@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmR.c)
 *     ?Lookup@?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@QEBA_NAEBQEAVResourceConsumer@@AEAPEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@2@@Z @ 0x180142DDC (-Lookup@-$CAtlMap@PEAVResourceConsumer@@PEAV-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL.c)
 */

__int64 __fastcall CConstraintModel::VerifyNoRepeatedConsumers(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 StartPosition; // rdi
  BOOL v7; // r10d
  char v8; // al
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  StartPosition = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,enum RmResourceType,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<enum RmResourceType>>::GetStartPosition(a3);
  if ( StartPosition )
  {
    while ( !v7 )
    {
      v8 = ATL::CAtlMap<ResourceConsumer *,ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *,ResourceConsumerTraits,ATL::CElementTraits<ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *>>::Lookup(
             a2,
             (__int64 *)StartPosition,
             &v12);
      v9 = *(_QWORD *)(StartPosition + 16);
      v7 = v8 != 0;
      if ( !v9 )
      {
        v9 = 0LL;
        v10 = (unsigned int)(*(_DWORD *)(StartPosition + 24) % *(_DWORD *)(a3 + 16) + 1);
        do
        {
          if ( (unsigned int)v10 >= *(_DWORD *)(a3 + 16) )
            break;
          if ( *(_QWORD *)(*(_QWORD *)a3 + 8 * v10) )
            v9 = *(_QWORD *)(*(_QWORD *)a3 + 8 * v10);
          v10 = (unsigned int)(v10 + 1);
        }
        while ( !v9 );
      }
      StartPosition = v9;
      if ( !v9 )
      {
        if ( !v8 )
          return v3;
        return (unsigned int)-2147024713;
      }
    }
    return (unsigned int)-2147024713;
  }
  return v3;
}
