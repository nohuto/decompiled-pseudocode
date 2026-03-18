/*
 * XREFs of ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x1C0050514
 * Callers:
 *     bInitBrush @ 0x1C0263080 (bInitBrush.c)
 *     bInitBRUSHOBJ @ 0x1C0263128 (bInitBRUSHOBJ.c)
 * Callees:
 *     HmgSetOwner @ 0x1C0016200 (HmgSetOwner.c)
 *     HmgMarkUndeletable @ 0x1C0050BB0 (HmgMarkUndeletable.c)
 */

void __fastcall BRUSHMEMOBJ::vGlobal(BRUSHMEMOBJ *this)
{
  __int64 v2; // rdx

  *(_DWORD *)(*(_QWORD *)this + 40LL) |= 0x40200u;
  HmgSetOwner(**(_QWORD **)this, 0, 16);
  LOBYTE(v2) = 16;
  HmgMarkUndeletable(**(_QWORD **)this, v2);
}
