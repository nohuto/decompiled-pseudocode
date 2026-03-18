/*
 * XREFs of ??_GCVisualGroup@@EEAAPEAXI@Z @ 0x1801CD9A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 *     ??1CVisualGroup@@EEAA@XZ @ 0x1801CD94C (--1CVisualGroup@@EEAA@XZ.c)
 */

CVisualGroup *__fastcall CVisualGroup::`scalar deleting destructor'(CVisualGroup *this, char a2)
{
  CVisualGroup::~CVisualGroup(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
