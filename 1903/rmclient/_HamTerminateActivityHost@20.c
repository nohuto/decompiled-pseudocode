/*
 * XREFs of _HamTerminateActivityHost@20 @ 0x1000B9C0
 * Callers:
 *     <none>
 * Callees:
 *     _HamTerminateActivityHostEx@28 @ 0x1000B950 (_HamTerminateActivityHostEx@28.c)
 */

CLIENT_CALL_RETURN __stdcall HamTerminateActivityHost(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  return HamTerminateActivityHostEx(a1, a2, a3, a4, a5, 0, 0);
}
