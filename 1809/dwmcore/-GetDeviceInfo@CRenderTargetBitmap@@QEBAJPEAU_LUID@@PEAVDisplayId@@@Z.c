/*
 * XREFs of ?GetDeviceInfo@CRenderTargetBitmap@@QEBAJPEAU_LUID@@PEAVDisplayId@@@Z @ 0x18008C810
 * Callers:
 *     ?IsSameLuidAndDisplayId@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NU_LUID@@VDisplayId@@@Z @ 0x18008C44C (-IsSameLuidAndDisplayId@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NU_LUID@@VDisplayId@@@Z.c)
 *     ?IsValid@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NXZ @ 0x18008C6F4 (-IsValid@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NXZ.c)
 *     ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x18008FCAC (-Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ @ 0x18018D3D0 (-IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetBitmap::GetDeviceInfo(
        CRenderTargetBitmap *this,
        struct _LUID *a2,
        struct DisplayId *a3)
{
  __int64 v3; // rcx
  unsigned int v4; // ebx
  int v5; // eax
  unsigned int v6; // ecx

  v3 = *((_QWORD *)this + 19);
  v4 = -2003292404;
  if ( v3 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, struct _LUID *, struct DisplayId *))(*(_QWORD *)v3 + 120LL))(v3, a2, a3);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x169u);
  }
  return v4;
}
