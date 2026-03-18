/*
 * XREFs of ?CalcSwapChainParameters@CDisplay@@QEBAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCD3DDeviceLevel1@@PEAUDXGI_SWAP_CHAIN_DESC@@PEAW4DXGI_COLOR_SPACE_TYPE@@PEAIPEA_N@Z @ 0x1800DDA24
 * Callers:
 *     ?Create@CHwDisplayRenderTarget@@SAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV1@@Z @ 0x1800DD8CC (-Create@CHwDisplayRenderTarget@@SAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializatio.c)
 * Callees:
 *     ?ShouldTripleBuffer@CDisplay@@QEBA_NXZ @ 0x18001F634 (-ShouldTripleBuffer@CDisplay@@QEBA_NXZ.c)
 *     ?IsXboxAdapter@CDXGIAdapterLimited@@QEBA_NXZ @ 0x18003DB6C (-IsXboxAdapter@CDXGIAdapterLimited@@QEBA_NXZ.c)
 *     ?GetDefaultSRGBFormat@CDisplay@@SA?AW4DXGI_FORMAT@@XZ @ 0x1800A8FC8 (-GetDefaultSRGBFormat@CDisplay@@SA-AW4DXGI_FORMAT@@XZ.c)
 *     ?HasStereoSupport@CDisplay@@QEBA_NXZ @ 0x1800B0DE0 (-HasStereoSupport@CDisplay@@QEBA_NXZ.c)
 *     ?IsFrontBufferRenderingSupported@CD3DDeviceLevel1@@QEBA_NW4DXGI_FORMAT@@@Z @ 0x1800DDC7C (-IsFrontBufferRenderingSupported@CD3DDeviceLevel1@@QEBA_NW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall CDisplay::CalcSwapChainParameters(
        struct _LUID *this,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int *a5,
        _DWORD *a6,
        bool *a7)
{
  LONG HighPart; // eax
  bool v9; // bp
  bool v13; // al
  int v14; // eax
  bool v15; // cc
  int LowPart; // eax
  int v17; // ebp
  bool v18; // zf
  int v19; // eax
  int v21; // ecx
  __int64 v22; // rax

  HighPart = this[35].HighPart;
  *(_DWORD *)(a4 + 8) = 0;
  v9 = 0;
  *(_DWORD *)(a4 + 12) = 0;
  *(_QWORD *)(a4 + 48) = 0LL;
  *(_DWORD *)(a4 + 56) = 0;
  *(_DWORD *)(a4 + 20) = HighPart;
  *(_DWORD *)(a4 + 24) = this[36].LowPart;
  v13 = (a2 & 0x2000) != 0 && CDisplay::HasStereoSupport((CDisplay *)this);
  *a7 = v13;
  if ( (a2 & 0x4000) != 0 )
  {
    if ( ((this[37].LowPart - 2) & 0xFFFFFFFD) != 0 )
    {
      v14 = this[16].HighPart - this[15].HighPart;
      v21 = this[16].LowPart - this[15].LowPart;
    }
    else
    {
      v14 = this[16].LowPart - this[15].LowPart;
      v21 = this[16].HighPart - this[15].HighPart;
    }
    *(_DWORD *)a4 = v21;
  }
  else
  {
    *(_DWORD *)a4 = this[12].LowPart - this[11].LowPart;
    v14 = this[12].HighPart - this[11].HighPart;
  }
  *(_DWORD *)(a4 + 4) = v14;
  v15 = *(_DWORD *)(a3 + 740) < 45056;
  *(struct _LUID *)(a4 + 8) = this[34];
  if ( v15 && !CDXGIAdapterLimited::IsXboxAdapter(*(const wchar_t **)(a3 + 696)) )
    goto LABEL_39;
  LowPart = this[35].LowPart;
  if ( LowPart != 10 && LowPart != 24 && LowPart != 28 )
    v9 = LowPart != 87;
  if ( v9 )
  {
LABEL_39:
    v17 = 0;
    LowPart = CDisplay::GetDefaultSRGBFormat();
  }
  else
  {
    v17 = this[36].HighPart;
    if ( (a2 & 0x4000) != 0 )
    {
      if ( v17 )
      {
        v17 = 1;
        LowPart = 10;
      }
      else
      {
        LowPart = CDisplay::GetDefaultSRGBFormat();
        v17 = this[36].HighPart;
      }
    }
  }
  *(_DWORD *)(a4 + 16) = LowPart;
  *a5 = v17;
  if ( v17 )
    *a7 = 0;
  *(_DWORD *)(a4 + 32) = 0;
  v18 = LOBYTE(this[39].LowPart) == 0;
  *(_DWORD *)(a4 + 28) = 1;
  if ( !v18 || (a2 & 0x4000) != 0 )
  {
    *(_DWORD *)(a4 + 60) = 1;
    *(_DWORD *)(a4 + 40) = 1;
  }
  else if ( (a2 & 0x400) != 0 )
  {
    v19 = this[38].LowPart;
    *(_DWORD *)(a4 + 60) = 1;
    if ( !v19 )
      v19 = (unsigned __int8)CDisplay::ShouldTripleBuffer(this) + 2;
    *(_DWORD *)(a4 + 40) = v19;
  }
  else
  {
    *(_DWORD *)(a4 + 40) = 1;
    *(_DWORD *)(a4 + 60) = (a2 & 8) != 0;
  }
  *(_DWORD *)(a4 + 64) = 0;
  v15 = *(_DWORD *)(a3 + 740) < 40960;
  *(_DWORD *)(a4 + 36) = 96;
  if ( !v15 || (v22 = *(_QWORD *)(a3 + 696), *(_DWORD *)(v22 + 296) == 1297040209) && *(int *)(v22 + 348) >= 1200 )
    *(_DWORD *)(a4 + 36) = 112;
  if ( !HIBYTE(this[39].LowPart)
    && !BYTE2(this[39].HighPart)
    && CCommonRegistryData::m_fSuperWetEnabled
    && *(_DWORD *)(a4 + 40) > 1u
    && CD3DDeviceLevel1::IsFrontBufferRenderingSupported((CD3DDeviceLevel1 *)a3, *(enum DXGI_FORMAT *)(a4 + 16)) )
  {
    *(_DWORD *)(a4 + 36) |= 0x2000480u;
  }
  if ( (a2 & 0x4000) == 0 )
    *(_DWORD *)(a4 + 64) |= 1u;
  *a6 = ((a2 >> 2) & 1) == 0;
  return 0LL;
}
