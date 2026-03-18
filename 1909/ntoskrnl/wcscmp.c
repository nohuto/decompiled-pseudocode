/*
 * XREFs of wcscmp @ 0x1401A2670
 * Callers:
 *     PiDqDispatch @ 0x1405B6900 (PiDqDispatch.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406283AC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406D76C4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     _CmValidateDeviceContainerName @ 0x1406F2F94 (_CmValidateDeviceContainerName.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x14070C918 (PiDcUpdateDeviceContainerMembership.c)
 *     PiDcContainerRequiresConfiguration @ 0x14070CFEC (PiDcContainerRequiresConfiguration.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x14070D310 (_CmGetDeviceContainerIdFromBase.c)
 *     EtwStartAutoLogger @ 0x140770860 (EtwStartAutoLogger.c)
 *     HdlspAddLogEntry @ 0x14098BAE0 (HdlspAddLogEntry.c)
 * Callees:
 *     <none>
 */

int __cdecl wcscmp(const wchar_t *Str1, const wchar_t *Str2)
{
  int v2; // eax
  unsigned int v3; // r8d
  signed __int64 v4; // rcx

  v2 = *Str2;
  v3 = *Str1 - v2;
  if ( !v3 )
  {
    v4 = (char *)Str1 - (char *)Str2;
    do
    {
      if ( !(_WORD)v2 )
        break;
      v2 = *++Str2;
      v3 = *(const wchar_t *)((char *)Str2 + v4) - v2;
    }
    while ( !v3 );
  }
  return ((int)v3 > 0) - (v3 >> 31);
}
