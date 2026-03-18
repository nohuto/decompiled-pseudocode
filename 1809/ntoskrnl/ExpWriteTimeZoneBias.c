/*
 * XREFs of ExpWriteTimeZoneBias @ 0x140583B28
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x140734694 (ExpRefreshTimeZoneInformation.c)
 *     ExInitializeUtcTimeZoneBias @ 0x140763F98 (ExInitializeUtcTimeZoneBias.c)
 *     Phase1InitializationDiscard @ 0x1409B3E10 (Phase1InitializationDiscard.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1400B9C00 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140109D20 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 __fastcall ExpWriteTimeZoneBias(_DWORD *a1)
{
  _DWORD *v2; // rdx
  __int64 result; // rax

  if ( PsIsCurrentThreadInServerSilo() )
    v2 = (_DWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 140) + 592LL);
  else
    v2 = (_DWORD *)0xFFFFF78000000020LL;
  v2[2] = a1[1];
  *v2 = *a1;
  result = (unsigned int)a1[1];
  v2[1] = result;
  return result;
}
