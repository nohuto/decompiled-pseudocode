/*
 * XREFs of ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C007E6BC
 * Callers:
 *     GreExtCreateRegion @ 0x1C002BE30 (GreExtCreateRegion.c)
 *     ?GetRegionHandleAndReset@CRegion@@UEAAJPEAPEAUHRGN__@@@Z @ 0x1C007E630 (-GetRegionHandleAndReset@CRegion@@UEAAJPEAPEAUHRGN__@@@Z.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C00B0A74 (GreCreatePolyPolygonRgnInternal.c)
 * Callees:
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C0022950 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 */

struct HOBJ__ *__fastcall RGNOBJ::hrgnAssociate(struct _BASEOBJECT **this)
{
  struct _BASEOBJECT *v1; // rbx
  struct HOBJ__ *result; // rax

  v1 = *this;
  result = HmgInsertObjectInternal(*this, 1u, 4u);
  if ( result )
  {
    if ( v1 )
      _InterlockedDecrement((volatile signed __int32 *)v1 + 3);
  }
  return result;
}
