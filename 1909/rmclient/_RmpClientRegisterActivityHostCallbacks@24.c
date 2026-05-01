/*
 * XREFs of _RmpClientRegisterActivityHostCallbacks@24 @ 0x1001191D
 * Callers:
 *     _RmRegisterActivityHostCallbacks@24 @ 0x100113E0 (_RmRegisterActivityHostCallbacks@24.c)
 * Callees:
 *     _HamIpcChannelAddCallback@4 @ 0x100072A0 (_HamIpcChannelAddCallback@4.c)
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 *     _RmpClientCallbackAllocate@28 @ 0x10011C12 (_RmpClientCallbackAllocate@28.c)
 */

CLIENT_CALL_RETURN __fastcall RmpClientRegisterActivityHostCallbacks(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        _DWORD *a6)
{
  CLIENT_CALL_RETURN result; // eax
  _DWORD *v8; // ecx
  CLIENT_CALL_RETURN v9; // [esp+14h] [ebp-20h]
  PVOID P; // [esp+18h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  P = 0;
  if ( (a4 & a3) == 0xFFFFFFFF )
  {
    result.Simple = -1073741583;
  }
  else
  {
    result.Simple = RmpClientCallbackAllocate(a2, a5, a3, a4, &P);
    if ( result.Simple >= 0 )
      result.Simple = 0;
  }
  v9.Pointer = result.Pointer;
  if ( result.Simple >= 0 )
  {
    ms_exc.registration.TryLevel = 0;
    result.Pointer = _NdrClientCall4(&stru_10001928, &byte_10003ED2, *(_DWORD *)(a1 + 8), a3, a4, a6).Pointer;
    v9.Pointer = result.Pointer;
    ms_exc.registration.TryLevel = -2;
    if ( result.Simple >= 0 )
    {
      v8 = P;
      *((_DWORD *)P + 6) = *a6;
      v8[7] = a6[1];
      HamIpcChannelAddCallback(v8);
      P = 0;
      result.Simple = 0;
      v9.Simple = 0;
    }
  }
  if ( P )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
    return v9;
  }
  return result;
}
