/*
 * XREFs of PnpGetLogString @ 0x140144C44
 * Callers:
 *     PiDevCfgLogDeviceConfigured @ 0x1406FD994 (PiDevCfgLogDeviceConfigured.c)
 * Callees:
 *     <none>
 */

int *__fastcall PnpGetLogString(__int64 a1)
{
  int *result; // rax

  if ( !a1 )
    return &dword_14094F2E4;
  result = *(int **)(a1 + 8);
  if ( !result )
    return &dword_14094F2E4;
  return result;
}
