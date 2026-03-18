/*
 * XREFs of IsImmersiveBroker @ 0x1C0033DE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IsImmersiveBroker(__int64 a1)
{
  PVOID v1; // rax
  unsigned int v2; // ecx

  if ( (*(_DWORD *)(a1 + 812) & 0x30) == 0x20 )
    return 1LL;
  v1 = *(PVOID *)a1;
  v2 = 0;
  if ( v1 )
  {
    if ( v1 == g_pepDwm )
      return 1LL;
  }
  LOBYTE(v2) = v1 == gpepCSRSS;
  return v2;
}
