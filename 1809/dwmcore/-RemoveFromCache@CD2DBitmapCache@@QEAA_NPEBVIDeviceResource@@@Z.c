/*
 * XREFs of ?RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z @ 0x1800EAF5C
 * Callers:
 *     ?NotifyInvalidResource@CBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x1800EAF20 (-NotifyInvalidResource@CBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CD2DBitmapCache@@UEAAXPEBVIDeviceResource@@@Z @ 0x180180C40 (-NotifyInvalidResource@CD2DBitmapCache@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CRenderTargetBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x180180ED0 (-NotifyInvalidResource@CRenderTargetBitmap@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CColorKeyBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x180226A40 (-NotifyInvalidResource@CColorKeyBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CDxHandleStereoBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x180228520 (-NotifyInvalidResource@CDxHandleStereoBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x18009B690 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CD2DBitmapCache::RemoveFromCache(CD2DBitmapCache *this, const struct IDeviceResource *a2)
{
  char v2; // r8
  unsigned int v4; // ebx
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 i; // r8

  v2 = 0;
  v4 = 0;
  if ( *((_DWORD *)this + 20) )
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)(*((_QWORD *)this + 7) + 8LL * v4);
      if ( (const struct IDeviceResource *)((v5 + 16) & -(__int64)(v5 != 0)) == a2 )
        break;
      if ( ++v4 >= *((_DWORD *)this + 20) )
        return v2;
    }
    CD2DResource::RemoveResourceNotifier((CD2DResource *)(v5 + 16), (CD2DBitmapCache *)((char *)this + 24));
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    v6 = *((unsigned int *)this + 20);
    if ( v4 >= (unsigned int)v6 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024809, 0x19Cu);
    }
    else
    {
      for ( i = *((_QWORD *)this + 7); v4 < (int)v6 - 1; LODWORD(v6) = *((_DWORD *)this + 20) )
      {
        v6 = v4++;
        *(_QWORD *)(i + 8 * v6) = *(_QWORD *)(i + 8LL * v4);
      }
      *((_DWORD *)this + 20) = v6 - 1;
    }
    return 1;
  }
  return v2;
}
