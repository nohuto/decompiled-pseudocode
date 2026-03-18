/*
 * XREFs of PnpGetLogString @ 0x14015D214
 * Callers:
 *     PiDevCfgLogDeviceConfigured @ 0x1406F3980 (PiDevCfgLogDeviceConfigured.c)
 * Callees:
 *     <none>
 */

int *__fastcall PnpGetLogString(__int64 a1)
{
  int *result; // rax

  if ( !a1 )
    return &dword_1409111A4;
  result = *(int **)(a1 + 8);
  if ( !result )
    return &dword_1409111A4;
  return result;
}
