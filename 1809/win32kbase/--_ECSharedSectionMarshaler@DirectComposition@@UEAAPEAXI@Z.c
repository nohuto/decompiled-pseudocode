/*
 * XREFs of ??_ECSharedSectionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00878A0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 */

DirectComposition::CSharedSectionMarshaler *__fastcall DirectComposition::CSharedSectionMarshaler::`vector deleting destructor'(
        DirectComposition::CSharedSectionMarshaler *this,
        char a2)
{
  void *v4; // rcx

  *(_QWORD *)this = &DirectComposition::CSharedSectionMarshaler::`vftable';
  v4 = (void *)*((_QWORD *)this + 5);
  if ( v4 )
    ObfDereferenceObject(v4);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
