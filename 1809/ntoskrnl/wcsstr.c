/*
 * XREFs of wcsstr @ 0x140197930
 * Callers:
 *     BcpGetProgressMessages @ 0x1401867B8 (BcpGetProgressMessages.c)
 *     SmUniqueIdParseProductName @ 0x140306704 (SmUniqueIdParseProductName.c)
 *     PopGetBitlockerKeyLocation @ 0x14056BD8C (PopGetBitlockerKeyLocation.c)
 *     PiGetDeviceRegProperty @ 0x140587C10 (PiGetDeviceRegProperty.c)
 *     PfSnIsHostingApplication @ 0x140667D0C (PfSnIsHostingApplication.c)
 *     SiIsWinPEBoot @ 0x1406AE858 (SiIsWinPEBoot.c)
 *     SiGetBootDeviceName @ 0x1406AE8C4 (SiGetBootDeviceName.c)
 *     EtwpGenerateFileName @ 0x1406CF55C (EtwpGenerateFileName.c)
 *     SiGetBiosSystemPartition @ 0x140704110 (SiGetBiosSystemPartition.c)
 *     BiIsWinPEBoot @ 0x14071220C (BiIsWinPEBoot.c)
 *     IopCheckIfNotNativeDriver @ 0x140819830 (IopCheckIfNotNativeDriver.c)
 *     PiGetDeviceRegistryProperty @ 0x140824738 (PiGetDeviceRegistryProperty.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x1408F3E04 (BiGetObjectReferenceFromEfiEntry.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x1408F4D84 (BiUpdateObjectReferenceInEfiEntry.c)
 *     SubstringMatch @ 0x140905080 (SubstringMatch.c)
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
