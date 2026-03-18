/*
 * XREFs of ??_GCWICBitmapWrapper@@UEAAPEAXI@Z @ 0x18004AEC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??1CWICBitmapWrapper@@UEAA@XZ @ 0x18004AE40 (--1CWICBitmapWrapper@@UEAA@XZ.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall CWICBitmapWrapper::`scalar deleting destructor'(
        struct _RTL_CRITICAL_SECTION *this,
        char a2)
{
  CWICBitmapWrapper::~CWICBitmapWrapper(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
