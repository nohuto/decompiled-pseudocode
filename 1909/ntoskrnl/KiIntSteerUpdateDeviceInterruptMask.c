/*
 * XREFs of KiIntSteerUpdateDeviceInterruptMask @ 0x1401319D4
 * Callers:
 *     KiIntSteerDistributeInterrupts @ 0x14009E8A0 (KiIntSteerDistributeInterrupts.c)
 *     KiIntSteerDisable @ 0x14017C2E8 (KiIntSteerDisable.c)
 *     KiIntSteerConnect @ 0x14017CD2C (KiIntSteerConnect.c)
 * Callees:
 *     KeGetPrcb @ 0x140005308 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x14009E0E0 (KeEnumerateNextProcessor.c)
 */

__int64 __fastcall KiIntSteerUpdateDeviceInterruptMask(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax
  __int64 Prcb; // rax
  unsigned __int16 *v7[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v8; // [rsp+30h] [rbp-18h]
  int v9; // [rsp+32h] [rbp-16h]
  __int16 v10; // [rsp+36h] [rbp-12h]
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  v11 = a3;
  v9 = 0;
  v10 = 0;
  v8 = *(_WORD *)(a1 + 8);
  v7[1] = *(unsigned __int16 **)a1;
  v7[0] = 0LL;
  while ( 1 )
  {
    result = KeEnumerateNextProcessor(&v11, v7);
    if ( (_DWORD)result )
      break;
    Prcb = KeGetPrcb(v11);
    if ( a2 )
    {
      if ( a2 == 1 && (*(_DWORD *)(Prcb + 11672))-- == 1 )
        _interlockedbittestandset64(
          (volatile signed __int32 *)(*(_QWORD *)(Prcb + 192) + 96LL),
          *(unsigned __int8 *)(Prcb + 209));
    }
    else if ( ++*(_DWORD *)(Prcb + 11672) == 1 )
    {
      _interlockedbittestandreset64(
        (volatile signed __int32 *)(*(_QWORD *)(Prcb + 192) + 96LL),
        *(unsigned __int8 *)(Prcb + 209));
    }
  }
  return result;
}
