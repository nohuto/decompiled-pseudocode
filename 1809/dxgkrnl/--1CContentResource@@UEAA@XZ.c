/*
 * XREFs of ??1CContentResource@@UEAA@XZ @ 0x1C005C6BC
 * Callers:
 *     ??_ECContentResource@@UEAAPEAXI@Z @ 0x1C005C700 (--_ECContentResource@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CFlipResource@@MEAA@XZ @ 0x1C005C214 (--1CFlipResource@@MEAA@XZ.c)
 */

void __fastcall CContentResource::~CContentResource(CContentResource *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CContentResource::`vftable';
  v2 = (void *)*((_QWORD *)this + 6);
  if ( v2 )
    ObfDereferenceObject(v2);
  CFlipResource::~CFlipResource(this);
}
