/*
 * XREFs of ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ @ 0x18019A910
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180023F3C (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ?GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z @ 0x18002E32C (-GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z.c)
 *     ??$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z @ 0x18003DFF0 (--$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@444PEAPEAVIRenderTargetBitmap@@@Z @ 0x18003E4B0 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x180042658 (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     ?GetDisplayId@CDisplay@@QEBA?AVDisplayId@@XZ @ 0x180042DC8 (-GetDisplayId@CDisplay@@QEBA-AVDisplayId@@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x1800A8990 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?GetDisplayPixelFormat@CDisplaySet@@QEBA?AW4DXGI_FORMAT@@VDisplayId@@@Z @ 0x18015A86C (-GetDisplayPixelFormat@CDisplaySet@@QEBA-AW4DXGI_FORMAT@@VDisplayId@@@Z.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x18019B57C (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall COffScreenRenderTarget::EnsureRenderTargets(COffScreenRenderTarget *this)
{
  signed int v2; // esi
  signed int CurrentDisplaySet; // eax
  __int64 v4; // rcx
  struct _LUID v5; // rdi
  int *DisplayId; // rax
  int v7; // ebx
  enum DXGI_FORMAT DisplayPixelFormat; // eax
  unsigned int v9; // eax
  unsigned int v10; // edx
  __int64 v11; // rcx
  signed int v12; // eax
  unsigned int v13; // edx
  unsigned int v15; // [rsp+20h] [rbp-39h]
  __int64 v16; // [rsp+C0h] [rbp+67h] BYREF
  __int64 v17; // [rsp+C8h] [rbp+6Fh] BYREF
  CDisplaySet *v18; // [rsp+D0h] [rbp+77h] BYREF
  struct CDisplay *v19; // [rsp+D8h] [rbp+7Fh] BYREF

  v2 = 0;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  if ( !*((_DWORD *)this + 74) )
  {
    CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v18);
    v2 = CurrentDisplaySet;
    if ( CurrentDisplaySet < 0 )
    {
      v15 = 134;
    }
    else
    {
      CurrentDisplaySet = CDisplaySet::GetPrimaryDisplay(v18, &v19);
      v2 = CurrentDisplaySet;
      if ( CurrentDisplaySet < 0 )
      {
        v15 = 135;
      }
      else
      {
        v5 = *(struct _LUID *)(*(__int64 (__fastcall **)(COffScreenRenderTarget *, __int64 *, struct CDisplay *))(*(_QWORD *)this + 384LL))(
                                this,
                                &v16,
                                v19);
        DisplayId = CDisplay::GetDisplayId((__int64)v19, &v16);
        v7 = *DisplayId;
        DisplayPixelFormat = (unsigned int)CDisplaySet::GetDisplayPixelFormat((__int64)v18, *DisplayId);
        CurrentDisplaySet = COffScreenRenderTarget::UpdatePixelFormatInfo(this, DisplayPixelFormat);
        v2 = CurrentDisplaySet;
        if ( CurrentDisplaySet < 0 )
        {
          v15 = 144;
        }
        else
        {
          CurrentDisplaySet = CD3DDeviceManager::CreateRenderTargetBitmap(
                                (__int64)&qword_180340368,
                                (__int64)this + 376,
                                *((_DWORD *)this + 22),
                                *((_DWORD *)this + 23),
                                1LL,
                                0,
                                (__int64)this + 360,
                                1,
                                v5,
                                v7,
                                0,
                                0,
                                1,
                                &v17);
          v2 = CurrentDisplaySet;
          if ( CurrentDisplaySet >= 0 )
          {
            v16 = v17;
            v9 = *((_DWORD *)this + 74);
            v10 = v9 + 1;
            if ( v9 + 1 >= v9 )
            {
              if ( v10 <= *((_DWORD *)this + 73) )
              {
                v2 = 0;
                *(_QWORD *)(*((_QWORD *)this + 34) + 8LL * *((unsigned int *)this + 74)) = v16;
                *((_DWORD *)this + 74) = v10;
LABEL_13:
                v17 = 0LL;
                goto LABEL_20;
              }
              v12 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 272, 8, 1, &v16);
              v2 = v12;
              if ( v12 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v12, 0xC3u, 0LL);
            }
            else
            {
              v2 = -2147024362;
              MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, 0x80070216, 0xB8u, 0LL);
            }
            if ( v2 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v2, 0xA1u, 0LL);
              goto LABEL_20;
            }
            goto LABEL_13;
          }
          v15 = 159;
        }
      }
    }
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, CurrentDisplaySet, v15, 0LL);
  }
LABEL_20:
  ReleaseInterface<IRenderTargetBitmap>(&v17);
  ReleaseInterface<CDisplaySet const>(&v18, v13);
  ReleaseInterface<CD3DSurface>((__int64 *)&v19);
  ReleaseInterface<IRenderTargetBitmap>(&v17);
  return (unsigned int)v2;
}
