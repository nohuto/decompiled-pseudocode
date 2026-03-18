/*
 * XREFs of ?OpenIndirectSwapchain@CD3DDeviceLevel1@@QEAAJPEAX0W4DXGI_INTERNAL_INDIRECT_SWAP_CHAIN_FLAG@@KPEAPEAUIDXGIIndirectSwapChain@@@Z @ 0x18015C5C4
 * Callers:
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x180193F80 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSW.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D76C (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180063830 (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::OpenIndirectSwapchain(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6)
{
  _QWORD *v6; // r14
  int v9; // ebx
  __int64 (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v11)(_QWORD, GUID *, __int64 *); // rbx
  int v12; // eax
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, GUID *, __int64 *); // rdi
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, GUID *, __int64 *); // rdi
  unsigned int v17; // r9d
  unsigned int v18; // ebx
  unsigned int v20; // [rsp+20h] [rbp-30h]
  __int64 v21[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v22; // [rsp+80h] [rbp+30h] BYREF
  __int64 v23; // [rsp+90h] [rbp+40h] BYREF

  v6 = a6;
  v23 = 0LL;
  v21[0] = 0LL;
  v22 = 0LL;
  *a6 = 0LL;
  v9 = *(_DWORD *)(a1 + 880);
  if ( v9 < 0 )
  {
    v17 = *(_DWORD *)(a1 + 880);
    v20 = 1812;
    goto LABEL_12;
  }
  v10 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 592);
  v11 = **v10;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v23);
  v12 = v11(v10, &GUID_54ec77fa_1377_44e6_8c32_88fd5f44c84c, &v23);
  v9 = v12;
  if ( v12 < 0 )
  {
    v20 = 1814;
    goto LABEL_7;
  }
  v13 = v23;
  v14 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v23 + 48LL);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(v21);
  v12 = v14(v13, &GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0, v21);
  v9 = v12;
  if ( v12 < 0 )
  {
    v20 = 1816;
    goto LABEL_7;
  }
  v15 = v21[0];
  v16 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v21[0] + 48LL);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v22);
  v12 = v16(v15, &GUID_b14887d9_f537_4af5_b379_7d33031be773, &v22);
  v9 = v12;
  if ( v12 < 0 )
  {
    v20 = 1817;
    goto LABEL_7;
  }
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, int, int, _QWORD *))(*(_QWORD *)v22 + 32LL))(
          v22,
          v23,
          a2,
          0LL,
          5,
          0x10000000,
          v6);
  v9 = v12;
  if ( v12 < 0 )
  {
    v20 = 1824;
LABEL_7:
    v17 = v12;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, v17, v20, 0LL);
  }
  v18 = CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext(a1, v9, 0);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v22);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(v21);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v23);
  return v18;
}
