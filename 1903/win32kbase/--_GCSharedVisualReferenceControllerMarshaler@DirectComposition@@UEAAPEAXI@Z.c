/*
 * XREFs of ??_GCSharedVisualReferenceControllerMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01C5640
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 */

DirectComposition::CSharedVisualReferenceControllerMarshaler *__fastcall DirectComposition::CSharedVisualReferenceControllerMarshaler::`scalar deleting destructor'(
        DirectComposition::CSharedVisualReferenceControllerMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CSharedVisualReferenceControllerMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
