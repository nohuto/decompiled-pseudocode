/*
 * XREFs of ??_GCMILCOMBase@@UEAAPEAXI@Z @ 0x180226B90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 */

CMILCOMBase *__fastcall CMILCOMBase::`scalar deleting destructor'(CMILCOMBase *this, char a2)
{
  *(_QWORD *)this = &CMILCOMBase::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
