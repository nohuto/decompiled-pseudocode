/*
 * XREFs of ?Create@CD3DConstantBuffer@@SAJPEAVCD3DDeviceLevel1@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z @ 0x1800941E8
 * Callers:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x1800C721C (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD.c)
 *     ?SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV?$span@$$CBE$0?0@gsl@@I@Z @ 0x180202088 (-SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV-$span@$$CBE$0-0@gsl@@I@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18001B8B8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CD3DSurface@@UEAAKXZ @ 0x180064450 (-Release@CD3DSurface@@UEAAKXZ.c)
 *     ?Init@CD3DResource@@IEAAXPEAVIMILPoolManager@@I@Z @ 0x18009438C (-Init@CD3DResource@@IEAAXPEAVIMILPoolManager@@I@Z.c)
 *     ?CreateBuffer@CD3DDeviceLevel1@@QEAAJAEBUD3D11_BUFFER_DESC@@PEBUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Buffer@@@Z @ 0x1800943E0 (-CreateBuffer@CD3DDeviceLevel1@@QEAAJAEBUD3D11_BUFFER_DESC@@PEBUD3D11_SUBRESOURCE_DATA@@PEAPEAUI.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DConstantBuffer::Create(
        struct CD3DDeviceLevel1 *this,
        UINT a2,
        enum D3D11_USAGE a3,
        const void *a4,
        struct CD3DConstantBuffer **a5)
{
  char *v8; // rax
  unsigned int v9; // ecx
  char *v10; // rbx
  int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // edi
  struct ID3D11Buffer *v14; // rdi
  struct ID3D11Buffer *v16; // [rsp+30h] [rbp-40h] BYREF
  struct ID3D11Buffer *v17; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v18[2]; // [rsp+40h] [rbp-30h] BYREF
  D3D11_BUFFER_DESC v19; // [rsp+50h] [rbp-20h] BYREF

  v17 = 0LL;
  v8 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x90uLL);
  v10 = v8;
  if ( v8 )
  {
    memset_0(v8, 0, 0x90uLL);
    *((_DWORD *)v10 + 2) = 0;
    *((_QWORD *)v10 + 2) = 0LL;
    *((_WORD *)v10 + 34) = 0;
    *((_QWORD *)v10 + 9) = v10 + 104;
    *((_QWORD *)v10 + 10) = v10 + 104;
    *((_DWORD *)v10 + 22) = 2;
    *(_QWORD *)(v10 + 92) = 2LL;
    *(_QWORD *)v10 = &CD3DConstantBuffer::`vftable'{for `CMILPoolResource'};
    *((_QWORD *)v10 + 3) = &CDWMOffScreenSwapChain::`vftable'{for `IDeviceResource'};
    *((_DWORD *)v10 + 16) = 0;
    *((_QWORD *)v10 + 6) = 0LL;
    *((_QWORD *)v10 + 4) = 0LL;
    *((_QWORD *)v10 + 5) = 0LL;
    *((_QWORD *)v10 + 15) = 0LL;
    *((_DWORD *)v10 + 32) = 0;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v10 + 2);
    v18[0] = a4;
    v19.BindFlags = 4;
    v19.ByteWidth = a2;
    v19.Usage = D3D11_USAGE_DYNAMIC;
    *(_QWORD *)&v19.MiscFlags = 0LL;
    v19.CPUAccessFlags = 0x10000;
    v18[1] = 0LL;
    v11 = CD3DDeviceLevel1::CreateBuffer(
            this,
            &v19,
            (const struct D3D11_SUBRESOURCE_DATA *)((unsigned __int64)v18 & -(__int64)(a4 != 0LL)),
            &v17);
    v13 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x32u);
    }
    else
    {
      v14 = v17;
      CD3DResource::Init((CD3DResource *)v10, (struct CD3DDeviceLevel1 *)((char *)this + 864), a2);
      if ( *((struct ID3D11Buffer **)v10 + 15) != v14 )
      {
        v16 = v14;
        Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v16);
        v16 = (struct ID3D11Buffer *)*((_QWORD *)v10 + 15);
        *((_QWORD *)v10 + 15) = v14;
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v16);
      }
      *((_DWORD *)v10 + 32) = a2;
      v13 = 0;
      *a5 = (struct CD3DConstantBuffer *)v10;
      v10 = 0LL;
    }
  }
  else
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x20u);
  }
  if ( v17 )
    ((void (__fastcall *)(struct ID3D11Buffer *))v17->lpVtbl->Release)(v17);
  if ( v10 )
    CD3DSurface::Release((CD3DSurface *)v10);
  return v13;
}
