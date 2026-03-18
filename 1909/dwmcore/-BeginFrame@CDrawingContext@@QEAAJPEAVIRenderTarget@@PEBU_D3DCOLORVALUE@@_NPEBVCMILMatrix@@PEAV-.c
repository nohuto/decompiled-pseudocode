/*
 * XREFs of ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFORMRESOURCE@@$0BH@@@2PEAVCRenderTarget@@@Z @ 0x180059100
 * Callers:
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002394C (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18002407C (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x18004FCC0 (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 *     ?EnsureDrawingContextFrame@CContentBounder@@AEAAJXZ @ 0x180058890 (-EnsureDrawingContextFrame@CContentBounder@@AEAAJXZ.c)
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x180059EF0 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x18018AFBC (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJPEA_N@Z @ 0x1801996B0 (-Render@COffScreenRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?Render@COverlayRenderTargetEngine@@UEAAJPEA_N@Z @ 0x1801A36C0 (-Render@COverlayRenderTargetEngine@@UEAAJPEA_N@Z.c)
 *     ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJXZ @ 0x1801A4ABC (-RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x1801AA4EC (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@II@Z @ 0x180244960 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@II@Z.c)
 *     ?RenderDirtyRegion@CLocalAppRenderTarget@@IEAAJXZ @ 0x18024F228 (-RenderDirtyRegion@CLocalAppRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ?IsWarpAdapterLuid@CDXGIEnumeration@@QEBA_NU_LUID@@@Z @ 0x18002643C (-IsWarpAdapterLuid@CDXGIEnumeration@@QEBA_NU_LUID@@@Z.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x180058954 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x180059680 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18006AD4C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x18008B180 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800AF4EC (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?CreateProcessAttribution@CProcessAttributionManager@@AEAAJKPEBUProcessAttributionRecord@1@_NPEAPEAVCProcessAttribution@@@Z @ 0x1800C952C (-CreateProcessAttribution@CProcessAttributionManager@@AEAAJKPEBUProcessAttributionRecord@1@_NPEA.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x1800E93B0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800E9418 (_Init_thread_header.c)
 *     memcpy_0 @ 0x1800F020B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 *     McTemplateU0ppffffubr6 @ 0x180170558 (McTemplateU0ppffffubr6.c)
 */

