/*
 * XREFs of ??1CSharedSectionMarshaler@DirectComposition@@UEAA@XZ @ 0x1C009AAA8
 * Callers:
 *     ??_ECSharedSectionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C009AA70 (--_ECSharedSectionMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CSharedSectionMarshaler::~CSharedSectionMarshaler(
        DirectComposition::CSharedSectionMarshaler *this)
{
  void *v1; // rcx

  *(_QWORD *)this = &DirectComposition::CSharedSectionMarshaler::`vftable';
  v1 = (void *)*((_QWORD *)this + 5);
  if ( v1 )
    ObfDereferenceObject(v1);
}
