/*
 * XREFs of ?AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@KPEA_N@Z @ 0x180062D58
 * Callers:
 *     ?RmAvailabilityCheck@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K@Z @ 0x180058E70 (-RmAvailabilityCheck@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2.c)
 * Callees:
 *     ?CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJKPEAU_ResourceInfo@2@KW4Enum@Priority@2@W44PendType@2@PEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x180003044 (-CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJKPEAU_ResourceInfo@2@KW4Enum@Pri.c)
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180003540 (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180008370 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpActivityHostQueryByTokenPsmInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18005B7F8 (-RmpActivityHostQueryByTokenPsmInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall ExecutionModel::ExternalResourceSet::AvailabilityCheck(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        struct ExecutionModel::_ResourceInfo *a4,
        unsigned int a5,
        unsigned int a6,
        bool *a7)
{
  int v10; // edi
  struct ExecutionModel::ResourceManager *v11; // rcx
  struct _RM_OBJECT_HEADER *v12; // rbx
  struct _RM_OBJECT_HEADER *v14; // [rsp+70h] [rbp+8h] BYREF
  char v15; // [rsp+88h] [rbp+20h] BYREF

  v14 = 0LL;
  if ( a4 )
  {
    RmpActivityHostQueryByTokenPsmInfo(*(struct _RM_SERVICE_GLOBALS **)(a1 + 152), a6, &v14);
    v12 = v14;
    if ( v14 )
      ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriorities(v11, 2u, a3, a4, v14);
    v10 = ExecutionModel::BaseResourceSet::CheckResourceAvailability(a2, a3, (__int64)a4, a6, a5, 1, &v15, &v14);
    if ( v10 >= 0 )
      *a7 = (_BYTE)v14 && !v15;
    if ( v12 )
      RmpObjectRelease(v12);
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)v10;
}
