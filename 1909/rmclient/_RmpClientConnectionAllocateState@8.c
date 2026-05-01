/*
 * XREFs of _RmpClientConnectionAllocateState@8 @ 0x1001177D
 * Callers:
 *     _RmpClientConnectToResourceManager@8 @ 0x10011719 (_RmpClientConnectToResourceManager@8.c)
 * Callees:
 *     _RmpClientWnfCreateSubscription@16 @ 0x1000C072 (_RmpClientWnfCreateSubscription@16.c)
 *     __SEH_prolog4_GS @ 0x1000D088 (__SEH_prolog4_GS.c)
 */

CLIENT_CALL_RETURN __fastcall RmpClientConnectionAllocateState(int a1, int a2)
{
  CLIENT_CALL_RETURN result; // eax
  _DWORD v4[3]; // [esp+1Ch] [ebp-24h] BYREF
  CPPEH_RECORD ms_exc; // [esp+28h] [ebp-18h]

  ms_exc.registration.TryLevel = 0;
  result.Pointer = _NdrClientCall4(&stru_10001928, &byte_10003E7A, a1, a2 + 8, v4).Pointer;
  ms_exc.registration.TryLevel = -2;
  if ( result.Simple >= 0 )
  {
    result.Simple = RmpClientWnfCreateSubscription(v4, (int)HampIpcChannelWnfCallback, a2 + 12, (_DWORD *)(a2 + 12));
    if ( result.Simple >= 0 )
      return 0;
  }
  return result;
}
