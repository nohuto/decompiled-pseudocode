/*
 * XREFs of ??_GCSharedManipulationTransformMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0079830
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 */

DirectComposition::CSharedManipulationTransformMarshaler *__fastcall DirectComposition::CSharedManipulationTransformMarshaler::`scalar deleting destructor'(
        DirectComposition::CSharedManipulationTransformMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CSharedManipulationTransformMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
