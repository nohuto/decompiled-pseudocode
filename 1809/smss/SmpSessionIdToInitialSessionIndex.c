/*
 * XREFs of SmpSessionIdToInitialSessionIndex @ 0x140002B78
 * Callers:
 *     SmpTerminateCSR @ 0x14000105C (SmpTerminateCSR.c)
 *     SmpExecPgm @ 0x140002850 (SmpExecPgm.c)
 *     SmpSetCoreProcessIds @ 0x140002A94 (SmpSetCoreProcessIds.c)
 *     SmpDestroyControlBlock @ 0x1400048D8 (SmpDestroyControlBlock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpSessionIdToInitialSessionIndex(int a1)
{
  __int64 result; // rax
  _DWORD *i; // rdx

  if ( a1 == -1 )
    return 0xFFFFFFFFLL;
  result = 0LL;
  if ( !SmpNumberInitialSessions )
    return 0xFFFFFFFFLL;
  for ( i = (_DWORD *)SmpCoreProcessIds; a1 != *i; i += 10 )
  {
    result = (unsigned int)(result + 1);
    if ( (unsigned int)result >= SmpNumberInitialSessions )
      return 0xFFFFFFFFLL;
  }
  return result;
}
