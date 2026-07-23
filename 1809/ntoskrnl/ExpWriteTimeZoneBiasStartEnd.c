/*
 * XREFs of ExpWriteTimeZoneBiasStartEnd @ 0x140584B78
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x140735864 (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1400B9B60 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140109DC0 (PsGetCurrentServerSiloGlobals.c)
 */

_QWORD *__fastcall ExpWriteTimeZoneBiasStartEnd(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  _QWORD *result; // rax
  _QWORD *v6; // r8

  if ( PsIsCurrentThreadInServerSilo() )
  {
    v4 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 140);
    result = (_QWORD *)(v4 + 608);
    v6 = (_QWORD *)(v4 + 616);
  }
  else
  {
    result = (_QWORD *)0xFFFFF780000003C8LL;
    v6 = (_QWORD *)0xFFFFF780000003D0LL;
  }
  *result = a1;
  *v6 = a2;
  return result;
}
