/*
 * XREFs of ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C002A4D0
 * Callers:
 *     ?GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z @ 0x1C002A20C (-GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z.c)
 *     NtGdiCreateRoundRectRgn @ 0x1C0079F40 (NtGdiCreateRoundRectRgn.c)
 *     CLIPOBJ_GetRgn @ 0x1C026B1B0 (CLIPOBJ_GetRgn.c)
 *     NtGdiCreateEllipticRgn @ 0x1C0299610 (NtGdiCreateEllipticRgn.c)
 *     NtGdiPathToRegion @ 0x1C02A6BB0 (NtGdiPathToRegion.c)
 * Callees:
 *     <none>
 */

struct HOBJ__ *__fastcall RGNOBJ::hrgnAssociate(void **this)
{
  volatile signed __int32 *v1; // rbx
  struct HOBJ__ *result; // rax

  v1 = (volatile signed __int32 *)*this;
  result = HmgInsertObjectInternal(*this, 1u, 4u);
  if ( result )
  {
    if ( v1 )
      _InterlockedDecrement(v1 + 3);
  }
  return result;
}
