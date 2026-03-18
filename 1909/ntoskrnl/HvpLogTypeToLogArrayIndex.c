/*
 * XREFs of HvpLogTypeToLogArrayIndex @ 0x14068FCBC
 * Callers:
 *     CmpFlushHive @ 0x14063725C (CmpFlushHive.c)
 *     CmpDoFileSetSizeEx @ 0x14068C5C0 (CmpDoFileSetSizeEx.c)
 *     HvTruncateCurrentLogFileIfRequired @ 0x14068FA50 (HvTruncateCurrentLogFileIfRequired.c)
 *     CmpInitializeActualFileSizes @ 0x14068FB38 (CmpInitializeActualFileSizes.c)
 *     HvWriteLogFile @ 0x1406908A4 (HvWriteLogFile.c)
 *     HvSwapLogFiles @ 0x1406E92C8 (HvSwapLogFiles.c)
 *     HvIsCurrentLogSwappable @ 0x1406EDB88 (HvIsCurrentLogSwappable.c)
 *     HvTruncateAllLogFilesIfRequired @ 0x1406EFFD4 (HvTruncateAllLogFilesIfRequired.c)
 *     HvResetLogFileStatusAll @ 0x1406F0330 (HvResetLogFileStatusAll.c)
 *     HvpPerformLogFileRecovery @ 0x140830684 (HvpPerformLogFileRecovery.c)
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
