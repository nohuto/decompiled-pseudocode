/*
 * XREFs of PsGetSiloBySessionId @ 0x140597B48
 * Callers:
 *     SessionIsInteractive @ 0x140001FF8 (SessionIsInteractive.c)
 *     SeQuerySessionIdTokenEx @ 0x140597110 (SeQuerySessionIdTokenEx.c)
 *     SeQueryServerSiloToken @ 0x1406C67A0 (SeQueryServerSiloToken.c)
 *     PsIsServiceSession @ 0x1406D0120 (PsIsServiceSession.c)
 *     EtwWmitraceWorker @ 0x1408BEA40 (EtwWmitraceWorker.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     MmGetSessionById @ 0x14007E4D0 (MmGetSessionById.c)
 */

__int64 __fastcall PsGetSiloBySessionId(unsigned int a1, _QWORD *a2)
{
  _QWORD *SessionById; // rax
  __int64 v4; // rbx
  __int64 result; // rax

  SessionById = (_QWORD *)MmGetSessionById(a1);
  if ( !SessionById )
    return 3221226581LL;
  v4 = *(_QWORD *)(SessionById[128] + 8304LL);
  ObfDereferenceObject(SessionById);
  result = 0LL;
  *a2 = v4;
  return result;
}
