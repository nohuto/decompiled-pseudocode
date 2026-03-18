/*
 * XREFs of ??_GCColorGradientStop@@UEAAPEAXI@Z @ 0x1800228F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResource@@MEAA@XZ @ 0x18008AB10 (--1CResource@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 */

CColorGradientStop *__fastcall CColorGradientStop::`scalar deleting destructor'(CColorGradientStop *this, char a2)
{
  CResource::~CResource(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x50uLL);
  return this;
}
