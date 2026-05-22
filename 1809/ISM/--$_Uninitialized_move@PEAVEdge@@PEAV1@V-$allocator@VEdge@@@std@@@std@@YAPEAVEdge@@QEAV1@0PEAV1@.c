/*
 * XREFs of ??$_Uninitialized_move@PEAVEdge@@PEAV1@V?$allocator@VEdge@@@std@@@std@@YAPEAVEdge@@QEAV1@0PEAV1@AEAV?$allocator@VEdge@@@0@@Z @ 0x1800CC864
 * Callers:
 *     ??$_Emplace_reallocate@AEBVEdge@@@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAAPEAVEdge@@QEAV2@AEBV2@@Z @ 0x1800CC564 (--$_Emplace_reallocate@AEBVEdge@@@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@QEAAPEAVEdge@@.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Uninitialized_move<Edge *,Edge *,std::allocator<Edge>>(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // r8
  char *v5; // r9
  _QWORD *v6; // rcx
  char *v7; // r11

  if ( a1 != a2 )
  {
    v4 = a1 + 32;
    v5 = (char *)a3 - a1;
    do
    {
      *a3 = *(_QWORD *)(v4 - 32);
      v6 = (_QWORD *)(v4 + 8);
      *(_QWORD *)&v5[v4 - 8] = 0LL;
      v7 = &v5[v4 + 8];
      *(_QWORD *)&v5[v4] = 0LL;
      *(_OWORD *)&v5[v4 - 24] = *(_OWORD *)(v4 - 24);
      *(_OWORD *)&v5[v4 - 8] = *(_OWORD *)(v4 - 8);
      *(_QWORD *)(v4 - 8) = 0LL;
      *(_QWORD *)v4 = 7LL;
      *(_WORD *)(v4 - 24) = 0;
      *(_QWORD *)v7 = 0LL;
      if ( v7 != (char *)(v4 + 8) )
      {
        *(_QWORD *)v7 = *v6;
        *v6 = 0LL;
      }
      a3 += 13;
      *(_DWORD *)&v5[v4 + 16] = *(_DWORD *)(v4 + 16);
      *(_OWORD *)&v5[v4 + 20] = *(_OWORD *)(v4 + 20);
      *(_OWORD *)&v5[v4 + 36] = *(_OWORD *)(v4 + 36);
      *(_QWORD *)&v5[v4 + 52] = *(_QWORD *)(v4 + 52);
      *(_DWORD *)&v5[v4 + 60] = *(_DWORD *)(v4 + 60);
      *(_DWORD *)&v5[v4 + 64] = *(_DWORD *)(v4 + 64);
      v4 += 104LL;
    }
    while ( v4 - 32 != a2 );
  }
  return a3;
}
