/*
 * XREFs of NtQueryDefaultLocale @ 0x1406CFA20
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionLocaleId @ 0x1405EA558 (MmGetSessionLocaleId.c)
 */

NTSTATUS __stdcall NtQueryDefaultLocale(BOOLEAN UserProfile, PLCID DefaultLocaleId)
{
  NTSTATUS v3; // r8d
  __int64 v4; // rcx
  DWORD SessionLocaleId; // eax

  v3 = 0;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v4 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)DefaultLocaleId < 0x7FFFFFFF0000LL )
      v4 = (__int64)DefaultLocaleId;
    *(_DWORD *)v4 = *(_DWORD *)v4;
  }
  if ( UserProfile )
    SessionLocaleId = MmGetSessionLocaleId();
  else
    SessionLocaleId = PsDefaultSystemLocaleId;
  *DefaultLocaleId = SessionLocaleId;
  return v3;
}
