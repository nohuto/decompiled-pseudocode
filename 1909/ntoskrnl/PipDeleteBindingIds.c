/*
 * XREFs of PipDeleteBindingIds @ 0x140786850
 * Callers:
 *     PipDeleteDependencyNode @ 0x140786780 (PipDeleteDependencyNode.c)
 *     PipConvertResolutionsToReservations @ 0x1407867E4 (PipConvertResolutionsToReservations.c)
 * Callees:
 *     PipFreeBindingId @ 0x140786894 (PipFreeBindingId.c)
 */

void __fastcall PipDeleteBindingIds(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rcx
  _QWORD *v3; // rax

  v1 = (_QWORD *)(a1 + 56);
  while ( (_QWORD *)*v1 != v1 )
  {
    v2 = (_QWORD *)v1[1];
    if ( (_QWORD *)*v2 != v1 || (v3 = (_QWORD *)v2[1], (_QWORD *)*v3 != v2) )
      __fastfail(3u);
    v1[1] = v3;
    *v3 = v1;
    PipFreeBindingId(v2);
  }
}
