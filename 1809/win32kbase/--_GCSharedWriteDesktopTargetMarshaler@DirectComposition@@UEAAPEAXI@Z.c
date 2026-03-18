/*
 * XREFs of ??_GCSharedWriteDesktopTargetMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0092680
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 */

DirectComposition::CSharedWriteDesktopTargetMarshaler *__fastcall DirectComposition::CSharedWriteDesktopTargetMarshaler::`scalar deleting destructor'(
        DirectComposition::CSharedWriteDesktopTargetMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CSharedWriteDesktopTargetMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
