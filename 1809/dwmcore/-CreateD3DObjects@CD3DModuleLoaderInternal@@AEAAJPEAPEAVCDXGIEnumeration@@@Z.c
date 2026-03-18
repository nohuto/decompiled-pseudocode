/*
 * XREFs of ?CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x18007FE1C
 * Callers:
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BH@@@2PEAVCHwndRenderTarget@@@Z @ 0x18004AAAC (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z @ 0x18004B004 (-GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z.c)
 *     ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x180099594 (-EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800C92F0 (-WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x1800CD560 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 *     ?ClearD2DCaches@CD3DDeviceManager@@QEAA_NK@Z @ 0x1800CE320 (-ClearD2DCaches@CD3DDeviceManager@@QEAA_NK@Z.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18004F094 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?InitDXGI@CDXGIEnumeration@@AEAAJXZ @ 0x1800802F8 (-InitDXGI@CDXGIEnumeration@@AEAAJXZ.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180099D60 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CD3DModuleLoaderInternal::CreateD3DObjects(
        CD3DModuleLoaderInternal *this,
        struct CDXGIEnumeration **a2)
{
  struct CDXGIEnumeration *v3; // rsi
  unsigned int v4; // ecx
  signed int v5; // ebx
  _DWORD *v6; // rax
  _DWORD *v7; // rdi
  int inited; // eax
  unsigned int v9; // ecx
  signed int LastError; // eax
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  void *retaddr; // [rsp+38h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+40h] [rbp+8h] BYREF

  v15 = &stru_180308758;
  v3 = 0LL;
  EnterCriticalSection(&stru_180308758);
  v5 = dword_180308780;
  if ( dword_180308780 != -2003292404 )
  {
    if ( dword_180308780 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v4, &dword_18029B8C0, 1u, dword_180308780, 0x14Bu);
      CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v15);
LABEL_22:
      if ( v3 )
        (*(void (__fastcall **)(struct CDXGIEnumeration *))(*(_QWORD *)v3 + 8LL))(v3);
      return (unsigned int)v5;
    }
LABEL_3:
    CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v15);
    v6 = WPF::ProcessHeapImpl::AllocClear(0x70uLL);
    v7 = v6;
    if ( !v6 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    v6[2] = 0;
    *(_QWORD *)v6 = &CDXGIEnumeration::`vftable';
    v6[14] = DrvQueryAdapterPopulationUniqueness();
    *((_QWORD *)v7 + 8) = 0LL;
    *((_QWORD *)v7 + 9) = 0LL;
    v7[20] = 0;
    v7[21] = 0;
    v7[22] = 0;
    *((_QWORD *)v7 + 12) = 0LL;
    v7[27] = 0;
    (**(void (__fastcall ***)(_DWORD *))v7)(v7);
    inited = CDXGIEnumeration::InitDXGI((CDXGIEnumeration *)v7);
    v5 = inited;
    if ( inited < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18029B8C0, 1u, inited, 0x3Bu);
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 8LL))(v7);
    }
    else
    {
      v3 = (struct CDXGIEnumeration *)v7;
    }
    if ( v5 >= 0 )
    {
      *a2 = v3;
      return (unsigned int)v5;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18029B8C0, 1u, v5, 0x14Fu);
    goto LABEL_22;
  }
  hLibModule = LoadLibraryW(L"d3d11.dll");
  if ( hLibModule )
  {
    dword_180308780 = 0;
    goto LABEL_3;
  }
  LastError = GetLastError();
  v5 = LastError;
  if ( LastError > 0 )
    v5 = (unsigned __int16)LastError | 0x80070000;
  if ( v5 >= 0 )
    v5 = -2003304445;
  MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v5, 0xF5u);
  OutputDebugStringW(L"WARNING: DWMCore: Direct3D 11 is not installed or load failed.\n");
  dword_180308780 = v5;
  v13 = (unsigned int)hLibModule;
  if ( hLibModule )
  {
    FreeLibrary(hLibModule);
    hLibModule = 0LL;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v13, &dword_18029B8C0, 1u, v5, 0x147u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v15);
  return (unsigned int)v5;
}
