/*
 * XREFs of ?SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV?$span@$$CBE$0?0@gsl@@I@Z @ 0x180202088
 * Callers:
 *     ?ComputeLanczosKernel@@YAJPEAVCSurfaceShaderComposer@@IIII@Z @ 0x18017DA84 (-ComputeLanczosKernel@@YAJPEAVCSurfaceShaderComposer@@IIII@Z.c)
 *     ?FillLanczosUpBuffer@@YAJPEAVCSurfaceShaderComposer@@IIII@Z @ 0x18017DE9C (-FillLanczosUpBuffer@@YAJPEAVCSurfaceShaderComposer@@IIII@Z.c)
 *     ?FillXBRPass1Buffer@@YAJPEAVCSurfaceShaderComposer@@II@Z @ 0x18017DF8C (-FillXBRPass1Buffer@@YAJPEAVCSurfaceShaderComposer@@II@Z.c)
 *     ?FillXBRPass2Buffer@@YAJPEAVCSurfaceShaderComposer@@IIII@Z @ 0x18017E034 (-FillXBRPass2Buffer@@YAJPEAVCSurfaceShaderComposer@@IIII@Z.c)
 *     ?UpdateSDRBoostConstantBuffer@CSurfaceShaderComposer@@QEAAJM@Z @ 0x180202158 (-UpdateSDRBoostConstantBuffer@CSurfaceShaderComposer@@QEAAJM@Z.c)
 * Callees:
 *     ?Release@CD3DSurface@@UEAAKXZ @ 0x180064450 (-Release@CD3DSurface@@UEAAKXZ.c)
 *     ?Create@CD3DConstantBuffer@@SAJPEAVCD3DDeviceLevel1@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z @ 0x1800941E8 (-Create@CD3DConstantBuffer@@SAJPEAVCD3DDeviceLevel1@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetData@CD3DConstantBuffer@@QEAAJV?$span@$$CBE$0?0@gsl@@@Z @ 0x180206C08 (-SetData@CD3DConstantBuffer@@QEAAJV-$span@$$CBE$0-0@gsl@@@Z.c)
 */

__int64 __fastcall CSurfaceShaderComposer::SetScratchConstantBuffer(__int64 a1, const void **a2, enum D3D11_USAGE a3)
{
  UINT v3; // ebp
  struct CD3DConstantBuffer **v4; // rbx
  CD3DSurface *v7; // rcx
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  CD3DSurface *v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  __int128 v16; // [rsp+30h] [rbp-18h] BYREF

  v3 = *(_DWORD *)a2;
  v4 = (struct CD3DConstantBuffer **)(a1 + 80);
  v7 = *(CD3DSurface **)(a1 + 80);
  if ( !v7 )
  {
LABEL_6:
    v12 = *v4;
    if ( *v4 )
    {
      *v4 = 0LL;
      CD3DSurface::Release(v12);
    }
    v13 = CD3DConstantBuffer::Create(*(struct CD3DDeviceLevel1 **)(a1 + 96), v3, a3, a2[1], v4);
    v11 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x1C3u);
      return v11;
    }
    goto LABEL_9;
  }
  if ( *((_DWORD *)v7 + 32) < v3 )
  {
    *v4 = 0LL;
    CD3DSurface::Release(v7);
    goto LABEL_6;
  }
  v16 = *(_OWORD *)a2;
  v9 = CD3DConstantBuffer::SetData(v7, &v16);
  v11 = v9;
  if ( v9 >= 0 )
  {
LABEL_9:
    *(_DWORD *)(a1 + 88) = a3;
    return v11;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x1C7u);
  return v11;
}
