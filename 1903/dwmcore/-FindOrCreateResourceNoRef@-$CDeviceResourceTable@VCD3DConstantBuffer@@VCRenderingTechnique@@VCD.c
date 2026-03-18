/*
 * XREFs of ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x1800376A8
 * Callers:
 *     ?GetConstantBuffer@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAUID3D11Buffer@@@Z @ 0x1800372D8 (-GetConstantBuffer@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAUID3D11Buffer@@@Z.c)
 * Callees:
 *     ?Create@CD3DConstantBuffer@@SAJPEAVCD3DDeviceLevel1@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z @ 0x18003903C (-Create@CD3DConstantBuffer@@SAJPEAVCD3DDeviceLevel1@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z.c)
 *     ?RemoveResourceNotifier@CD3DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x18003AB30 (-RemoveResourceNotifier@CD3DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800C7C00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?GetDefaultD3DDevice@CD3DDeviceManager@@QEAAJPEAPEAVCD3DDeviceLevel1@@@Z @ 0x18015F2A0 (-GetDefaultD3DDevice@CD3DDeviceManager@@QEAAJPEAPEAVCD3DDeviceLevel1@@@Z.c)
 */

__int64 __fastcall CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique,CD3DDeviceLevel1>::FindOrCreateResourceNoRef(
        struct IDeviceResourceNotify *a1,
        struct CD3DDeviceLevel1 *this,
        CMILPoolResource **a3)
{
  CMILPoolResource **v3; // r15
  int v6; // ebx
  struct CD3DDeviceLevel1 *v7; // rdi
  char v8; // r12
  unsigned int v9; // r9d
  __int64 v10; // rdx
  __int64 v12; // rsi
  int v13; // eax
  unsigned int v14; // ecx
  CMILPoolResource *v15; // r10
  unsigned int v16; // eax
  unsigned int v17; // edx
  unsigned int v18; // ecx
  unsigned int v19; // eax
  unsigned int v20; // edx
  int v21; // eax
  int DefaultD3DDevice; // eax
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  int v25; // eax
  unsigned int v26; // ecx
  CMILPoolResource *v27; // [rsp+70h] [rbp+40h] BYREF
  struct CD3DDeviceLevel1 *v28; // [rsp+88h] [rbp+58h] BYREF

  v3 = a3;
  v6 = 0;
  v27 = 0LL;
  v7 = 0LL;
  v28 = 0LL;
  v8 = 0;
  v9 = 0;
  if ( *((_DWORD *)a1 + 10) )
  {
    while ( 1 )
    {
      v10 = *((_QWORD *)a1 + 2);
      LODWORD(a3) = v9;
      if ( !this || *(struct CD3DDeviceLevel1 **)(*(_QWORD *)(*(_QWORD *)(v10 + 8LL * v9) + 16LL) + 80LL) == this )
        break;
      if ( ++v9 >= *((_DWORD *)a1 + 10) )
        goto LABEL_12;
    }
    v27 = *(CMILPoolResource **)(v10 + 8LL * v9);
    if ( v27 )
      goto LABEL_5;
  }
LABEL_12:
  if ( !this )
  {
    DefaultD3DDevice = CD3DDeviceManager::GetDefaultD3DDevice((CD3DDeviceManager *)&g_D3DDeviceManager, &v28);
    v6 = DefaultD3DDevice;
    if ( DefaultD3DDevice < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, DefaultD3DDevice, 0x4Fu, 0LL);
      v7 = v28;
      goto LABEL_6;
    }
    v7 = v28;
    this = v28;
  }
  v12 = *((_QWORD *)a1 + 1);
  v13 = CD3DConstantBuffer::Create(
          this,
          *(_DWORD *)(v12 + 80) + *(_DWORD *)(v12 + 272),
          (enum D3D11_USAGE)a3,
          0LL,
          &v27);
  v6 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x222u, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v6, 0x53u, 0LL);
    goto LABEL_6;
  }
  *(_BYTE *)(v12 + 276) = 1;
  v15 = v27;
  v28 = a1;
  v16 = *((_DWORD *)v27 + 24);
  v17 = v16 + 1;
  if ( v16 + 1 < v16 )
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024362, 0xB8u, 0LL);
  }
  else
  {
    if ( v17 <= *((_DWORD *)v27 + 23) )
    {
      v18 = *((_DWORD *)v27 + 24);
      *(_QWORD *)(*((_QWORD *)v27 + 9) + 8LL * v16) = v28;
      *((_DWORD *)v15 + 24) = v17;
      goto LABEL_17;
    }
    v21 = DynArrayImpl<0>::AddMultipleAndSet((char *)v27 + 72, 8LL, 1LL, &v28);
    v6 = v21;
    if ( v21 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v21, 0xC3u, 0LL);
  }
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v6, 0x55u, 0LL);
    goto LABEL_6;
  }
LABEL_17:
  v19 = *((_DWORD *)a1 + 10);
  v8 = 1;
  v20 = v19 + 1;
  if ( v19 + 1 < v19 )
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2147024362, 0xB8u, 0LL);
    goto LABEL_33;
  }
  if ( v20 > *((_DWORD *)a1 + 9) )
  {
    v25 = DynArrayImpl<0>::AddMultipleAndSet((char *)a1 + 16, 8LL, 1LL, &v27);
    v6 = v25;
    if ( v25 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v25, 0xC3u, 0LL);
LABEL_33:
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v6, 0x58u, 0LL);
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v6 = 0;
  *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL * v19) = v27;
  *((_DWORD *)a1 + 10) = v20;
LABEL_5:
  *v3 = v27;
  v27 = 0LL;
LABEL_6:
  if ( v6 < 0 )
  {
    *v3 = 0LL;
    if ( v8 )
    {
      if ( !v27 )
        goto LABEL_9;
      CD3DResource::RemoveResourceNotifier((CMILPoolResource *)((char *)v27 + 24), a1);
    }
  }
  if ( v27 )
    CMILPoolResource::Release(v27);
LABEL_9:
  if ( v7 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v7 + 496));
  return (unsigned int)v6;
}
