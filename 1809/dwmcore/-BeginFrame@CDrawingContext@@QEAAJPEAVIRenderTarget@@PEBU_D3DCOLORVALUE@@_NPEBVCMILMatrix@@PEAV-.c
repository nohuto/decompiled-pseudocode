/*
 * XREFs of ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BH@@@2PEAVCHwndRenderTarget@@@Z @ 0x18004AAAC
 * Callers:
 *     ?Render@COffScreenRenderTarget@@UEAAJPEA_N@Z @ 0x18001C3C0 (-Render@COffScreenRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?EnsureDrawingContextFrame@CContentBounder@@AEAAJXZ @ 0x18004C508 (-EnsureDrawingContextFrame@CContentBounder@@AEAAJXZ.c)
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x18004C730 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008B068 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x18008C84C (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18008D6A8 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?Render@COverlayRenderTargetEngine@@UEAAJPEA_N@Z @ 0x18015ED70 (-Render@COverlayRenderTargetEngine@@UEAAJPEA_N@Z.c)
 *     ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJXZ @ 0x180160094 (-RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x180160760 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x180177458 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@II@Z @ 0x180211608 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@II@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Push@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180036B2C (-Push@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rect_ea_180036B2C.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180038C28 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x18003E2E0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x180046F68 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18004B9CC (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?CreateProcessAttribution@CProcessAttributionManager@@AEAAJKPEBUProcessAttributionRecord@1@_NPEAPEAVCProcessAttribution@@@Z @ 0x18006D32C (-CreateProcessAttribution@CProcessAttributionManager@@AEAAJKPEBUProcessAttributionRecord@1@_NPEA.c)
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x18007AF60 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ?CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x18007FE1C (-CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x18008A4FC (-ResetTokenThread@CSurfaceManager@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x1800EC020 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800EC088 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0ppffffubr6 @ 0x1801677F8 (McTemplateU0ppffffubr6.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
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
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // r14d
  int v15; // eax
  unsigned int v16; // ecx
  bool v17; // si
  int v18; // eax
  unsigned int v19; // ecx
  __int64 v20; // rbx
  bool v21; // r15
  int v22; // r12d
  char v23; // r13
  CD3DModuleLoaderInternal *v24; // rcx
  CDXGIEnumeration *v25; // rsi
  CDXGIEnumeration *v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // rdx
  bool v29; // al
  __int64 v30; // rcx
  CProcessAttributionManager *v31; // rbx
  _QWORD *ThreadLocalStoragePointer; // rax
  __int64 v33; // rbx
  int v34; // eax
  unsigned int v35; // ecx
  unsigned int v36; // eax
  unsigned int v37; // edx
  int v38; // ebx
  __int64 v40; // rax
  int v41; // eax
  unsigned int v42; // ecx
  int ProcessAttribution; // eax
  unsigned int v44; // ecx
  int v45; // edx
  int v46; // ecx
  __int128 v47; // [rsp+50h] [rbp-30h] BYREF
  __int128 v48; // [rsp+60h] [rbp-20h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+38h]

  *(_QWORD *)&v47 = 0LL;
  BYTE8(v47) = 1;
  v12 = (*(__int64 (__fastcall **)(struct IRenderTarget *, char *, _QWORD))(*(_QWORD *)a2 + 120LL))(
          a2,
          (char *)this + 392,
          0LL);
  v14 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x13Du);
  }
  else
  {
    *((float *)this + 110) = (*(float (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a2 + 152LL))(a2);
    v15 = CDrawingContext::PushRenderTarget(this, a2);
    v17 = 0;
    v14 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x149u);
    }
    else
    {
      *((_QWORD *)this + 47) = a8;
      if ( !*((_QWORD *)this + 45) && !*((_QWORD *)this + 787) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x80u) != 0 )
      {
        if ( a5 )
          v17 = CMILMatrix::IsIdentity<0>(a5) == 0;
        (*(void (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 44) + 48LL))(*((_QWORD *)this + 44), &v48);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80u) != 0 )
          McTemplateU0ppffffubr6(
            v46,
            v45,
            (_DWORD)this,
            *((_QWORD *)this + 44),
            v48,
            SBYTE4(v48),
            SBYTE8(v48),
            SBYTE12(v48),
            v17 ? 0x44 : 0,
            a5);
      }
      if ( a3 )
      {
        *(_OWORD *)((char *)this + 424) = *a3;
      }
      else
      {
        *((_QWORD *)this + 53) = 0LL;
        *((_QWORD *)this + 54) = 0LL;
        if ( g_fUseDebugClearColorIfNoClear )
        {
          *((_DWORD *)this + 106) = 1065353216;
          *((_DWORD *)this + 109) = 1065353216;
        }
      }
      *(_QWORD *)((char *)this + 260) = 0LL;
      *((_DWORD *)this + 62) = 1;
      *((_BYTE *)this + 268) = a4 ^ 1;
      *(_QWORD *)((char *)this + 252) = 1LL;
      v18 = CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Push(
              (unsigned int *)this + 870,
              &v47);
      v14 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x18Cu);
      }
      else
      {
        *((_QWORD *)this + 465) = a6;
        if ( a6 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)a6 + 8LL))(a6);
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
        v20 = *((_QWORD *)this + 49);
        v21 = 0;
        *(_QWORD *)&v48 = v20;
        v22 = 0;
        v23 = 0;
        EnterCriticalSection(&g_DisplayManager);
        v25 = qword_180308260;
        if ( !qword_180308260 )
          goto LABEL_51;
        if ( !(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)qword_180308260 + 2) + 104LL))(*((_QWORD *)qword_180308260 + 2))
          || (unsigned int)DrvQueryAdapterPopulationUniqueness() != *((_DWORD *)v25 + 14)
          || qword_180308260 != v25 )
        {
          ReleaseInterface<CD3DSurface>(&qword_180308260);
          v23 = 1;
        }
        if ( !qword_180308260 )
        {
LABEL_51:
          LODWORD(v47) = CD3DModuleLoaderInternal::CreateD3DObjects(v24, &qword_180308260);
          TranslateDXGIorD3DErrorInContext(v47, 4, &v47);
          v22 = v47;
          if ( (int)v47 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v44, &dword_18029B8C0, 1u, v47, 0x128u);
        }
        if ( v23 && qword_180308270 )
          CSurfaceManager::ResetTokenThread(qword_180308270);
        v26 = qword_180308260;
        if ( qword_180308260 )
          (**(void (__fastcall ***)(CDXGIEnumeration *))qword_180308260)(qword_180308260);
        LeaveCriticalSection(&g_DisplayManager);
        if ( v22 >= 0 )
        {
          v21 = 0;
          v27 = 0LL;
          if ( *((_DWORD *)v26 + 22) )
          {
            while ( 1 )
            {
              v28 = *(_QWORD *)(*((_QWORD *)v26 + 8) + 8 * v27);
              if ( __PAIR64__(DWORD1(v48), v20) == *(_QWORD *)(v28 + 336) )
                break;
              v27 = (unsigned int)(v27 + 1);
              if ( (unsigned int)v27 >= *((_DWORD *)v26 + 22) )
                goto LABEL_26;
            }
            if ( *(_DWORD *)(v28 + 296) == 5140 )
              v21 = *(_DWORD *)(v28 + 300) == 140;
          }
LABEL_26:
          (*(void (__fastcall **)(CDXGIEnumeration *))(*(_QWORD *)v26 + 8LL))(v26);
        }
        *((_BYTE *)this + 6353) = v21;
        v29 = 0;
        if ( !*((_QWORD *)this + 45) )
        {
          v40 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 48) + 160LL))(*((_QWORD *)this + 48));
          if ( *(int *)(v40 + 740) >= 37632 && !*(_BYTE *)(v40 + 628) )
            v29 = 1;
        }
        v30 = (unsigned int)tls_index;
        v31 = qword_180307EB0;
        *((_BYTE *)this + 6351) = v29;
        ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
        *((_QWORD *)this + 439) = 0LL;
        if ( dword_18030BC90 > *(_DWORD *)(ThreadLocalStoragePointer[v30] + 4LL) )
        {
          Init_thread_header(&dword_18030BC90);
          if ( dword_18030BC90 == -1 )
          {
            ProcessAttribution = CProcessAttributionManager::CreateProcessAttribution(
                                   v31,
                                   0xFFFFFFFF,
                                   (const struct CProcessAttributionManager::ProcessAttributionRecord *)&unk_180308590,
                                   0,
                                   (struct CProcessAttribution **)&v48);
            if ( ProcessAttribution < 0 )
              ModuleFailFastForHRESULT((unsigned int)ProcessAttribution, retaddr);
            qword_180308560 = v48;
            Init_thread_footer(&dword_18030BC90);
          }
        }
        v33 = qword_180308560;
        LODWORD(v48) = 10;
        *((_QWORD *)&v48 + 1) = 0LL;
        v34 = CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Push(
                (unsigned int *)this + 112,
                &v48);
        if ( v34 < 0 )
          ModuleFailFastForHRESULT((unsigned int)v34, retaddr);
        *(_QWORD *)&v47 = v33;
        v36 = *((_DWORD *)this + 234);
        v37 = v36 + 1;
        v38 = v36 + 1 < v36 ? 0x80070216 : 0;
        if ( v36 + 1 < v36 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v38, 0xB5u);
        }
        else if ( v37 > *((_DWORD *)this + 233) )
        {
          v41 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 912, 8, 1, &v47);
          v38 = v41;
          if ( v41 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, v41, 0xC0u);
        }
        else
        {
          *(_QWORD *)(*((_QWORD *)this + 114) + 8LL * v36) = v47;
          *((_DWORD *)this + 234) = v37;
        }
        if ( v38 < 0 )
          ModuleFailFastForHRESULT((unsigned int)v38, retaddr);
      }
    }
  }
  if ( v14 < 0 )
    CDrawingContext::EndFrame(this);
  return (unsigned int)v14;
}
