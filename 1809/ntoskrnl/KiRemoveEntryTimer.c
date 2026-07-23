/*
 * XREFs of KiRemoveEntryTimer @ 0x14013199C
 * Callers:
 *     ExpSetTimerObject @ 0x14001D7C0 (ExpSetTimerObject.c)
 *     KiInsertTimerTable @ 0x1400581E0 (KiInsertTimerTable.c)
 *     KiExpireTimerTable @ 0x140156E30 (KiExpireTimerTable.c)
 *     KiAdjustTimerDueTimes @ 0x14016FCEC (KiAdjustTimerDueTimes.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall KiRemoveEntryTimer(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r11
  unsigned __int64 v4; // r9
  _QWORD *v5; // rdx
  _QWORD *result; // rax
  unsigned int v7; // r8d
  __int64 v8; // r9

  v3 = a2 + 32;
  v4 = a3;
  v5 = *(_QWORD **)(a2 + 32);
  result = *(_QWORD **)(v3 + 8);
  if ( v5[1] != v3 || *result != v3 )
    __fastfail(3u);
  *result = v5;
  v5[1] = result;
  if ( result == v5 )
  {
    *(_DWORD *)(32 * (a3 + 16LL) + a1 + 28) = -1;
    if ( KiSerializeTimerExpiration )
    {
      v7 = a3 & 0x3F;
      v8 = 8 * (v4 >> 6);
    }
    else
    {
      v7 = *(unsigned __int8 *)(a1 - 13743);
      v8 = v4 << 6;
    }
    result = (_QWORD *)v7;
    _interlockedbittestandreset64(
      (volatile signed __int32 *)(qword_1405434C8[2 * *(unsigned __int8 *)(a1 - 13744)] + v8),
      v7);
  }
  return result;
}
