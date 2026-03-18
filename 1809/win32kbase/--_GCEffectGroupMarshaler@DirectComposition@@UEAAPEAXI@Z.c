/*
 * XREFs of ??_GCEffectGroupMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C008C0A0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 */

DirectComposition::CEffectGroupMarshaler *__fastcall DirectComposition::CEffectGroupMarshaler::`scalar deleting destructor'(
        DirectComposition::CEffectGroupMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CEffectGroupMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
