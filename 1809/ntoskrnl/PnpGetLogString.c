/*
 * XREFs of PnpGetLogString @ 0x14015D334
 * Callers:
 *     PiDevCfgLogDeviceConfigured @ 0x1406F4C00 (PiDevCfgLogDeviceConfigured.c)
 * Callees:
 *     <none>
 */

int *__fastcall PnpGetLogString(__int64 a1)
{
  int *result; // rax

  if ( !a1 )
    return &dword_140912444;
  result = *(int **)(a1 + 8);
  if ( !result )
    return &dword_140912444;
  return result;
}
