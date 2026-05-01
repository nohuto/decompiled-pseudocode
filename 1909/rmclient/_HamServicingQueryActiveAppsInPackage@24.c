/*
 * XREFs of _HamServicingQueryActiveAppsInPackage@24 @ 0x10005680
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 */

CLIENT_CALL_RETURN __stdcall HamServicingQueryActiveAppsInPackage(
        _DWORD *a1,
        int a2,
        int a3,
        int a4,
        _DWORD *a5,
        _DWORD *a6)
{
  CLIENT_CALL_RETURN result; // eax
  int v7; // [esp+18h] [ebp-20h] BYREF
  int v8; // [esp+1Ch] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]

  v8 = 0;
  v7 = 0;
  ms_exc.registration.TryLevel = 0;
  result.Pointer = _NdrClientCall4(&stru_10001050, &byte_10002524, *a1, a2, a3, a4, &v8, &v7).Pointer;
  ms_exc.registration.TryLevel = -2;
  if ( result.Simple >= 0 )
  {
    *a5 = v8;
    *a6 = v7;
    return 0;
  }
  return result;
}
