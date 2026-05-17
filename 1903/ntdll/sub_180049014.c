/*
 * XREFs of sub_180049014 @ 0x180049014
 * Callers:
 *     sub_180048F6C @ 0x180048F6C (sub_180048F6C.c)
 * Callees:
 *     sub_180046B74 @ 0x180046B74 (sub_180046B74.c)
 */

void __fastcall sub_180049014(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r8
  __int64 v6; // rax

  v3 = *(_QWORD *)(a1 + 320);
  if ( v3 )
  {
    v4 = *(unsigned int *)(v3 + 8);
    v5 = *(_QWORD *)(a2 + 40) >> 12;
    while ( v5 >= v4 )
    {
      v6 = *(_QWORD *)v3;
      if ( !*(_QWORD *)v3 )
      {
        LODWORD(v5) = *(_DWORD *)(v3 + 8) - 1;
        break;
      }
      v3 = *(_QWORD *)v3;
      v4 = *(unsigned int *)(v6 + 8);
    }
    sub_180046B74(a1, v3, 0, a2, v5, *(_QWORD *)(a2 + 40));
  }
}
