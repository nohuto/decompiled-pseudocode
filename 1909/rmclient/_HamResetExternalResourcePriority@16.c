/*
 * XREFs of _HamResetExternalResourcePriority@16 @ 0x10012EE0
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 */

CLIENT_CALL_RETURN __stdcall HamResetExternalResourcePriority(_DWORD *a1, int a2, int a3, unsigned __int8 a4)
{
  CLIENT_CALL_RETURN result; // eax

  result.Pointer = _NdrClientCall4(&stru_10001688, &byte_10003316, *a1, a2, a3, a4).Pointer;
  if ( result.Simple >= 0 )
    return 0;
  return result;
}
