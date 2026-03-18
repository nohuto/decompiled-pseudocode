/*
 * XREFs of ??1CD2DBitmapCache@@MEAA@XZ @ 0x18004E12C
 * Callers:
 *     ??1CRenderTargetBitmap@@MEAA@XZ @ 0x18004E094 (--1CRenderTargetBitmap@@MEAA@XZ.c)
 *     ??1CBitmapRealization@@MEAA@XZ @ 0x18009B59C (--1CBitmapRealization@@MEAA@XZ.c)
 *     ??_ECD2DBitmapCache@@MEAAPEAXI@Z @ 0x180180A50 (--_ECD2DBitmapCache@@MEAAPEAXI@Z.c)
 *     ??1CColorKeyBitmapRealization@@MEAA@XZ @ 0x1802264FC (--1CColorKeyBitmapRealization@@MEAA@XZ.c)
 *     ??1CDxHandleAdvancedDirectFlipBitmapRealization@@MEAA@XZ @ 0x180227190 (--1CDxHandleAdvancedDirectFlipBitmapRealization@@MEAA@XZ.c)
 *     ??1CDxHandleStereoBitmapRealization@@MEAA@XZ @ 0x180227F64 (--1CDxHandleStereoBitmapRealization@@MEAA@XZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180057AF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x18009B690 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD2DBitmapCache::~CD2DBitmapCache(CD2DBitmapCache *this)
{
  __int64 v1; // rsi
  void **v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rbx

  v1 = 0LL;
  *(_QWORD *)this = &CD2DBitmapCache::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CD2DBitmapCacheSourceRealization::`vftable'{for `ID2DBitmapCache'};
  for ( *((_QWORD *)this + 3) = &CD2DBitmapCache::`vftable'{for `IDeviceResourceNotify'};
        (unsigned int)v1 < *((_DWORD *)this + 20);
        v1 = (unsigned int)(v1 + 1) )
  {
    v7 = *(_QWORD *)(*((_QWORD *)this + 7) + 8 * v1);
    CD2DResource::RemoveResourceNotifier((CD2DResource *)(v7 + 16), (CD2DBitmapCache *)((char *)this + 24));
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v3 = (void **)((char *)this + 56);
  *((_DWORD *)this + 20) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 56, 8LL);
  v4 = *((_QWORD *)this + 4);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *((_QWORD *)this + 5);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = *((_QWORD *)this + 6);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( *((_QWORD *)this + 7) != *((_QWORD *)this + 8) )
  {
    WPF::ProcessHeapImpl::Free(*v3);
    *v3 = 0LL;
  }
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
