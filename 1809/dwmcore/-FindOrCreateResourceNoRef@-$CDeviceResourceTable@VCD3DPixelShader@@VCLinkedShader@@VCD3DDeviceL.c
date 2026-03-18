/*
 * XREFs of ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DPixelShader@@@Z @ 0x1800C56C4
 * Callers:
 *     ?GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@AEBUShaderLinkingConfig@@PEAW4Enum@VertexShaderKey@@PEAPEAUID3D11PixelShader@@@Z @ 0x1800C5400 (-GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@AEBUShaderLinkingConfig@@PEAW4Enum@V.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Release@CD3DSurface@@UEAAKXZ @ 0x180064450 (-Release@CD3DSurface@@UEAAKXZ.c)
 *     ?Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z @ 0x1800916FC (-Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetDefaultD3DDevice@CD3DDeviceManager@@QEAAJPEAPEAVCD3DDeviceLevel1@@@Z @ 0x1801FAA20 (-GetDefaultD3DDevice@CD3DDeviceManager@@QEAAJPEAPEAVCD3DDeviceLevel1@@@Z.c)
 */

__int64 __fastcall CDeviceResourceTable<CD3DPixelShader,CLinkedShader,CD3DDeviceLevel1>::FindOrCreateResourceNoRef(
        __int64 a1,
        struct CD3DDeviceLevel1 *a2,
        struct CD3DPixelShader **a3)
{
  int v3; // ebx
  struct CD3DDeviceLevel1 *v4; // rsi
  char v5; // r13
  __int64 v6; // r9
  struct CD3DDeviceLevel1 *v8; // r14
  struct CD3DPixelShader *v10; // rax
  struct CD3DPixelShader *v11; // rcx
  __int64 v13; // rdi
  __int64 v14; // rbx
  const void *v15; // rax
  int v16; // eax
  unsigned int v17; // ecx
  int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // eax
  unsigned int v21; // edx
  unsigned int v22; // ecx
  int DefaultD3DDevice; // eax
  unsigned int v24; // ecx
  int v25; // eax
  struct CD3DPixelShader *v26; // [rsp+70h] [rbp+40h] BYREF
  struct CD3DDeviceLevel1 *v27; // [rsp+88h] [rbp+58h] BYREF

  v3 = 0;
  v4 = 0LL;
  v26 = 0LL;
  v5 = 0;
  v6 = 0LL;
  v27 = 0LL;
  v8 = a2;
  if ( *(_DWORD *)(a1 + 40) )
  {
    while ( 1 )
    {
      a2 = *(struct CD3DDeviceLevel1 **)(a1 + 16);
      if ( !v8 || *(struct CD3DDeviceLevel1 **)(*(_QWORD *)(*((_QWORD *)a2 + v6) + 16LL) + 80LL) == v8 )
        break;
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= *(_DWORD *)(a1 + 40) )
        goto LABEL_12;
    }
    v10 = (struct CD3DPixelShader *)*((_QWORD *)a2 + v6);
    v26 = v10;
    if ( v10 )
      goto LABEL_5;
  }
LABEL_12:
  if ( !v8 )
  {
    DefaultD3DDevice = CD3DDeviceManager::GetDefaultD3DDevice((CD3DDeviceManager *)&g_D3DDeviceManager, &v27);
    v3 = DefaultD3DDevice;
    if ( DefaultD3DDevice < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, DefaultD3DDevice, 0x4Fu);
      v4 = v27;
LABEL_31:
      v11 = v26;
      goto LABEL_6;
    }
    v4 = v27;
    v8 = v27;
  }
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
  v14 = (*(__int64 (__fastcall **)(__int64, struct CD3DDeviceLevel1 *, struct CD3DPixelShader **, __int64))(*(_QWORD *)v13 + 32LL))(
          v13,
          a2,
          a3,
          v6);
  v15 = (const void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 24LL))(v13);
  v16 = CD3DPixelShader::Create(v8, v15, v14, &v26);
  v3 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x53u);
    goto LABEL_31;
  }
  v18 = (*(__int64 (__fastcall **)(char *, __int64))(*((_QWORD *)v26 + 3) + 24LL))((char *)v26 + 24, a1);
  v3 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x55u);
    goto LABEL_31;
  }
  v20 = *(_DWORD *)(a1 + 40);
  v5 = 1;
  v21 = v20 + 1;
  v3 = v20 + 1 < v20 ? 0x80070216 : 0;
  if ( v20 + 1 < v20 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v3, 0xB5u);
  }
  else if ( v21 > *(_DWORD *)(a1 + 36) )
  {
    v25 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 16, 8, 1, &v26);
    v3 = v25;
    if ( v25 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v25, 0xC0u);
  }
  else
  {
    v22 = *(_DWORD *)(a1 + 40);
    *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * v20) = v26;
    *(_DWORD *)(a1 + 40) = v21;
  }
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v3, 0x58u);
    goto LABEL_31;
  }
  v10 = v26;
LABEL_5:
  v11 = 0LL;
  *a3 = v10;
  v26 = 0LL;
LABEL_6:
  if ( v3 < 0 )
  {
    *a3 = 0LL;
    if ( v5 )
    {
      if ( !v11 )
        goto LABEL_9;
      (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v11 + 3) + 32LL))((__int64)v11 + 24, a1);
      v11 = v26;
    }
  }
  if ( v11 )
    (*(void (__fastcall **)(struct CD3DPixelShader *))(*(_QWORD *)v11 + 8LL))(v11);
LABEL_9:
  if ( v4 )
    CD3DSurface::Release((struct CD3DDeviceLevel1 *)((char *)v4 + 496));
  return (unsigned int)v3;
}
