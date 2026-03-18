/*
 * XREFs of ExSetFirmwareEnvironmentVariable @ 0x1408CFB80
 * Callers:
 *     PopCheckpointSystemSleepUnsafe @ 0x14057E0E4 (PopCheckpointSystemSleepUnsafe.c)
 *     PopClearSystemSleepCheckpoint @ 0x1406E0258 (PopClearSystemSleepCheckpoint.c)
 *     NtSetSystemEnvironmentValueEx @ 0x1408D5BE0 (NtSetSystemEnvironmentValueEx.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x1408D24C0 (ExpSetFirmwareEnvironmentVariable.c)
 *     ExpUnicodeStringToNonpagedWStr @ 0x1408D3334 (ExpUnicodeStringToNonpagedWStr.c)
 */

__int64 __fastcall ExSetFirmwareEnvironmentVariable(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  WCHAR *v6; // rdi
  unsigned int v7; // ebx

  if ( dword_140409DD0 != 2 )
    return 3221225474LL;
  v6 = (WCHAR *)ExpUnicodeStringToNonpagedWStr();
  if ( !v6 )
    return 3221225626LL;
  v7 = ExpSetFirmwareEnvironmentVariable(v6, a5, 0);
  ExFreePoolWithTag(v6, 0);
  return v7;
}
