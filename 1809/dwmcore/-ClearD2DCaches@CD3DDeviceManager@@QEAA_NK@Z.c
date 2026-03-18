/*
 * XREFs of ?ClearD2DCaches@CD3DDeviceManager@@QEAA_NK@Z @ 0x1800CE320
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x1800CEAD0 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 * Callees:
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x1800300E8 (-Release@CDisplaySet@@QEBAKXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180038C28 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ??1CDisplaySet@@AEAA@XZ @ 0x180076DAC (--1CDisplaySet@@AEAA@XZ.c)
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x18007AF60 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@@Z @ 0x18007EE70 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAPEAVCDisplaySet@@PEAW4En.c)
 *     ?CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x18007FE1C (-CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x18008A4FC (-ResetTokenThread@CSurfaceManager@@QEAAJXZ.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180096A0C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?ClearProtectedResources@CD3DDeviceLevel1@@QEAA_NXZ @ 0x1801FB59C (-ClearProtectedResources@CD3DDeviceLevel1@@QEAA_NXZ.c)
 */

__int64 __fastcall CD3DDeviceManager::ClearD2DCaches(CD3DDeviceManager *this, int a2)
{
  CDisplaySet *v3; // r15
  unsigned __int8 v4; // bp
  int v5; // esi
  int v6; // r14d
  int v7; // r13d
  int v8; // r12d
  CD3DModuleLoaderInternal *v9; // rcx
  CDXGIEnumeration *v10; // rdi
  struct CDXGIEnumeration *v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rcx
  __m128i **v14; // rdx
  __m128i v15; // xmm2
  __int64 v16; // rdx
  __int64 v17; // r8
  int v18; // r9d
  int v19; // r10d
  __int64 v20; // rdi
  unsigned int v21; // r13d
  bool v22; // r12
  __int64 v23; // r14
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rsi
  unsigned int v27; // r9d
  __int64 v28; // r10
  bool v29; // zf
  bool v30; // dl
  unsigned __int8 v31; // cl
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // [rsp+A0h] [rbp+8h] BYREF
  int D3DObjects; // [rsp+A8h] [rbp+10h] BYREF
  CDisplaySet *v40; // [rsp+B0h] [rbp+18h] BYREF
  CDisplaySet *v41; // [rsp+B8h] [rbp+20h]

  D3DObjects = a2;
  v3 = 0LL;
  v41 = 0LL;
  v4 = 1;
  v5 = 4;
  v6 = 1366;
  v7 = 768;
  EnterCriticalSection(&g_DisplayManager);
  v8 = 0;
  EnterCriticalSection(&g_DisplayManager);
  v10 = qword_180308260;
  if ( !qword_180308260
    || (!(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)qword_180308260 + 2) + 104LL))(*((_QWORD *)qword_180308260
                                                                                               + 2))
     || (unsigned int)DrvQueryAdapterPopulationUniqueness() != *((_DWORD *)v10 + 14)
     || qword_180308260 != v10
      ? (ReleaseInterface<CD3DSurface>((__int64 *)&qword_180308260), LOBYTE(v10) = 1)
      : (LOBYTE(v10) = 0),
        !qword_180308260) )
  {
    D3DObjects = CD3DModuleLoaderInternal::CreateD3DObjects(v9, &qword_180308260);
    TranslateDXGIorD3DErrorInContext(D3DObjects, 4, &D3DObjects);
    v8 = D3DObjects;
    if ( D3DObjects < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v33, &dword_18029B8C0, 1u, D3DObjects, 0x128u);
  }
  if ( (_BYTE)v10 && qword_180308270 )
    CSurfaceManager::ResetTokenThread(qword_180308270);
  v11 = qword_180308260;
  if ( qword_180308260 )
    (**(void (__fastcall ***)(CDXGIEnumeration *))qword_180308260)(qword_180308260);
  LeaveCriticalSection(&g_DisplayManager);
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v8, 0xEAu);
  }
  else
  {
    if ( qword_180308258 )
    {
LABEL_12:
      _InterlockedIncrement((volatile signed __int32 *)qword_180308258);
      v3 = qword_180308258;
      v41 = qword_180308258;
      goto LABEL_13;
    }
    v40 = 0LL;
    LeaveCriticalSection(&g_DisplayManager);
    v34 = CDisplayManager::DeriveCurrentDisplaySet(&g_DisplayManager, v11, &v40, 0LL);
    v8 = v34;
    if ( v34 >= 0 )
    {
      EnterCriticalSection(&g_DisplayManager);
      if ( qword_180308258 )
      {
        if ( v40 )
          CDisplaySet::Release(v40);
      }
      else
      {
        qword_180308258 = v40;
        if ( v40 )
          _InterlockedIncrement((volatile signed __int32 *)v40);
      }
      goto LABEL_12;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, 0xF8u);
    EnterCriticalSection(&g_DisplayManager);
  }
