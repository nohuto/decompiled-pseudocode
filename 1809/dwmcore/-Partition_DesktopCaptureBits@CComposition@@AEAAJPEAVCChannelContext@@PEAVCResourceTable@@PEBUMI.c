/*
 * XREFs of ?Partition_DesktopCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_DESKTOPCAPTUREBITS@@@Z @ 0x18014B844
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x180071A24 (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??2CTextBrush@@SAPEAX_K@Z @ 0x18014AD70 (--2CTextBrush@@SAPEAX_K@Z.c)
 *     ?FindDesktopRenderTarget@CRenderTargetManager@@QEAAJPEAUHMONITOR__@@PEAPEAVIRenderTargetDesktop@@@Z @ 0x1801527E4 (-FindDesktopRenderTarget@CRenderTargetManager@@QEAAJPEAUHMONITOR__@@PEAPEAVIRenderTargetDesktop@.c)
 *     ??0VisualCaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetResource@@PEAVCVisualTree@@AEBUWICRect@@W4DXGI_FORMAT@@PEAX6@Z @ 0x1801612F0 (--0VisualCaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetRe.c)
 */

__int64 __fastcall CComposition::Partition_DesktopCaptureBits(
        CRenderTargetManager **this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_PARTITION_DESKTOPCAPTUREBITS *a4)
{
  int DesktopRenderTarget; // eax
  __int64 v8; // rcx
  struct IRenderTargetResource *v9; // rdi
  CResponseItem *v10; // rax
  __int64 v11; // rcx
  VisualCaptureBitsResponse *v12; // rsi
  struct CVisualTree *v13; // rax
  struct WICRect v15; // [rsp+50h] [rbp-28h] BYREF
  struct IRenderTargetResource *v16; // [rsp+90h] [rbp+18h] BYREF

  v16 = 0LL;
  DesktopRenderTarget = CRenderTargetManager::FindDesktopRenderTarget(this[8], *(HMONITOR *)((char *)a4 + 4), &v16);
  v9 = v16;
  if ( DesktopRenderTarget < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, DesktopRenderTarget, 0x536u);
  }
  else
  {
    v15 = *(struct WICRect *)((char *)a4 + 12);
    v10 = (CResponseItem *)CTextBrush::operator new();
    v12 = v10;
    if ( v10 )
    {
      v13 = (struct CVisualTree *)(*(__int64 (__fastcall **)(struct IRenderTargetResource *))(*(_QWORD *)v9 + 288LL))(v9);
      v10 = VisualCaptureBitsResponse::VisualCaptureBitsResponse(
              v12,
              this[9],
              a2,
              v9,
              v13,
              &v15,
              (enum DXGI_FORMAT)*((_DWORD *)a4 + 7),
              *((void **)a4 + 4),
              *((void **)a4 + 5));
    }
    if ( v10 )
    {
      CResponseItem::ReleaseResponseRef(v10);
      goto LABEL_9;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024882, 0x549u);
  }
  SetEvent(*((HANDLE *)a4 + 4));
  CloseHandle(*((HANDLE *)a4 + 4));
  CloseHandle(*((HANDLE *)a4 + 5));
LABEL_9:
  if ( v9 )
    (*(void (__fastcall **)(struct IRenderTargetResource *))(*(_QWORD *)v9 + 16LL))(v9);
  return 0LL;
}
