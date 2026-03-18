/*
 * XREFs of ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ @ 0x180199050
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180027964 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180027B70 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ??$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z @ 0x18002AC5C (--$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ?GetDisplayId@CDisplay@@QEBA?AVDisplayId@@XZ @ 0x18005200C (-GetDisplayId@CDisplay@@QEBA-AVDisplayId@@XZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@444PEAPEAVIRenderTargetBitmap@@@Z @ 0x180052D80 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x1800530F8 (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18006AD4C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z @ 0x1800AE8B0 (-GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?GetDisplayPixelFormat@CDisplaySet@@QEBA?AW4DXGI_FORMAT@@VDisplayId@@@Z @ 0x18015918C (-GetDisplayPixelFormat@CDisplaySet@@QEBA-AW4DXGI_FORMAT@@VDisplayId@@@Z.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x180199CBC (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall COffScreenRenderTarget::EnsureRenderTargets(COffScreenRenderTarget *this)
{
  signed int v2; // esi
  signed int CurrentDisplaySet; // eax
  __int64 v4; // rcx
  struct _LUID v5; // rdi
  int *DisplayId; // rax
  unsigned int v7; // ebx
  enum DXGI_FORMAT DisplayPixelFormat; // eax
  unsigned int v9; // eax
  unsigned int v10; // edx
  __int64 v11; // rcx
  signed int v12; // eax
  unsigned int v14; // [rsp+20h] [rbp-39h]
  void *v15; // [rsp+C0h] [rbp+67h] BYREF
  void *v16; // [rsp+C8h] [rbp+6Fh] BYREF
  CDisplaySet *v17; // [rsp+D0h] [rbp+77h] BYREF
  struct CDisplay *v18; // [rsp+D8h] [rbp+7Fh] BYREF

  v2 = 0;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  if ( !*((_DWORD *)this + 74) )
  {
    CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v17);
    v2 = CurrentDisplaySet;
    if ( CurrentDisplaySet < 0 )
    {
      v14 = 134;
    }
    else
    {
      CurrentDisplaySet = CDisplaySet::GetPrimaryDisplay(v17, &v18);
      v2 = CurrentDisplaySet;
      if ( CurrentDisplaySet < 0 )
      {
        v14 = 135;
      }
      else
      {
        v5 = *(struct _LUID *)(*(__int64 (__fastcall **)(COffScreenRenderTarget *, void **, struct CDisplay *))(*(_QWORD *)this + 384LL))(
                                this,
                                &v15,
                                v18);
        DisplayId = CDisplay::GetDisplayId((__int64)v18, &v15);
        v7 = *DisplayId;
        DisplayPixelFormat = (unsigned int)CDisplaySet::GetDisplayPixelFormat((__int64)v17, *DisplayId);
        CurrentDisplaySet = COffScreenRenderTarget::UpdatePixelFormatInfo(this, DisplayPixelFormat);
        v2 = CurrentDisplaySet;
        if ( CurrentDisplaySet < 0 )
        {
          v14 = 144;
        }
        else
        {
          CurrentDisplaySet = CD3DDeviceManager::CreateRenderTargetBitmap(
                                (__int64)&qword_18033D448,
                                (__int64)this + 376,
                                *((_DWORD *)this + 22),
                                *((_DWORD *)this + 23),
                                1LL,
                                0,
                                (COffScreenRenderTarget *)((char *)this + 360),
                                1,
                                v5,
                                v7,
                                0,
                                0,
                                1,
                                &v16);
          v2 = CurrentDisplaySet;
          if ( CurrentDisplaySet >= 0 )
          {
            v15 = v16;
            v9 = *((_DWORD *)this + 74);
            v10 = v9 + 1;
            if ( v9 + 1 >= v9 )
            {
              if ( v10 <= *((_DWORD *)this + 73) )
              {
                v2 = 0;
                *(_QWORD *)(*((_QWORD *)this + 34) + 8LL * *((unsigned int *)this + 74)) = v15;
                *((_DWORD *)this + 74) = v10;
LABEL_13:
                v16 = 0LL;
                goto LABEL_20;
              }
              v12 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 272, 8, 1, &v15);
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
          v14 = 159;
        }
      }
    }
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, CurrentDisplaySet, v14, 0LL);
  }
LABEL_20:
  ReleaseInterface<IRenderTargetBitmap>((__int64 *)&v16);
  ReleaseInterface<CDisplaySet const>(&v17);
  ReleaseInterface<CD3DSurface>((__int64 *)&v18);
  ReleaseInterface<IRenderTargetBitmap>((__int64 *)&v16);
  return (unsigned int)v2;
}
