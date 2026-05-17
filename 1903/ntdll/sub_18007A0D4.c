/*
 * XREFs of sub_18007A0D4 @ 0x18007A0D4
 * Callers:
 *     sub_18003C350 @ 0x18003C350 (sub_18003C350.c)
 *     sub_180041AB0 @ 0x180041AB0 (sub_180041AB0.c)
 *     sub_180043550 @ 0x180043550 (sub_180043550.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18007A0D4(__int64 a1, int a2)
{
  int v2; // edx
  unsigned int v3; // edx
  unsigned int v4; // eax
  bool v5; // zf
  int v6; // edx

  v2 = a2 - 1;
  if ( v2 )
  {
    v6 = v2 - 1;
    if ( v6 )
    {
      if ( v6 == 1 )
        ++*(_DWORD *)(a1 + 628);
    }
    else
    {
      ++*(_DWORD *)(a1 + 624);
    }
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 616) + 1;
    v4 = *(_DWORD *)(a1 + 620) + 1;
    *(_DWORD *)(a1 + 616) = v3;
    v5 = *(_BYTE *)(a1 + 418) == 2;
    *(_DWORD *)(a1 + 620) = v4;
    if ( !v5 )
    {
      if ( v3 < v4 )
      {
        v3 = 0;
        *(_QWORD *)(a1 + 616) = 0LL;
        v4 = 0;
      }
      if ( v4 >= v3 >> 4 )
        *(_DWORD *)(a1 + 120) |= 0x20000000u;
    }
  }
}
