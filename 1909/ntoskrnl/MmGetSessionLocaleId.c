/*
 * XREFs of MmGetSessionLocaleId @ 0x1405EA558
 * Callers:
 *     PspUserThreadStartup @ 0x1405E7470 (PspUserThreadStartup.c)
 *     NtQueryDefaultLocale @ 0x1406CFA20 (NtQueryDefaultLocale.c)
 * Callees:
 *     <none>
 */

__int64 MmGetSessionLocaleId()
{
  _KPROCESS *Process; // rcx
  unsigned __int64 v1; // rax

  Process = KeGetCurrentThread()->ApcState.Process;
  v1 = Process[1].ActiveProcessors.Bitmap[1];
  if ( !v1 || (Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
    return (unsigned int)PsDefaultThreadLocaleId;
  else
    return *(unsigned int *)(v1 + 96);
}
