/*
 * XREFs of ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x1C00836BC
 * Callers:
 *     bInitBrush @ 0x1C0268C50 (bInitBrush.c)
 *     bInitBRUSHOBJ @ 0x1C0268CF8 (bInitBRUSHOBJ.c)
 * Callees:
 *     HmgSetOwner @ 0x1C002A580 (HmgSetOwner.c)
 *     HmgMarkUndeletable @ 0x1C0051F40 (HmgMarkUndeletable.c)
 */

void __fastcall BRUSHMEMOBJ::vGlobal(BRUSHMEMOBJ *this)
{
  *(_DWORD *)(*(_QWORD *)this + 40LL) |= 0x40200u;
  HmgSetOwner(**(_QWORD **)this, 0, 16);
  HmgMarkUndeletable(**(_QWORD **)this, 16);
}
