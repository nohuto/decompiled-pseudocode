/*
 * XREFs of ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x1800C721C
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAW4Enum@VertexShaderKey@@@Z @ 0x1800C5830 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAW4Enum@VertexSha.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Release@CD3DSurface@@UEAAKXZ @ 0x180064450 (-Release@CD3DSurface@@UEAAKXZ.c)
 *     ?Create@CD3DConstantBuffer@@SAJPEAVCD3DDeviceLevel1@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z @ 0x1800941E8 (-Create@CD3DConstantBuffer@@SAJPEAVCD3DDeviceLevel1@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z.c)
 *     ?RemoveResourceNotifier@CD3DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x18009B710 (-RemoveResourceNotifier@CD3DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetDefaultD3DDevice@CD3DDeviceManager@@QEAAJPEAPEAVCD3DDeviceLevel1@@@Z @ 0x1801FAA20 (-GetDefaultD3DDevice@CD3DDeviceManager@@QEAAJPEAPEAVCD3DDeviceLevel1@@@Z.c)
 */

__int64 __fastcall CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique,CD3DDeviceLevel1>::FindOrCreateResourceNoRef(
        struct IDeviceResourceNotify *a1,
        struct CD3DDeviceLevel1 *this,
        CD3DSurface **a3)
{
  int v3; // ebx
  struct CD3DDeviceLevel1 *v4; // rdi
  char v5; // r12
  __int64 v6; // r9
  __int64 v10; // rdx
  CD3DSurface *v11; // rax
  __int64 v13; // rsi
  int v14; // eax
  unsigned int v15; // ecx
  CD3DSurface *v16; // r10
  unsigned int v17; // eax
  unsigned int v18; // edx
  unsigned int v19; // ecx
  unsigned int v20; // eax
  unsigned int v21; // edx
  unsigned int v22; // ecx
  int v23; // eax
  int DefaultD3DDevice; // eax
  unsigned int v25; // ecx
  int v26; // eax
  unsigned int v27; // ecx
  CD3DSurface *v28; // [rsp+60h] [rbp+30h] BYREF
  struct CD3DDeviceLevel1 *v29; // [rsp+78h] [rbp+48h] BYREF

  v3 = 0;
  v4 = 0LL;
  v28 = 0LL;
  v5 = 0;
  v6 = 0LL;
  v29 = 0LL;
  if ( !*((_DWORD *)a1 + 10) )
    goto LABEL_12;
  while ( 1 )
  {
    v10 = *((_QWORD *)a1 + 2);
    if ( !this || *(struct CD3DDeviceLevel1 **)(*(_QWORD *)(*(_QWORD *)(v10 + 8 * v6) + 16LL) + 80LL) == this )
      break;
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= *((_DWORD *)a1 + 10) )
      goto LABEL_12;
  }
  v11 = *(CD3DSurface **)(v10 + 8 * v6);
  v28 = v11;
  if ( !v11 )
  {
LABEL_12:
    if ( !this )
    {
      DefaultD3DDevice = CD3DDeviceManager::GetDefaultD3DDevice((CD3DDeviceManager *)&g_D3DDeviceManager, &v29);
      v3 = DefaultD3DDevice;
      if ( DefaultD3DDevice < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, DefaultD3DDevice, 0x4Fu);
        v4 = v29;
        goto LABEL_6;
      }
      v4 = v29;
      this = v29;
    }
    v13 = *((_QWORD *)a1 + 1);
    v14 = CD3DConstantBuffer::Create(
            this,
            *(_DWORD *)(v13 + 88) + *(_DWORD *)(v13 + 344),
            (enum D3D11_USAGE)a3,
            0LL,
            &v28);
    v3 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x237u);
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v3, 0x53u);
      goto LABEL_6;
    }
    *(_BYTE *)(v13 + 348) = 1;
    v16 = v28;
    v29 = a1;
    v17 = *((_DWORD *)v28 + 24);
    v18 = v17 + 1;
    v3 = v17 + 1 < v17 ? 0x80070216 : 0;
    if ( v17 + 1 < v17 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v3, 0xB5u);
    }
    else if ( v18 > *((_DWORD *)v28 + 23) )
    {
      v23 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v28 + 72, 8, 1, &v29);
      v3 = v23;
      if ( v23 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v23, 0xC0u);
    }
    else
    {
      v19 = *((_DWORD *)v28 + 24);
      *(_QWORD *)(*((_QWORD *)v28 + 9) + 8LL * v17) = v29;
      *((_DWORD *)v16 + 24) = v18;
    }
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v3, 0x55u);
      goto LABEL_6;
    }
    v20 = *((_DWORD *)a1 + 10);
    v5 = 1;
    v21 = v20 + 1;
    v3 = v20 + 1 < v20 ? 0x80070216 : 0;
    if ( v20 + 1 < v20 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v3, 0xB5u);
    }
    else if ( v21 > *((_DWORD *)a1 + 9) )
    {
      v26 = DynArrayImpl<0>::AddMultipleAndSet((__int64)a1 + 16, 8, 1, &v28);
      v3 = v26;
      if ( v26 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v26, 0xC0u);
    }
    else
    {
      v22 = *((_DWORD *)a1 + 10);
      *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL * v20) = v28;
      *((_DWORD *)a1 + 10) = v21;
    }
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v3, 0x58u);
      goto LABEL_6;
    }
    v11 = v28;
  }
  v28 = 0LL;
  *a3 = v11;
LABEL_6:
  if ( v3 < 0 )
  {
    *a3 = 0LL;
    if ( v5 )
    {
      if ( !v28 )
        goto LABEL_9;
      CD3DResource::RemoveResourceNotifier((CD3DSurface *)((char *)v28 + 24), a1);
    }
  }
  if ( v28 )
    CD3DSurface::Release(v28);
LABEL_9:
  if ( v4 )
    CD3DSurface::Release((struct CD3DDeviceLevel1 *)((char *)v4 + 496));
  return (unsigned int)v3;
}
