/*
 * XREFs of ??_GCMILPoolResource@@UEAAPEAXI@Z @ 0x1801590F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 */

CMILPoolResource *__fastcall CMILPoolResource::`scalar deleting destructor'(CMILPoolResource *this, char a2)
{
  *(_QWORD *)this = &CMILPoolResource::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
