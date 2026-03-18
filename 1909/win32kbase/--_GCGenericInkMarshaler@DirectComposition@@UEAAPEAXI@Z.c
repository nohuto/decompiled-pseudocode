/*
 * XREFs of ??_GCGenericInkMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01A2E40
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     ??1CGenericInkMarshaler@DirectComposition@@UEAA@XZ @ 0x1C01A2BCC (--1CGenericInkMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CGenericInkMarshaler *__fastcall DirectComposition::CGenericInkMarshaler::`scalar deleting destructor'(
        DirectComposition::CGenericInkMarshaler *this,
        char a2)
{
  DirectComposition::CGenericInkMarshaler::~CGenericInkMarshaler(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
