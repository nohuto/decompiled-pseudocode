/*
 * XREFs of FindBitmapResource @ 0x1409D8120
 * Callers:
 *     BvgaDriverInitialize @ 0x1409D8020 (BvgaDriverInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     LdrAccessResource @ 0x140757D20 (LdrAccessResource.c)
 *     LdrFindResource_U @ 0x140757D40 (LdrFindResource_U.c)
 */

PVOID __fastcall FindBitmapResource(ULONG_PTR a1, ULONG *a2)
{
  PIMAGE_RESOURCE_DATA_ENTRY ResourceDataEntry; // [rsp+20h] [rbp-38h] BYREF
  PVOID Resource; // [rsp+28h] [rbp-30h] BYREF
  _LDR_RESOURCE_INFO v6; // [rsp+30h] [rbp-28h] BYREF

  v6.Language = 0LL;
  v6.Name = a1;
  v6.Type = 2LL;
  if ( LdrFindResource_U((PVOID)0x140000000LL, &v6, 3u, &ResourceDataEntry) < 0
    || LdrAccessResource((PVOID)0x140000000LL, ResourceDataEntry, &Resource, a2) < 0 )
  {
    return 0LL;
  }
  else
  {
    return Resource;
  }
}
