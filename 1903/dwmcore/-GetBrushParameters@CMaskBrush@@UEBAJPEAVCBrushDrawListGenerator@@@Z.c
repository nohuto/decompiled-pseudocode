/*
 * XREFs of ?GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180075AF0
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000FF04 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x180075FA8 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x180075FE8 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x180078AB8 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ?IsValidMaskResource@CMaskBrush@@CA_NPEBVCResource@@@Z @ 0x18007E844 (-IsValidMaskResource@CMaskBrush@@CA_NPEBVCResource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0d @ 0x18015EC70 (McTemplateU0d.c)
 */

__int64 __fastcall CMaskBrush::GetBrushParameters(CMaskBrush *this, struct CBrushDrawListGenerator *a2)
{
  __int64 v2; // rax
  int v4; // xmm1_4
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // ebx
  __int128 v10; // xmm0
  __int64 v11; // rcx
  int v12; // esi
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // xmm1_4
  int v17; // eax
  unsigned int v18; // ecx
  __int64 v19; // rcx
  unsigned int v21; // ecx
  __int64 (__fastcall ***v22[2])(_QWORD, __int64); // [rsp+30h] [rbp-39h] BYREF
  __int64 v23; // [rsp+40h] [rbp-29h] BYREF
  int v24; // [rsp+48h] [rbp-21h]
  int v25; // [rsp+4Ch] [rbp-1Dh]
  int v26; // [rsp+50h] [rbp-19h]
  __int128 v27; // [rsp+54h] [rbp-15h]
  __int64 (__fastcall ***v28)(_QWORD, __int64); // [rsp+68h] [rbp-1h]
  __int64 v29; // [rsp+70h] [rbp+7h]
  __int64 v30; // [rsp+78h] [rbp+Fh]
  __int64 v31; // [rsp+80h] [rbp+17h]
  int v32; // [rsp+88h] [rbp+1Fh]
  char v33; // [rsp+8Ch] [rbp+23h]

  v2 = *(_QWORD *)a2;
  v4 = *((_DWORD *)a2 + 3);
  v6 = *((_QWORD *)this + 11);
  v24 = *((_DWORD *)a2 + 2);
  v23 = v2;
  v27 = _xmm;
  v26 = 0;
  v25 = v4;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0;
  v33 = 0;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 368LL))(v6, &v23);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x1BEu, 0LL);
    goto LABEL_18;
  }
  v10 = v27;
  *((_BYTE *)a2 + 76) = v33;
  v22[0] = v28;
  *(_OWORD *)((char *)a2 + 20) = v10;
  v28 = 0LL;
  CBrushDrawListGenerator::AttachInput(a2, 0LL, v22);
  v12 = v26;
  if ( v22[0] )
    std::default_delete<CShape>::operator()(v11, v22[0]);
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v23);
  v13 = *((_QWORD *)this + 10);
  if ( !v13 )
    goto LABEL_10;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 48LL))(v13, 108LL)
    && !CMaskBrush::IsValidMaskResource(*(const struct CResource **)(*((_QWORD *)this + 10) + 80LL)) )
  {
    v9 = -2147024846;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
      McTemplateU0d(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_MASKBRUSH_DRAW_ERROR_INVALID_INPUT,
        2147942450LL);
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, -2147024846, 0x1D7u, 0LL);
    goto LABEL_19;
  }
  v14 = *(_QWORD *)a2;
  v15 = *((_QWORD *)this + 10);
  v16 = *((_DWORD *)a2 + 3);
  v24 = *((_DWORD *)a2 + 2);
  v23 = v14;
  v27 = _xmm;
  v26 = 0;
  v25 = v16;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0;
  v33 = 0;
  v17 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 368LL))(v15, &v23);
  v9 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x1DFu, 0LL);
LABEL_18:
    CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v23);
LABEL_19:
    CBrushDrawListGenerator::Reset(a2);
    return v9;
  }
  v22[0] = v28;
  v28 = 0LL;
  CBrushDrawListGenerator::AttachInput(a2, 1LL, v22);
  v12 |= v26;
  if ( v22[0] )
    std::default_delete<CShape>::operator()(v19, v22[0]);
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v23);
LABEL_10:
  *((_DWORD *)a2 + 4) = v12;
  return 0;
}
