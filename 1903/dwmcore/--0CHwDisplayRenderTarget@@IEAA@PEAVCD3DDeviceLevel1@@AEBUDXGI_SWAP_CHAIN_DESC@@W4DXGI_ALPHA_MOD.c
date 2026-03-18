/*
 * XREFs of ??0CHwDisplayRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@IVDisplayId@@@Z @ 0x1800DD7FC
 * Callers:
 *     ??0CHwFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@IVDisplayId@@@Z @ 0x1800DD764 (--0CHwFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_.c)
 * Callees:
 *     ??0CHwSurfaceRenderTarget@@IEAA@VDisplayId@@@Z @ 0x1800B4424 (--0CHwSurfaceRenderTarget@@IEAA@VDisplayId@@@Z.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::CHwDisplayRenderTarget(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        __int64 a4,
        int a5,
        int a6)
{
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1

  CHwSurfaceRenderTarget::CHwSurfaceRenderTarget(a1);
  v9 = *a3;
  v10 = a3[1];
  *(_QWORD *)(a1 + 144) = &IRenderTargetDisplay::`vftable';
  *(_DWORD *)(a1 + 260) = a5;
  *(_DWORD *)(a1 + 264) = a6;
  *(_BYTE *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_DWORD *)(a1 + 256) = 3;
  *(_OWORD *)(a1 + 184) = v9;
  v11 = a3[2];
  *(_OWORD *)(a1 + 200) = v10;
  v12 = a3[3];
  *(_OWORD *)(a1 + 216) = v11;
  *(_QWORD *)&v11 = *((_QWORD *)a3 + 8);
  *(_OWORD *)(a1 + 232) = v12;
  *(_QWORD *)(a1 + 248) = v11;
  *(_QWORD *)(a1 + 272) = a1 + 280;
  *(_DWORD *)(a1 + 280) = 0;
  *(_QWORD *)(a1 + 152) = a2;
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 504));
  return a1;
}
