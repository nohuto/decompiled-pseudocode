/*
 * XREFs of ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x1C0042908
 * Callers:
 *     bInitBrush @ 0x1C021AB6C (bInitBrush.c)
 *     bInitBRUSHOBJ @ 0x1C021AC18 (bInitBRUSHOBJ.c)
 * Callees:
 *     HmgSetOwner @ 0x1C001E160 (HmgSetOwner.c)
 *     HmgMarkUndeletable @ 0x1C0044AD0 (HmgMarkUndeletable.c)
 */

void __fastcall BRUSHMEMOBJ::vGlobal(__int64 **this)
{
  __int64 v2; // rdx

  *((_DWORD *)*this + 10) |= 0x40200u;
  HmgSetOwner(**this, 0, 16);
  LOBYTE(v2) = 16;
  HmgMarkUndeletable(**this, v2);
}
