/*
 * XREFs of xxxSetSystemCursor @ 0x1C01F96B4
 * Callers:
 *     NtUserSetSystemCursor @ 0x1C01F59B0 (NtUserSetSystemCursor.c)
 * Callees:
 *     CheckWinstaAttributeAccess @ 0x1C006A910 (CheckWinstaAttributeAccess.c)
 *     xxxSetMonitorIcoCurIndex @ 0x1C006B19C (xxxSetMonitorIcoCurIndex.c)
 *     zzzSetSystemImage @ 0x1C006B2C0 (zzzSetSystemImage.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02AFC0C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxSetSystemCursor(struct tagCURSOR *a1, __int16 a2)
{
  _WORD *v4; // rax
  int v5; // ebx
  __int64 i; // rcx

  if ( !(unsigned int)CheckWinstaAttributeAccess(16LL) )
    return 0LL;
  v4 = *(_WORD **)gasyscur;
  v5 = 0;
  for ( i = 0LL; i < 19; ++i )
  {
    if ( *v4 == a2 )
      break;
    ++v5;
    v4 += 8;
  }
  if ( v5 == 19 )
    return 0LL;
  if ( (*((_DWORD *)a1 + 20) & 0x40) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(i);
    return 0LL;
  }
  if ( !(unsigned int)zzzSetSystemImage(a1, *(_QWORD *)&gasyscur[8 * v5 + 4]) )
    return 0LL;
  xxxSetMonitorIcoCurIndex(0, 0, v5);
  return 1LL;
}
