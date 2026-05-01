/*
 * XREFs of _RmpClientUnregisterActivityHostCallbacks@12 @ 0x10011B0D
 * Callers:
 *     _RmUnregisterActivityHostCallbacks@12 @ 0x100114B0 (_RmUnregisterActivityHostCallbacks@12.c)
 * Callees:
 *     _HamIpcChannelObjectMakeZombie@8 @ 0x10007E30 (_HamIpcChannelObjectMakeZombie@8.c)
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 *     _memset @ 0x1000D154 (_memset.c)
 */

CLIENT_CALL_RETURN __thiscall RmpClientUnregisterActivityHostCallbacks(_DWORD *this, int a2, int a3)
{
  CLIENT_CALL_RETURN result; // eax
  _DWORD v4[12]; // [esp+10h] [ebp-54h] BYREF
  _DWORD *v5; // [esp+40h] [ebp-24h]
  CLIENT_CALL_RETURN v6; // [esp+44h] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+4Ch] [ebp-18h]

  v5 = this;
  ms_exc.registration.TryLevel = 0;
  result.Pointer = _NdrClientCall4(&stru_10001928, &byte_10003F08, this[2], a2, a3).Pointer;
  v6.Pointer = result.Pointer;
  ms_exc.registration.TryLevel = -2;
  if ( result.Simple >= 0 )
  {
    memset(v4, 0, sizeof(v4));
    v4[2] = a2;
    v4[3] = a3;
    HamIpcChannelObjectMakeZombie(v5 + 3, (int)v4);
    return 0;
  }
  return result;
}
