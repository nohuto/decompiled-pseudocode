/*
 * XREFs of RtlCreateUnicodeString @ 0x14065AA10
 * Callers:
 *     EtwpRealtimeCreateLogfile @ 0x1405C0F90 (EtwpRealtimeCreateLogfile.c)
 *     EtwpStartLogger @ 0x1406591A0 (EtwpStartLogger.c)
 *     EtwpCaptureString @ 0x14065A024 (EtwpCaptureString.c)
 *     RtlConvertSidToUnicodeString @ 0x14065A6B0 (RtlConvertSidToUnicodeString.c)
 *     PiDevCfgResolveVariable @ 0x1406F33FC (PiDevCfgResolveVariable.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1406F3960 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgQueryDriverNode @ 0x1406F5BB0 (PiDevCfgQueryDriverNode.c)
 *     PipGenerateContainerID @ 0x140700960 (PipGenerateContainerID.c)
 *     PiDrvDbCreateNode @ 0x14073AB48 (PiDrvDbCreateNode.c)
 *     DrvDbCreateDatabaseNode @ 0x14073B3E8 (DrvDbCreateDatabaseNode.c)
 *     _PnpCtxCreateNode @ 0x14073B91C (_PnpCtxCreateNode.c)
 *     EtwStartAutoLogger @ 0x140741E68 (EtwStartAutoLogger.c)
 *     IopCopyBootLogRegistryToFile @ 0x140745708 (IopCopyBootLogRegistryToFile.c)
 *     EtwpQueryRegistryCallback @ 0x14074B970 (EtwpQueryRegistryCallback.c)
 *     PiGetDefaultMessageString @ 0x1407537DC (PiGetDefaultMessageString.c)
 *     CmpCreateHwProfileFriendlyName @ 0x1407FBD58 (CmpCreateHwProfileFriendlyName.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x14082DBEC (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14082E008 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x14083E374 (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x14083ECD8 (PiDrvDbResolveNodeFilePaths.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140840BA0 (PiCreateDriverSwDeviceCallback.c)
 *     AslPathWildcardFindFirst @ 0x1408EA4E8 (AslPathWildcardFindFirst.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140902ABC (DrvDbSetDriverDatabaseMappedProperty.c)
 *     PipInitDeviceOverrideCache @ 0x1409CA648 (PipInitDeviceOverrideCache.c)
 *     CmpOpenSystemDriverHiveContext @ 0x1409CC4F0 (CmpOpenSystemDriverHiveContext.c)
 * Callees:
 *     memmove @ 0x1401D1540 (memmove.c)
 *     ExFreePool @ 0x14034D780 (ExFreePool.c)
 *     ExpAllocateStringRoutine @ 0x1406B2100 (ExpAllocateStringRoutine.c)
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
