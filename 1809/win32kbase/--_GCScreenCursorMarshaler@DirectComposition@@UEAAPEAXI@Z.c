/*
 * XREFs of ??_GCScreenCursorMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00950F0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 */

DirectComposition::CScreenCursorMarshaler *__fastcall DirectComposition::CScreenCursorMarshaler::`scalar deleting destructor'(
        DirectComposition::CScreenCursorMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CScreenCursorMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
