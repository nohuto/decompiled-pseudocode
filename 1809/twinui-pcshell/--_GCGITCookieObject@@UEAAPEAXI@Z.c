/*
 * XREFs of ??_GCGITCookieObject@@UEAAPEAXI@Z @ 0x1803B1800
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180084E20 (--3@YAXPEAX@Z.c)
 *     ??1CGITCookieObject@@UEAA@XZ @ 0x1803B16DC (--1CGITCookieObject@@UEAA@XZ.c)
 */

CGITCookieObject *__fastcall CGITCookieObject::`scalar deleting destructor'(CGITCookieObject *this, char a2)
{
  CGITCookieObject::~CGITCookieObject(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
