/*
 * XREFs of ??_ECInkMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01A4F90
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 */

DirectComposition::CInkMarshaler *__fastcall DirectComposition::CInkMarshaler::`vector deleting destructor'(
        DirectComposition::CInkMarshaler *this,
        char a2)
{
  __int64 v4; // rcx

  *(_QWORD *)this = &DirectComposition::CInkMarshaler::`vftable';
  v4 = *((_QWORD *)this + 12);
  if ( v4 )
    Win32FreePool(v4);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
