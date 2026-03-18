/*
 * XREFs of PsIsServiceSession @ 0x1406EFC70
 * Callers:
 *     PopGetSettingNotificationName @ 0x14069D2A4 (PopGetSettingNotificationName.c)
 *     PopInputDisabled @ 0x1408B592C (PopInputDisabled.c)
 * Callees:
 *     PsGetServerSiloServiceSessionId @ 0x140002320 (PsGetServerSiloServiceSessionId.c)
 *     PsGetSiloBySessionId @ 0x1405BC14C (PsGetSiloBySessionId.c)
 */

bool __fastcall PsIsServiceSession(unsigned int a1)
{
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  if ( !a1 )
    return 1;
  if ( (int)PsGetSiloBySessionId(a1, &v3) < 0 )
    return 0;
  return (unsigned int)PsGetServerSiloServiceSessionId(v3) == a1;
}