LABEL_13:
  if ( v11 )
    (*(void (__fastcall **)(struct CDXGIEnumeration *))(*(_QWORD *)v11 + 8LL))(v11);
  LeaveCriticalSection(&g_DisplayManager);
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v8, 0xD9u);
  if ( v3 )
  {
    v6 = 0;
    v7 = 0;
    v5 = 0;
    if ( *((_DWORD *)v3 + 18) )
    {
      v14 = (__m128i **)*((_QWORD *)v3 + 6);
      do
      {
        v15 = (*v14)[17];
        v19 = GetPixelFormatSize((*v14)[18].m128i_i32[0]) >> 3;
        if ( v18 * v19 * _mm_cvtsi128_si32(v15) > (unsigned int)(v6 * v7 * v5) )
        {
          v6 = _mm_cvtsi128_si32(v15);
          v7 = v18;
          v5 = v19;
        }
        v14 = (__m128i **)(v16 + 8);
      }
      while ( v17 != 1 );
    }
  }
  v20 = 0LL;
  v21 = v5 * ((v6 + 255) & 0xFFFFFF00) * ((v7 + 255) & 0xFFFFFF00)
      + ((v5 * ((v6 + 255) & 0xFFFFFF00) * ((v7 + 255) & 0xFFFFFF00)) >> 2);
  if ( *((_DWORD *)this + 52) )
  {
    do
    {
      v22 = 0;
      v23 = 24 * v20;
      v24 = *((_QWORD *)this + 16);
      v25 = *(_QWORD *)(24 * v20 + v24 + 8);
      v26 = *(_QWORD *)(24 * v20 + v24);
      v38 = v25;
      if ( !CD3DDeviceManager::s_bHwProtectionTempDisabled && !CD3DDeviceManager::s_bHwProtectionTeardown )
      {
        v27 = *((_DWORD *)this + 26);
        v28 = 0LL;
        if ( v27 )
        {
          while ( 1 )
          {
            v36 = *((_QWORD *)this + 10);
            v29 = *(_DWORD *)(v36 + 12 * v28) == (_DWORD)v25;
            v37 = v36 + 12 * v28;
            if ( v29 && *(_DWORD *)(v37 + 4) == HIDWORD(v38) )
              break;
            v28 = (unsigned int)(v28 + 1);
            if ( (unsigned int)v28 >= v27 )
              goto LABEL_27;
          }
          v22 = *(_DWORD *)(v37 + 8) != 0;
        }
      }
LABEL_27:
      if ( *(_BYTE *)(v23 + v24 + 16) && !v22 )
        CD3DDeviceLevel1::ClearProtectedResources((CD3DDeviceLevel1 *)v26);
      v29 = *(_QWORD *)(v26 + 216) == 0LL;
      LODWORD(v38) = 1;
      v30 = 1;
      if ( !v29 )
      {
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64 *))(**(_QWORD **)(v26 + 224) + 40LL))(
          *(_QWORD *)(v26 + 224),
          2000LL,
          v21,
          &v38);
        if ( (_DWORD)v38 != 1 )
          v30 = 0;
      }
      v31 = 0;
      if ( v30 )
        v31 = v4;
      v20 = (unsigned int)(v20 + 1);
      v4 = v31;
      *(_BYTE *)(v23 + *((_QWORD *)this + 16) + 16) = v22;
    }
    while ( (unsigned int)v20 < *((_DWORD *)this + 52) );
    v3 = v41;
  }
  if ( v3 && _InterlockedExchangeAdd((volatile signed __int32 *)v3, 0xFFFFFFFF) == 1 )
  {
    CDisplaySet::~CDisplaySet(v3);
    WPF::ProcessHeapImpl::Free(v3);
  }
  return v4;
}
