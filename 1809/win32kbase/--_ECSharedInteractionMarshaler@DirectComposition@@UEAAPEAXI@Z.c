/*
 * XREFs of ??_ECSharedInteractionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C003A630
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     ??1CInteractionMarshaler@DirectComposition@@UEAA@XZ @ 0x1C003736C (--1CInteractionMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CSharedInteractionMarshaler *__fastcall DirectComposition::CSharedInteractionMarshaler::`vector deleting destructor'(
        DirectComposition::CSharedInteractionMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CSharedInteractionMarshaler::`vftable';
  DirectComposition::CInteractionMarshaler::~CInteractionMarshaler(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
