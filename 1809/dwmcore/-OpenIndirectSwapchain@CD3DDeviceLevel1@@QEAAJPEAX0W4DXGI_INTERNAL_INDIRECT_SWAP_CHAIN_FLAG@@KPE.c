/*
 * XREFs of ?OpenIndirectSwapchain@CD3DDeviceLevel1@@QEAAJPEAX0W4DXGI_INTERNAL_INDIRECT_SWAP_CHAIN_FLAG@@KPEAPEAUIDXGIIndirectSwapChain@@@Z @ 0x1801FCDAC
 * Callers:
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x18015C348 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPC.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x1800376CC (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::OpenIndirectSwapchain(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6)
{
  _QWORD *v6; // rsi
  int v9; // ebx
  int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rbx
  int v13; // r9d
  unsigned int v14; // ebx
  unsigned int v16; // [rsp+20h] [rbp-30h]
  __int64 v17[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v18; // [rsp+70h] [rbp+20h] BYREF
  __int64 v19; // [rsp+80h] [rbp+30h] BYREF

  v6 = a6;
  v19 = 0LL;
  v17[0] = 0LL;
  v18 = 0LL;
  *a6 = 0LL;
  v9 = *(_DWORD *)(a1 + 848);
  if ( v9 < 0 )
  {
    v16 = 1807;
    v13 = *(_DWORD *)(a1 + 848);
    goto LABEL_12;
  }
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v19);
  v10 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 592))(
          *(_QWORD *)(a1 + 592),
          &GUID_54ec77fa_1377_44e6_8c32_88fd5f44c84c,
          &v19);
  v9 = v10;
  if ( v10 < 0 )
  {
    v16 = 1809;
    goto LABEL_7;
  }
  v11 = v19;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(v17);
  v10 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v11 + 48LL))(
          v11,
          &GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0,
          v17);
  v9 = v10;
  if ( v10 < 0 )
  {
    v16 = 1811;
    goto LABEL_7;
  }
  v12 = v17[0];
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v18);
  v10 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v12 + 48LL))(
          v12,
          &GUID_b14887d9_f537_4af5_b379_7d33031be773,
          &v18);
  v9 = v10;
  if ( v10 < 0 )
  {
    v16 = 1812;
    goto LABEL_7;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, int, int, _QWORD *))(*(_QWORD *)v18 + 32LL))(
          v18,
          v19,
          a2,
          0LL,
          5,
          0x10000000,
          v6);
  v9 = v10;
  if ( v10 < 0 )
  {
    v16 = 1819;
LABEL_7:
    v13 = v10;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, v13, v16);
  }
  v14 = CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext(a1, v9, 0);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v18);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(v17);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v19);
  return v14;
}
