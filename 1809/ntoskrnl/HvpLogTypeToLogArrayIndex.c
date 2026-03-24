/*
 * XREFs of HvpLogTypeToLogArrayIndex @ 0x1405A62AC
 * Callers:
 *     HvTruncateCurrentLogFileIfRequired @ 0x1405A605C (HvTruncateCurrentLogFileIfRequired.c)
 *     CmpInitializeActualFileSizes @ 0x1405A6144 (CmpInitializeActualFileSizes.c)
 *     CmpFlushHive @ 0x1405B2F54 (CmpFlushHive.c)
 *     HvWriteLogFile @ 0x1406B85DC (HvWriteLogFile.c)
 *     CmpDoFileSetSizeEx @ 0x1406B8940 (CmpDoFileSetSizeEx.c)
 *     HvSwapLogFiles @ 0x1406C963C (HvSwapLogFiles.c)
 *     HvIsCurrentLogSwappable @ 0x1406CD1AC (HvIsCurrentLogSwappable.c)
 *     HvTruncateAllLogFilesIfRequired @ 0x1406CF7D4 (HvTruncateAllLogFilesIfRequired.c)
 *     HvResetLogFileStatusAll @ 0x1406CFA0C (HvResetLogFileStatusAll.c)
 *     HvpPerformLogFileRecovery @ 0x1407F7B60 (HvpPerformLogFileRecovery.c)
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
