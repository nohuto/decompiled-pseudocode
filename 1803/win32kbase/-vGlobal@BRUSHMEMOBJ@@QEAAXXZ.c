/*
 * XREFs of ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x1C00BFB60
 * Callers:
 *     bInitBRUSHOBJ @ 0x1C01F35BC (bInitBRUSHOBJ.c)
 *     bInitBrush @ 0x1C01F39FC (bInitBrush.c)
 * Callees:
 *     HmgSetOwner @ 0x1C001E630 (HmgSetOwner.c)
 *     HmgMarkUndeletable @ 0x1C00631F0 (HmgMarkUndeletable.c)
 */

void __fastcall BRUSHMEMOBJ::vGlobal(BRUSHMEMOBJ *this)
{
  *(_DWORD *)(*(_QWORD *)this + 40LL) |= 0x40200u;
  HmgSetOwner(**(_QWORD **)this, 0, 16);
  HmgMarkUndeletable(**(_QWORD **)this, 16);
}
