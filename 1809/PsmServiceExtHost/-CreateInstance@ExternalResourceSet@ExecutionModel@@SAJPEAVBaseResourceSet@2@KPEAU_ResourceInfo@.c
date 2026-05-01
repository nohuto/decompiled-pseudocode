/*
 * XREFs of ?CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAX_NKW45PendType@2@5PEAU_RM_ACTIVITY_HOST@@PEA_NPEAPEAV12@@Z @ 0x1800028D0
 * Callers:
 *     ?RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAXKW44PendType@2@_NPEA_NPEAPEAUResourceHandle__@2@@Z @ 0x1800021F0 (-RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@.c)
 * Callees:
 *     ?ResourceSetFactory@ExternalResourceSet@ExecutionModel@@CAJPEAPEAV12@@Z @ 0x180002AD4 (-ResourceSetFactory@ExternalResourceSet@ExecutionModel@@CAJPEAPEAV12@@Z.c)
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAVExternalResourceSet@2@@Z @ 0x180002C48 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo.c)
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180003540 (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 *     ?ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ @ 0x180018D90 (-ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG@Z @ 0x180037C1C (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ExternalResourceSet::CreateInstance(
        __int64 a1,
        unsigned int a2,
        struct ExecutionModel::_ResourceInfo *a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        unsigned __int8 a8,
        unsigned __int8 a9,
        int a10,
        unsigned __int8 a11,
        __int64 a12,
        __int64 a13,
        ExecutionModel::BaseResourceSet **a14)
{
  int v18; // eax
  __int64 v19; // rdx
  ExecutionModel::BaseResourceSet *v20; // rbx
  int v21; // esi
  ExecutionModel::BaseResourceSet *v23; // [rsp+48h] [rbp-30h]
  ExecutionModel::BaseResourceSet *v24; // [rsp+50h] [rbp-28h] BYREF

  v24 = 0LL;
  if ( a12 )
    ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriorities(
      (struct ExecutionModel::ResourceManager *)a1,
      2u,
      a2,
      a3,
      (struct _RM_ACTIVITY_HOST *)a12);
  v18 = ExecutionModel::ExternalResourceSet::ResourceSetFactory(&v24);
  v20 = v24;
  v21 = v18;
  if ( v18 >= 0 )
  {
    v23 = v24;
    *((_QWORD *)v24 + 23) = a1;
    *((_DWORD *)v20 + 4) = *(_DWORD *)(a1 + 16);
    *((_QWORD *)v20 + 3) = *(_QWORD *)(a1 + 24);
    *((_QWORD *)v20 + 174) = *(_QWORD *)(a1 + 1392);
    v21 = ExecutionModel::BaseResourceSet::AcquireResources(a1, v19, a2, a3, a4, a5, a10, a13, a8, v23);
    if ( v21 >= 0 )
    {
      if ( a12 )
      {
        if ( _InterlockedIncrement64((volatile signed __int64 *)(a12 + 16)) <= 1 )
          __fastfail(0xEu);
        v20 = v24;
      }
      *((_QWORD *)v20 + 177) = a6;
      *((_QWORD *)v20 + 178) = a7;
      *((_DWORD *)v20 + 368) &= ~1u;
      *((_DWORD *)v20 + 368) = (*((_DWORD *)v20 + 368) | a11) ^ (a9 ^ (unsigned __int8)(*((_BYTE *)v20 + 1472) | a11)) & 4;
      *((_QWORD *)v20 + 182) = a12;
      if ( !a12 )
        goto LABEL_11;
      if ( (unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
                              (char *)v20 + 32,
                              a12 + 88) )
      {
        *((_OWORD *)v20 + 4) = *(_OWORD *)(a12 + 552);
        *((_OWORD *)v20 + 5) = *(_OWORD *)(a12 + 568);
        *((_OWORD *)v20 + 6) = *(_OWORD *)(a12 + 584);
        *((_OWORD *)v20 + 7) = *(_OWORD *)(a12 + 600);
        *((_DWORD *)v20 + 32) = *(_DWORD *)(a12 + 616);
        *((_DWORD *)v20 + 33) = *(_DWORD *)(a12 + 620);
        *((_DWORD *)v20 + 34) = *(_DWORD *)(a12 + 624);
        *((_QWORD *)v20 + 18) = *(_QWORD *)(a12 + 632);
LABEL_11:
        *a14 = v20;
        return (unsigned int)v21;
      }
      v21 = -2147024882;
    }
  }
  if ( v20 )
  {
    ExecutionModel::BaseResourceSet::ReleaseResourcesAndCheckPendingRequests(v20);
    (*(void (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)v20 + 16LL))(v20);
  }
  return (unsigned int)v21;
}
