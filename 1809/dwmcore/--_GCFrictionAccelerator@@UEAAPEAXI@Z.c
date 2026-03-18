/*
 * XREFs of ??_GCFrictionAccelerator@@UEAAPEAXI@Z @ 0x1801A8248
 * Callers:
 *     ??_ECFrictionAccelerator@@W7EAAPEAXI@Z @ 0x1800F0AD0 (--_ECFrictionAccelerator@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 */

CFrictionAccelerator *__fastcall CFrictionAccelerator::`scalar deleting destructor'(
        CFrictionAccelerator *this,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
