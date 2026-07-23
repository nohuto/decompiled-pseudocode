/*
 * XREFs of KiAbDetermineMaxWaiterPriority @ 0x140119ABC
 * Callers:
 *     KiAbProcessThreadLocks @ 0x140023C40 (KiAbProcessThreadLocks.c)
 *     KiAbProcessContextSwitch @ 0x140057DC0 (KiAbProcessContextSwitch.c)
 * Callees:
 *     <none>
 */

char __fastcall KiAbDetermineMaxWaiterPriority(__int64 a1, __int64 a2)
{
  __int16 v2; // ax
  __int64 v3; // rax
  char v4; // cl

  *(_DWORD *)a2 = 0;
  v2 = *(_WORD *)(a1 + 90);
  if ( (v2 & 0x1FE) != 0 )
    *(_BYTE *)(a2 + 1) = 2;
  if ( (v2 & 0xFE00) != 0 )
    *(_BYTE *)(a2 + 2) = 1;
  v3 = *(_QWORD *)(a1 + 72);
  if ( v3 )
  {
    LOBYTE(v3) = *(_BYTE *)(v3 + 48);
    *(_BYTE *)a2 = v3;
  }
  if ( (*(_BYTE *)(a1 + 25) & 1) != 0 )
  {
    v4 = *(_BYTE *)(a1 - 16LL * *(unsigned __int8 *)(a1 + 24) + 195);
    LOBYTE(v3) = v4;
    if ( v4 > 15 )
      v4 = 15;
    if ( v4 > *(char *)a2 )
      *(_BYTE *)a2 = v4;
  }
  return v3;
}
