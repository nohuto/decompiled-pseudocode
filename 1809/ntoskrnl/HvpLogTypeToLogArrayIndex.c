/*
 * XREFs of HvpLogTypeToLogArrayIndex @ 0x1405A72AC
 * Callers:
 *     HvTruncateCurrentLogFileIfRequired @ 0x1405A705C (HvTruncateCurrentLogFileIfRequired.c)
 *     CmpInitializeActualFileSizes @ 0x1405A7144 (CmpInitializeActualFileSizes.c)
 *     CmpFlushHive @ 0x1405B3F54 (CmpFlushHive.c)
 *     HvWriteLogFile @ 0x1406B987C (HvWriteLogFile.c)
 *     CmpDoFileSetSizeEx @ 0x1406B9BE0 (CmpDoFileSetSizeEx.c)
 *     HvSwapLogFiles @ 0x1406CA8DC (HvSwapLogFiles.c)
 *     HvIsCurrentLogSwappable @ 0x1406CE44C (HvIsCurrentLogSwappable.c)
 *     HvTruncateAllLogFilesIfRequired @ 0x1406D0A74 (HvTruncateAllLogFilesIfRequired.c)
 *     HvResetLogFileStatusAll @ 0x1406D0CAC (HvResetLogFileStatusAll.c)
 *     HvpPerformLogFileRecovery @ 0x1407F8D60 (HvpPerformLogFileRecovery.c)
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
