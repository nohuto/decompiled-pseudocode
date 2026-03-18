/*
 * XREFs of ?Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z @ 0x1800CF574
 * Callers:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DPixelShader@@@Z @ 0x180043AAC (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceL.c)
 *     ?GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShaderDesc@@_NPEAIPEAPEAUID3D11PixelShader@@@Z @ 0x180044440 (-GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShade.c)
 *     ?GetCompositingPixelShaderNoRef@CD3DDeviceLevel1@@AEAAJV?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D11PixelShader@@@Z @ 0x18015BA90 (-GetCompositingPixelShaderNoRef@CD3DDeviceLevel1@@AEAAJV-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W.c)
 * Callees:
 *     ?Init@CD3DResource@@IEAAXPEAVIMILPoolManager@@I@Z @ 0x1800475A4 (-Init@CD3DResource@@IEAAXPEAVIMILPoolManager@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     ?CreatePixelShader@CD3DDeviceLevel1@@QEAAJPEBX_KPEAUID3D11ClassLinkage@@PEAPEAUID3D11PixelShader@@@Z @ 0x1800CF6D4 (-CreatePixelShader@CD3DDeviceLevel1@@QEAAJPEBX_KPEAUID3D11ClassLinkage@@PEAPEAUID3D11PixelShader.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0d @ 0x18015D590 (McTemplateU0d.c)
 */

__int64 __fastcall CD3DPixelShader::Create(
        struct CD3DDeviceLevel1 *this,
        const void *a2,
        unsigned __int64 a3,
        struct CD3DPixelShader **a4)
{
  _DWORD *v8; // rax
  __int64 v9; // rcx
  _DWORD *v10; // rbx
  char *v11; // rax
  struct ID3D11ClassLinkage *v12; // r9
  signed int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // edi
  __int64 v16; // r10
  struct ID3D11PixelShader *v18; // [rsp+30h] [rbp-28h] BYREF

  v18 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0d(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_D3DSHADER_CREATE_Start, 1LL);
  v8 = operator new(0x80uLL);
  v10 = v8;
  if ( v8 )
  {
    v8[2] = 0;
    *((_QWORD *)v8 + 2) = 0LL;
    *((_BYTE *)v8 + 68) = 0;
    v11 = (char *)(v8 + 26);
    *((_QWORD *)v10 + 9) = v11;
    *((_QWORD *)v10 + 10) = v11;
    v10[22] = 2;
    *(_QWORD *)(v10 + 23) = 2LL;
    *(_QWORD *)v10 = &CD3DPixelShader::`vftable'{for `CMILPoolResource'};
    *((_QWORD *)v10 + 3) = &CDWMOffScreenSwapChain::`vftable'{for `IDeviceResource'};
    v10[16] = 0;
    *((_BYTE *)v10 + 69) = 0;
    *((_QWORD *)v10 + 6) = 0LL;
    *((_QWORD *)v10 + 4) = 0LL;
    *((_QWORD *)v10 + 5) = 0LL;
    *((_QWORD *)v10 + 15) = 0LL;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    (**(void (__fastcall ***)(_DWORD *))v10)(v10);
    v13 = CD3DDeviceLevel1::CreatePixelShader(this, a2, a3, v12, &v18);
    v15 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x2Du, 0LL);
    }
    else
    {
      CD3DResource::Init((CD3DResource *)v10, (struct CD3DDeviceLevel1 *)((char *)this + 896), a3);
      *((_QWORD *)v10 + 15) = v16;
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
      *a4 = (struct CD3DPixelShader *)v10;
      v15 = 0;
      v10 = 0LL;
    }
  }
  else
  {
    v15 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, 0x8007000E, 0x25u, 0LL);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0d(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_D3DSHADER_CREATE_Stop, 1LL);
  if ( v18 )
    ((void (__fastcall *)(struct ID3D11PixelShader *))v18->lpVtbl->Release)(v18);
  if ( v10 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 8LL))(v10);
  return v15;
}
