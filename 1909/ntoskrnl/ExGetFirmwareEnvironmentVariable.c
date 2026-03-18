/*
 * XREFs of ExGetFirmwareEnvironmentVariable @ 0x1406EDD60
 * Callers:
 *     NtQuerySystemEnvironmentValueEx @ 0x1406EDCB0 (NtQuerySystemEnvironmentValueEx.c)
 *     ExpIsIumEncryptionKeyAvailable @ 0x140908E08 (ExpIsIumEncryptionKeyAvailable.c)
 *     PopCheckShutdownMarker @ 0x1409FBC20 (PopCheckShutdownMarker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x14090E040 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpUnicodeStringToNonpagedWStr @ 0x140910648 (ExpUnicodeStringToNonpagedWStr.c)
 */

__int64 __fastcall ExGetFirmwareEnvironmentVariable(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  WCHAR *v6; // rdi
  unsigned int FirmwareEnvironmentVariable; // ebx

  if ( dword_140432490 != 2 )
    return 3221225474LL;
  v6 = (WCHAR *)ExpUnicodeStringToNonpagedWStr();
  if ( !v6 )
    return 3221225626LL;
  FirmwareEnvironmentVariable = ExpGetFirmwareEnvironmentVariable(v6, a5, 0);
  ExFreePoolWithTag(v6, 0);
  return FirmwareEnvironmentVariable;
}
