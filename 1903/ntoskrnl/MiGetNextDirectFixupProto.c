/*
 * XREFs of MiGetNextDirectFixupProto @ 0x140898C70
 * Callers:
 *     MiWalkEntireImage @ 0x140053A50 (MiWalkEntireImage.c)
 * Callees:
 *     MiGetLeafPfnBuddy @ 0x14013D07C (MiGetLeafPfnBuddy.c)
 */

unsigned __int64 __fastcall MiGetNextDirectFixupProto(__int64 a1, _QWORD *a2)
{
  if ( a2 )
    return MiGetLeafPfnBuddy(a2);
  else
    return *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 32LL) + 104LL);
}
