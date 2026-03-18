/*
 * XREFs of ??_GCWICBitmapWrapper@@UEAAPEAXI@Z @ 0x18002DAF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CWICBitmapWrapper@@UEAA@XZ @ 0x18002DB2C (--1CWICBitmapWrapper@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 */

CWICBitmapWrapper *__fastcall CWICBitmapWrapper::`scalar deleting destructor'(CWICBitmapWrapper *this, char a2)
{
  CWICBitmapWrapper::~CWICBitmapWrapper(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0xE8uLL);
  return this;
}
