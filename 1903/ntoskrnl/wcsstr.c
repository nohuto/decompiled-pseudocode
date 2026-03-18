/*
 * XREFs of wcsstr @ 0x1401A21A0
 * Callers:
 *     BcpGetProgressMessages @ 0x14018FEB4 (BcpGetProgressMessages.c)
 *     SmUniqueIdParseProductName @ 0x1403241F8 (SmUniqueIdParseProductName.c)
 *     PopGetBitlockerKeyLocation @ 0x14059B910 (PopGetBitlockerKeyLocation.c)
 *     PiGetDeviceRegProperty @ 0x1405BFBC8 (PiGetDeviceRegProperty.c)
 *     PfSnIsHostingApplication @ 0x1406597B8 (PfSnIsHostingApplication.c)
 *     EtwpGenerateFileName @ 0x1406BA198 (EtwpGenerateFileName.c)
 *     SiIsWinPEBoot @ 0x1406D3238 (SiIsWinPEBoot.c)
 *     SiGetBootDeviceName @ 0x1406D32A4 (SiGetBootDeviceName.c)
 *     SiGetBiosSystemPartition @ 0x14072A838 (SiGetBiosSystemPartition.c)
 *     BiIsWinPEBoot @ 0x14073C50C (BiIsWinPEBoot.c)
 *     IopCheckIfNotNativeDriver @ 0x140853A7C (IopCheckIfNotNativeDriver.c)
 *     PiGetDeviceRegistryProperty @ 0x14085EB68 (PiGetDeviceRegistryProperty.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x140931AAC (BiGetObjectReferenceFromEfiEntry.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140932A58 (BiUpdateObjectReferenceInEfiEntry.c)
 *     SubstringMatch @ 0x140943678 (SubstringMatch.c)
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
