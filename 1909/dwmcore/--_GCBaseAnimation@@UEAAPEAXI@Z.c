/*
 * XREFs of ??_GCBaseAnimation@@UEAAPEAXI@Z @ 0x18019D430
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??1CBaseAnimation@@UEAA@XZ @ 0x1800B5668 (--1CBaseAnimation@@UEAA@XZ.c)
 */

CBaseAnimation *__fastcall CBaseAnimation::`scalar deleting destructor'(CBaseAnimation *this, char a2)
{
  CBaseAnimation::~CBaseAnimation(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
