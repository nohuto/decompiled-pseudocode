/*
 * XREFs of ?ProcessCaptureBits@CDesktopRenderTarget@@QEAAJPEAVCChannelContext@@PEBUMILCMD_DESKTOPRENDERTARGET_CAPTUREBITS@@@Z @ 0x1800714EC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180027370 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18004F094 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ??0CaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetResource@@PEAVCVisualTree@@MAEBUWICRect@@W4DXGI_FORMAT@@_K@Z @ 0x18007172C (--0CaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetResource.c)
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x180071A24 (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     ?AddCaptureBitsResponse@CLegacySurfaceManager@@QEAAJPEAVCaptureBitsResponse@@@Z @ 0x180071B24 (-AddCaptureBitsResponse@CLegacySurfaceManager@@QEAAJPEAVCaptureBitsResponse@@@Z.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N1@Z @ 0x18008F748 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N1@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D0ED0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CDesktopRenderTarget::ProcessCaptureBits(
        CDesktopRenderTarget *this,
        struct CChannelContext *a2,
        const struct MILCMD_DESKTOPRENDERTARGET_CAPTUREBITS *a3)
{
  volatile signed __int32 *v3; // rdi
  struct IRenderTargetResource *v5; // r15
  __int64 v6; // rdx
  struct CaptureBitsResponse *v7; // rbp
  float v10; // xmm6_4
  CaptureBitsResponse *v11; // rcx
  unsigned int v12; // ecx
  int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // ebx
  CVisual *Resource; // rax
  unsigned int v18; // ecx
  bool v19; // r8
  float v20; // xmm2_4
  int VisualTree; // eax
  unsigned int v22; // ecx
  WICRect v23; // [rsp+50h] [rbp-48h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]
  struct CVisualTree *v25; // [rsp+A8h] [rbp+10h] BYREF

  v3 = 0LL;
  v23.X = *((_DWORD *)a3 + 4);
  v5 = 0LL;
  v6 = *((unsigned int *)a3 + 11);
  v7 = 0LL;
  v23.Y = *((_DWORD *)a3 + 5);
  v23.Width = *((_DWORD *)a3 + 6);
  v10 = FLOAT_1_0;
  v23.Height = *((_DWORD *)a3 + 7);
  v25 = 0LL;
  if ( !(_DWORD)v6 )
  {
    v3 = (volatile signed __int32 *)*((_QWORD *)this + 15);
    v25 = (struct CVisualTree *)v3;
    if ( v3 )
    {
      _InterlockedIncrement(v3 + 2);
      v3 = (volatile signed __int32 *)v25;
    }
    v5 = (CDesktopRenderTarget *)((char *)this + 168);
LABEL_5:
    v11 = (CaptureBitsResponse *)WPF::ProcessHeapImpl::AllocClear(0x90uLL);
    if ( !v11 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    v7 = CaptureBitsResponse::CaptureBitsResponse(
           v11,
           *(struct CSurfaceManager **)(*((_QWORD *)this + 2) + 72LL),
           a2,
           v5,
           (struct CVisualTree *)v3,
           v10,
           &v23,
           (enum DXGI_FORMAT)*((_DWORD *)a3 + 8),
           *(_QWORD *)((char *)a3 + 36));
    if ( !v7 )
    {
      v15 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024882, 0x899u);
      goto LABEL_11;
    }
    v13 = CLegacySurfaceManager::AddCaptureBitsResponse(
            (CLegacySurfaceManager *)(*(_QWORD *)(*((_QWORD *)this + 2) + 72LL) + 96LL),
            v7);
    v15 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x89Fu);
    goto LABEL_9;
  }
  Resource = (CVisual *)CResourceTable::GetResource(*((_QWORD *)a2 + 3), v6, 157LL);
  if ( Resource )
  {
    v20 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)*((double *)a3 + 1)) & _xmm);
    if ( v20 >= 0.0000011920929 )
    {
      VisualTree = CVisual::GetVisualTree(Resource, &v25, v19, 0);
      v15 = VisualTree;
      if ( VisualTree < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, VisualTree, 0x887u);
        v3 = (volatile signed __int32 *)v25;
        goto LABEL_11;
      }
      v3 = (volatile signed __int32 *)v25;
      v10 = 1.0 / *((double *)a3 + 1);
      goto LABEL_5;
    }
  }
  v15 = -2003303421;
  MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2003303421, 0x883u);
LABEL_9:
  if ( v7 )
    CResponseItem::ReleaseResponseRef(v7);
LABEL_11:
  if ( v3 )
    CMILRefCountBase::Release((CMILRefCountBase *)v3);
  return v15;
}
