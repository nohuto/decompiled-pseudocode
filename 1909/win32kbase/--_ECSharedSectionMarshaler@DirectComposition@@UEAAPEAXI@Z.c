/*
 * XREFs of ??_ECSharedSectionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C009AA70
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     ??1CSharedSectionMarshaler@DirectComposition@@UEAA@XZ @ 0x1C009AAA8 (--1CSharedSectionMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CSharedSectionMarshaler *__fastcall DirectComposition::CSharedSectionMarshaler::`vector deleting destructor'(
        DirectComposition::CSharedSectionMarshaler *this,
        char a2)
{
  DirectComposition::CSharedSectionMarshaler::~CSharedSectionMarshaler(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
