/*
 * XREFs of ?Channel_VisualCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_VISUALCAPTUREBITS@@@Z @ 0x18014B1A8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180027370 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x180071A24 (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N1@Z @ 0x18008F748 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N1@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D0ED0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??2CTextBrush@@SAPEAX_K@Z @ 0x18014AD70 (--2CTextBrush@@SAPEAX_K@Z.c)
 *     ??0VisualCaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetResource@@PEAVCVisualTree@@AEBUWICRect@@W4DXGI_FORMAT@@PEAX6@Z @ 0x1801612F0 (--0VisualCaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetRe.c)
 */

__int64 __fastcall CComposition::Channel_VisualCaptureBits(
        struct CSurfaceManager **this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_CHANNEL_VISUALCAPTUREBITS *a4)
{
  unsigned int v5; // edx
  struct CComposition **Resource; // rax
  __int64 v9; // r8
  int VisualTree; // eax
  __int64 v11; // rcx
  struct CVisualTree *v12; // rdi
  VisualCaptureBitsResponse *v13; // rax
  __int64 v14; // rcx
  struct WICRect v16; // [rsp+50h] [rbp-18h] BYREF
  CMILRefCountBase *v17; // [rsp+88h] [rbp+20h] BYREF

  v17 = 0LL;
  v5 = *((_DWORD *)a4 + 10);
  v16 = *(struct WICRect *)((char *)a4 + 4);
  Resource = (struct CComposition **)CResourceTable::GetResource((__int64)a3, v5, 0x9Du);
  VisualTree = CVisual::GetVisualTree(Resource, &v17, v9, 0);
  v12 = v17;
  if ( VisualTree < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, VisualTree, 0x896u);
  }
  else
  {
    v13 = (VisualCaptureBitsResponse *)CTextBrush::operator new();
    if ( v13 )
      v13 = VisualCaptureBitsResponse::VisualCaptureBitsResponse(
              v13,
              this[9],
              a2,
              0LL,
              v12,
              &v16,
              (enum DXGI_FORMAT)*((_DWORD *)a4 + 5),
              *((void **)a4 + 3),
              *((void **)a4 + 4));
    if ( v13 )
    {
      CResponseItem::ReleaseResponseRef(v13);
      goto LABEL_9;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024882, 0x8A4u);
  }
  SetEvent(*((HANDLE *)a4 + 3));
  CloseHandle(*((HANDLE *)a4 + 3));
  CloseHandle(*((HANDLE *)a4 + 4));
LABEL_9:
  if ( v12 )
    CMILRefCountBase::Release(v12);
  return 0LL;
}
