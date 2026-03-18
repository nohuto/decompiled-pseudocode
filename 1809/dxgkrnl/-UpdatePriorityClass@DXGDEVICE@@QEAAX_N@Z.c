/*
 * XREFs of ?UpdatePriorityClass@DXGDEVICE@@QEAAX_N@Z @ 0x1C011CF68
 * Callers:
 *     DXGDEVICE_UpdatePriorityClass @ 0x1C0013010 (DXGDEVICE_UpdatePriorityClass.c)
 * Callees:
 *     ?SetSchedulingPriority@DXGCONTEXT@@QEAAXH_N@Z @ 0x1C011CEF0 (-SetSchedulingPriority@DXGCONTEXT@@QEAAXH_N@Z.c)
 */

void __fastcall DXGDEVICE::UpdatePriorityClass(DXGDEVICE *this, unsigned __int8 a2)
{
  unsigned int *v2; // rdi
  unsigned int *i; // rbx

  v2 = (unsigned int *)((char *)this + 360);
  for ( i = (unsigned int *)*((_QWORD *)this + 45); i != v2 && i; i = *(unsigned int **)i )
    DXGCONTEXT::SetSchedulingPriority((DXGCONTEXT *)i, i[106], a2);
}
