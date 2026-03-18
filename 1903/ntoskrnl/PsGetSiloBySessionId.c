/*
 * XREFs of PsGetSiloBySessionId @ 0x1405BBD6C
 * Callers:
 *     SessionIsInteractive @ 0x1400EBC4C (SessionIsInteractive.c)
 *     SeQuerySessionIdTokenEx @ 0x1405BBC90 (SeQuerySessionIdTokenEx.c)
 *     SeQueryServerSiloToken @ 0x1406DDE80 (SeQueryServerSiloToken.c)
 *     PsIsServiceSession @ 0x1406EE49C (PsIsServiceSession.c)
 *     EtwWmitraceWorker @ 0x1408FA35C (EtwWmitraceWorker.c)
 * Callees:
 *     MmGetSessionById @ 0x1400023F0 (MmGetSessionById.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 */

__int64 __fastcall PsGetSiloBySessionId(unsigned int a1, _QWORD *a2)
{
  _QWORD *SessionById; // rax
  __int64 v4; // rbx
  __int64 result; // rax

  SessionById = (_QWORD *)MmGetSessionById(a1);
  if ( !SessionById )
    return 3221226581LL;
  v4 = *(_QWORD *)(SessionById[128] + 1328LL);
  ObfDereferenceObject(SessionById);
  result = 0LL;
  *a2 = v4;
  return result;
}
