/*
 * XREFs of _RmpClientSubscriptionDeliverPayload@12 @ 0x10011D70
 * Callers:
 *     <none>
 * Callees:
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 *     _RmpClientCallbackGenerateLastMessage@8 @ 0x10011CDF (_RmpClientCallbackGenerateLastMessage@8.c)
 */

char __stdcall RmpClientSubscriptionDeliverPayload(int a1, _DWORD *P, _DWORD *Flags)
{
  _DWORD *v3; // ecx
  int v4; // eax
  int (__thiscall *v5)(_DWORD, _DWORD *); // esi
  int (__thiscall *v6)(_DWORD, _DWORD *); // esi
  _DWORD v8[12]; // [esp+Ch] [ebp-30h] BYREF

  if ( Flags )
  {
    v3 = Flags;
  }
  else
  {
    RmpClientCallbackGenerateLastMessage(P, v8);
    v3 = v8;
  }
  if ( *v3 )
  {
    v4 = *v3 - 1;
    if ( *v3 == 1 )
    {
      v5 = (int (__thiscall *)(_DWORD, _DWORD *))P[12];
      v3[6] = P[13];
      LOBYTE(v4) = v5(v5, v3 + 2);
    }
  }
  else
  {
    v6 = (int (__thiscall *)(_DWORD, _DWORD *))P[12];
    v3[4] = P[13];
    LOBYTE(v4) = v6(v6, v3 + 2);
  }
  if ( !Flags )
    LOBYTE(v4) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  return v4;
}
