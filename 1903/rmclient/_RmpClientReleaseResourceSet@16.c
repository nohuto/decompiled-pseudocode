/*
 * XREFs of _RmpClientReleaseResourceSet@16 @ 0x10011A05
 * Callers:
 *     _RmReleaseResourceSetEx@16 @ 0x10011410 (_RmReleaseResourceSetEx@16.c)
 * Callees:
 *     _HamIpcChannelObjectMakeZombie@8 @ 0x10007E30 (_HamIpcChannelObjectMakeZombie@8.c)
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 *     _memset @ 0x1000D154 (_memset.c)
 */

CLIENT_CALL_RETURN __fastcall RmpClientReleaseResourceSet(int a1, int a2, int a3, int a4)
{
  CLIENT_CALL_RETURN result; // eax
  _DWORD v5[12]; // [esp+10h] [ebp-54h] BYREF
  int v6; // [esp+40h] [ebp-24h]
  CLIENT_CALL_RETURN v7; // [esp+44h] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+4Ch] [ebp-18h]

  v6 = a1;
  ms_exc.registration.TryLevel = 0;
  result.Pointer = _NdrClientCall4(&stru_10001928, &byte_10003FC8, *(_DWORD *)(a1 + 8), a3, a4, a2).Pointer;
  v7.Pointer = result.Pointer;
  ms_exc.registration.TryLevel = -2;
  if ( result.Simple >= 0 )
  {
    memset(v5, 0, sizeof(v5));
    v5[2] = a3;
    v5[3] = a4;
    HamIpcChannelObjectMakeZombie((_DWORD *)(v6 + 12), (int)v5);
    return 0;
  }
  return result;
}
