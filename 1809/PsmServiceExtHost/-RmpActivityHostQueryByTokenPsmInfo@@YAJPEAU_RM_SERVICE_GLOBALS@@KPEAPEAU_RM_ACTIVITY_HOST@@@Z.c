/*
 * XREFs of ?RmpActivityHostQueryByTokenPsmInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18005B7F8
 * Callers:
 *     ?AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@KPEA_N@Z @ 0x180062D58 (-AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResource.c)
 * Callees:
 *     ?RmpSystemGetProcessPsmInfo@@YAJKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x1800101B0 (-RmpSystemGetProcessPsmInfo@@YAJKPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     ?RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180010E4C (-RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
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
