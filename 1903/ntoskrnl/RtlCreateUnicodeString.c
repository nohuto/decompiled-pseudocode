/*
 * XREFs of RtlCreateUnicodeString @ 0x140667B10
 * Callers:
 *     EtwpCaptureString @ 0x140667138 (EtwpCaptureString.c)
 *     RtlConvertSidToUnicodeString @ 0x1406677F0 (RtlConvertSidToUnicodeString.c)
 *     EtwpStartLogger @ 0x1406B5160 (EtwpStartLogger.c)
 *     EtwpRealtimeCreateLogfile @ 0x1406B7D7C (EtwpRealtimeCreateLogfile.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1406FBBB4 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgQueryDriverNode @ 0x1406FC2A0 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgResolveVariable @ 0x1406FDE58 (PiDevCfgResolveVariable.c)
 *     PipGenerateContainerID @ 0x14071BAF8 (PipGenerateContainerID.c)
 *     _PnpCtxCreateNode @ 0x14075527C (_PnpCtxCreateNode.c)
 *     DrvDbCreateDatabaseNode @ 0x140755A50 (DrvDbCreateDatabaseNode.c)
 *     PiDrvDbCreateNode @ 0x1407565AC (PiDrvDbCreateNode.c)
 *     IopCopyBootLogRegistryToFile @ 0x140769BE0 (IopCopyBootLogRegistryToFile.c)
 *     EtwStartAutoLogger @ 0x14076DA0C (EtwStartAutoLogger.c)
 *     EtwpQueryRegistryCallback @ 0x14076E960 (EtwpQueryRegistryCallback.c)
 *     PiGetDefaultMessageString @ 0x140779578 (PiGetDefaultMessageString.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140835168 (CmpCreateHwProfileFriendlyName.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x140868468 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x140868888 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x14087A474 (PiDrvDbResolveNodeFilePaths.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14087C5A0 (PiCreateDriverSwDeviceCallback.c)
 *     AslPathWildcardFindFirst @ 0x1409272DC (AslPathWildcardFindFirst.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140940FC0 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140A11A10 (CmpOpenSystemDriverHiveContext.c)
 *     PipInitDeviceOverrideCache @ 0x140A1BE74 (PipInitDeviceOverrideCache.c)
 * Callees:
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ExpAllocateStringRoutine @ 0x1406D4F60 (ExpAllocateStringRoutine.c)
 */

BOOLEAN __stdcall RtlCreateUnicodeString(PUNICODE_STRING DestinationString, PCWSTR SourceString)
{
  __int64 v4; // rax
  unsigned int v5; // esi
  wchar_t *StringRoutine; // rax

  v4 = -1LL;
  do
    ++v4;
  while ( SourceString[v4] );
  v5 = 2 * v4 + 2;
  if ( (unsigned int)(2 * v4 + 1) > 0xFFFD )
    return 0;
  StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v5);
  DestinationString->Buffer = StringRoutine;
  if ( !StringRoutine )
    return 0;
  DestinationString->MaximumLength = v5;
  memmove(StringRoutine, SourceString, v5);
  DestinationString->Length = v5 - 2;
  return 1;
}
