/*
 * XREFs of ??$_Uninitialized_move_al_unchecked@PEAVEdge@@PEAV1@V?$allocator@VEdge@@@std@@@std@@YAPEAVEdge@@PEAV1@QEAV1@1AEAV?$allocator@VEdge@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x1801015A0
 * Callers:
 *     ??$_Emplace_reallocate@AEBVEdge@@@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAAPEAVEdge@@QEAV2@AEBV2@@Z @ 0x1801012EC (--$_Emplace_reallocate@AEBVEdge@@@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@QEAAPEAVEdge@@.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Uninitialized_move_al_unchecked<Edge *,Edge *,std::allocator<Edge>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v3; // r10
  _QWORD *v4; // r8
  __int64 v5; // r9
  _QWORD *v6; // rcx
  int v7; // ecx

  v3 = a3;
  if ( a1 != a2 )
  {
    v4 = a3 + 5;
    v5 = a1 + 8;
    do
    {
      v6 = (_QWORD *)(v5 + 32);
      *v3 = *(_QWORD *)(v5 - 8);
      *(v4 - 2) = 0LL;
      *(v4 - 1) = 0LL;
      *((_OWORD *)v4 - 2) = *(_OWORD *)v5;
      *((_OWORD *)v4 - 1) = *(_OWORD *)(v5 + 16);
      *(_QWORD *)(v5 + 16) = 0LL;
      *(_QWORD *)(v5 + 24) = 7LL;
      *(_WORD *)v5 = 0;
      *v4 = 0LL;
      if ( v4 != (_QWORD *)(v5 + 32) )
      {
        *v4 = *v6;
        *v6 = 0LL;
      }
      v3 += 13;
      *((_DWORD *)v4 + 2) = *(_DWORD *)(v5 + 40);
      *(_OWORD *)((char *)v4 + 12) = *(_OWORD *)(v5 + 44);
      *(_OWORD *)((char *)v4 + 28) = *(_OWORD *)(v5 + 60);
      *(_QWORD *)((char *)v4 + 44) = *(_QWORD *)(v5 + 76);
      *((_DWORD *)v4 + 13) = *(_DWORD *)(v5 + 84);
      v7 = *(_DWORD *)(v5 + 88);
      v5 += 104LL;
      *((_DWORD *)v4 + 14) = v7;
      v4 += 13;
    }
    while ( v5 - 8 != a2 );
  }
  return v3;
}
