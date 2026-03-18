/*
 * XREFs of RtlHashUnicodeString @ 0x140653620
 * Callers:
 *     PiUEventHashStringIntoBucket @ 0x140099FD8 (PiUEventHashStringIntoBucket.c)
 *     KsepCacheHwIdHash @ 0x140176F50 (KsepCacheHwIdHash.c)
 *     SepGetCachedHandlesEntry @ 0x14061DF30 (SepGetCachedHandlesEntry.c)
 *     sub_140623298 @ 0x140623298 (sub_140623298.c)
 *     PiDmObjectCreate @ 0x1406F9CC8 (PiDmObjectCreate.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x1406FC124 (PiDevCfgBuildDriverNodeStrongName.c)
 *     PiDevCfgResolveVariable @ 0x1406FDE58 (PiDevCfgResolveVariable.c)
 *     PipFindDeviceOverrideEntry @ 0x140712AB0 (PipFindDeviceOverrideEntry.c)
 *     PnpGenerateDeviceIdsHash @ 0x140719F18 (PnpGenerateDeviceIdsHash.c)
 *     KsepCacheDeviceHash @ 0x14077FB30 (KsepCacheDeviceHash.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14087C5A0 (PiCreateDriverSwDeviceCallback.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x1408A5B10 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopPluginQuerySocSubsystemBlockingTime @ 0x1408A6FD0 (PopPluginQuerySocSubsystemBlockingTime.c)
 *     PopPluginQuerySocSubsystemMetadata @ 0x1408A711C (PopPluginQuerySocSubsystemMetadata.c)
 *     PipInitDeviceOverrideCache @ 0x140A1BE74 (PipInitDeviceOverrideCache.c)
 * Callees:
 *     NLS_UPCASE @ 0x140092980 (NLS_UPCASE.c)
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
