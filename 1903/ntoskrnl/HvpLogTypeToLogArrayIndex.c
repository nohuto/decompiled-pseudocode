/*
 * XREFs of HvpLogTypeToLogArrayIndex @ 0x140660DB4
 * Callers:
 *     CmpFlushHive @ 0x1406344A4 (CmpFlushHive.c)
 *     HvTruncateCurrentLogFileIfRequired @ 0x140660B48 (HvTruncateCurrentLogFileIfRequired.c)
 *     CmpInitializeActualFileSizes @ 0x140660C30 (CmpInitializeActualFileSizes.c)
 *     CmpDoFileSetSizeEx @ 0x140662D3C (CmpDoFileSetSizeEx.c)
 *     HvWriteLogFile @ 0x1406637BC (HvWriteLogFile.c)
 *     HvSwapLogFiles @ 0x1406E822C (HvSwapLogFiles.c)
 *     HvIsCurrentLogSwappable @ 0x1406EC91C (HvIsCurrentLogSwappable.c)
 *     HvTruncateAllLogFilesIfRequired @ 0x1406EE4DC (HvTruncateAllLogFilesIfRequired.c)
 *     HvResetLogFileStatusAll @ 0x1406EE7E0 (HvResetLogFileStatusAll.c)
 *     HvpPerformLogFileRecovery @ 0x140830814 (HvpPerformLogFileRecovery.c)
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
