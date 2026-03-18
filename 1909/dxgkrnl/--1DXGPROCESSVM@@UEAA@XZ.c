/*
 * XREFs of ??1DXGPROCESSVM@@UEAA@XZ @ 0x1C004449C
 * Callers:
 *     ??_EDXGPROCESSVM@@UEAAPEAXI@Z @ 0x1C0044550 (--_EDXGPROCESSVM@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1DXGPROCESS@@MEAA@XZ @ 0x1C00FA354 (--1DXGPROCESS@@MEAA@XZ.c)
 */

void __fastcall DXGPROCESSVM::~DXGPROCESSVM(DXGPROCESSVM *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &DXGPROCESSVM::`vftable';
  v2 = (void *)*((_QWORD *)this + 58);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  DXGPROCESS::~DXGPROCESS(this);
}
