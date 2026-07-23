/*
 * XREFs of PiValidateEjectionRequest @ 0x1408417D0
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1406F0A30 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiValidateEjectionRequest(_DWORD *a1, _BYTE *a2)
{
  __int64 result; // rax

  if ( (a1[99] & 0x80000) != 0 || (unsigned int)(a1[142] - 3) <= 1 )
  {
    result = 0LL;
    *a2 = 0;
  }
  else if ( (a1[140] & 0x10) != 0 )
  {
    result = 0LL;
    *a2 = 1;
  }
  else
  {
    result = 2147483688LL;
    *a2 = 0;
  }
  return result;
}