__int64 __fastcall CDrawingContext::BeginFrame(
        CDrawingContext *this,
        struct IRenderTarget *a2,
        _OWORD *a3,
        char a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 v8; // rax
  __int64 (__fastcall *v12)(struct IRenderTarget *, char *, _QWORD); // rax
  int v14; // eax
  unsigned int v15; // ecx
  int v16; // esi
  __int64 v17; // r8
  bool v18; // zf
  __int64 v19; // rdx
  unsigned int v20; // r15d
  __int64 v21; // rcx
  unsigned int v22; // eax
  int v23; // ebx
  unsigned int v24; // eax
  unsigned int v25; // ecx
  bool v26; // al
  __int64 v27; // rax
  bool v28; // al
  __int64 v29; // rcx
  CProcessAttributionManager *v30; // rbx
  _QWORD *ThreadLocalStoragePointer; // rax
  __int64 v32; // rcx
  unsigned int v33; // eax
  void *v34; // r14
  int v35; // ebx
  unsigned int v36; // eax
  unsigned int v37; // ecx
  unsigned int v38; // eax
  unsigned int v39; // edx
  unsigned int v41; // esi
  int v42; // eax
  unsigned int v43; // ecx
  unsigned __int64 v44; // rax
  void *v45; // rbx
  unsigned int v46; // r15d
  int v47; // eax
  unsigned int v48; // ecx
  unsigned __int64 v49; // rax
  void *v50; // rbx
  int v51; // eax
  unsigned int v52; // ecx
  int ProcessAttribution; // eax
  __int64 v54; // r8
  bool v55; // bl
  int v56; // edx
  int v57; // ecx
  void *v58; // rsi
  HANDLE ProcessHeap; // rax
  void *v60; // r15
  HANDLE v61; // rax
  __int64 v62; // r8
  unsigned int v63; // [rsp+20h] [rbp-60h]
  void *lpMem; // [rsp+50h] [rbp-30h] BYREF
  __int128 v65; // [rsp+58h] [rbp-28h]
  int v66; // [rsp+68h] [rbp-18h] BYREF
  int v67; // [rsp+6Ch] [rbp-14h]
  int v68; // [rsp+70h] [rbp-10h]
  int v69; // [rsp+74h] [rbp-Ch]
  void *retaddr; // [rsp+B8h] [rbp+38h]

  v8 = *(_QWORD *)a2;
  *(_QWORD *)&v65 = 0LL;
  v12 = *(__int64 (__fastcall **)(struct IRenderTarget *, char *, _QWORD))(v8 + 120);
  BYTE8(v65) = 1;
  v14 = v12(a2, (char *)this + 392, 0LL);
  v16 = v14;
  if ( v14 < 0 )
  {
    v63 = 312;
    goto LABEL_86;
  }
  *((float *)this + 110) = (*(float (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a2 + 152LL))(a2);
  v14 = CDrawingContext::PushRenderTarget(this, a2);
  v16 = v14;
  if ( v14 < 0 )
  {
    v63 = 324;
LABEL_86:
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, v63, 0LL);
    goto LABEL_34;
  }
  v18 = *((_QWORD *)this + 45) == 0LL;
  *((_QWORD *)this + 47) = a8;
  if ( v18 && !*((_QWORD *)this + 787) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x80u) != 0 )
  {
    v55 = a5 && !(unsigned __int8)CMILMatrix::IsIdentity<0>(a5);
    (*(void (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 44) + 48LL))(*((_QWORD *)this + 44), &v66);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80u) != 0 )
      McTemplateU0ppffffubr6(v57, v56, (_DWORD)this, *((_QWORD *)this + 44), v66, v67, v68, v69, v55 ? 0x44 : 0, a5);
  }
  v19 = 0LL;
  if ( a3 )
  {
    *(_OWORD *)((char *)this + 424) = *a3;
  }
  else
  {
    v18 = g_fUseDebugClearColorIfNoClear == 0;
    *((_QWORD *)this + 53) = 0LL;
    *((_QWORD *)this + 54) = 0LL;
    if ( !v18 )
    {
      *((_DWORD *)this + 106) = 1065353216;
      *((_DWORD *)this + 109) = 1065353216;
    }
  }
  *((_DWORD *)this + 62) = 1;
  *((_BYTE *)this + 268) = a4 ^ 1;
  v20 = -2147024362;
  *(_QWORD *)((char *)this + 252) = 1LL;
  *(_QWORD *)((char *)this + 260) = 0LL;
  v21 = *((unsigned int *)this + 871);
  v22 = *((_DWORD *)this + 870);
  lpMem = 0LL;
  if ( v22 != (_DWORD)v21 )
    goto LABEL_9;
  v41 = 2 * v21;
  if ( (unsigned __int64)(2 * v21) > 0xFFFFFFFF )
  {
    v23 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, -2147024362, 0x4Cu, 0LL);
    v16 = -2147024362;
    goto LABEL_70;
  }
  if ( v41 <= 0x40 )
    v41 = 64;
  v42 = HrMalloc(0x10uLL, v41, &lpMem);
  v23 = v42;
  if ( v42 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, v42, 0x53u, 0LL);
  }
  else
  {
    v44 = 16LL * *((unsigned int *)this + 870);
    if ( v44 <= 0xFFFFFFFF )
    {
      v45 = lpMem;
      memcpy_0(lpMem, *((const void **)this + 437), (unsigned int)v44);
      operator delete(*((void **)this + 437));
      v22 = *((_DWORD *)this + 870);
      v19 = 0LL;
      *((_QWORD *)this + 437) = v45;
      *((_DWORD *)this + 871) = v41;
LABEL_9:
      v23 = 0;
      *(_OWORD *)(*((_QWORD *)this + 437) + 16LL * v22) = v65;
      v24 = *((_DWORD *)this + 876);
      v25 = *((_DWORD *)this + 870) + 1;
      *((_DWORD *)this + 870) = v25;
      if ( v24 <= v25 )
        v24 = v25;
      *((_DWORD *)this + 876) = v24;
      goto LABEL_12;
    }
    v23 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, -2147024362, 0x55u, 0LL);
  }
  v58 = lpMem;
  if ( lpMem )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v58);
  }
  v19 = 0LL;
