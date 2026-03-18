/*
 * XREFs of ?Create@CHwDisplayRenderTarget@@SAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV1@@Z @ 0x180089E48
 * Callers:
 *     ?CreateHwRenderTarget@CDisplay@@AEAAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAVIRenderTargetDisplay@@@Z @ 0x180089B30 (-CreateHwRenderTarget@CDisplay@@AEAAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV.c)
 * Callees:
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18002FEF4 (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?Release@CD3DSurface@@UEAAKXZ @ 0x180064450 (-Release@CD3DSurface@@UEAAKXZ.c)
 *     ?CalcSwapChainParameters@CDisplay@@QEBAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCD3DDeviceLevel1@@PEAUDXGI_SWAP_CHAIN_DESC@@PEAW4DXGI_COLOR_SPACE_TYPE@@PEAIPEA_N@Z @ 0x180089BB0 (-CalcSwapChainParameters@CDisplay@@QEBAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBV.c)
 *     ??0CHwFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@IVDisplayId@@@Z @ 0x180089FA8 (--0CHwFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_.c)
 *     ?GetDisplayId@CDisplay@@QEBA?AVDisplayId@@XZ @ 0x18008C6C8 (-GetDisplayId@CDisplay@@QEBA-AVDisplayId@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 *     ??0CHDRConversionRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@IVDisplayId@@@Z @ 0x1802035B4 (--0CHDRConversionRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR.c)
 *     ??0CHwStereoFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@IVDisplayId@@@Z @ 0x180203684 (--0CHwStereoFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::Create(CDisplay *this, unsigned int a2, __int64 *a3)
{
  struct _LUID v4; // rdx
  int D3DDevice; // eax
  unsigned int v8; // ecx
  struct CD3DDeviceLevel1 *v9; // r14
  unsigned int v10; // edi
  int v11; // eax
  unsigned int v12; // ecx
  _DWORD *v13; // rax
  __int64 v14; // r10
  __int64 v15; // rax
  _DWORD *DisplayId; // rax
  __int64 v18; // r10
  _DWORD *v19; // rax
  __int64 v20; // r10
  unsigned int v21; // [rsp+20h] [rbp-39h]
  _BYTE v22[16]; // [rsp+40h] [rbp-19h] BYREF
  int v23; // [rsp+50h] [rbp-9h]
  void *retaddr; // [rsp+B8h] [rbp+5Fh]
  __int64 v25; // [rsp+C0h] [rbp+67h] BYREF
  struct CD3DDeviceLevel1 *v26; // [rsp+D0h] [rbp+77h] BYREF
  __int64 v27; // [rsp+D8h] [rbp+7Fh] BYREF

  *a3 = 0LL;
  v4 = (struct _LUID)*((_QWORD *)this + 30);
  v26 = 0LL;
  LOBYTE(v25) = 0;
  D3DDevice = CD3DDeviceManager::GetD3DDevice((CD3DDeviceManager *)&g_D3DDeviceManager, v4, &v26);
  v9 = v26;
  v10 = D3DDevice;
  if ( D3DDevice < 0 )
  {
    v21 = 48;
  }
  else
  {
    v11 = CDisplay::CalcSwapChainParameters(this, a2, (__int64)v26, (__int64)v22, (int *)&v27, &v26, (bool *)&v25);
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v12, &dword_180292610, 2u, v11, 0x37u);
    if ( (a2 & 0x2000) == 0 )
      goto LABEL_20;
    if ( !(_BYTE)v25 )
      a2 &= ~0x2000u;
    if ( (a2 & 0x2000) != 0 )
    {
      if ( !HeapAlloc(WPF::g_processHeap, 0, 0x278uLL) )
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
      DisplayId = (_DWORD *)CDisplay::GetDisplayId(this, &v25);
      v15 = CHwStereoFullScreenRenderTarget::CHwStereoFullScreenRenderTarget(
              v18,
              v9,
              v22,
              (unsigned int)v27,
              (_DWORD)v26,
              *DisplayId);
    }
    else
    {
LABEL_20:
      if ( v23 == 87 || v23 == 28 || v23 == 10 )
      {
        if ( !HeapAlloc(WPF::g_processHeap, 0, 0x248uLL) )
          ModuleFailFastForHRESULT(2147942414LL, retaddr);
        v13 = (_DWORD *)CDisplay::GetDisplayId(this, &v25);
        v15 = CHwFullScreenRenderTarget::CHwFullScreenRenderTarget(v14, v9, v22, (unsigned int)v27, (_DWORD)v26, *v13);
      }
      else
      {
        if ( !HeapAlloc(WPF::g_processHeap, 0, 0x3E0uLL) )
          ModuleFailFastForHRESULT(2147942414LL, retaddr);
        v19 = (_DWORD *)CDisplay::GetDisplayId(this, &v25);
        v15 = CHDRConversionRenderTarget::CHDRConversionRenderTarget(v20, v9, v22, (unsigned int)v27, (_DWORD)v26, *v19);
      }
    }
    *a3 = v15;
    if ( !v15 )
    {
      v10 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0, &dword_180292610, 2u, -2147024882, 0x63u);
      goto LABEL_29;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    D3DDevice = (*(__int64 (__fastcall **)(__int64, CDisplay *, _QWORD))(*(_QWORD *)*a3 + 256LL))(*a3, this, a2);
    v10 = D3DDevice;
    if ( D3DDevice >= 0 )
      goto LABEL_10;
    v21 = 105;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_180292610, 2u, D3DDevice, v21);
LABEL_29:
  if ( *a3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*a3 + 16LL))(*a3);
    *a3 = 0LL;
  }
LABEL_10:
  if ( v9 )
    CD3DSurface::Release((struct CD3DDeviceLevel1 *)((char *)v9 + 496));
  return v10;
}
