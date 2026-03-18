/*
 * XREFs of ExSetFirmwareEnvironmentVariable @ 0x14090D320
 * Callers:
 *     PopCheckpointSystemSleepUnsafe @ 0x1405ADFD4 (PopCheckpointSystemSleepUnsafe.c)
 *     PopClearSystemSleepCheckpoint @ 0x14072754C (PopClearSystemSleepCheckpoint.c)
 *     NtSetSystemEnvironmentValueEx @ 0x140913490 (NtSetSystemEnvironmentValueEx.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x14090FD14 (ExpSetFirmwareEnvironmentVariable.c)
 *     ExpUnicodeStringToNonpagedWStr @ 0x140910BE8 (ExpUnicodeStringToNonpagedWStr.c)
 */

__int64 __fastcall ExSetFirmwareEnvironmentVariable(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  WCHAR *v6; // rdi
  unsigned int v7; // ebx

  if ( dword_1404324F0 != 2 )
    return 3221225474LL;
  v6 = (WCHAR *)ExpUnicodeStringToNonpagedWStr();
  if ( !v6 )
    return 3221225626LL;
  v7 = ExpSetFirmwareEnvironmentVariable(v6, a5, 0);
  ExFreePoolWithTag(v6, 0);
  return v7;
}
