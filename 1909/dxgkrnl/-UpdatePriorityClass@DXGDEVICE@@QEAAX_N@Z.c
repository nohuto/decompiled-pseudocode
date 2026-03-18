/*
 * XREFs of ?UpdatePriorityClass@DXGDEVICE@@QEAAX_N@Z @ 0x1C01219D4
 * Callers:
 *     DXGDEVICE_UpdatePriorityClass @ 0x1C000C830 (DXGDEVICE_UpdatePriorityClass.c)
 * Callees:
 *     ?SetSchedulingPriority@DXGCONTEXT@@QEAAXH_N@Z @ 0x1C012195C (-SetSchedulingPriority@DXGCONTEXT@@QEAAXH_N@Z.c)
 */

void __fastcall DXGDEVICE::UpdatePriorityClass(DXGDEVICE *this, unsigned __int8 a2)
{
  unsigned int *v2; // rdi
  unsigned int *i; // rbx

  v2 = (unsigned int *)((char *)this + 360);
  for ( i = (unsigned int *)*((_QWORD *)this + 45); i != v2 && i; i = *(unsigned int **)i )
    DXGCONTEXT::SetSchedulingPriority((DXGCONTEXT *)i, i[110], a2);
}
