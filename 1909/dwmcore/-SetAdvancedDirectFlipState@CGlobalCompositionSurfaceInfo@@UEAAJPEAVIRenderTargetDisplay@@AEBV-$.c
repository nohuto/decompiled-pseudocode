/*
 * XREFs of ?SetAdvancedDirectFlipState@CGlobalCompositionSurfaceInfo@@UEAAJPEAVIRenderTargetDisplay@@AEBV?$shared_ptr@VCRegion@@@std@@@Z @ 0x18025C350
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetRenderingRealizationNoRef@CGlobalCompositionSurfaceInfo@@UEAAPEAVCBitmapRealization@@XZ @ 0x1800BD910 (-GetRenderingRealizationNoRef@CGlobalCompositionSurfaceInfo@@UEAAPEAVCBitmapRealization@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?EnsureRestoreBuffer@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x18025B4C4 (-EnsureRestoreBuffer@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::SetAdvancedDirectFlipState(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  struct CBitmapRealization *v8; // r14
  char v9; // di
  signed int v10; // eax
  __int64 v11; // rcx
  signed int v12; // eax
  __int64 v13; // rcx
  signed int v14; // eax
  __int64 v15; // rcx
  _QWORD v17[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v18; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0;
  RenderingRealizationNoRef = CGlobalCompositionSurfaceInfo::GetRenderingRealizationNoRef((CGlobalCompositionSurfaceInfo *)a1);
  v18 = 0LL;
  v17[0] = 0LL;
  v8 = RenderingRealizationNoRef;
  if ( (**(int (__fastcall ***)(struct CBitmapRealization *, GUID *, __int64 *))RenderingRealizationNoRef)(
         RenderingRealizationNoRef,
         &GUID_302508ed_c63d_40f8_af07_af5881d2df95,
         &v18) >= 0 )
  {
    v9 = 0;
    if ( !a1[21] )
    {
      v10 = (*(__int64 (__fastcall **)(struct CBitmapRealization *, _QWORD *, _QWORD))(*(_QWORD *)v8 + 56LL))(
              v8,
              v17,
              0LL);
      v6 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x77u, 0LL);
        goto LABEL_10;
      }
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 400LL))(a2, v17[0]);
      if ( !v9 )
      {
        v12 = CGlobalCompositionSurfaceInfo::CBindInfo::EnsureRestoreBuffer((CGlobalCompositionSurfaceInfo::CBindInfo *)(a1 + 11));
        v6 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x81u, 0LL);
          goto LABEL_10;
        }
      }
    }
    v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v18 + 24LL))(
            v18,
            a1[21],
            a2 & -(__int64)(v9 != 0),
            a3);
    v6 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x87u, 0LL);
  }
LABEL_10:
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v17[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v17[0] + 16LL))(v17[0]);
  return v6;
}
