/*
 * XREFs of ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ @ 0x180175EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@444PEAPEAVIRenderTargetBitmap@@@Z @ 0x18002FC60 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180067FD4 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ??$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z @ 0x180072BAC (--$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x18007AF60 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x18007F06C (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     ?GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z @ 0x18008C5E4 (-GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z.c)
 *     ?GetDisplayId@CDisplay@@QEBA?AVDisplayId@@XZ @ 0x18008C6C8 (-GetDisplayId@CDisplay@@QEBA-AVDisplayId@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x180176404 (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?GetDisplayPixelFormat@CDisplaySet@@QEBA?AW4DXGI_FORMAT@@VDisplayId@@@Z @ 0x1801E1DA4 (-GetDisplayPixelFormat@CDisplaySet@@QEBA-AW4DXGI_FORMAT@@VDisplayId@@@Z.c)
 */

__int64 __fastcall COffScreenRenderTarget::EnsureRenderTargets(COffScreenRenderTarget *this)
{
  int v1; // esi
  int CurrentDisplaySet; // eax
  __int64 v4; // rcx
  struct _LUID v5; // rdi
  int *DisplayId; // rax
  int v7; // ebx
  enum DXGI_FORMAT DisplayPixelFormat; // eax
  unsigned int v9; // eax
  unsigned int v10; // edx
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v14; // [rsp+20h] [rbp-60h]
  __int64 v15; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v16; // [rsp+B8h] [rbp+38h] BYREF
  CDisplaySet *v17; // [rsp+C0h] [rbp+40h] BYREF
  struct CDisplay *v18; // [rsp+C8h] [rbp+48h] BYREF

  v1 = 0;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  if ( *((_DWORD *)this + 74) )
    goto LABEL_20;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v17);
  v1 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    v14 = 136;
    goto LABEL_19;
  }
  CurrentDisplaySet = CDisplaySet::GetPrimaryDisplay(v17, &v18);
  v1 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    v14 = 137;
    goto LABEL_19;
  }
  v5 = *(struct _LUID *)(*(__int64 (__fastcall **)(COffScreenRenderTarget *, __int64 *, struct CDisplay *))(*(_QWORD *)this + 240LL))(
                          this,
                          &v15,
                          v18);
  DisplayId = CDisplay::GetDisplayId((__int64)v18, &v15);
  v7 = *DisplayId;
  DisplayPixelFormat = (unsigned int)CDisplaySet::GetDisplayPixelFormat(v17, (unsigned int)*DisplayId);
  CurrentDisplaySet = COffScreenRenderTarget::UpdatePixelFormatInfo(this, DisplayPixelFormat);
  v1 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    v14 = 146;
    goto LABEL_19;
  }
  CurrentDisplaySet = CD3DDeviceManager::CreateRenderTargetBitmap(
                        (__int64)&qword_180308A48,
                        (__int64)this + 384,
                        *((_DWORD *)this + 90),
                        *((_DWORD *)this + 91),
                        1LL,
                        0,
                        (__int64)this + 368,
                        1,
                        v5,
                        v7,
                        0,
                        0,
                        1,
                        &v16);
  v1 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    v14 = 161;
LABEL_19:
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, CurrentDisplaySet, v14);
    goto LABEL_20;
  }
  v15 = v16;
  v9 = *((_DWORD *)this + 74);
  v10 = v9 + 1;
  v1 = v9 + 1 < v9 ? 0x80070216 : 0;
  if ( v9 + 1 < v9 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v1, 0xB5u);
  }
  else if ( v10 > *((_DWORD *)this + 73) )
  {
    v12 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 272, 8, 1, &v15);
    v1 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v12, 0xC0u);
  }
  else
  {
    v11 = v9;
    *(_QWORD *)(*((_QWORD *)this + 34) + 8LL * v9) = v15;
    *((_DWORD *)this + 74) = v10;
  }
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v1, 0xA3u);
  else
    v16 = 0LL;
LABEL_20:
  ReleaseInterface<IRenderTargetBitmap>(&v16);
  ReleaseInterface<CDisplaySet const>(&v17);
  ReleaseInterface<CD3DSurface>((__int64 *)&v18);
  ReleaseInterface<IRenderTargetBitmap>(&v16);
  return (unsigned int)v1;
}
