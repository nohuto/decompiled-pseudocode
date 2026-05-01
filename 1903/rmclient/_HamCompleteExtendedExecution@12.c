/*
 * XREFs of _HamCompleteExtendedExecution@12 @ 0x10007C90
 * Callers:
 *     <none>
 * Callees:
 *     _HamIpcChannelObjectMakeZombie@8 @ 0x10007E30 (_HamIpcChannelObjectMakeZombie@8.c)
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 *     _memset @ 0x1000D154 (_memset.c)
 */

CLIENT_CALL_RETURN __stdcall HamCompleteExtendedExecution(_DWORD *a1, int a2, int a3)
{
  CLIENT_CALL_RETURN result; // eax
  _DWORD v4[17]; // [esp+10h] [ebp-60h] BYREF
  CPPEH_RECORD ms_exc; // [esp+58h] [ebp-18h]

  ms_exc.registration.TryLevel = 0;
  result.Pointer = _NdrClientCall4(&stru_10001178, &byte_1000294C, *a1, a2, a3).Pointer;
  v4[16] = result.Pointer;
  ms_exc.registration.TryLevel = -2;
  if ( result.Simple >= 0 )
  {
    memset(v4, 0, 0x40u);
    v4[0] = a2;
    v4[1] = a3;
    v4[2] = 0;
    v4[3] = 0;
    v4[4] = 3;
    HamIpcChannelObjectMakeZombie(a1 + 3, v4);
    return 0;
  }
  return result;
}
