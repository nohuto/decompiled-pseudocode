/*
 * XREFs of ??1CTextBrushMarshaler@DirectComposition@@UEAA@XZ @ 0x1C01B7DB4
 * Callers:
 *     ??_GCTextBrushMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01A5520 (--_GCTextBrushMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CTextBrushMarshaler::~CTextBrushMarshaler(
        DirectComposition::CTextBrushMarshaler *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &DirectComposition::CTextBrushMarshaler::`vftable';
  v2 = *((_QWORD *)this + 7);
  if ( v2 )
    Win32FreePool(v2);
  v3 = *((_QWORD *)this + 9);
  if ( v3 )
    Win32FreePool(v3);
}
