/*
 * XREFs of _HamQueryTaskCompletionsForTerminateGraph@12 @ 0x10012D60
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 */

CLIENT_CALL_RETURN __stdcall HamQueryTaskCompletionsForTerminateGraph(_DWORD *a1, int a2, _DWORD *a3)
{
  CLIENT_CALL_RETURN result; // eax
  int v4; // [esp+10h] [ebp-28h] BYREF
  int v5; // [esp+14h] [ebp-24h]
  CLIENT_CALL_RETURN v6; // [esp+18h] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]

  v4 = 0;
  v5 = 0;
  ms_exc.registration.TryLevel = 0;
  result.Pointer = _NdrClientCall4(&stru_10001178, &byte_100028AA, *a1, a2, &v4).Pointer;
  v6.Pointer = result.Pointer;
  ms_exc.registration.TryLevel = -2;
  if ( result.Simple >= 0 )
  {
    *a3 = v4;
    a3[1] = v5;
    return 0;
  }
  return result;
}
