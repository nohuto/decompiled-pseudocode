/*
 * XREFs of ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x180059AF4
 * Callers:
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18002AC80 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x180059680 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 * Callees:
 *     ?CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x1800265E8 (-CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180027B70 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ??_GCDisplaySet@@AEAAPEAXI@Z @ 0x18002B9B0 (--_GCDisplaySet@@AEAAPEAXI@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18006402C (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAW4Enum@DisplayStateComparison@@@Z @ 0x1800EA5D0 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAW4Enum@DisplayStateCompa.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::UpdateRenderTargetState(CDrawingContext *this)
{
  _QWORD *v1; // rbx
  __int64 v3; // rcx
  CDisplaySet *v4; // rbp
  __int64 v5; // r14
  _DWORD *v6; // r15
  int v7; // eax
  CD3DModuleLoaderInternal *v8; // rcx
  int v9; // ebx
  CDXGIEnumeration *v10; // rdi
  struct CDXGIEnumeration *v11; // rdi
  volatile signed __int32 *v12; // rax
  unsigned int v13; // ecx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rax
  int v17; // eax
  int v18; // eax
  unsigned int v20; // ecx
  int v21; // eax
  unsigned int v22; // ecx
  int D3DObjects; // [rsp+70h] [rbp+8h] BYREF
  __int64 v24; // [rsp+78h] [rbp+10h] BYREF
  char v25; // [rsp+80h] [rbp+18h] BYREF

  v1 = (_QWORD *)((char *)this + 360);
  v24 = 0LL;
  v3 = *((_QWORD *)this + 45);
  v4 = 0LL;
  v5 = 0LL;
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    *v1 = 0LL;
  }
  (***((void (__fastcall ****)(_QWORD, GUID *, _QWORD *))this + 44))(
    *((_QWORD *)this + 44),
    &GUID_0784e14c_5fb4_422c_9f18_6109bbc92771,
    v1);
  if ( *v1 )
  {
    v9 = 0;
    goto LABEL_29;
  }
  v6 = (_DWORD *)((char *)this + 400);
  v7 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)this + 44) + 120LL))(
         *((_QWORD *)this + 44),
         &v25,
         (char *)this + 400);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v8, 0LL, 0, v7, 0x221Au, 0LL);
    goto LABEL_34;
  }
  *((_DWORD *)this + 103) = -1;
  *((_QWORD *)this + 52) = 0LL;
  if ( *v6 == (_DWORD)DisplayId::None || *v6 == (_DWORD)DisplayId::All )
  {
LABEL_26:
    if ( (***((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 44))(
           *((_QWORD *)this + 44),
           &GUID_ce9b2f4f_bd49_4551_83ee_78f4d7b06d31,
           &v24) >= 0 )
      v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 40LL))(v24);
    else
      v18 = 0;
    *((_DWORD *)this + 101) = v18;
    *((_BYTE *)this + 408) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 44) + 144LL))(*((_QWORD *)this + 44));
LABEL_29:
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    goto LABEL_31;
  }
  v10 = qword_180339CF8;
  v9 = 0;
  if ( !qword_180339CF8 )
    goto LABEL_39;
  if ( !(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)qword_180339CF8 + 2) + 104LL))(*((_QWORD *)qword_180339CF8
                                                                                              + 2))
    || (unsigned int)DrvQueryAdapterPopulationUniqueness() != *((_DWORD *)v10 + 14)
    || qword_180339CF8 != v10 )
  {
    ReleaseInterface<CD3DSurface>((__int64 *)&qword_180339CF8);
  }
  if ( !qword_180339CF8 )
  {
LABEL_39:
    D3DObjects = CD3DModuleLoaderInternal::CreateD3DObjects(v8, &qword_180339CF8);
    TranslateDXGIorD3DErrorInContext((unsigned int)D3DObjects, 4LL, &D3DObjects);
    v9 = D3DObjects;
    if ( D3DObjects < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v20, &dword_1802BE018, 1u, D3DObjects, 0xFEu, 0LL);
    v8 = (CD3DModuleLoaderInternal *)qword_180339D08;
    if ( qword_180339D08 )
      (*(void (__fastcall **)(__int64, CDXGIEnumeration *))(*(_QWORD *)qword_180339D08 + 32LL))(
        qword_180339D08,
        qword_180339CF8);
  }
  v11 = qword_180339CF8;
  if ( qword_180339CF8 )
    (**(void (__fastcall ***)(CDXGIEnumeration *))qword_180339CF8)(qword_180339CF8);
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v8, 0LL, 0, v9, 0xD8u, 0LL);
  }
  else
  {
    v12 = (volatile signed __int32 *)g_DisplayManager;
    if ( g_DisplayManager )
    {
LABEL_16:
      _InterlockedIncrement(v12);
      v4 = g_DisplayManager;
      goto LABEL_17;
    }
    v21 = CDisplayManager::DeriveCurrentDisplaySet(v8, v11, 0LL);
    v9 = v21;
    if ( v21 >= 0 )
    {
      v12 = (volatile signed __int32 *)g_DisplayManager;
      goto LABEL_16;
    }
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v8, 0LL, 0, v21, 0xDFu, 0LL);
  }
LABEL_17:
  if ( v11 )
    (*(void (__fastcall **)(struct CDXGIEnumeration *))(*(_QWORD *)v11 + 8LL))(v11);
  if ( v9 >= 0 )
  {
    v13 = 0;
    if ( *((_DWORD *)v4 + 18) )
    {
      v14 = *((_QWORD *)v4 + 6);
      while ( 1 )
      {
        v15 = *(_QWORD *)(v14 + 8LL * v13);
        v16 = *(_QWORD *)(v15 + 152);
        v17 = v16 ? *(_DWORD *)(v16 + 244) : *(_DWORD *)(v15 + 244);
        if ( *v6 == v17 )
          break;
        if ( ++v13 >= *((_DWORD *)v4 + 18) )
          goto LABEL_50;
      }
      v5 = *(_QWORD *)(v14 + 8LL * v13);
      (**(void (__fastcall ***)(__int64))v15)(v5);
      *((_QWORD *)this + 52) = *(_QWORD *)(*(_QWORD *)(v5 + 152) + 16LL);
      *((_DWORD *)this + 103) = *(_DWORD *)(v5 + 292);
    }
    else
    {
LABEL_50:
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024809, 0x15Bu, 0LL);
    }
    goto LABEL_26;
  }
  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v8, 0LL, 0, v9, 0xC9u, 0LL);
  MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v9, 0x2228u, 0LL);
LABEL_31:
  if ( v4 && _InterlockedExchangeAdd((volatile signed __int32 *)v4, 0xFFFFFFFF) == 1 )
    CDisplaySet::`scalar deleting destructor'(v4);
LABEL_34:
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  return (unsigned int)v9;
}
