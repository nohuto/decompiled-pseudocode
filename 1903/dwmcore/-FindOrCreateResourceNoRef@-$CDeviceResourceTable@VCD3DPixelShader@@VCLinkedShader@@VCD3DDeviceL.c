/*
 * XREFs of ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DPixelShader@@@Z @ 0x180035AB0
 * Callers:
 *     ?GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@AEBUShaderLinkingConfig@@PEAIPEAPEAUID3D11PixelShader@@@Z @ 0x1800357F0 (-GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@AEBUShaderLinkingConfig@@PEAIPEAPEAU.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800C7C00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z @ 0x1800CF384 (-Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?GetDefaultD3DDevice@CD3DDeviceManager@@QEAAJPEAPEAVCD3DDeviceLevel1@@@Z @ 0x18015F2A0 (-GetDefaultD3DDevice@CD3DDeviceManager@@QEAAJPEAPEAVCD3DDeviceLevel1@@@Z.c)
 */

__int64 __fastcall CDeviceResourceTable<CD3DPixelShader,CLinkedShader,CD3DDeviceLevel1>::FindOrCreateResourceNoRef(
        __int64 a1,
        struct CD3DDeviceLevel1 *a2,
        struct CD3DPixelShader **a3)
{
  struct CD3DPixelShader **v3; // r12
  struct CD3DDeviceLevel1 *v4; // r14
  int v6; // ebx
  struct CD3DDeviceLevel1 *v7; // rsi
  char v8; // r13
  __int64 v9; // r9
  struct CD3DPixelShader *v10; // rcx
  __int64 v12; // rdi
  unsigned __int64 v13; // rbx
  const void *v14; // rax
  int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // eax
  int DefaultD3DDevice; // eax
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  int v21; // eax
  unsigned int v22; // [rsp+20h] [rbp-10h]
  struct CD3DPixelShader *v23; // [rsp+70h] [rbp+40h] BYREF
  struct CD3DDeviceLevel1 *v24; // [rsp+88h] [rbp+58h] BYREF

  v3 = a3;
  v4 = a2;
  v6 = 0;
  v23 = 0LL;
  v7 = 0LL;
  v24 = 0LL;
  v8 = 0;
  v9 = 0LL;
  if ( *(_DWORD *)(a1 + 40) )
  {
    while ( 1 )
    {
      a2 = *(struct CD3DDeviceLevel1 **)(a1 + 16);
      a3 = (struct CD3DPixelShader **)(unsigned int)v9;
      if ( !v4 || *(struct CD3DDeviceLevel1 **)(*(_QWORD *)(*((_QWORD *)a2 + (unsigned int)v9) + 16LL) + 80LL) == v4 )
        break;
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= *(_DWORD *)(a1 + 40) )
        goto LABEL_12;
    }
    v23 = (struct CD3DPixelShader *)*((_QWORD *)a2 + (unsigned int)v9);
    if ( v23 )
      goto LABEL_5;
  }
LABEL_12:
  if ( !v4 )
  {
    DefaultD3DDevice = CD3DDeviceManager::GetDefaultD3DDevice((CD3DDeviceManager *)&g_D3DDeviceManager, &v24);
    v6 = DefaultD3DDevice;
    if ( DefaultD3DDevice < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, DefaultD3DDevice, 0x4Fu, 0LL);
      v7 = v24;
      goto LABEL_31;
    }
    v7 = v24;
    v4 = v24;
  }
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
  v13 = (*(__int64 (__fastcall **)(__int64, struct CD3DDeviceLevel1 *, struct CD3DPixelShader **, __int64))(*(_QWORD *)v12 + 32LL))(
          v12,
          a2,
          a3,
          v9);
  v14 = (const void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 24LL))(v12);
  v15 = CD3DPixelShader::Create(v4, v14, v13, &v23);
  v6 = v15;
  if ( v15 < 0 )
  {
    v22 = 83;
    goto LABEL_30;
  }
  v15 = (*(__int64 (__fastcall **)(char *, __int64))(*((_QWORD *)v23 + 3) + 24LL))((char *)v23 + 24, a1);
  v6 = v15;
  if ( v15 < 0 )
  {
    v22 = 85;
LABEL_30:
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, v22, 0LL);
    goto LABEL_31;
  }
  v17 = *(_DWORD *)(a1 + 40);
  v8 = 1;
  a2 = (struct CD3DDeviceLevel1 *)(v17 + 1);
  if ( (unsigned int)a2 < v17 )
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, -2147024362, 0xB8u, 0LL);
LABEL_26:
    if ( v6 >= 0 )
      goto LABEL_5;
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v6, 0x58u, 0LL);
LABEL_31:
    v10 = v23;
    goto LABEL_6;
  }
  if ( (unsigned int)a2 > *(_DWORD *)(a1 + 36) )
  {
    v21 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 16, 8LL, 1LL, &v23);
    v6 = v21;
    if ( v21 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v21, 0xC3u, 0LL);
    goto LABEL_26;
  }
  v6 = 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * v17) = v23;
  *(_DWORD *)(a1 + 40) = (_DWORD)a2;
LABEL_5:
  v10 = 0LL;
  *v3 = v23;
  v23 = 0LL;
LABEL_6:
  if ( v6 < 0 )
  {
    *v3 = 0LL;
    if ( v8 )
    {
      if ( !v10 )
        goto LABEL_9;
      (*(void (__fastcall **)(__int64, __int64, struct CD3DPixelShader **))(*((_QWORD *)v10 + 3) + 32LL))(
        (__int64)v10 + 24,
        a1,
        a3);
      v10 = v23;
    }
  }
  if ( v10 )
    (*(void (__fastcall **)(struct CD3DPixelShader *, struct CD3DDeviceLevel1 *, struct CD3DPixelShader **))(*(_QWORD *)v10 + 8LL))(
      v10,
      a2,
      a3);
LABEL_9:
  if ( v7 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v7 + 496));
  return (unsigned int)v6;
}
