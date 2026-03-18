/*
 * XREFs of wcscmp @ 0x1401976E0
 * Callers:
 *     PiDqDispatch @ 0x140590640 (PiDqDispatch.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14059C504 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406B38EC (SepCleanupLUIDDeviceMapDirectory.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x1406EA68C (_CmGetDeviceContainerIdFromBase.c)
 *     _CmValidateDeviceContainerName @ 0x1406EA994 (_CmValidateDeviceContainerName.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x1406EB1FC (PiDcUpdateDeviceContainerMembership.c)
 *     PiDcContainerRequiresConfiguration @ 0x1406EB3A4 (PiDcContainerRequiresConfiguration.c)
 *     EtwStartAutoLogger @ 0x140741E88 (EtwStartAutoLogger.c)
 *     HdlspAddLogEntry @ 0x14094BAE0 (HdlspAddLogEntry.c)
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
