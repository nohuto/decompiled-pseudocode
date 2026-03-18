/*
 * XREFs of ??_GCSharedWriteAnimationTriggerMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0004120
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 */

DirectComposition::CSharedWriteAnimationTriggerMarshaler *__fastcall DirectComposition::CSharedWriteAnimationTriggerMarshaler::`scalar deleting destructor'(
        DirectComposition::CSharedWriteAnimationTriggerMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CSharedWriteAnimationTriggerMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool(this);
  return this;
}
