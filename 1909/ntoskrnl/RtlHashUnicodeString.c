/*
 * XREFs of RtlHashUnicodeString @ 0x140666720
 * Callers:
 *     PiUEventHashStringIntoBucket @ 0x1400EE028 (PiUEventHashStringIntoBucket.c)
 *     KsepCacheHwIdHash @ 0x140177640 (KsepCacheHwIdHash.c)
 *     SepGetCachedHandlesEntry @ 0x14061FA4C (SepGetCachedHandlesEntry.c)
 *     sub_140627148 @ 0x140627148 (sub_140627148.c)
 *     PiDmObjectCreate @ 0x1406FBAA8 (PiDmObjectCreate.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x1406FDF04 (PiDevCfgBuildDriverNodeStrongName.c)
 *     PiDevCfgResolveVariable @ 0x1406FFC38 (PiDevCfgResolveVariable.c)
 *     PipFindDeviceOverrideEntry @ 0x140714890 (PipFindDeviceOverrideEntry.c)
 *     PnpGenerateDeviceIdsHash @ 0x14071BD08 (PnpGenerateDeviceIdsHash.c)
 *     KsepCacheDeviceHash @ 0x140782550 (KsepCacheDeviceHash.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14087BCA0 (PiCreateDriverSwDeviceCallback.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x1408A5370 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopPluginQuerySocSubsystemBlockingTime @ 0x1408A6830 (PopPluginQuerySocSubsystemBlockingTime.c)
 *     PopPluginQuerySocSubsystemMetadata @ 0x1408A697C (PopPluginQuerySocSubsystemMetadata.c)
 *     PipInitDeviceOverrideCache @ 0x140A1C050 (PipInitDeviceOverrideCache.c)
 * Callees:
 *     NLS_UPCASE @ 0x1400CFCA0 (NLS_UPCASE.c)
 */

NTSTATUS __stdcall RtlHashUnicodeString(
        PCUNICODE_STRING String,
        BOOLEAN CaseInSensitive,
        ULONG HashAlgorithm,
        PULONG HashValue)
{
  ULONG v4; // ebx
  unsigned __int16 *Buffer; // r11
  int v7; // r9d
  int v8; // r9d
  int v10; // ecx

  v4 = 0;
  if ( !String )
    return -1073741811;
  if ( !HashValue )
    return -1073741811;
  Buffer = String->Buffer;
  *HashValue = 0;
  v7 = String->Length >> 1;
  if ( HashAlgorithm > 1 )
    return -1073741811;
  if ( v7 )
  {
    if ( CaseInSensitive )
    {
      do
        v4 = NLS_UPCASE(*Buffer) + 65599 * v4;
      while ( v8 != 1 );
    }
    else
    {
      do
      {
        v10 = *Buffer++;
        v4 = v10 + 65599 * v4;
        --v7;
      }
      while ( v7 );
    }
  }
  *HashValue = v4;
  return 0;
}
