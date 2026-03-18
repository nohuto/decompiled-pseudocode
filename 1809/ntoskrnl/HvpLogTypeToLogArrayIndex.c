/*
 * XREFs of HvpLogTypeToLogArrayIndex @ 0x1405A62AC
 * Callers:
 *     HvTruncateCurrentLogFileIfRequired @ 0x1405A605C (HvTruncateCurrentLogFileIfRequired.c)
 *     CmpInitializeActualFileSizes @ 0x1405A6144 (CmpInitializeActualFileSizes.c)
 *     CmpFlushHive @ 0x1405B2F54 (CmpFlushHive.c)
 *     HvWriteLogFile @ 0x1406B85FC (HvWriteLogFile.c)
 *     CmpDoFileSetSizeEx @ 0x1406B8960 (CmpDoFileSetSizeEx.c)
 *     HvSwapLogFiles @ 0x1406C965C (HvSwapLogFiles.c)
 *     HvIsCurrentLogSwappable @ 0x1406CD1CC (HvIsCurrentLogSwappable.c)
 *     HvTruncateAllLogFilesIfRequired @ 0x1406CF7F4 (HvTruncateAllLogFilesIfRequired.c)
 *     HvResetLogFileStatusAll @ 0x1406CFA2C (HvResetLogFileStatusAll.c)
 *     HvpPerformLogFileRecovery @ 0x1407F7B80 (HvpPerformLogFileRecovery.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpLogTypeToLogArrayIndex(int a1)
{
  __int64 result; // rax

  result = 1LL;
  if ( a1 == 4 || a1 == 1 )
    return 0LL;
  return result;
}
