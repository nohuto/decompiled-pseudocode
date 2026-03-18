/*
 * XREFs of ??1CD2DContext@@UEAA@XZ @ 0x18002C6A4
 * Callers:
 *     ??1CD3DDeviceLevel1@@MEAA@XZ @ 0x18002C22C (--1CD3DDeviceLevel1@@MEAA@XZ.c)
 *     ??_GCD2DContext@@UEAAPEAXI@Z @ 0x18015A5A0 (--_GCD2DContext@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x18002CB1C (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18007A004 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD2DContext::~CD2DContext(CD2DContext *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CD2DContext::`vftable';
  CD2DContext::DestroyDeviceResources(this);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 368);
  v2 = *((_QWORD *)this + 45);
  if ( v2 )
  {
    *((_QWORD *)this + 45) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 312);
  CDrawListBatchManager::~CDrawListBatchManager((CD2DContext *)((char *)this + 8));
}
