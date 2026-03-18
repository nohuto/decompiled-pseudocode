/*
 * XREFs of wcsstr @ 0x1401A28C0
 * Callers:
 *     BcpGetProgressMessages @ 0x140190054 (BcpGetProgressMessages.c)
 *     SmUniqueIdParseProductName @ 0x140323C48 (SmUniqueIdParseProductName.c)
 *     PopGetBitlockerKeyLocation @ 0x14059B8F0 (PopGetBitlockerKeyLocation.c)
 *     PiGetDeviceRegProperty @ 0x1405C0098 (PiGetDeviceRegProperty.c)
 *     PfSnIsHostingApplication @ 0x14066C7D8 (PfSnIsHostingApplication.c)
 *     EtwpGenerateFileName @ 0x1406AF750 (EtwpGenerateFileName.c)
 *     SiIsWinPEBoot @ 0x1406D26E8 (SiIsWinPEBoot.c)
 *     SiGetBootDeviceName @ 0x1406D2754 (SiGetBootDeviceName.c)
 *     SiGetBiosSystemPartition @ 0x14072C6D8 (SiGetBiosSystemPartition.c)
 *     BiIsWinPEBoot @ 0x14073E40C (BiIsWinPEBoot.c)
 *     IopCheckIfNotNativeDriver @ 0x14085317C (IopCheckIfNotNativeDriver.c)
 *     PiGetDeviceRegistryProperty @ 0x14085E268 (PiGetDeviceRegistryProperty.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x140931520 (BiGetObjectReferenceFromEfiEntry.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x1409324CC (BiUpdateObjectReferenceInEfiEntry.c)
 *     SubstringMatch @ 0x1409430E8 (SubstringMatch.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcsstr(const wchar_t *Str, const wchar_t *SubStr)
{
  wchar_t *v3; // r8
  wchar_t v5; // ax
  signed __int64 i; // r9
  const wchar_t *v7; // rdx

  v3 = (wchar_t *)Str;
  if ( !*SubStr )
    return (wchar_t *)Str;
  v5 = *Str;
  if ( !*Str )
    return 0LL;
  for ( i = (char *)Str - (char *)SubStr; ; i += 2LL )
  {
    v7 = SubStr;
    if ( v5 )
      break;
LABEL_9:
    if ( !*v7 )
      return v3;
    v5 = *++v3;
    if ( !*v3 )
      return 0LL;
  }
  while ( *v7 )
  {
    if ( *(const wchar_t *)((char *)v7 + i) == *v7 )
    {
      if ( *(const wchar_t *)((char *)++v7 + i) )
        continue;
    }
    goto LABEL_9;
  }
  return v3;
}
