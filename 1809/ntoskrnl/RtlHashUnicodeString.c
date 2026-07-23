/*
 * XREFs of RtlHashUnicodeString @ 0x140599BE0
 * Callers:
 *     PiUEventHashStringIntoBucket @ 0x140006568 (PiUEventHashStringIntoBucket.c)
 *     KsepCacheHwIdHash @ 0x14016C9C0 (KsepCacheHwIdHash.c)
 *     sub_140587B80 @ 0x140587B80 (sub_140587B80.c)
 *     PiDmInitializeComparisonObject @ 0x140599AE8 (PiDmInitializeComparisonObject.c)
 *     SepGetCachedHandlesEntry @ 0x14065D118 (SepGetCachedHandlesEntry.c)
 *     PipFindDeviceOverrideEntry @ 0x1406DA434 (PipFindDeviceOverrideEntry.c)
 *     PiDmObjectCreate @ 0x1406F2ED0 (PiDmObjectCreate.c)
 *     PiDevCfgResolveVariable @ 0x1406F469C (PiDevCfgResolveVariable.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x1406F5108 (PiDevCfgBuildDriverNodeStrongName.c)
 *     PnpGenerateDeviceIdsHash @ 0x1406FEE48 (PnpGenerateDeviceIdsHash.c)
 *     KsepCacheDeviceHash @ 0x14075A750 (KsepCacheDeviceHash.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140841E00 (PiCreateDriverSwDeviceCallback.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x14086A8F0 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopPluginQuerySocSubsystemBlockingTime @ 0x14086BF6C (PopPluginQuerySocSubsystemBlockingTime.c)
 *     PopPluginQuerySocSubsystemMetadata @ 0x14086C0B8 (PopPluginQuerySocSubsystemMetadata.c)
 *     PipInitDeviceOverrideCache @ 0x1409CB648 (PipInitDeviceOverrideCache.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlHashUnicodeString(
        PCUNICODE_STRING String,
        BOOLEAN CaseInSensitive,
        ULONG HashAlgorithm,
        PULONG HashValue)
{
  ULONG v4; // eax
  wchar_t *Buffer; // r10
  int v6; // r11d
  unsigned __int16 v7; // bx
  int v8; // ecx
  int v10; // ecx

  v4 = 0;
  if ( !String )
    return -1073741811;
  if ( !HashValue )
    return -1073741811;
  Buffer = String->Buffer;
  *HashValue = 0;
  v6 = String->Length >> 1;
  if ( HashAlgorithm > 1 )
    return -1073741811;
  if ( CaseInSensitive )
  {
    for ( ; v6; v4 = v8 + 65599 * v4 )
    {
      v7 = *Buffer++;
      --v6;
      if ( v7 >= 0x61u )
      {
        if ( v7 > 0x7Au )
          v8 = (unsigned __int16)(v7
                                + *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * (v7 & 0xF)
                                                                                          + 2
                                                                                          * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * ((v7 >> 4) & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * ((unsigned __int64)v7 >> 8)]]]);
        else
          v8 = v7 - 32;
      }
      else
      {
        v8 = v7;
      }
    }
  }
  else
  {
    for ( ; v6; --v6 )
    {
      v10 = *Buffer++;
      v4 = v10 + 65599 * v4;
    }
  }
  *HashValue = v4;
  return 0;
}
