/*
 * XREFs of wcschr @ 0x1C00A667C
 * Callers:
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJG@Z @ 0x1C001BD10 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     ?ParseModeCap@@YAHPEAGPEAUtagModeCap@@H@Z @ 0x1C0057C5C (-ParseModeCap@@YAHPEAGPEAUtagModeCap@@H@Z.c)
 *     xxxRemoteConnect @ 0x1C0098740 (xxxRemoteConnect.c)
 *     InitCreateUserSubsystem @ 0x1C021BFC0 (InitCreateUserSubsystem.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcschr(const wchar_t *Str, wchar_t Ch)
{
  while ( *Str )
  {
    if ( *Str == Ch )
      return (wchar_t *)Str;
    ++Str;
  }
  if ( !Ch )
    return (wchar_t *)Str;
  return 0LL;
}
