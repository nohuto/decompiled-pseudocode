/*
 * XREFs of ?Partition_DesktopCaptureBits@CGlobalComposition@@UEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_DESKTOPCAPTUREBITS@@@Z @ 0x1801A38E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?FindDesktopRenderTarget@CRenderTargetManager@@QEAAJPEAUHMONITOR__@@PEAPEAVIRenderTargetDesktop@@@Z @ 0x180188D68 (-FindDesktopRenderTarget@CRenderTargetManager@@QEAAJPEAUHMONITOR__@@PEAPEAVIRenderTargetDesktop@.c)
 *     ??2VisualCaptureBitsResponse@@SAPEAX_K@Z @ 0x18019E490 (--2VisualCaptureBitsResponse@@SAPEAX_K@Z.c)
 *     ??0VisualCaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetResource@@PEAVCVisualTree@@AEBUWICRect@@W4DXGI_FORMAT@@PEAX6@Z @ 0x1801AB808 (--0VisualCaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTa.c)
 */

__int64 __fastcall CGlobalComposition::Partition_DesktopCaptureBits(
        CRenderTargetManager **this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_PARTITION_DESKTOPCAPTUREBITS *a4)
{
  signed int DesktopRenderTarget; // eax
  __int64 v8; // rcx
  struct IRenderTargetResource *v9; // rsi
  VisualCaptureBitsResponse *v10; // rbp
  struct CGlobalSurfaceManager *v11; // rbx
  struct CVisualTree *v12; // rax
  VisualCaptureBitsResponse *v13; // rcx
  struct WICRect v15; // [rsp+50h] [rbp-28h] BYREF
  struct IRenderTargetResource *v16; // [rsp+80h] [rbp+8h] BYREF

  v16 = 0LL;
  DesktopRenderTarget = CRenderTargetManager::FindDesktopRenderTarget(this[8], *((HMONITOR *)a4 + 1), &v16);
  v9 = v16;
  if ( DesktopRenderTarget < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, DesktopRenderTarget, 0xC0u, 0LL);
  }
  else
  {
    v15 = (struct WICRect)*((_OWORD *)a4 + 1);
    v10 = (VisualCaptureBitsResponse *)VisualCaptureBitsResponse::operator new();
    if ( v10 )
    {
      v11 = this[9];
      v12 = (struct CVisualTree *)(*(__int64 (__fastcall **)(struct IRenderTargetResource *))(*(_QWORD *)v9 + 288LL))(v9);
      v13 = VisualCaptureBitsResponse::VisualCaptureBitsResponse(
              v10,
              v11,
              a2,
              v9,
              v12,
              &v15,
              (enum DXGI_FORMAT)*((_DWORD *)a4 + 8),
              *((void **)a4 + 5),
              *((void **)a4 + 6));
    }
    else
    {
      v13 = 0LL;
    }
    if ( v13 )
    {
      (*(void (__fastcall **)(VisualCaptureBitsResponse *))(*(_QWORD *)v13 + 32LL))(v13);
      goto LABEL_10;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, 0x8007000E, 0xD3u, 0LL);
  }
  SetEvent(*((HANDLE *)a4 + 5));
  CloseHandle(*((HANDLE *)a4 + 5));
  CloseHandle(*((HANDLE *)a4 + 6));
LABEL_10:
  if ( v9 )
    (*(void (__fastcall **)(struct IRenderTargetResource *))(*(_QWORD *)v9 + 16LL))(v9);
  return 0LL;
}
