/*
 * XREFs of RtlCreateUnicodeString @ 0x14065AA30
 * Callers:
 *     EtwpRealtimeCreateLogfile @ 0x1405C0F90 (EtwpRealtimeCreateLogfile.c)
 *     EtwpStartLogger @ 0x1406591C0 (EtwpStartLogger.c)
 *     EtwpCaptureString @ 0x14065A044 (EtwpCaptureString.c)
 *     RtlConvertSidToUnicodeString @ 0x14065A6D0 (RtlConvertSidToUnicodeString.c)
 *     PiDevCfgResolveVariable @ 0x1406F341C (PiDevCfgResolveVariable.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1406F3980 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgQueryDriverNode @ 0x1406F5BD0 (PiDevCfgQueryDriverNode.c)
 *     PipGenerateContainerID @ 0x140700980 (PipGenerateContainerID.c)
 *     PiDrvDbCreateNode @ 0x14073AB68 (PiDrvDbCreateNode.c)
 *     DrvDbCreateDatabaseNode @ 0x14073B408 (DrvDbCreateDatabaseNode.c)
 *     _PnpCtxCreateNode @ 0x14073B93C (_PnpCtxCreateNode.c)
 *     EtwStartAutoLogger @ 0x140741E88 (EtwStartAutoLogger.c)
 *     IopCopyBootLogRegistryToFile @ 0x140745728 (IopCopyBootLogRegistryToFile.c)
 *     EtwpQueryRegistryCallback @ 0x14074B990 (EtwpQueryRegistryCallback.c)
 *     PiGetDefaultMessageString @ 0x1407537FC (PiGetDefaultMessageString.c)
 *     CmpCreateHwProfileFriendlyName @ 0x1407FBD78 (CmpCreateHwProfileFriendlyName.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x14082DC0C (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14082E028 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x14083E394 (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x14083ECF8 (PiDrvDbResolveNodeFilePaths.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140840BC0 (PiCreateDriverSwDeviceCallback.c)
 *     AslPathWildcardFindFirst @ 0x1408EA508 (AslPathWildcardFindFirst.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140902ADC (DrvDbSetDriverDatabaseMappedProperty.c)
 *     PipInitDeviceOverrideCache @ 0x1409CA648 (PipInitDeviceOverrideCache.c)
 *     CmpOpenSystemDriverHiveContext @ 0x1409CC4F0 (CmpOpenSystemDriverHiveContext.c)
 * Callees:
 *     memmove @ 0x1401D1440 (memmove.c)
 *     ExFreePool @ 0x14034D780 (ExFreePool.c)
 *     ExpAllocateStringRoutine @ 0x1406B2120 (ExpAllocateStringRoutine.c)
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
