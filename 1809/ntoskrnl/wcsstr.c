/*
 * XREFs of wcsstr @ 0x140197950
 * Callers:
 *     BcpGetProgressMessages @ 0x1401867D8 (BcpGetProgressMessages.c)
 *     SmUniqueIdParseProductName @ 0x140306804 (SmUniqueIdParseProductName.c)
 *     PopGetBitlockerKeyLocation @ 0x14056BD8C (PopGetBitlockerKeyLocation.c)
 *     PiGetDeviceRegProperty @ 0x140587C10 (PiGetDeviceRegProperty.c)
 *     PfSnIsHostingApplication @ 0x140667CEC (PfSnIsHostingApplication.c)
 *     SiIsWinPEBoot @ 0x1406AE838 (SiIsWinPEBoot.c)
 *     SiGetBootDeviceName @ 0x1406AE8A4 (SiGetBootDeviceName.c)
 *     EtwpGenerateFileName @ 0x1406CF53C (EtwpGenerateFileName.c)
 *     SiGetBiosSystemPartition @ 0x1407040F0 (SiGetBiosSystemPartition.c)
 *     BiIsWinPEBoot @ 0x1407121EC (BiIsWinPEBoot.c)
 *     IopCheckIfNotNativeDriver @ 0x140819810 (IopCheckIfNotNativeDriver.c)
 *     PiGetDeviceRegistryProperty @ 0x140824718 (PiGetDeviceRegistryProperty.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x1408F3DE4 (BiGetObjectReferenceFromEfiEntry.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x1408F4D64 (BiUpdateObjectReferenceInEfiEntry.c)
 *     SubstringMatch @ 0x140905060 (SubstringMatch.c)
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
