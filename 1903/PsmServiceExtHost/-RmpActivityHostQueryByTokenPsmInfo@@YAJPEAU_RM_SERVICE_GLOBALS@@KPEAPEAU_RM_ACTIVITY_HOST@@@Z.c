/*
 * XREFs of ?RmpActivityHostQueryByTokenPsmInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800687FC
 * Callers:
 *     ?AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@KPEA_N@Z @ 0x18006FBA0 (-AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResource.c)
 * Callees:
 *     ?RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180012A20 (-RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpSystemGetProcessPsmInfo@@YAJKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x180033DD8 (-RmpSystemGetProcessPsmInfo@@YAJKPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

__int64 __fastcall RmpActivityHostQueryByTokenPsmInfo(
        struct _RM_SERVICE_GLOBALS *a1,
        unsigned int a2,
        struct _RM_ACTIVITY_HOST **a3)
{
  __int64 result; // rax
  wchar_t v6[272]; // [rsp+20h] [rbp-258h] BYREF
  unsigned __int64 v7; // [rsp+240h] [rbp-38h]

  result = RmpSystemGetProcessPsmInfo(a2, v6);
  if ( (int)result >= 0 )
  {
    result = RmpActivityHostFindByHostId(a1, v7, a3);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
