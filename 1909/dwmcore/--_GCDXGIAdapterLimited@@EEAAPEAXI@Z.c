/*
 * XREFs of ??_GCDXGIAdapterLimited@@EEAAPEAXI@Z @ 0x1800266F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDXGIAdapterLimited@@EEAA@XZ @ 0x18002672C (--1CDXGIAdapterLimited@@EEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 */

CDXGIAdapterLimited *__fastcall CDXGIAdapterLimited::`scalar deleting destructor'(CDXGIAdapterLimited *this, char a2)
{
  CDXGIAdapterLimited::~CDXGIAdapterLimited(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x190uLL);
  return this;
}
