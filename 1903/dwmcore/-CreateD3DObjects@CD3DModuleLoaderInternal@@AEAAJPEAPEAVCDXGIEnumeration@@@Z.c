/*
 * XREFs of ?CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x1800A7788
 * Callers:
 *     ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x18004C014 (-UpdateRenderTargetState@CDrawingContext@@AEAAJXZ.c)
 *     ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800943DC (-WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x180097A30 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 *     ?UpdateDisplaySet@CComposition@@IEAAXXZ @ 0x180098790 (-UpdateDisplaySet@CComposition@@IEAAXXZ.c)
 *     ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x1800A8A7C (-EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800408F8 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180089A74 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InitDXGI@CDXGIEnumeration@@AEAAJXZ @ 0x1800A7C18 (-InitDXGI@CDXGIEnumeration@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CD3DModuleLoaderInternal::CreateD3DObjects(
        CD3DModuleLoaderInternal *this,
        struct CDXGIEnumeration **a2)
{
  struct CDXGIEnumeration *v2; // rsi
  __int64 v4; // rcx
  int v5; // ebx
  _DWORD *v6; // rax
  __int64 v7; // r8
  _DWORD *v8; // rdi
  signed int inited; // eax
  __int64 v10; // rcx
  signed int LastError; // eax
  __int64 v13; // rcx
  HMODULE v14; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0LL;
  v16 = &stru_180340320;
  EnterCriticalSection(&stru_180340320);
  v5 = dword_180340348;
  if ( dword_180340348 != -2003292404 )
  {
    if ( dword_180340348 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v4, &dword_1802BFEC8, 1u, dword_180340348, 0x14Bu, 0LL);
      CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v16);
LABEL_22:
      if ( v2 )
        (*(void (__fastcall **)(struct CDXGIEnumeration *))(*(_QWORD *)v2 + 8LL))(v2);
      return (unsigned int)v5;
    }
LABEL_3:
    CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v16);
    v6 = DefaultHeap::AllocClear(0x70uLL);
    v8 = v6;
    if ( !v6 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr, v7);
    v6[2] = 0;
    *(_QWORD *)v6 = &CDXGIEnumeration::`vftable';
    v6[14] = DrvQueryAdapterPopulationUniqueness();
    *((_QWORD *)v8 + 8) = 0LL;
    *((_QWORD *)v8 + 9) = 0LL;
    *((_QWORD *)v8 + 10) = 0LL;
    v8[22] = 0;
    *((_QWORD *)v8 + 12) = 0LL;
    v8[27] = 0;
    (**(void (__fastcall ***)(_DWORD *))v8)(v8);
    inited = CDXGIEnumeration::InitDXGI((CDXGIEnumeration *)v8);
    v5 = inited;
    if ( inited < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, &dword_1802BFEC8, 1u, inited, 0x39u, 0LL);
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 8LL))(v8);
    }
    else
    {
      v2 = (struct CDXGIEnumeration *)v8;
    }
    if ( v5 >= 0 )
    {
      *a2 = v2;
      return (unsigned int)v5;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v10, &dword_1802BFEC8, 1u, v5, 0x14Fu, 0LL);
    goto LABEL_22;
  }
  hLibModule = LoadLibraryW(L"d3d11.dll");
  if ( hLibModule )
  {
    dword_180340348 = 0;
    goto LABEL_3;
  }
  LastError = GetLastError();
  v5 = LastError;
  if ( LastError > 0 )
    v5 = (unsigned __int16)LastError | 0x80070000;
  if ( v5 >= 0 )
    v5 = -2003304445;
  MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v5, 0xF5u, 0LL);
  OutputDebugStringW(L"WARNING: DWMCore: Direct3D 11 is not installed or load failed.\n");
  dword_180340348 = v5;
  v14 = hLibModule;
  if ( hLibModule )
  {
    FreeLibrary(hLibModule);
    hLibModule = 0LL;
  }
  MilInstrumentationCheckHR_MaybeFailFast((__int64)v14, &dword_1802BFEC8, 1u, v5, 0x147u, 0LL);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v16);
  return (unsigned int)v5;
}
