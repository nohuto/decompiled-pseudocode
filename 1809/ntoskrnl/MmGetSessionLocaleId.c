/*
 * XREFs of MmGetSessionLocaleId @ 0x1405F72C4
 * Callers:
 *     PspUserThreadStartup @ 0x1405F7E40 (PspUserThreadStartup.c)
 *     NtQueryDefaultLocale @ 0x1406AF780 (NtQueryDefaultLocale.c)
 * Callees:
 *     <none>
 */

__int64 MmGetSessionLocaleId()
{
  _KPROCESS *Process; // rcx
  unsigned __int64 v1; // rax

  Process = KeGetCurrentThread()->ApcState.Process;
  v1 = Process[1].ActiveProcessors.Bitmap[2];
  if ( !v1 || (Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
    return (unsigned int)PsDefaultThreadLocaleId;
  else
    return *(unsigned int *)(v1 + 112);
}
