/*
 * XREFs of MiWorkingSetVeryLarge @ 0x1402A80FC
 * Callers:
 *     MiOrderTrimList @ 0x1402B3540 (MiOrderTrimList.c)
 * Callees:
 *     MiGetStandbyRepurposed @ 0x1400EF3CC (MiGetStandbyRepurposed.c)
 */

_BOOL8 __fastcall MiWorkingSetVeryLarge(__int64 a1)
{
  unsigned __int64 v1; // r8
  unsigned __int64 v2; // r9
  _QWORD *v3; // r10
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // r10
  unsigned __int64 v8; // r11

  v1 = *(_QWORD *)(a1 + 136);
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
  if ( v1 <= v2 )
    return 0LL;
  v3 = *(_QWORD **)(qword_14043B808 + 8LL * *(unsigned __int16 *)(a1 + 174));
  v4 = v3[890];
  v5 = v1 & 0x3F;
  if ( (v1 & 0x3F) == 0 && v3[912] < v4 / 0x14 && v1 >= v4 / 0x14 )
    return 1LL;
  if ( v1 - v2 < 3 * (v4 >> 2) )
    return 0LL;
  v6 = v3[878];
  if ( (unsigned int)MiGetStandbyRepurposed((__int64)v3, 1u) == *(_DWORD *)(v6 + 44) )
    return 0LL;
  if ( v5 )
    v8 = *(_QWORD *)(v7 + 7296);
  return v8 < 10LL * *(_QWORD *)(v6 + 2392);
}
