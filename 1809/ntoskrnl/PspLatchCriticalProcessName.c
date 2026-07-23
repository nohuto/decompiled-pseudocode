/*
 * XREFs of PspLatchCriticalProcessName @ 0x140583780
 * Callers:
 *     PspCatchCriticalBreak @ 0x14088C6D0 (PspCatchCriticalBreak.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x1400922CC (PsGetServerSiloGlobals.c)
 *     strncpy_s @ 0x14019BAA0 (strncpy_s.c)
 */

errno_t __fastcall PspLatchCriticalProcessName(__int64 a1, __int64 a2, int a3)
{
  const char *v4; // rdx
  void *ServerSiloGlobals; // rbx
  errno_t result; // eax

  ServerSiloGlobals = PsGetServerSiloGlobals(a1);
  result = _InterlockedCompareExchange((volatile signed __int32 *)ServerSiloGlobals + 292, 1, 0);
  if ( !result )
  {
    result = strncpy_s((char *)ServerSiloGlobals + 1176, 0xFuLL, v4, 0xFFFFFFFFFFFFFFFFuLL);
    *((_DWORD *)ServerSiloGlobals + 293) = a3;
  }
  return result;
}
