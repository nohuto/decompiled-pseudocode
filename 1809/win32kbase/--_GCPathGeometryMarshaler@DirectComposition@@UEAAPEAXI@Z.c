/*
 * XREFs of ??_GCPathGeometryMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C007FDD0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 */

DirectComposition::CPathGeometryMarshaler *__fastcall DirectComposition::CPathGeometryMarshaler::`scalar deleting destructor'(
        DirectComposition::CPathGeometryMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CBaseClipMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
