/*
 * XREFs of ?DestroyTable@MULTIFONT@@QEAAXXZ @ 0x1C0283F74
 * Callers:
 *     ??1MULTIFONT@@QEAA@XZ @ 0x1C0283E44 (--1MULTIFONT@@QEAA@XZ.c)
 *     ?MulDestroyFont@@YAXPEAU_FONTOBJ@@@Z @ 0x1C0285BD0 (-MulDestroyFont@@YAXPEAU_FONTOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall MULTIFONT::DestroyTable(MULTIFONT *this)
{
  void *v2; // rcx

  if ( *(_QWORD *)this )
  {
    v2 = (void *)*((_QWORD *)this + 1);
    if ( v2 )
    {
      EngFreeMem(v2);
      *((_QWORD *)this + 1) = 0LL;
    }
  }
}
