/*
 * XREFs of ??0CHwDisplayRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@IVDisplayId@@@Z @ 0x18008A044
 * Callers:
 *     ??0CHwFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@IVDisplayId@@@Z @ 0x180089FA8 (--0CHwFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_.c)
 * Callees:
 *     ??0CHwSurfaceRenderTarget@@IEAA@VDisplayId@@@Z @ 0x1800DB204 (--0CHwSurfaceRenderTarget@@IEAA@VDisplayId@@@Z.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::CHwDisplayRenderTarget(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        __int64 a4,
        int a5,
        int a6,
        unsigned int a7)
{
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1

  CHwSurfaceRenderTarget::CHwSurfaceRenderTarget(a1, a7);
  v10 = *a3;
  v11 = a3[1];
  *(_QWORD *)(a1 + 208) = &IRenderTargetDisplay::`vftable';
  *(_DWORD *)(a1 + 324) = a5;
  *(_DWORD *)(a1 + 328) = a6;
  *(_BYTE *)(a1 + 224) = 0;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_DWORD *)(a1 + 320) = 3;
  *(_OWORD *)(a1 + 248) = v10;
  v12 = a3[2];
  *(_OWORD *)(a1 + 264) = v11;
  v13 = a3[3];
  *(_OWORD *)(a1 + 280) = v12;
  *(_QWORD *)&v12 = *((_QWORD *)a3 + 8);
  *(_OWORD *)(a1 + 296) = v13;
  *(_QWORD *)(a1 + 312) = v12;
  *(_QWORD *)(a1 + 336) = a1 + 344;
  *(_DWORD *)(a1 + 344) = 0;
  *(_QWORD *)(a1 + 216) = a2;
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 504));
  return a1;
}
