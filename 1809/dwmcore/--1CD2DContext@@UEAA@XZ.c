/*
 * XREFs of ??1CD2DContext@@UEAA@XZ @ 0x1800E9A30
 * Callers:
 *     ??1CD3DDeviceLevel1@@MEAA@XZ @ 0x1800E92D4 (--1CD3DDeviceLevel1@@MEAA@XZ.c)
 *     ??_GCD2DContext@@UEAAPEAXI@Z @ 0x1801FB250 (--_GCD2DContext@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x1800E95E0 (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD2DContext::~CD2DContext(CD2DContext *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CD2DContext::`vftable';
  CD2DContext::DestroyDeviceResources((CD2DTarget **)this);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 46);
  v2 = *((_QWORD *)this + 45);
  if ( v2 )
  {
    *((_QWORD *)this + 45) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 39);
  CDrawListBatchManager::~CDrawListBatchManager((void **)this + 1);
}
