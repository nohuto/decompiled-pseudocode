/*
 * XREFs of ?SetClipRegion@CAccent@@QEAAXPEAVCBaseGeometryProxy@@@Z @ 0x18003A87C
 * Callers:
 *     ?UpdateAccentBlurRect@CAccent@@QEAAXAEBUtagRECT@@@Z @ 0x1800026A4 (-UpdateAccentBlurRect@CAccent@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?OnClipUpdated@CTopLevelWindow@@QEAAXXZ @ 0x1800122B8 (-OnClipUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180026AD0 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAccent::SetClipRegion(CBaseObject **this, struct CBaseGeometryProxy *a2)
{
  CBaseObject *v4; // rcx

  if ( a2 != this[52] )
  {
    (*((void (__fastcall **)(CBaseObject **, __int64))*this + 3))(this, 0x8000LL);
    v4 = this[52];
    if ( v4 )
      CBaseObject::Release(v4);
    this[52] = a2;
    if ( a2 )
      _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  }
}
