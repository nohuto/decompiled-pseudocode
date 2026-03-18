/*
 * XREFs of wcschr @ 0x1C00BB13C
 * Callers:
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C001497C (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     xxxRemoteConnect @ 0x1C0076D40 (xxxRemoteConnect.c)
 *     ?ParseModeCap@@YAHPEAGPEAUtagModeCap@@H@Z @ 0x1C008A784 (-ParseModeCap@@YAHPEAGPEAUtagModeCap@@H@Z.c)
 *     InitCreateUserSubsystem @ 0x1C02681A0 (InitCreateUserSubsystem.c)
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
