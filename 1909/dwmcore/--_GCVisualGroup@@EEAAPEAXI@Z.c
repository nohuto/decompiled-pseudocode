/*
 * XREFs of ??_GCVisualGroup@@EEAAPEAXI@Z @ 0x1801CC200
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??1CVisualGroup@@EEAA@XZ @ 0x1801CC1AC (--1CVisualGroup@@EEAA@XZ.c)
 */

CVisualGroup *__fastcall CVisualGroup::`scalar deleting destructor'(CVisualGroup *this, char a2)
{
  CVisualGroup::~CVisualGroup(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
