/*
 * XREFs of sub_1800FE350 @ 0x1800FE350
 * Callers:
 *     sub_1800FD4E8 @ 0x1800FD4E8 (sub_1800FD4E8.c)
 *     sub_1800FF6D0 @ 0x1800FF6D0 (sub_1800FF6D0.c)
 *     sub_18010062C @ 0x18010062C (sub_18010062C.c)
 * Callees:
 *     sub_1800FE218 @ 0x1800FE218 (sub_1800FE218.c)
 *     sub_1800FEDC8 @ 0x1800FEDC8 (sub_1800FEDC8.c)
 */

__int64 __fastcall sub_1800FE350(__int64 *a1, __int64 a2, __int16 *a3)
{
  __int64 v6; // rbx
  __int16 v7; // ax
  __int16 v8; // r8
  unsigned __int16 v9; // cx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx

  if ( !a1 )
    return 3221225485LL;
  v6 = *a1;
  if ( !*a1 || !a2 || !*(_WORD *)(a2 + 4) && *(__int16 *)(a2 + 6) < 0 )
    return 3221225485LL;
  v7 = sub_1800FE218(*a1, (char *)a2);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = *(_WORD *)(v6 + 4);
    if ( *(_WORD *)(v6 + 6) >= v9 )
    {
      v10 = (unsigned int)*(unsigned __int16 *)(v6 + 6) + 4;
      if ( (unsigned int)v10 >= v9 )
        v6 = sub_1800FEDC8(v6, v10, (unsigned __int16)v7);
      if ( !v6 )
        return 3221225495LL;
      *a1 = v6;
    }
    v8 = *(_WORD *)(v6 + 6);
    v11 = *(_QWORD *)(v6 + 16);
    v12 = 28LL * v8;
    *(_WORD *)(v6 + 6) = v8 + 1;
    *(_OWORD *)(v12 + v11) = *(_OWORD *)a2;
    *(_QWORD *)(v12 + v11 + 16) = *(_QWORD *)(a2 + 16);
    *(_DWORD *)(v12 + v11 + 24) = *(_DWORD *)(a2 + 24);
  }
  if ( a3 )
    *a3 = v8;
  return 0LL;
}
