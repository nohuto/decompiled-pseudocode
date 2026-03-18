/*
 * XREFs of MiRemoveDpcGang @ 0x1402E8914
 * Callers:
 *     MiMapUserLargePages @ 0x14089A49C (MiMapUserLargePages.c)
 * Callees:
 *     MiGetLeafPfnBuddy @ 0x14013D07C (MiGetLeafPfnBuddy.c)
 */

_QWORD *__fastcall MiRemoveDpcGang(unsigned __int16 *a1)
{
  unsigned int v1; // r9d
  _QWORD *v2; // rdx
  int v3; // r10d
  __int64 v5; // r11
  unsigned int v6; // ecx
  unsigned __int64 LeafPfnBuddy; // rax
  __int64 v8; // r9
  __int64 v9; // r11

  v1 = *((_DWORD *)a1 + 28);
  v2 = 0LL;
  v3 = 0;
  if ( v1 )
  {
    v5 = *((_QWORD *)a1 + 2);
    while ( 1 )
    {
      v6 = *a1;
      *a1 = v6 + 1;
      v2 = *(_QWORD **)(v5 + 8LL * (v6 % v1));
      if ( v2 )
        break;
      v1 = *((_DWORD *)a1 + 28);
      if ( ++v3 >= v1 )
        return v2;
    }
    LeafPfnBuddy = MiGetLeafPfnBuddy(v2);
    *(_QWORD *)(v9 + 8 * v8) = LeafPfnBuddy;
  }
  return v2;
}
