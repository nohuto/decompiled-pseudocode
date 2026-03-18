/*
 * XREFs of ?Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z @ 0x1800916FC
 * Callers:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DPixelShader@@@Z @ 0x1800C56C4 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceL.c)
 *     ?GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShaderDesc@@_NPEAW4Enum@VertexShaderKey@@PEAPEAUID3D11PixelShader@@@Z @ 0x1800C5F60 (-GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShade.c)
 *     ?GetCompositingPixelShaderNoRef@CD3DDeviceLevel1@@AEAAJV?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D11PixelShader@@@Z @ 0x1801FC3FC (-GetCompositingPixelShaderNoRef@CD3DDeviceLevel1@@AEAAJV-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W.c)
 * Callees:
 *     ?AddRef@CManipulationFrame@@UEAAKXZ @ 0x18007C340 (-AddRef@CManipulationFrame@@UEAAKXZ.c)
 *     ?CreatePixelShader@CD3DDeviceLevel1@@QEAAJPEBX_KPEAUID3D11ClassLinkage@@PEAPEAUID3D11PixelShader@@@Z @ 0x180091694 (-CreatePixelShader@CD3DDeviceLevel1@@QEAAJPEBX_KPEAUID3D11ClassLinkage@@PEAPEAUID3D11PixelShader.c)
 *     ?Init@CD3DResource@@IEAAXPEAVIMILPoolManager@@I@Z @ 0x18009438C (-Init@CD3DResource@@IEAAXPEAVIMILPoolManager@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0d @ 0x180147BF8 (McTemplateU0d.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CD3DPixelShader::Create(
        struct CD3DDeviceLevel1 *this,
        const void *a2,
        __int64 a3,
        struct CD3DPixelShader **a4)
{
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  CManipulationFrame *v10; // rcx
  char *v11; // rax
  struct ID3D11ClassLinkage *v12; // r9
  int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // edi
  __int64 v16; // r10
  struct ID3D11PixelShader *v18; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  v18 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0d(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_D3DSHADER_CREATE_Start, 1LL);
  v8 = HeapAlloc(WPF::g_processHeap, 0, 0x80uLL);
  v9 = v8;
  if ( !v8 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v8[2] = 0LL;
  v10 = (CManipulationFrame *)v8;
  *((_DWORD *)v8 + 2) = 0;
  *((_BYTE *)v8 + 68) = 0;
  v11 = (char *)(v8 + 13);
  *((_DWORD *)v9 + 24) = 0;
  v9[9] = v11;
  v9[10] = v11;
  *((_DWORD *)v9 + 22) = 2;
  *((_DWORD *)v9 + 23) = 2;
  *((_DWORD *)v9 + 16) = 0;
  v9[6] = 0LL;
  v9[4] = 0LL;
  v9[5] = 0LL;
  v9[15] = 0LL;
  *v9 = &CD3DPixelShader::`vftable'{for `CMILPoolResource'};
  v9[3] = &CDWMOffScreenSwapChain::`vftable'{for `IDeviceResource'};
  *((_BYTE *)v9 + 69) = 0;
  CManipulationFrame::AddRef(v10);
  v13 = CD3DDeviceLevel1::CreatePixelShader(this, a2, a3, v12, &v18);
  v15 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x30u);
  }
  else
  {
    CD3DResource::Init((CD3DResource *)v9, (struct CD3DDeviceLevel1 *)((char *)this + 864), a3);
    v9[15] = v16;
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
    v15 = 0;
    *a4 = (struct CD3DPixelShader *)v9;
    v9 = 0LL;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0d(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_D3DSHADER_CREATE_Stop, 1LL);
  if ( v18 )
    ((void (__fastcall *)(struct ID3D11PixelShader *))v18->lpVtbl->Release)(v18);
  if ( v9 )
    (*(void (__fastcall **)(_QWORD *))(*v9 + 8LL))(v9);
  return v15;
}
