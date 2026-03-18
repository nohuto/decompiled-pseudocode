/*
 * XREFs of ?RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z @ 0x1800D8EFC
 * Callers:
 *     ?NotifyInvalidResource@CRenderTargetBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x1800215B0 (-NotifyInvalidResource@CRenderTargetBitmap@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x1800D8EC0 (-NotifyInvalidResource@CBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CD2DBitmapCache@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801AC6E0 (-NotifyInvalidResource@CD2DBitmapCache@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CColorKeyBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x180256CF0 (-NotifyInvalidResource@CColorKeyBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CDxHandleStereoBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x180263770 (-NotifyInvalidResource@CDxHandleStereoBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x18003AB70 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CD2DBitmapCache::RemoveFromCache(CD2DBitmapCache *this, const struct IDeviceResource *a2)
{
  char v2; // di
  unsigned int v4; // ebx
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 i; // r8

  v2 = 0;
  v4 = 0;
  if ( *((_DWORD *)this + 20) )
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)(*((_QWORD *)this + 7) + 8LL * v4);
      if ( (const struct IDeviceResource *)((v6 + 16) & -(__int64)(v6 != 0)) == a2 )
        break;
      if ( ++v4 >= *((_DWORD *)this + 20) )
        return v2;
    }
    CD2DResource::RemoveResourceNotifier((CD2DResource *)(v6 + 16), (CD2DBitmapCache *)((char *)this + 24));
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    v7 = *((unsigned int *)this + 20);
    if ( v4 >= (unsigned int)v7 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, 0x80070057, 0x19Fu, 0LL);
    }
    else
    {
      for ( i = *((_QWORD *)this + 7); v4 < (int)v7 - 1; LODWORD(v7) = *((_DWORD *)this + 20) )
      {
        v7 = v4++;
        *(_QWORD *)(i + 8 * v7) = *(_QWORD *)(i + 8LL * v4);
      }
      *((_DWORD *)this + 20) = v7 - 1;
    }
    return 1;
  }
  return v2;
}
