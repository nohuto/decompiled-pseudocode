/*
 * XREFs of ?SetNotifiedWorldOffset@CVisual@@QEAAXUVector3@Numerics@Foundation@Windows@@@Z @ 0x1801B85A8
 * Callers:
 *     ?IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z @ 0x1801B73A8 (-IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisual::SetNotifiedWorldOffset(__int64 a1, unsigned int *a2)
{
  CSparseStorage *v2; // r10
  __int64 v3; // rcx

  v2 = (CSparseStorage *)(a1 + 216);
  v3 = *(_QWORD *)a2 - `CVisual::SetNotifiedWorldUpVector'::`2'::sc_defaultValue;
  if ( *(_QWORD *)a2 == `CVisual::SetNotifiedWorldUpVector'::`2'::sc_defaultValue )
    v3 = a2[2];
  if ( v3 )
    CSparseStorage::SetData(v2, 0xAu, 0xCu, a2);
  else
    *(_DWORD *)(*(_QWORD *)v2 + 4LL) &= ~0x400000u;
}
