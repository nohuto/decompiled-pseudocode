/*
 * XREFs of ??1CCompositionGlyphRun@@MEAA@XZ @ 0x1801CF4CC
 * Callers:
 *     ??_ECCompositionGlyphRun@@MEAAPEAXI@Z @ 0x1801CF500 (--_ECCompositionGlyphRun@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800BBF14 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CCompositionGlyphRun::~CCompositionGlyphRun(CCompositionGlyphRun *this)
{
  struct CResource *v1; // rdx

  v1 = (struct CResource *)*((_QWORD *)this + 7);
  *(_QWORD *)this = &CCompositionGlyphRun::`vftable';
  CResource::UnRegisterNotifierInternal(this, v1);
  CResource::~CResource(this);
}
