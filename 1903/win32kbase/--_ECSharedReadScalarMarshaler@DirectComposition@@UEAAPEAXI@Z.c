/*
 * XREFs of ??_ECSharedReadScalarMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01C5FA8
 * Callers:
 *     ??_ECSharedReadScalarMarshaler@DirectComposition@@WBA@EAAPEAXI@Z @ 0x1C00C3640 (--_ECSharedReadScalarMarshaler@DirectComposition@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 */

DirectComposition::CSharedReadScalarMarshaler *__fastcall DirectComposition::CSharedReadScalarMarshaler::`vector deleting destructor'(
        DirectComposition::CSharedReadScalarMarshaler *this,
        char a2)
{
  *((_QWORD *)this + 2) = &DirectComposition::CSharedReadMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
