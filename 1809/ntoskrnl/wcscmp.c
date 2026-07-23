/*
 * XREFs of wcscmp @ 0x140197840
 * Callers:
 *     PiDqDispatch @ 0x140591640 (PiDqDispatch.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14059D504 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406B4B6C (SepCleanupLUIDDeviceMapDirectory.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x1406EB90C (_CmGetDeviceContainerIdFromBase.c)
 *     _CmValidateDeviceContainerName @ 0x1406EBC14 (_CmValidateDeviceContainerName.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x1406EC47C (PiDcUpdateDeviceContainerMembership.c)
 *     PiDcContainerRequiresConfiguration @ 0x1406EC624 (PiDcContainerRequiresConfiguration.c)
 *     EtwStartAutoLogger @ 0x140743058 (EtwStartAutoLogger.c)
 *     HdlspAddLogEntry @ 0x14094CAE0 (HdlspAddLogEntry.c)
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
