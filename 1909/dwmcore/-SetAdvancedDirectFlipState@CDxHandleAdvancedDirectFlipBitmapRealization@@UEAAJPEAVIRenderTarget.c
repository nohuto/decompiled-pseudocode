/*
 * XREFs of ?SetAdvancedDirectFlipState@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJPEAVIRenderTargetBitmap@@PEAVIRenderTargetDisplay@@AEBV?$shared_ptr@VCRegion@@@std@@@Z @ 0x180261710
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReplaceInterface@VIRenderTargetDisplay@@V1@@@YAXAEAPEAVIRenderTargetDisplay@@PEAV0@@Z @ 0x18002AE94 (--$ReplaceInterface@VIRenderTargetDisplay@@V1@@@YAXAEAPEAVIRenderTargetDisplay@@PEAV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ??4?$shared_ptr@UManipulationThreadTelemetryData@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801925E8 (--4-$shared_ptr@UManipulationThreadTelemetryData@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?SaveOverdrawContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x180261378 (-SaveOverdrawContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::SetAdvancedDirectFlipState(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v6; // rcx
  __int64 v9; // rdx
  signed int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // edi

  v6 = *(_QWORD *)(a1 + 8);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  *(_QWORD *)(a1 + 8) = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  ReplaceInterface<IRenderTargetDisplay,IRenderTargetDisplay>((__int64 *)(a1 + 16), a3);
  std::shared_ptr<ManipulationThreadTelemetryData>::operator=((_QWORD *)(a1 + 112), a4);
  v10 = CDxHandleAdvancedDirectFlipBitmapRealization::SaveOverdrawContent(
          (CDxHandleAdvancedDirectFlipBitmapRealization *)(a1 - 432),
          v9);
  v12 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x95u, 0LL);
  else
    *(_BYTE *)(a1 + 128) = 1;
  return v12;
}
