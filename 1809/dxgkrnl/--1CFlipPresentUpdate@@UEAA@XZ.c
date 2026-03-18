/*
 * XREFs of ??1CFlipPresentUpdate@@UEAA@XZ @ 0x1C005CF5C
 * Callers:
 *     ??_GCFlipPresentUpdate@@UEAAPEAXI@Z @ 0x1C00596F0 (--_GCFlipPresentUpdate@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x1C00578E0 (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 *     ??1CFlipTokenOperation@@MEAA@XZ @ 0x1C005ACF8 (--1CFlipTokenOperation@@MEAA@XZ.c)
 */

void __fastcall CFlipPresentUpdate::~CFlipPresentUpdate(CFlipPresentUpdate *this)
{
  void *v2; // rcx
  CFlipPropertySetBase *v3; // rcx
  CFlipPresentUpdate **v4; // rdx
  CFlipPresentUpdate **v5; // rcx

  *(_QWORD *)this = &CFlipPresentUpdate::`vftable'{for `CFlipTokenOperation'};
  *((_QWORD *)this + 2) = &CFlipPresentUpdate::`vftable'{for `CFlipQueuedObject'};
  v2 = (void *)*((_QWORD *)this + 6);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  v3 = (CFlipPropertySetBase *)*((_QWORD *)this + 7);
  if ( v3 )
    CFlipPropertySetBase::Release(v3);
  *((_QWORD *)this + 2) = &CFlipPresentCancel::`vftable';
  v4 = (CFlipPresentUpdate **)*((_QWORD *)this + 3);
  if ( v4[1] != (CFlipPresentUpdate *)((char *)this + 24)
    || (v5 = (CFlipPresentUpdate **)*((_QWORD *)this + 4), *v5 != (CFlipPresentUpdate *)((char *)this + 24)) )
  {
    __fastfail(3u);
  }
  *v5 = (CFlipPresentUpdate *)v4;
  v4[1] = (CFlipPresentUpdate *)v5;
  CFlipTokenOperation::~CFlipTokenOperation(this);
}
