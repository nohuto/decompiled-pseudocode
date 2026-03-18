/*
 * XREFs of ??_GCColorGradientStop@@UEAAPEAXI@Z @ 0x180020D20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??1CResource@@MEAA@XZ @ 0x1800789F0 (--1CResource@@MEAA@XZ.c)
 */

CColorGradientStop *__fastcall CColorGradientStop::`scalar deleting destructor'(CColorGradientStop *this, char a2)
{
  CResource::~CResource(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x50uLL);
  return this;
}
