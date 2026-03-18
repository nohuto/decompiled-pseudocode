/*
 * XREFs of ??1CFlipResourceState@@MEAA@XZ @ 0x1C0061E58
 * Callers:
 *     ??_ECFlipResourceState@@MEAAPEAXI@Z @ 0x1C0061F50 (--_ECFlipResourceState@@MEAAPEAXI@Z.c)
 *     ??_GCPoolBufferResourceState@@UEAAPEAXI@Z @ 0x1C0061FA0 (--_GCPoolBufferResourceState@@UEAAPEAXI@Z.c)
 *     ??1CContentResourceState@@UEAA@XZ @ 0x1C0063E14 (--1CContentResourceState@@UEAA@XZ.c)
 * Callees:
 *     ?Release@CFlipResource@@QEAAKXZ @ 0x1C0061BA4 (-Release@CFlipResource@@QEAAKXZ.c)
 */

void __fastcall CFlipResourceState::~CFlipResourceState(CFlipResourceState *this)
{
  CFlipResourceState **v1; // r8
  CFlipResourceState **v2; // rdx

  *(_QWORD *)this = &CFlipResourceState::`vftable';
  v1 = (CFlipResourceState **)*((_QWORD *)this + 1);
  if ( v1[1] != (CFlipResourceState *)((char *)this + 8)
    || (v2 = (CFlipResourceState **)*((_QWORD *)this + 2), *v2 != (CFlipResourceState *)((char *)this + 8)) )
  {
    __fastfail(3u);
  }
  *v2 = (CFlipResourceState *)v1;
  v1[1] = (CFlipResourceState *)v2;
  CFlipResource::Release(*((CFlipResource **)this + 3));
}
