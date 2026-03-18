/*
 * XREFs of ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x18004C014
 * Callers:
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x18004BBA0 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800B09FC (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180023F3C (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18005A24C (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_GCDisplaySet@@AEAAPEAXI@Z @ 0x1800A376C (--_GCDisplaySet@@AEAAPEAXI@Z.c)
 *     ?CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x1800A7788 (-CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAW4Enum@DisplayStateComparison@@@Z @ 0x1800E97B0 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAW4Enum@DisplayStateCompa.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::UpdateRenderTargetState(CDrawingContext *this)
{
  _QWORD *v1; // rbx
  __int64 v3; // rcx
  CDisplaySet *v4; // rbp
  __int64 v5; // r14
  unsigned int v6; // edx
  _DWORD *v7; // r15
  int v8; // eax
  CD3DModuleLoaderInternal *v9; // rcx
  int v10; // ebx
  CDXGIEnumeration *v11; // rdi
  struct CDXGIEnumeration *v12; // rdi
  volatile signed __int32 *v13; // rax
  unsigned int v14; // ecx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // eax
  int v19; // eax
  unsigned int v21; // ecx
  int v22; // eax
  unsigned int v23; // ecx
  int D3DObjects; // [rsp+70h] [rbp+8h] BYREF
  __int64 v25; // [rsp+78h] [rbp+10h] BYREF
  char v26; // [rsp+80h] [rbp+18h] BYREF

  v1 = (_QWORD *)((char *)this + 360);
  v25 = 0LL;
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
    v10 = 0;
    goto LABEL_29;
  }
  v7 = (_DWORD *)((char *)this + 400);
  v8 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)this + 44) + 120LL))(
         *((_QWORD *)this + 44),
         &v26,
         (char *)this + 400);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v9, 0LL, 0, v8, 0x221Au, 0LL);
    goto LABEL_34;
  }
  *((_DWORD *)this + 103) = -1;
  *((_QWORD *)this + 52) = 0LL;
  if ( *v7 == (_DWORD)DisplayId::None || *v7 == (_DWORD)DisplayId::All )
  {
LABEL_26:
    if ( (***((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 44))(
           *((_QWORD *)this + 44),
           &GUID_ce9b2f4f_bd49_4551_83ee_78f4d7b06d31,
           &v25) >= 0 )
      v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 40LL))(v25);
    else
      v19 = 0;
    *((_DWORD *)this + 101) = v19;
    *((_BYTE *)this + 408) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 44) + 144LL))(*((_QWORD *)this + 44));
LABEL_29:
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    goto LABEL_31;
  }
  v11 = qword_18033CC08;
  v10 = 0;
  if ( !qword_18033CC08 )
    goto LABEL_39;
  if ( !(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)qword_18033CC08 + 2) + 104LL))(*((_QWORD *)qword_18033CC08
                                                                                              + 2))
    || (unsigned int)DrvQueryAdapterPopulationUniqueness() != *((_DWORD *)v11 + 14)
    || qword_18033CC08 != v11 )
  {
    ReleaseInterface<CD3DSurface>((__int64 *)&qword_18033CC08);
  }
  if ( !qword_18033CC08 )
  {
LABEL_39:
    D3DObjects = CD3DModuleLoaderInternal::CreateD3DObjects(v9, &qword_18033CC08);
    TranslateDXGIorD3DErrorInContext((unsigned int)D3DObjects, 4LL, &D3DObjects);
    v10 = D3DObjects;
    if ( D3DObjects < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v21, &dword_1802BFEC8, 1u, D3DObjects, 0xFEu, 0LL);
    v9 = (CD3DModuleLoaderInternal *)qword_18033CC18;
    if ( qword_18033CC18 )
      (*(void (__fastcall **)(__int64, CDXGIEnumeration *))(*(_QWORD *)qword_18033CC18 + 32LL))(
        qword_18033CC18,
        qword_18033CC08);
  }
  v12 = qword_18033CC08;
  if ( qword_18033CC08 )
    (**(void (__fastcall ***)(CDXGIEnumeration *))qword_18033CC08)(qword_18033CC08);
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v9, 0LL, 0, v10, 0xD8u, 0LL);
  }
  else
  {
    v13 = (volatile signed __int32 *)g_DisplayManager;
    if ( g_DisplayManager )
    {
LABEL_16:
      _InterlockedIncrement(v13);
      v4 = g_DisplayManager;
      goto LABEL_17;
    }
    v22 = CDisplayManager::DeriveCurrentDisplaySet(v9, v12, 0LL);
    v10 = v22;
    if ( v22 >= 0 )
    {
      v13 = (volatile signed __int32 *)g_DisplayManager;
      goto LABEL_16;
    }
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v9, 0LL, 0, v22, 0xDFu, 0LL);
  }
LABEL_17:
  if ( v12 )
    (*(void (__fastcall **)(struct CDXGIEnumeration *))(*(_QWORD *)v12 + 8LL))(v12);
  if ( v10 >= 0 )
  {
    v14 = 0;
    if ( *((_DWORD *)v4 + 18) )
    {
      v15 = *((_QWORD *)v4 + 6);
      while ( 1 )
      {
        v16 = *(_QWORD *)(v15 + 8LL * v14);
        v17 = *(_QWORD *)(v16 + 152);
        v18 = v17 ? *(_DWORD *)(v17 + 244) : *(_DWORD *)(v16 + 244);
        if ( *v7 == v18 )
          break;
        if ( ++v14 >= *((_DWORD *)v4 + 18) )
          goto LABEL_50;
      }
      v5 = *(_QWORD *)(v15 + 8LL * v14);
      (**(void (__fastcall ***)(__int64))v16)(v5);
      *((_QWORD *)this + 52) = *(_QWORD *)(*(_QWORD *)(v5 + 152) + 16LL);
      *((_DWORD *)this + 103) = *(_DWORD *)(v5 + 292);
    }
    else
    {
LABEL_50:
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024809, 0x15Bu, 0LL);
    }
    goto LABEL_26;
  }
  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v9, 0LL, 0, v10, 0xC9u, 0LL);
  MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v10, 0x2228u, 0LL);
LABEL_31:
  if ( v4 && _InterlockedExchangeAdd((volatile signed __int32 *)v4, 0xFFFFFFFF) == 1 )
    CDisplaySet::`scalar deleting destructor'(v4, v6);
LABEL_34:
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  return (unsigned int)v10;
}
