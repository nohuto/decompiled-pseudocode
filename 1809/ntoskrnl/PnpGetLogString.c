/*
 * XREFs of PnpGetLogString @ 0x14015D234
 * Callers:
 *     PiDevCfgLogDeviceConfigured @ 0x1406F3960 (PiDevCfgLogDeviceConfigured.c)
 * Callees:
 *     <none>
 */

int *__fastcall PnpGetLogString(__int64 a1)
{
  int *result; // rax

  if ( !a1 )
    return &dword_140911184;
  result = *(int **)(a1 + 8);
  if ( !result )
    return &dword_140911184;
  return result;
}
