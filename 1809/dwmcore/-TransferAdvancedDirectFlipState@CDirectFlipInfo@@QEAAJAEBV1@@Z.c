/*
 * XREFs of ?TransferAdvancedDirectFlipState@CDirectFlipInfo@@QEAAJAEBV1@@Z @ 0x180179554
 * Callers:
 *     ?ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z @ 0x180030B48 (-ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$shared_ptr@UManipulationThreadTelemetryData@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801788C0 (--4-$shared_ptr@UManipulationThreadTelemetryData@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?reset@?$shared_ptr@VCRegion@@@std@@QEAAXXZ @ 0x1801796E4 (-reset@-$shared_ptr@VCRegion@@@std@@QEAAXXZ.c)
 *     ?SetAdvancedDirectFlipState@CCompositionSurfaceInfo@@QEAAJPEAVIRenderTargetDisplay@@AEBV?$shared_ptr@VCRegion@@@std@@@Z @ 0x1801BD208 (-SetAdvancedDirectFlipState@CCompositionSurfaceInfo@@QEAAJPEAVIRenderTargetDisplay@@AEBV-$shared.c)
 */

__int64 __fastcall CDirectFlipInfo::TransferAdvancedDirectFlipState(
        CDirectFlipInfo *this,
        const struct CDirectFlipInfo *a2)
{
  int v2; // eax
  char *v3; // rsi
  unsigned int v4; // ebx
  _QWORD *v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_DWORD *)a2 + 17);
  v3 = (char *)this + 48;
  v4 = 0;
  *((_DWORD *)this + 17) = v2;
  v12 = 0LL;
  v6 = (_QWORD *)((char *)this + 48);
  if ( v2 < 2 )
  {
    std::shared_ptr<CRegion>::reset(v6);
  }
  else
  {
    std::shared_ptr<ManipulationThreadTelemetryData>::operator=(v6, (_QWORD *)a2 + 6);
    v7 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 2))(
           *((_QWORD *)this + 2),
           &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
           &v12);
    v4 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x1DBu);
    }
    else
    {
      v9 = CCompositionSurfaceInfo::SetAdvancedDirectFlipState(*((_QWORD *)this + 4), v12, v3);
      v4 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x1DEu);
    }
  }
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return v4;
}
