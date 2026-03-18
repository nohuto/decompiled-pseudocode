/*
 * XREFs of ?Channel_VisualCaptureBits@CGlobalComposition@@UEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_VISUALCAPTUREBITS@@@Z @ 0x1801A3770
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x18004E7B0 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009D7D0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N1@Z @ 0x1800B4F98 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ??2VisualCaptureBitsResponse@@SAPEAX_K@Z @ 0x18019E490 (--2VisualCaptureBitsResponse@@SAPEAX_K@Z.c)
 *     ??0VisualCaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetResource@@PEAVCVisualTree@@AEBUWICRect@@W4DXGI_FORMAT@@PEAX6@Z @ 0x1801AB808 (--0VisualCaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTa.c)
 */

__int64 __fastcall CGlobalComposition::Channel_VisualCaptureBits(
        struct CGlobalSurfaceManager **this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_CHANNEL_VISUALCAPTUREBITS *a4)
{
  unsigned int v5; // edx
  struct CComposition **Resource; // rax
  __int64 v9; // r8
  signed int VisualTree; // eax
  __int64 v11; // rcx
  CDirtyRegion *v12; // rdi
  VisualCaptureBitsResponse *v13; // rax
  VisualCaptureBitsResponse *v14; // rcx
  struct WICRect v16; // [rsp+50h] [rbp-18h] BYREF
  CDirtyRegion *v17; // [rsp+88h] [rbp+20h] BYREF

  v17 = 0LL;
  v5 = *((_DWORD *)a4 + 10);
  v16 = *(struct WICRect *)((char *)a4 + 4);
  Resource = (struct CComposition **)CResourceTable::GetResource((__int64)a3, v5, 0xBDu);
  VisualTree = CVisual::GetVisualTree(Resource, &v17, v9, 0);
  v12 = v17;
  if ( VisualTree < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, VisualTree, 0x108u, 0LL);
  }
  else
  {
    v13 = (VisualCaptureBitsResponse *)VisualCaptureBitsResponse::operator new();
    if ( v13 )
      v14 = VisualCaptureBitsResponse::VisualCaptureBitsResponse(
              v13,
              this[9],
              a2,
              0LL,
              v12,
              &v16,
              (enum DXGI_FORMAT)*((_DWORD *)a4 + 5),
              *((void **)a4 + 3),
              *((void **)a4 + 4));
    else
      v14 = 0LL;
    if ( v14 )
    {
      (*(void (__fastcall **)(VisualCaptureBitsResponse *))(*(_QWORD *)v14 + 32LL))(v14);
      goto LABEL_10;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, 0x8007000E, 0x116u, 0LL);
  }
  SetEvent(*((HANDLE *)a4 + 3));
  CloseHandle(*((HANDLE *)a4 + 3));
  CloseHandle(*((HANDLE *)a4 + 4));
LABEL_10:
  if ( v12 )
    CDirtyRegion::Release(v12);
  return 0LL;
}
