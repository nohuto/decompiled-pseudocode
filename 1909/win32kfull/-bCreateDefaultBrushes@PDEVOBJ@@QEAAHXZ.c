/*
 * XREFs of ?bCreateDefaultBrushes@PDEVOBJ@@QEAAHXZ @ 0x1C0110094
 * Callers:
 *     PDEVOBJ_bCreateDefaultBrushesWrap @ 0x1C0110080 (PDEVOBJ_bCreateDefaultBrushesWrap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PDEVOBJ::bCreateDefaultBrushes(PDEVOBJ *this)
{
  int v2; // ebx
  __int64 i; // rdi

  v2 = 0;
  for ( i = 1456LL; ; i += 8LL )
  {
    *(_QWORD *)(i + *(_QWORD *)this) = EngCreateBitmap((SIZEL)0x800000008LL, 4, 1u, 1u, (char *)&gaaulPat + 32 * v2);
    if ( !*(_QWORD *)(i + *(_QWORD *)this) )
      break;
    if ( ++v2 >= 6 )
      return 1LL;
  }
  return 0LL;
}
