/*
 * XREFs of ??_GCTextBrushMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01A5520
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     ??1CTextBrushMarshaler@DirectComposition@@UEAA@XZ @ 0x1C01B7DB4 (--1CTextBrushMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CTextBrushMarshaler *__fastcall DirectComposition::CTextBrushMarshaler::`scalar deleting destructor'(
        DirectComposition::CTextBrushMarshaler *this,
        char a2)
{
  DirectComposition::CTextBrushMarshaler::~CTextBrushMarshaler(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
