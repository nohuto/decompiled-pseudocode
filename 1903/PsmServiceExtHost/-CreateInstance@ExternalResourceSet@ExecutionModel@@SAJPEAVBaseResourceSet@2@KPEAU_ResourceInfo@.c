/*
 * XREFs of ?CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAX_NKW45PendType@2@5PEAU_RM_ACTIVITY_HOST@@PEA_NPEAPEAV12@@Z @ 0x18000701C
 * Callers:
 *     ?RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAXKW44PendType@2@_NPEA_NPEAPEAUResourceHandle__@2@@Z @ 0x1800069CC (-RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@.c)
 * Callees:
 *     ?ResourceSetFactory@ExternalResourceSet@ExecutionModel@@CAJPEAPEAV12@@Z @ 0x1800071A4 (-ResourceSetFactory@ExternalResourceSet@ExecutionModel@@CAJPEAPEAV12@@Z.c)
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAVExternalResourceSet@2@@Z @ 0x18000739C (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo.c)
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000AF78 (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 *     ?ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ @ 0x18001B610 (-ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
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
  if ( v18 < 0
    || (v23 = v24,
        *((_QWORD *)v24 + 8) = a1,
        *((_DWORD *)v20 + 4) = *(_DWORD *)(a1 + 16),
        *((_QWORD *)v20 + 3) = *(_QWORD *)(a1 + 24),
        *((_QWORD *)v20 + 159) = *(_QWORD *)(a1 + 1272),
        v21 = ExecutionModel::BaseResourceSet::AcquireResources(a1, v19, a2, a3, a4, a5, a10, a13, a8, v23),
        v21 < 0) )
  {
    if ( v20 )
    {
      ExecutionModel::BaseResourceSet::ReleaseResourcesAndCheckPendingRequests(v20);
      (*(void (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)v20 + 16LL))(v20);
    }
  }
  else
  {
    if ( a12 )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(a12 + 16)) <= 1 )
        __fastfail(0xEu);
      v20 = v24;
    }
    *((_QWORD *)v20 + 162) = a6;
    *((_QWORD *)v20 + 163) = a7;
    *((_DWORD *)v20 + 338) &= ~1u;
    *((_DWORD *)v20 + 338) = (*((_DWORD *)v20 + 338) | a11) ^ (a9 ^ (unsigned __int8)(*((_BYTE *)v20 + 1352) | a11)) & 4;
    *((_QWORD *)v20 + 167) = a12;
    *a14 = v20;
  }
  return (unsigned int)v21;
}
