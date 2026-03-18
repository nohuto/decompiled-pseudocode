/*
 * XREFs of ?GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z @ 0x18004B004
 * Callers:
 *     ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x1800474D4 (-UpdateRenderTargetState@CDrawingContext@@AEAAJXZ.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180067FD4 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 * Callees:
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x1800300E8 (-Release@CDisplaySet@@QEBAKXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180038C28 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x18007AF60 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@@Z @ 0x18007EE70 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAPEAVCDisplaySet@@PEAW4En.c)
 *     ?CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x18007FE1C (-CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x18008A4FC (-ResetTokenThread@CSurfaceManager@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDisplayManager::GetCurrentDisplaySetInternal(CDisplayManager *this, struct CDisplaySet **a2)
{
  int v3; // edi
  char v4; // si
  CD3DModuleLoaderInternal *v5; // rcx
  CDXGIEnumeration *v6; // rbx
  struct CDXGIEnumeration *v7; // rbx
  unsigned int v8; // ecx
  unsigned int v10; // ecx
  int v11; // eax
  unsigned int v12; // ecx
  CDisplayManager *v13; // [rsp+50h] [rbp+8h] BYREF
  CDisplaySet *v14; // [rsp+58h] [rbp+10h] BYREF

  v13 = this;
  *a2 = 0LL;
  EnterCriticalSection(&g_DisplayManager);
  v3 = 0;
  v4 = 0;
  EnterCriticalSection(&g_DisplayManager);
  v6 = qword_180308260;
  if ( qword_180308260
    && (!(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)qword_180308260 + 2) + 104LL))(*((_QWORD *)qword_180308260
                                                                                               + 2))
     || (unsigned int)DrvQueryAdapterPopulationUniqueness() != *((_DWORD *)v6 + 14)
     || qword_180308260 != v6) )
  {
    ReleaseInterface<CD3DSurface>(&qword_180308260);
    v4 = 1;
  }
  if ( !qword_180308260 )
  {
    LODWORD(v13) = CD3DModuleLoaderInternal::CreateD3DObjects(v5, &qword_180308260);
    TranslateDXGIorD3DErrorInContext((int)v13, 4, &v13);
    v3 = (int)v13;
    if ( (int)v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, &dword_18029B8C0, 1u, (int)v13, 0x128u);
  }
  if ( v4 && qword_180308270 )
    CSurfaceManager::ResetTokenThread(qword_180308270);
  v7 = qword_180308260;
  if ( qword_180308260 )
    (**(void (__fastcall ***)(CDXGIEnumeration *))qword_180308260)(qword_180308260);
  LeaveCriticalSection(&g_DisplayManager);
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v3, 0xEAu);
  }
  else
  {
    if ( qword_180308258 )
    {
LABEL_11:
      _InterlockedIncrement((volatile signed __int32 *)qword_180308258);
      *a2 = qword_180308258;
      goto LABEL_12;
    }
    v14 = 0LL;
    LeaveCriticalSection(&g_DisplayManager);
    v11 = CDisplayManager::DeriveCurrentDisplaySet(&g_DisplayManager, v7, &v14, 0LL);
    v3 = v11;
    if ( v11 >= 0 )
    {
      EnterCriticalSection(&g_DisplayManager);
      if ( qword_180308258 )
      {
        if ( v14 )
          CDisplaySet::Release(v14);
      }
      else
      {
        qword_180308258 = v14;
        if ( v14 )
          _InterlockedIncrement((volatile signed __int32 *)v14);
      }
      goto LABEL_11;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xF8u);
    EnterCriticalSection(&g_DisplayManager);
  }
LABEL_12:
  if ( v7 )
    (*(void (__fastcall **)(struct CDXGIEnumeration *))(*(_QWORD *)v7 + 8LL))(v7);
  LeaveCriticalSection(&g_DisplayManager);
  return (unsigned int)v3;
}
