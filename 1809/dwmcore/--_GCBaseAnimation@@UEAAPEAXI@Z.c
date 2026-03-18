/*
 * XREFs of ??_GCBaseAnimation@@UEAAPEAXI@Z @ 0x180174310
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBaseAnimation@@UEAA@XZ @ 0x180068BD0 (--1CBaseAnimation@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 */

CBaseAnimation *__fastcall CBaseAnimation::`scalar deleting destructor'(CBaseAnimation *this, char a2)
{
  CBaseAnimation::~CBaseAnimation(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
