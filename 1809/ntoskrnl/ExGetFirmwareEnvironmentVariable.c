/*
 * XREFs of ExGetFirmwareEnvironmentVariable @ 0x1406CADC0
 * Callers:
 *     NtQuerySystemEnvironmentValueEx @ 0x1406CAD20 (NtQuerySystemEnvironmentValueEx.c)
 *     ExpIsIumEncryptionKeyAvailable @ 0x1408CBA00 (ExpIsIumEncryptionKeyAvailable.c)
 *     PopCheckShutdownMarker @ 0x1409DD374 (PopCheckShutdownMarker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x1408D0DC8 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpUnicodeStringToNonpagedWStr @ 0x1408D3334 (ExpUnicodeStringToNonpagedWStr.c)
 */

__int64 __fastcall ExGetFirmwareEnvironmentVariable(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  WCHAR *v6; // rdi
  unsigned int FirmwareEnvironmentVariable; // ebx

  if ( dword_140409DD0 != 2 )
    return 3221225474LL;
  v6 = (WCHAR *)ExpUnicodeStringToNonpagedWStr();
  if ( !v6 )
    return 3221225626LL;
  FirmwareEnvironmentVariable = ExpGetFirmwareEnvironmentVariable(v6, a5, 0);
  ExFreePoolWithTag(v6, 0);
  return FirmwareEnvironmentVariable;
}
