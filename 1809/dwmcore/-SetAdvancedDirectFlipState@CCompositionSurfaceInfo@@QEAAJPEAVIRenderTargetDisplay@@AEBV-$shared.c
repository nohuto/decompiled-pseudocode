/*
 * XREFs of ?SetAdvancedDirectFlipState@CCompositionSurfaceInfo@@QEAAJPEAVIRenderTargetDisplay@@AEBV?$shared_ptr@VCRegion@@@std@@@Z @ 0x1801BD208
 * Callers:
 *     ?TransferAdvancedDirectFlipState@CDirectFlipInfo@@QEAAJAEBV1@@Z @ 0x180179554 (-TransferAdvancedDirectFlipState@CDirectFlipInfo@@QEAAJAEBV1@@Z.c)
 * Callees:
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x1800A1078 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureRestoreBuffer@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ @ 0x1801BC43C (-EnsureRestoreBuffer@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::SetAdvancedDirectFlipState(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  struct CBitmapRealization *v8; // r15
  char v9; // di
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  _QWORD v17[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v18; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0;
  RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef((CCompositionSurfaceInfo *)a1);
  v18 = 0LL;
  v17[0] = 0LL;
  v8 = RenderingRealizationNoRef;
  if ( (**(int (__fastcall ***)(struct CBitmapRealization *, GUID *, __int64 *))RenderingRealizationNoRef)(
         RenderingRealizationNoRef,
         &GUID_302508ed_c63d_40f8_af07_af5881d2df95,
         &v18) >= 0 )
  {
    v9 = 0;
    if ( !a1[16] )
    {
      v10 = (*(__int64 (__fastcall **)(struct CBitmapRealization *, _QWORD *, _QWORD))(*(_QWORD *)v8 + 56LL))(
              v8,
              v17,
              0LL);
      v6 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xAAu);
        goto LABEL_10;
      }
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 392LL))(a2, v17[0]);
      if ( !v9 )
      {
        v12 = CCompositionSurfaceInfo::CBindInfo::EnsureRestoreBuffer((CCompositionSurfaceInfo::CBindInfo *)(a1 + 6));
        v6 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xB4u);
          goto LABEL_10;
        }
      }
    }
    v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v18 + 24LL))(
            v18,
            a1[16],
            a2 & -(__int64)(v9 != 0),
            a3);
    v6 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xBAu);
  }
LABEL_10:
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v17[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v17[0] + 16LL))(v17[0]);
  return v6;
}
