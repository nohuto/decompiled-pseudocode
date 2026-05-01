/*
 * XREFs of _HamTerminateHostOnProcessExit@32 @ 0x1000BE90
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 */

CLIENT_CALL_RETURN __stdcall HamTerminateHostOnProcessExit(
        _DWORD *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned __int8 a8)
{
  CLIENT_CALL_RETURN result; // eax

  result.Pointer = _NdrClientCall4(&stru_10001688, &byte_100033D0, *a1, a2, a3, a4, a5, a6, a7, a8).Pointer;
  if ( result.Simple >= 0 )
    return 0;
  return result;
}