LABEL_12:
  v16 = v23;
  if ( v23 < 0 )
  {
LABEL_70:
    MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v23, 0x187u, 0LL);
    goto LABEL_34;
  }
  *((_QWORD *)this + 465) = a6;
  if ( a6 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a6 + 8LL))(a6, 0LL);
  *((_BYTE *)this + 6348) = a7;
  if ( a5 )
  {
    *((_OWORD *)this + 228) = *(_OWORD *)a5;
    *((_OWORD *)this + 229) = *(_OWORD *)(a5 + 16);
    *((_OWORD *)this + 230) = *(_OWORD *)(a5 + 32);
    *((_OWORD *)this + 231) = *(_OWORD *)(a5 + 48);
    *((_DWORD *)this + 928) = *(_DWORD *)(a5 + 64);
  }
  else
  {
    *((_OWORD *)this + 228) = _xmm;
    *((_WORD *)this + 1856) = 32085;
    *((_OWORD *)this + 229) = _xmm;
    *((_OWORD *)this + 230) = _xmm;
    *((_OWORD *)this + 231) = _xmm;
  }
  *(_DWORD *)((char *)this + 6354) = 0;
  v26 = !*((_QWORD *)this + 45)
     && !CCommonRegistryData::m_fUseHWDrawListEntriesOnWARP
     && *(_QWORD *)((*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 48) + 160LL))(
                      *((_QWORD *)this + 48),
                      v19)
                  + 616)
     && qword_180339CF8
     && CDXGIEnumeration::IsWarpAdapterLuid(qword_180339CF8, *(struct _LUID *)((char *)this + 392));
  v18 = *((_QWORD *)this + 45) == 0LL;
  *((_BYTE *)this + 6353) = v26;
  v28 = 0;
  if ( v18 )
  {
    v27 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 48) + 160LL))(*((_QWORD *)this + 48), v19);
    if ( *(int *)(v27 + 740) >= 37632 && !*(_BYTE *)(v27 + 628) )
      v28 = 1;
  }
  v29 = (unsigned int)tls_index;
  v30 = ::lpMem;
  *((_BYTE *)this + 6351) = v28;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  *((_QWORD *)this + 439) = 0LL;
  if ( dword_18033D324 > *(_DWORD *)(ThreadLocalStoragePointer[v29] + 4LL) )
  {
    Init_thread_header(&dword_18033D324);
    if ( dword_18033D324 == -1 )
    {
      ProcessAttribution = CProcessAttributionManager::CreateProcessAttribution(
                             v30,
                             0xFFFFFFFF,
                             (const struct CProcessAttributionManager::ProcessAttributionRecord *)&unk_18033D5D0,
                             0,
                             (struct CProcessAttribution **)&lpMem);
      if ( ProcessAttribution < 0 )
        ModuleFailFastForHRESULT((unsigned int)ProcessAttribution, retaddr, v54);
      qword_180339CD8 = (__int64)lpMem;
      Init_thread_footer(&dword_18033D324);
    }
  }
  v32 = *((unsigned int *)this + 113);
  v33 = *((_DWORD *)this + 112);
  v34 = (void *)qword_180339CD8;
  LODWORD(v65) = 10;
  *((_QWORD *)&v65 + 1) = 0LL;
  lpMem = 0LL;
  if ( v33 != (_DWORD)v32 )
    goto LABEL_27;
  v46 = 2 * v32;
  if ( (unsigned __int64)(2 * v32) > 0xFFFFFFFF )
  {
    v35 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, -2147024362, 0x4Cu, 0LL);
LABEL_81:
    ModuleFailFastForHRESULT((unsigned int)v35, retaddr, v17);
  }
  if ( v46 <= 0x40 )
    v46 = 64;
  v47 = HrMalloc(0x10uLL, v46, &lpMem);
  v35 = v47;
  if ( v47 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, v47, 0x53u, 0LL);
  }
  else
  {
    v49 = 16LL * *((unsigned int *)this + 112);
    if ( v49 <= 0xFFFFFFFF )
    {
      v50 = lpMem;
      memcpy_0(lpMem, *((const void **)this + 58), (unsigned int)v49);
      operator delete(*((void **)this + 58));
      v33 = *((_DWORD *)this + 112);
      *((_DWORD *)this + 113) = v46;
      v20 = -2147024362;
      *((_QWORD *)this + 58) = v50;
LABEL_27:
      v35 = 0;
      *(_OWORD *)(*((_QWORD *)this + 58) + 16LL * v33) = v65;
      v36 = *((_DWORD *)this + 118);
      v37 = *((_DWORD *)this + 112) + 1;
      *((_DWORD *)this + 112) = v37;
      if ( v36 <= v37 )
        v36 = v37;
      *((_DWORD *)this + 118) = v36;
      goto LABEL_30;
    }
    v35 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, -2147024362, 0x55u, 0LL);
  }
  v60 = lpMem;
  if ( lpMem )
  {
    v61 = GetProcessHeap();
    HeapFree(v61, 0, v60);
  }
  v20 = -2147024362;
LABEL_30:
  if ( v35 < 0 )
    goto LABEL_81;
  v38 = *((_DWORD *)this + 234);
  lpMem = v34;
  v39 = v38 + 1;
  if ( v38 + 1 < v38 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, -2147024362, 0xB8u, 0LL);
LABEL_83:
    ModuleFailFastForHRESULT(v20, retaddr, v62);
  }
  if ( v39 <= *((_DWORD *)this + 233) )
  {
    *(_QWORD *)(*((_QWORD *)this + 114) + 8LL * v38) = lpMem;
    *((_DWORD *)this + 234) = v39;
    goto LABEL_34;
  }
  v51 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 912, 8LL, 1LL, &lpMem);
  v20 = v51;
  if ( v51 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v52, 0LL, 0, v51, 0xC3u, 0LL);
    goto LABEL_83;
  }
LABEL_34:
  if ( v16 < 0 )
    CDrawingContext::EndFrame(this);
  return (unsigned int)v16;
}
