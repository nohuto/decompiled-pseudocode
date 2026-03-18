/*
 * XREFs of ?yCompute@DDA_CLIPLINE@@QEAAJJ@Z @ 0x1C029EFE4
 * Callers:
 *     ?vIntersectVertical@@YAXPEAVDDA_CLIPLINE@@JPEAU_POINTL@@1PEAJ@Z @ 0x1C029EBF8 (-vIntersectVertical@@YAXPEAVDDA_CLIPLINE@@JPEAU_POINTL@@1PEAJ@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DDA_CLIPLINE::yCompute(DDA_CLIPLINE *this, int a2)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  unsigned __int64 v5; // rcx
  __int64 v6; // rax

  v3 = *((int *)this + 3) * (__int64)(a2 - *((_DWORD *)this + 1));
  v4 = *((_QWORD *)this + 3);
  v5 = *((unsigned int *)this + 4);
  v6 = v3 + v4;
  if ( v6 >= 0xFFFFFFFFLL )
    v5 = v6 / v5;
  else
    LODWORD(v5) = (unsigned int)v6 / (unsigned int)v5;
  return (unsigned int)(v5 + *((_DWORD *)this + 2));
}
