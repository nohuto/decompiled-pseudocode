/*
 * XREFs of ??_ECEffectBrushMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C008B830
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 */

DirectComposition::CEffectBrushMarshaler *__fastcall DirectComposition::CEffectBrushMarshaler::`vector deleting destructor'(
        DirectComposition::CEffectBrushMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CEffectBrushMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
