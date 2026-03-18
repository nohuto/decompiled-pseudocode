/*
 * XREFs of ?SetDesktopVisualTree@CVirtualMonitorCaptureRenderTarget@@UEAAJPEAVCResource@@@Z @ 0x1801A5A10
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?Create@?$CWeakReference@VCInteractionTracker@@@@SAJPEAVCInteractionTracker@@PEAPEAV1@@Z @ 0x1801A51D8 (-Create@-$CWeakReference@VCInteractionTracker@@@@SAJPEAVCInteractionTracker@@PEAPEAV1@@Z.c)
 *     ?DetachDesktopVisualTree@CVirtualMonitorCaptureRenderTarget@@QEAAXXZ @ 0x1801A54B4 (-DetachDesktopVisualTree@CVirtualMonitorCaptureRenderTarget@@QEAAXXZ.c)
 *     ?AddVirtualMonitorTarget@CDesktopRenderTarget@@QEAAJPEAVCVirtualMonitorCaptureRenderTarget@@@Z @ 0x1801A61C4 (-AddVirtualMonitorTarget@CDesktopRenderTarget@@QEAAJPEAVCVirtualMonitorCaptureRenderTarget@@@Z.c)
 *     ?SetRootVisual@CCaptureRenderTarget@@QEAAJPEAVCVisual@@@Z @ 0x18024E66C (-SetRootVisual@CCaptureRenderTarget@@QEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CVirtualMonitorCaptureRenderTarget::SetDesktopVisualTree(
        struct CWeakResourceReference **this,
        struct CResource *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  signed int v6; // eax
  __int64 v7; // rcx
  unsigned int v9; // [rsp+20h] [rbp-18h]

  v4 = 0;
  CVirtualMonitorCaptureRenderTarget::DetachDesktopVisualTree((CVirtualMonitorCaptureRenderTarget *)this);
  if ( a2 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 48LL) )
    {
      v6 = CCaptureRenderTarget::SetRootVisual(
             (CCaptureRenderTarget *)this,
             *(struct CVisual **)(*((_QWORD *)a2 + 15) + 24LL));
      v4 = v6;
      if ( v6 < 0 )
      {
        v9 = 68;
      }
      else
      {
        v6 = CDesktopRenderTarget::AddVirtualMonitorTarget(a2, (struct CVirtualMonitorCaptureRenderTarget *)this);
        v4 = v6;
        if ( v6 < 0 )
        {
          v9 = 70;
        }
        else
        {
          v6 = CWeakReference<CInteractionTracker>::Create(a2, this + 81);
          v4 = v6;
          if ( v6 >= 0 )
            return v4;
          v9 = 72;
        }
      }
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, v9, 0LL);
      return v4;
    }
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, 0x80070057, 0x3Du, 0LL);
  }
  return v4;
}
