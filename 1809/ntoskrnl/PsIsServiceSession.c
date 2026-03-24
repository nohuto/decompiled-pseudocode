/*
 * XREFs of PsIsServiceSession @ 0x1406CEE80
 * Callers:
 *     PopGetSettingNotificationName @ 0x14058E66C (PopGetSettingNotificationName.c)
 *     PopInputDisabled @ 0x140878E78 (PopInputDisabled.c)
 * Callees:
 *     PsGetServerSiloServiceSessionId @ 0x1400067D0 (PsGetServerSiloServiceSessionId.c)
 *     PsGetSiloBySessionId @ 0x140596B48 (PsGetSiloBySessionId.c)
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
