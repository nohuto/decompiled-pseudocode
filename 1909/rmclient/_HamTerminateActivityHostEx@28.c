/*
 * XREFs of _HamTerminateActivityHostEx@28 @ 0x1000B950
 * Callers:
 *     _HamTerminateActivityHost@20 @ 0x1000B9C0 (_HamTerminateActivityHost@20.c)
 * Callees:
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 */

CLIENT_CALL_RETURN __stdcall HamTerminateActivityHostEx(_DWORD *a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  CLIENT_CALL_RETURN result; // eax

  result.Pointer = _NdrClientCall4(&stru_10001688, &byte_10003298, *a1, a2, a3, a4, a5, a6, a7).Pointer;
  if ( result.Simple >= 0 )
    return 0;
  return result;
}
