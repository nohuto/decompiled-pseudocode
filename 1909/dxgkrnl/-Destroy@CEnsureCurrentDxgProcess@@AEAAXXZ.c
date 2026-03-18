/*
 * XREFs of ?Destroy@CEnsureCurrentDxgProcess@@AEAAXXZ @ 0x1C0037090
 * Callers:
 *     ??1CEnsureCurrentDxgProcess@@QEAA@XZ @ 0x1C000AAAC (--1CEnsureCurrentDxgProcess@@QEAA@XZ.c)
 *     ?AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C0036FAC (-AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CEnsureCurrentDxgProcess::Destroy(void **this)
{
  void *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    ObfDereferenceObject(v2);
    *this = 0LL;
  }
}
