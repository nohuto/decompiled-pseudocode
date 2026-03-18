/*
 * XREFs of ?CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x1800265E8
 * Callers:
 *     ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x180027A50 (-EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x180059AF4 (-UpdateRenderTargetState@CDrawingContext@@AEAAJXZ.c)
 *     ?UpdateDisplaySet@CComposition@@IEAAXXZ @ 0x180070550 (-UpdateDisplaySet@CComposition@@IEAAXXZ.c)
 *     ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18007134C (-WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x180074920 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?InitDXGI@CDXGIEnumeration@@AEAAJXZ @ 0x180026A78 (-InitDXGI@CDXGIEnumeration@@AEAAJXZ.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180055A08 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180079254 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CD3DModuleLoaderInternal::CreateD3DObjects(
        CD3DModuleLoaderInternal *this,
        struct CDXGIEnumeration **a2)
{
  struct CDXGIEnumeration *v2; // rsi
  unsigned int v4; // ecx
  signed int v5; // ebx
  _DWORD *v6; // rax
  __int64 v7; // r8
  _DWORD *v8; // rdi
  int inited; // eax
  unsigned int v10; // ecx
  signed int LastError; // eax
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  void *retaddr; // [rsp+48h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0LL;
  v16 = &CriticalSection;
  EnterCriticalSection(&CriticalSection);
  v5 = dword_18033D428;
  if ( dword_18033D428 != -2003292404 )
  {
    if ( dword_18033D428 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v4, &dword_1802BE018, 1u, dword_18033D428, 0x14Bu, 0LL);
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
      MilInstrumentationCheckHR_MaybeFailFast(v10, &dword_1802BE018, 1u, inited, 0x39u, 0LL);
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
    MilInstrumentationCheckHR_MaybeFailFast(v10, &dword_1802BE018, 1u, v5, 0x14Fu, 0LL);
    goto LABEL_22;
  }
  hLibModule = LoadLibraryW(L"d3d11.dll");
  if ( hLibModule )
  {
    dword_18033D428 = 0;
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
  dword_18033D428 = v5;
  v14 = (unsigned int)hLibModule;
  if ( hLibModule )
  {
    FreeLibrary(hLibModule);
    hLibModule = 0LL;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v14, &dword_1802BE018, 1u, v5, 0x147u, 0LL);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v16);
  return (unsigned int)v5;
}
