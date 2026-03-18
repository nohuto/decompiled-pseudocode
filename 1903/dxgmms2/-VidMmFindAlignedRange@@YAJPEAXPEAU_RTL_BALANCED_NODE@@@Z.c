/*
 * XREFs of ?VidMmFindAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C007EA88
 * Callers:
 *     ?LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C0068CB8 (-LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 * Callees:
 *     ?IsRotateVAD@VIDMM_RECYCLE_MULTIRANGE@@QEAAEXZ @ 0x1C007EB0C (-IsRotateVAD@VIDMM_RECYCLE_MULTIRANGE@@QEAAEXZ.c)
 */

__int64 __fastcall VidMmFindAlignedRange(_BYTE *a1, struct _RTL_BALANCED_NODE *a2)
{
  ULONG_PTR ParentValue; // r10
  struct _RTL_BALANCED_NODE *v3; // r9
  struct _RTL_BALANCED_NODE *v4; // rdi
  ULONG_PTR v5; // rbx
  _BYTE *v6; // r11
  unsigned __int64 v8; // rcx

  ParentValue = a2[1].ParentValue;
  v3 = a2;
  v4 = a2[1].Children[1];
  v5 = *(_QWORD *)a1;
  v6 = a1;
  if ( ParentValue - (unsigned __int64)v4 < *(_QWORD *)a1 )
    return 0xFFFFFFFFLL;
  if ( LODWORD(a2[1].Children[0]) == 1 )
  {
    if ( !VIDMM_RECYCLE_MULTIRANGE::IsRotateVAD((VIDMM_RECYCLE_MULTIRANGE *)a2) && v6[16] )
      return 0xFFFFFFFFLL;
  }
  else if ( (BYTE4(a2[3].Children[0][5].Right) & 1) == 0 && a1[16] )
  {
    return 0xFFFFFFFFLL;
  }
  v8 = ~(*((_QWORD *)v6 + 1) - 1LL) & ((unsigned __int64)v4 + *((_QWORD *)v6 + 1) - 1);
  if ( v8 < (unsigned __int64)v4 || v8 >= ParentValue || ParentValue - v8 < v5 )
    return 0xFFFFFFFFLL;
  v3[2].Children[0] = (struct _RTL_BALANCED_NODE *)v8;
  return 0LL;
}
