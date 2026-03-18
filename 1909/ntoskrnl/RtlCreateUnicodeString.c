/*
 * XREFs of RtlCreateUnicodeString @ 0x140694F30
 * Callers:
 *     EtwpCaptureString @ 0x140694558 (EtwpCaptureString.c)
 *     RtlConvertSidToUnicodeString @ 0x140694C10 (RtlConvertSidToUnicodeString.c)
 *     EtwpStartLogger @ 0x1406A8918 (EtwpStartLogger.c)
 *     EtwpRealtimeCreateLogfile @ 0x1406AD46C (EtwpRealtimeCreateLogfile.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1406FD994 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgQueryDriverNode @ 0x1406FE080 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgResolveVariable @ 0x1406FFC38 (PiDevCfgResolveVariable.c)
 *     PipGenerateContainerID @ 0x14071D8E8 (PipGenerateContainerID.c)
 *     _PnpCtxCreateNode @ 0x140755D0C (_PnpCtxCreateNode.c)
 *     DrvDbCreateDatabaseNode @ 0x1407564E0 (DrvDbCreateDatabaseNode.c)
 *     PiDrvDbCreateNode @ 0x14075703C (PiDrvDbCreateNode.c)
 *     IopCopyBootLogRegistryToFile @ 0x1407595AC (IopCopyBootLogRegistryToFile.c)
 *     EtwStartAutoLogger @ 0x140770860 (EtwStartAutoLogger.c)
 *     EtwpQueryRegistryCallback @ 0x1407717C0 (EtwpQueryRegistryCallback.c)
 *     PiGetDefaultMessageString @ 0x14077CB58 (PiGetDefaultMessageString.c)
 *     CmpCreateHwProfileFriendlyName @ 0x1408347C8 (CmpCreateHwProfileFriendlyName.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x140867B68 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x140867F88 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x140879B74 (PiDrvDbResolveNodeFilePaths.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14087BCA0 (PiCreateDriverSwDeviceCallback.c)
 *     AslPathWildcardFindFirst @ 0x140926D3C (AslPathWildcardFindFirst.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140940A30 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140A121A8 (CmpOpenSystemDriverHiveContext.c)
 *     PipInitDeviceOverrideCache @ 0x140A1C050 (PipInitDeviceOverrideCache.c)
 * Callees:
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ExpAllocateStringRoutine @ 0x1406D4640 (ExpAllocateStringRoutine.c)
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
