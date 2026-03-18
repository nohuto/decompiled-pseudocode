/*
 * XREFs of ?Create@CHwDisplayRenderTarget@@SAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV1@@Z @ 0x1800E431C
 * Callers:
 *     ?CreateHwRenderTarget@CDisplay@@AEAAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAVIRenderTargetDisplay@@@Z @ 0x1800E429C (-CreateHwRenderTarget@CDisplay@@AEAAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV.c)
 * Callees:
 *     ?GetDisplayId@CDisplay@@QEBA?AVDisplayId@@XZ @ 0x18005200C (-GetDisplayId@CDisplay@@QEBA-AVDisplayId@@XZ.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800550C8 (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800C7F30 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ??0CHwFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@IVDisplayId@@@Z @ 0x1800E4474 (--0CHwFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_.c)
 *     ?CalcSwapChainParameters@CDisplay@@QEBAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCD3DDeviceLevel1@@PEAUDXGI_SWAP_CHAIN_DESC@@PEAW4DXGI_COLOR_SPACE_TYPE@@PEAIPEA_N@Z @ 0x1800E45DC (-CalcSwapChainParameters@CDisplay@@QEBAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBV.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ??0CHDRConversionRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@IVDisplayId@@@Z @ 0x18015E148 (--0CHDRConversionRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR.c)
 *     ??0CHwStereoFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@IVDisplayId@@@Z @ 0x18015E214 (--0CHwStereoFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_.c)
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
  _DWORD *v13; // rax
  __int64 v14; // r10
  __int64 v15; // rax
  __int64 v16; // rcx
  _DWORD *DisplayId; // rax
  __int64 v19; // r10
  _DWORD *v20; // rax
  __int64 v21; // r10
  unsigned int v22; // [rsp+20h] [rbp-39h]
  _BYTE v23[16]; // [rsp+40h] [rbp-19h] BYREF
  int v24; // [rsp+50h] [rbp-9h]
  __int64 v25; // [rsp+C0h] [rbp+67h] BYREF
  struct CD3DDeviceLevel1 *v26; // [rsp+D0h] [rbp+77h] BYREF
  __int64 v27; // [rsp+D8h] [rbp+7Fh] BYREF

  *a3 = 0LL;
  v4 = (struct _LUID)*((_QWORD *)this + 29);
  v26 = 0LL;
  LOBYTE(v25) = 0;
  D3DDevice = CD3DDeviceManager::GetD3DDevice((CD3DDeviceManager *)&g_D3DDeviceManager, v4, &v26);
  v9 = v26;
  v10 = D3DDevice;
  if ( D3DDevice < 0 )
  {
    v22 = 48;
    goto LABEL_27;
  }
  v11 = CDisplay::CalcSwapChainParameters(this, (__int64)&v27, (__int64)&v26, (__int64)&v25);
  if ( v11 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v12, &dword_1802BE078, 2u, v11, 0x37u, 0LL);
  if ( (a2 & 0x2000) != 0 )
  {
    if ( !(_BYTE)v25 )
      a2 &= ~0x2000u;
    if ( (a2 & 0x2000) != 0 )
    {
      if ( operator new(0x238uLL) )
      {
        DisplayId = CDisplay::GetDisplayId((__int64)this, &v25);
        v15 = CHwStereoFullScreenRenderTarget::CHwStereoFullScreenRenderTarget(
                v19,
                v9,
                v23,
                (unsigned int)v27,
                (_DWORD)v26,
                *DisplayId);
        goto LABEL_8;
      }
LABEL_14:
      v16 = 0LL;
      goto LABEL_9;
    }
  }
  if ( v24 != 87 && v24 != 28 && v24 != 10 )
  {
    if ( operator new(0x3A0uLL) )
    {
      v20 = CDisplay::GetDisplayId((__int64)this, &v25);
      v15 = CHDRConversionRenderTarget::CHDRConversionRenderTarget(v21, v9, v23, (unsigned int)v27, (_DWORD)v26, *v20);
      goto LABEL_8;
    }
    goto LABEL_14;
  }
  if ( !operator new(0x208uLL) )
    goto LABEL_14;
  v13 = CDisplay::GetDisplayId((__int64)this, &v25);
  v15 = CHwFullScreenRenderTarget::CHwFullScreenRenderTarget(v14, v9, v23, (unsigned int)v27, (_DWORD)v26, *v13);
LABEL_8:
  v16 = v15;
LABEL_9:
  *a3 = v16;
  if ( !v16 )
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, &dword_1802BE078, 2u, 0x8007000E, 0x63u, 0LL);
    goto LABEL_28;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
  D3DDevice = (*(__int64 (__fastcall **)(__int64, CDisplay *, _QWORD))(*(_QWORD *)*a3 + 256LL))(*a3, this, a2);
  v10 = D3DDevice;
  if ( D3DDevice >= 0 )
    goto LABEL_11;
  v22 = 105;
LABEL_27:
  MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_1802BE078, 2u, D3DDevice, v22, 0LL);
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
