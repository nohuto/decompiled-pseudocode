/*
 * XREFs of ?Create@CHwDisplayRenderTarget@@SAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV1@@Z @ 0x1800DD8CC
 * Callers:
 *     ?CreateHwRenderTarget@CDisplay@@AEAAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAVIRenderTargetDisplay@@@Z @ 0x1800DDBFC (-CreateHwRenderTarget@CDisplay@@AEAAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV.c)
 * Callees:
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18003FF88 (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?GetDisplayId@CDisplay@@QEBA?AVDisplayId@@XZ @ 0x180042DC8 (-GetDisplayId@CDisplay@@QEBA-AVDisplayId@@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800C7C00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ??0CHwFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@IVDisplayId@@@Z @ 0x1800DD764 (--0CHwFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_.c)
 *     ?CalcSwapChainParameters@CDisplay@@QEBAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCD3DDeviceLevel1@@PEAUDXGI_SWAP_CHAIN_DESC@@PEAW4DXGI_COLOR_SPACE_TYPE@@PEAIPEA_N@Z @ 0x1800DDA24 (-CalcSwapChainParameters@CDisplay@@QEBAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBV.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ??0CHDRConversionRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@IVDisplayId@@@Z @ 0x18015F828 (--0CHDRConversionRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR.c)
 *     ??0CHwStereoFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@IVDisplayId@@@Z @ 0x18015F8F4 (--0CHwStereoFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::Create(CDisplay *this, unsigned int a2, __int64 *a3)
{
  struct _LUID v4; // rdx
  signed int D3DDevice; // eax
  __int64 v8; // rcx
  struct CD3DDeviceLevel1 *v9; // r14
  unsigned int v10; // edi
  signed int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r10
  __int64 v14; // rax
  __int64 v15; // rcx
  _DWORD *DisplayId; // rax
  __int64 v18; // r10
  _DWORD *v19; // rax
  __int64 v20; // r10
  unsigned int v21; // [rsp+20h] [rbp-39h]
  _BYTE v22[16]; // [rsp+40h] [rbp-19h] BYREF
  int v23; // [rsp+50h] [rbp-9h]
  __int64 v24; // [rsp+C0h] [rbp+67h] BYREF
  struct CD3DDeviceLevel1 *v25; // [rsp+D0h] [rbp+77h] BYREF
  __int64 v26; // [rsp+D8h] [rbp+7Fh] BYREF

  *a3 = 0LL;
  v4 = (struct _LUID)*((_QWORD *)this + 29);
  v25 = 0LL;
  LOBYTE(v24) = 0;
  D3DDevice = CD3DDeviceManager::GetD3DDevice((CD3DDeviceManager *)&g_D3DDeviceManager, v4, &v25);
  v9 = v25;
  v10 = D3DDevice;
  if ( D3DDevice < 0 )
  {
    v21 = 48;
    goto LABEL_27;
  }
  v11 = CDisplay::CalcSwapChainParameters(this, (__int64)&v26, (__int64)&v25, (__int64)&v24);
  if ( v11 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v12, &dword_1802BFF28, 2u, v11, 0x37u, 0LL);
  if ( (a2 & 0x2000) != 0 )
  {
    if ( !(_BYTE)v24 )
      a2 &= ~0x2000u;
    if ( (a2 & 0x2000) != 0 )
    {
      if ( operator new(0x238uLL) )
      {
        DisplayId = CDisplay::GetDisplayId((__int64)this, &v24);
        v14 = CHwStereoFullScreenRenderTarget::CHwStereoFullScreenRenderTarget(
                v18,
                v9,
                v22,
                (unsigned int)v26,
                (_DWORD)v25,
                *DisplayId);
        goto LABEL_8;
      }
LABEL_14:
      v15 = 0LL;
      goto LABEL_9;
    }
  }
  if ( v23 != 87 && v23 != 28 && v23 != 10 )
  {
    if ( operator new(0x3A0uLL) )
    {
      v19 = CDisplay::GetDisplayId((__int64)this, &v24);
      v14 = CHDRConversionRenderTarget::CHDRConversionRenderTarget(v20, v9, v22, (unsigned int)v26, (_DWORD)v25, *v19);
      goto LABEL_8;
    }
    goto LABEL_14;
  }
  if ( !operator new(0x208uLL) )
    goto LABEL_14;
  CDisplay::GetDisplayId((__int64)this, &v24);
  v14 = CHwFullScreenRenderTarget::CHwFullScreenRenderTarget(v13, (__int64)v9, (__int64)v22);
LABEL_8:
  v15 = v14;
LABEL_9:
  *a3 = v15;
  if ( !v15 )
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, &dword_1802BFF28, 2u, 0x8007000E, 0x63u, 0LL);
    goto LABEL_28;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  D3DDevice = (*(__int64 (__fastcall **)(__int64, CDisplay *, _QWORD))(*(_QWORD *)*a3 + 256LL))(*a3, this, a2);
  v10 = D3DDevice;
  if ( D3DDevice >= 0 )
    goto LABEL_11;
  v21 = 105;
LABEL_27:
  MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_1802BFF28, 2u, D3DDevice, v21, 0LL);
LABEL_28:
  if ( *a3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*a3 + 16LL))(*a3);
    *a3 = 0LL;
  }
LABEL_11:
  if ( v9 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v9 + 496));
  return v10;
}
