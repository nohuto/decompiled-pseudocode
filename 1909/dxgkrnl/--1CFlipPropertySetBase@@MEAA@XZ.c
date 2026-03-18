/*
 * XREFs of ??1CFlipPropertySetBase@@MEAA@XZ @ 0x1C0061CE4
 * Callers:
 *     ??1CFlipConsumerMessage@@MEAA@XZ @ 0x1C005E31C (--1CFlipConsumerMessage@@MEAA@XZ.c)
 *     ??_GCFlipPropertySet@@MEAAPEAXI@Z @ 0x1C005E3C0 (--_GCFlipPropertySet@@MEAAPEAXI@Z.c)
 *     ??_ECFlipPropertySetBase@@MEAAPEAXI@Z @ 0x1C005E410 (--_ECFlipPropertySetBase@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CFlipPropertySetBase::~CFlipPropertySetBase(CFlipPropertySetBase *this)
{
  void *v2; // rcx
  void *v3; // rcx

  *(_QWORD *)this = &CFlipPropertySetBase::`vftable';
  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  v3 = (void *)*((_QWORD *)this + 3);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
}
