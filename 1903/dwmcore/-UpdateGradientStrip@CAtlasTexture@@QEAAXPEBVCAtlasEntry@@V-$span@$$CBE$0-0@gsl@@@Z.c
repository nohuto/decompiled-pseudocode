/*
 * XREFs of ?UpdateGradientStrip@CAtlasTexture@@QEAAXPEBVCAtlasEntry@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18001A1C4
 * Callers:
 *     ?GenerateWhitePixel@CAtlasTexture@@AEAAXXZ @ 0x180019DE0 (-GenerateWhitePixel@CAtlasTexture@@AEAAXXZ.c)
 *     ?Update@CAtlasImageSource@@QEAAJV?$span@$$CBE$0?0@gsl@@_N@Z @ 0x18001A164 (-Update@CAtlasImageSource@@QEAAJV-$span@$$CBE$0-0@gsl@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180019298 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetDevice@CAtlasTexture@@QEBAPEAVCD3DDeviceLevel1@@XZ @ 0x18001A2AC (-GetDevice@CAtlasTexture@@QEBAPEAVCD3DDeviceLevel1@@XZ.c)
 *     ?UpdateSubresource@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@PEBUtagRECT@@PEBXI_N3@Z @ 0x18003BF80 (-UpdateSubresource@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@PEBUtagRECT@@PEBXI_N3@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180042214 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qqqq @ 0x180166350 (McTemplateU0qqqq.c)
 */

__int64 __fastcall CAtlasTexture::UpdateGradientStrip(CAtlasTexture *a1, __int64 a2, __int64 *a3)
{
  CD3DDeviceLevel1 *Device; // rbp
  unsigned __int8 PixelFormatSize; // al
  char v8; // r8
  __int64 v9; // r10
  __int64 v10; // rbx
  unsigned int v11; // ecx
  bool v13; // [rsp+28h] [rbp-30h]
  struct tagRECT v14; // [rsp+40h] [rbp-18h] BYREF
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF

  v15 = 0LL;
  Device = CAtlasTexture::GetDevice(a1);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(&v15);
  (*(void (__fastcall **)(_QWORD *, __int64 *))(**((_QWORD **)a1 + 1) + 232LL))(*((_QWORD **)a1 + 1), &v15);
  PixelFormatSize = GetPixelFormatSize(*(enum DXGI_FORMAT *)(v15 + 144));
  v10 = *a3;
  v11 = PixelFormatSize >> 3;
  if ( (unsigned int)*a3 >= v11 * *(_DWORD *)(v9 + 128) )
    LODWORD(v10) = v11 * *(_DWORD *)(v9 + 128);
  v14.left = 0;
  v14.top = *(_DWORD *)(a2 + 16);
  v14.bottom = v14.top + 1;
  v14.right = (unsigned int)v10 / v11;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    McTemplateU0qqqq(v11, (unsigned int)&EVTDESC_ETWGUID_BITMAPCOPYEVENT, (unsigned int)v10 / v11, 1, v8, v11);
    v9 = v15;
  }
  CD3DDeviceLevel1::UpdateSubresource(
    Device,
    *(struct ID3D11Resource **)(v9 + 120),
    &v14,
    (const void *)a3[1],
    v10,
    v13,
    1);
  return Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(&v15);
}
