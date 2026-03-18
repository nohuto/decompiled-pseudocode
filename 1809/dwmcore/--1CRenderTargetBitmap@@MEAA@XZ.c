/*
 * XREFs of ??1CRenderTargetBitmap@@MEAA@XZ @ 0x18004E094
 * Callers:
 *     ??1CRenderTargetImageSource@@MEAA@XZ @ 0x18004DE78 (--1CRenderTargetImageSource@@MEAA@XZ.c)
 *     ??_ECRenderTargetBitmap@@MEAAPEAXI@Z @ 0x180079520 (--_ECRenderTargetBitmap@@MEAAPEAXI@Z.c)
 *     ??_GCDecodeBitmap@@UEAAPEAXI@Z @ 0x180229880 (--_GCDecodeBitmap@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ @ 0x18004E2CC (-ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRenderTargetBitmap::~CRenderTargetBitmap(CRenderTargetBitmap *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  void *v5; // rcx

  *(_QWORD *)this = &CRenderTargetBitmap::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CDecodeBitmap::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 3) = &CDecodeBitmap::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 11) = &CRenderTargetBitmap::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 18) = &CDecodeBitmap::`vftable'{for `IBitmapRealization'};
  CRenderTargetBitmap::ReleaseRenderTargetBitmap(this);
  v2 = *((_QWORD *)this + 21);
  if ( v2 )
  {
    *((_QWORD *)this + 21) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *((_QWORD *)this + 20);
  if ( v3 )
  {
    *((_QWORD *)this + 20) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = *((_QWORD *)this + 19);
  if ( v4 )
  {
    *((_QWORD *)this + 19) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = (void *)*((_QWORD *)this + 12);
  if ( v5 != *((void **)this + 13) )
  {
    WPF::ProcessHeapImpl::Free(v5);
    *((_QWORD *)this + 12) = 0LL;
  }
  CD2DBitmapCache::~CD2DBitmapCache(this);
}
