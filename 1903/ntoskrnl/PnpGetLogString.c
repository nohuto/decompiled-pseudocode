/*
 * XREFs of PnpGetLogString @ 0x1401445A4
 * Callers:
 *     PiDevCfgLogDeviceConfigured @ 0x1406FBBB4 (PiDevCfgLogDeviceConfigured.c)
 * Callees:
 *     <none>
 */

int *__fastcall PnpGetLogString(__int64 a1)
{
  int *result; // rax

  if ( !a1 )
    return &dword_14094F874;
  result = *(int **)(a1 + 8);
  if ( !result )
    return &dword_14094F874;
  return result;
}
