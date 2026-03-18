/*
 * XREFs of IsImmersiveBroker @ 0x1C002DC00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsImmersiveBroker(__int64 a1)
{
  PVOID v1; // rax

  return (*(_DWORD *)(a1 + 812) & 0x30) == 0x20 || (v1 = *(PVOID *)a1) != 0LL && v1 == g_pepDwm || v1 == gpepCSRSS;
}
