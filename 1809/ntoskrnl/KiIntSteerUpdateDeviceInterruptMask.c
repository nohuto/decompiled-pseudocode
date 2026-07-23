/*
 * XREFs of KiIntSteerUpdateDeviceInterruptMask @ 0x14012F790
 * Callers:
 *     KiIntSteerDistributeInterrupts @ 0x140063190 (KiIntSteerDistributeInterrupts.c)
 *     KiIntSteerDisable @ 0x14016D520 (KiIntSteerDisable.c)
 *     KiIntSteerConnect @ 0x14016DFA4 (KiIntSteerConnect.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140063BD0 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x1400A6204 (KeGetPrcb.c)
 */

__int64 __fastcall KiIntSteerUpdateDeviceInterruptMask(__int64 a1, int a2, __int64 a3)
{
  __int16 v3; // ax
  __int64 result; // rax
  __int64 Prcb; // rax
  unsigned __int16 *v8[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v9; // [rsp+30h] [rbp-18h]
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  v10 = a3;
  v3 = *(_WORD *)(a1 + 8);
  v8[0] = 0LL;
  v9 = v3;
  v8[1] = *(unsigned __int16 **)a1;
  while ( 1 )
  {
    result = KeEnumerateNextProcessor(&v10, v8);
    if ( (_DWORD)result )
      break;
    Prcb = KeGetPrcb(v10);
    if ( a2 )
    {
      if ( a2 == 1 && (*(_DWORD *)(Prcb + 11672))-- == 1 )
        _interlockedbittestandset64(
          (volatile signed __int32 *)(*(_QWORD *)(Prcb + 192) + 88LL),
          *(unsigned __int8 *)(Prcb + 209));
    }
    else if ( ++*(_DWORD *)(Prcb + 11672) == 1 )
    {
      _interlockedbittestandreset64(
        (volatile signed __int32 *)(*(_QWORD *)(Prcb + 192) + 88LL),
        *(unsigned __int8 *)(Prcb + 209));
    }
  }
  return result;
}
