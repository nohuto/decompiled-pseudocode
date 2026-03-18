/*
 * XREFs of ??_GDMMVIDPNTARGETMODE@@UEAAPEAXI@Z @ 0x1C000B1C0
 * Callers:
 *     ??_EDMMVIDPNTARGETMODE@@WCA@EAAPEAXI@Z @ 0x1C00233C0 (--_EDMMVIDPNTARGETMODE@@WCA@EAAPEAXI@Z.c)
 *     ??_EDMMVIDPNTARGETMODE@@WDA@EAAPEAXI@Z @ 0x1C00233D0 (--_EDMMVIDPNTARGETMODE@@WDA@EAAPEAXI@Z.c)
 *     ??_EDMMVIDPNTARGETMODE@@WEA@EAAPEAXI@Z @ 0x1C00233E0 (--_EDMMVIDPNTARGETMODE@@WEA@EAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

DMMVIDPNTARGETMODE *__fastcall DMMVIDPNTARGETMODE::`scalar deleting destructor'(DMMVIDPNTARGETMODE *this, char a2)
{
  *((_QWORD *)this + 8) = &SetElement::`vftable';
  *((_DWORD *)this + 14) |= 0x6D640000u;
  *((_QWORD *)this + 6) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 4) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *(_QWORD *)this = &SetElement::`vftable';
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(this, 0);
  return this;
}
