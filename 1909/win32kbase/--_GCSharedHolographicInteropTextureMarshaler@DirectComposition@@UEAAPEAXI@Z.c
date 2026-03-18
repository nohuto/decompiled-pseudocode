/*
 * XREFs of ??_GCSharedHolographicInteropTextureMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01A2F60
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 */

DirectComposition::CSharedHolographicInteropTextureMarshaler *__fastcall DirectComposition::CSharedHolographicInteropTextureMarshaler::`scalar deleting destructor'(
        DirectComposition::CSharedHolographicInteropTextureMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CHolographicInteropTextureMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
