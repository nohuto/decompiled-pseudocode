/*
 * XREFs of ??_ECMaskBrushMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00874A0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 */

DirectComposition::CMaskBrushMarshaler *__fastcall DirectComposition::CMaskBrushMarshaler::`vector deleting destructor'(
        DirectComposition::CMaskBrushMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CMaskBrushMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
