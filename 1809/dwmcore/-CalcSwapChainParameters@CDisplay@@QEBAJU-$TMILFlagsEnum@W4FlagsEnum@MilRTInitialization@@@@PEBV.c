/*
 * XREFs of ?CalcSwapChainParameters@CDisplay@@QEBAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCD3DDeviceLevel1@@PEAUDXGI_SWAP_CHAIN_DESC@@PEAW4DXGI_COLOR_SPACE_TYPE@@PEAIPEA_N@Z @ 0x180089BB0
 * Callers:
 *     ?Create@CHwDisplayRenderTarget@@SAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV1@@Z @ 0x180089E48 (-Create@CHwDisplayRenderTarget@@SAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializatio.c)
 * Callees:
 *     ?ShouldTripleBuffer@CDisplay@@QEBA_NXZ @ 0x18001D164 (-ShouldTripleBuffer@CDisplay@@QEBA_NXZ.c)
 *     ?GetDefaultSRGBFormat@CDisplay@@SA?AW4DXGI_FORMAT@@XZ @ 0x18007E4F8 (-GetDefaultSRGBFormat@CDisplay@@SA-AW4DXGI_FORMAT@@XZ.c)
 *     ?GetOptionalDisplaySwapChainBufferUsageFlags@CD3DDeviceLevel1@@QEBAIIW4DXGI_FORMAT@@@Z @ 0x180089D3C (-GetOptionalDisplaySwapChainBufferUsageFlags@CD3DDeviceLevel1@@QEBAIIW4DXGI_FORMAT@@@Z.c)
 *     ?IsXboxAdapter@CDXGIAdapterLimited@@QEBA_NXZ @ 0x18009AEDC (-IsXboxAdapter@CDXGIAdapterLimited@@QEBA_NXZ.c)
 *     ?HasStereoSupport@CDisplay@@QEBA_NXZ @ 0x1801E3B54 (-HasStereoSupport@CDisplay@@QEBA_NXZ.c)
 */

__int64 __fastcall CDisplay::CalcSwapChainParameters(
        CDisplay *this,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int *a5,
        _DWORD *a6,
        bool *a7)
{
  int v7; // eax
  bool v9; // bp
  bool v13; // al
  int v14; // eax
  bool v15; // cc
  int DefaultSRGBFormat; // eax
  int v17; // ebp
  bool v18; // zf
  int v19; // eax
  enum DXGI_FORMAT v20; // r8d
  unsigned int v21; // edx
  int v23; // ecx

  v7 = *((_DWORD *)this + 73);
  *(_DWORD *)(a4 + 8) = 0;
  v9 = 0;
  *(_DWORD *)(a4 + 12) = 0;
  *(_QWORD *)(a4 + 48) = 0LL;
  *(_DWORD *)(a4 + 56) = 0;
  *(_DWORD *)(a4 + 20) = v7;
  *(_DWORD *)(a4 + 24) = *((_DWORD *)this + 74);
  v13 = (a2 & 0x2000) != 0 && CDisplay::HasStereoSupport(this);
  *a7 = v13;
  if ( (a2 & 0x4000) != 0 )
  {
    if ( ((*((_DWORD *)this + 76) - 2) & 0xFFFFFFFD) != 0 )
    {
      v14 = *((_DWORD *)this + 33) - *((_DWORD *)this + 31);
      v23 = *((_DWORD *)this + 32) - *((_DWORD *)this + 30);
    }
    else
    {
      v14 = *((_DWORD *)this + 32) - *((_DWORD *)this + 30);
      v23 = *((_DWORD *)this + 33) - *((_DWORD *)this + 31);
    }
    *(_DWORD *)a4 = v23;
  }
  else
  {
    *(_DWORD *)a4 = *((_DWORD *)this + 24) - *((_DWORD *)this + 22);
    v14 = *((_DWORD *)this + 25) - *((_DWORD *)this + 23);
  }
  *(_DWORD *)(a4 + 4) = v14;
  v15 = *(_DWORD *)(a3 + 740) < 45056;
  *(_QWORD *)(a4 + 8) = *((_QWORD *)this + 35);
  if ( v15 && !CDXGIAdapterLimited::IsXboxAdapter(*(CDXGIAdapterLimited **)(a3 + 696)) )
    goto LABEL_31;
  DefaultSRGBFormat = *((_DWORD *)this + 72);
  if ( DefaultSRGBFormat != 10 && DefaultSRGBFormat != 24 && DefaultSRGBFormat != 28 )
    v9 = DefaultSRGBFormat != 87;
  if ( v9 )
  {
LABEL_31:
    v17 = 0;
    DefaultSRGBFormat = CDisplay::GetDefaultSRGBFormat();
  }
  else
  {
    v17 = *((_DWORD *)this + 75);
    if ( (a2 & 0x4000) != 0 )
    {
      if ( v17 )
      {
        v17 = 1;
        DefaultSRGBFormat = 10;
      }
      else
      {
        DefaultSRGBFormat = CDisplay::GetDefaultSRGBFormat();
        v17 = *((_DWORD *)this + 75);
      }
    }
  }
  *(_DWORD *)(a4 + 16) = DefaultSRGBFormat;
  *a5 = v17;
  if ( v17 )
    *a7 = 0;
  *(_DWORD *)(a4 + 32) = 0;
  v18 = *((_BYTE *)this + 320) == 0;
  *(_DWORD *)(a4 + 28) = 1;
  if ( !v18 || (a2 & 0x4000) != 0 )
  {
    *(_DWORD *)(a4 + 60) = 1;
    *(_DWORD *)(a4 + 40) = 1;
  }
  else if ( (a2 & 0x400) != 0 )
  {
    v19 = *((_DWORD *)this + 78);
    *(_DWORD *)(a4 + 60) = 1;
    if ( !v19 )
      v19 = (CDisplay::ShouldTripleBuffer(this) != 0) + 2;
    *(_DWORD *)(a4 + 40) = v19;
  }
  else
  {
    *(_DWORD *)(a4 + 40) = 1;
    *(_DWORD *)(a4 + 60) = (a2 & 8) != 0;
  }
  v20 = *(_DWORD *)(a4 + 16);
  v21 = *(_DWORD *)(a4 + 40);
  *(_DWORD *)(a4 + 64) = 0;
  *(_DWORD *)(a4 + 36) = 96;
  *(_DWORD *)(a4 + 36) |= CD3DDeviceLevel1::GetOptionalDisplaySwapChainBufferUsageFlags(
                            (CD3DDeviceLevel1 *)a3,
                            v21,
                            v20);
  if ( (a2 & 0x4000) == 0 )
    *(_DWORD *)(a4 + 64) |= 1u;
  *a6 = ((a2 >> 2) & 1) == 0;
  return 0LL;
}
